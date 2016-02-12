import sys
import imp
import datetime
import time
import os.path
import shutil
import traceback

from nupic.data.inference_shifter import InferenceShifter
from nupic.frameworks.opf.metrics import MetricSpec
from nupic.frameworks.opf.modelfactory import ModelFactory
from nupic.frameworks.opf.predictionmetricsmanager import MetricsManager

import comtypes
import comtypes.server.localserver
from comtypes.safearray import safearray_as_ndarray

from comtypes.client import GetModule
# generate wrapper code for the type library, this needs
# to be done only once (but also each time the IDL file changes)
GetModule("NupicBridge.tlb")

from comtypes.gen.NupicBridgeTypeLib import NupicBridge

def get_array(sa):
    """Get an array from a safe array type"""
    with safearray_as_ndarray:
        return sa[0]

def flatten_dict(dd, separator='_', prefix=''):
    return { prefix + separator + k if prefix else k : v
             for kk, vv in dd.items()
             for k, v in flatten_dict(vv, separator, str(kk)).items()
             } if isinstance(dd, dict) else { prefix : dd }

def merge_two_dicts(x, y):
    '''Given two dicts, merge them into a new dict as a shallow copy.'''
    z = x.copy()
    z.update(y)
    return z

class NupicBridgeClass:

    MODEL_PARAMS_IMPORT_NAME = "model_params"
    DATE_FORMAT = '%Y-%m-%dT%H:%M:%S.%fZ'
    PredictedField = None
    PredictedSteps = 0
    Metrics = None
    Model = None

    def create_model(self, modelParamsDir):
        modelParams = self._getModelParamsFromName(modelParamsDir)
        print "Creating model..."
        model = ModelFactory.create(modelParams)
        
        model.enableInference({"predictedField": self.PredictedField})

        metrics = ['aae', 'altMAPE', 'rmse']
        windows = [self.PredictedSteps * 100, self.PredictedSteps * 10, self.PredictedSteps]
        metric_specs = list()
        for w in windows:  
            for m in metrics:
                metric_specs.append(MetricSpec(field=self.PredictedField, metric='multiStep',
                            inferenceElement='multiStepBestPredictions',
                            params={'errorMetric': m, 'window': w, 'steps': self.PredictedSteps}))

        self.Metrics = MetricsManager(metric_specs, model.getFieldInfo(), model.getInferenceType())
        self.Model = model

    def load_model(self, modelSaveDir):
        try:
            print "Loading model from %s..." % modelSaveDir
            model = ModelFactory.loadFromCheckpoint(modelSaveDir)
        
            model.enableInference({"predictedField": self.PredictedField})

            metrics = ['aae', 'altMAPE', 'rmse']
            windows = [self.PredictedSteps * 100, self.PredictedSteps * 10, self.PredictedSteps]
            metric_specs = list()
            for w in windows:  
                for m in metrics:
                    metric_specs.append(MetricSpec(field=self.PredictedField, metric='multiStep',
                                inferenceElement='multiStepBestPredictions',
                                params={'errorMetric': m, 'window': w, 'steps': self.PredictedSteps}))

            self.Metrics = MetricsManager(metric_specs, model.getFieldInfo(), model.getInferenceType())
            self.Model = model
        except:
            print "ERR", "load_model", sys.exc_info()
            traceback.print_exc()
            raise

    def _getModelParamsFromName(self, modelParamsDir):
      print "Importing model params from %s" % modelParamsDir
      try:
        importedModelParams = imp.load_source(self.MODEL_PARAMS_IMPORT_NAME, os.path.join(modelParamsDir, self.MODEL_PARAMS_IMPORT_NAME + '.py')).MODEL_PARAMS
      except ImportError:
        raise Exception("No model params exist")
      return importedModelParams

    def step(self, timestampStr, names, values):
        try:
            row = dict()
            row['Timestamp'] = datetime.datetime.strptime(timestampStr, self.DATE_FORMAT)
            for i in range(0, len(names)):
                row[names[i]] = float(values[i])

            result = self.Model.run(row)
            result.metrics = self.Metrics.update(result)
            prediction = result.inferences["multiStepBestPredictions"][self.PredictedSteps]
        
            #print result.metrics
            #print result.inferences
            #print prediction

            m = flatten_dict(result.metrics)
            #print m
            i = flatten_dict(result.inferences)
            #print i
            ret = merge_two_dicts(m,i)        
            ret["prediction"] = prediction
    
            for n in ret.keys():
                print n, ret[n]

            return ret.keys(), ret.values()
        except:
            print "ERR", "step", sys.exc_info()
            traceback.print_exc()
            raise

    def save_model(self, modelSaveDir):
      print "Saving model to %s" % modelSaveDir
      try:
          saveDirWithTimestamp = "%s_%s" % (modelSaveDir, time.time())
          self.Model.save(saveDirWithTimestamp)
          if os.path.exists(modelSaveDir):
            shutil.rmtree(modelSaveDir)
          shutil.copytree(saveDirWithTimestamp, modelSaveDir)
          shutil.rmtree(saveDirWithTimestamp)
      except:
        print "ERR", "save_model", sys.exc_info()
        traceback.print_exc()
        pass

    def init(self, predictedField, predictedSteps):
        self.PredictedField = predictedField
        self.PredictedSteps = predictedSteps

    def test(self, this=None):
        if (this is not None):
            print "Running as COM server"
        else:
            print "Running as native"

        PredictionSteps = 16
        ModelParamsDir = "..\data\model_0"
        ModelSaveDir = "..\data\model_save"
        PredictedField = "Position" + str(PredictionSteps)

        print "init"
        self.init(PredictedField, PredictionSteps)
        print "create"
        self.create_model(ModelParamsDir)
        #print "step"
        #self.step("2013-10-28T07:10:30.000000Z", ["Position16"], [0.1])
        print "save"
        self.save_model(ModelSaveDir)
        print "load"
        self.load_model(ModelSaveDir)
        print "done."            


# This is the COM server.  
# It just wraps all the functions of the NupicBridgeClass class, 
# and does some translations where necessary.
class NupicBridgeImpl(NupicBridge):
    # registry entries
    _reg_threading_ = "Both"
    _reg_progid_ = "NupicBridgeTypeLib.NupicBridge.1"
    _reg_novers_progid_ = "NupicBridgeTypeLib.NupicBridge"
    _reg_desc_ = "Simple access to Nupic via COM"
    #TODO: INPROC did not play nice with C# (possibly because of target CPU differences?) - will revisit later.
    #_reg_clsctx_ = comtypes.CLSCTX_INPROC_SERVER | comtypes.CLSCTX_LOCAL_SERVER
    _reg_clsctx_ = comtypes.CLSCTX_LOCAL_SERVER
    _regcls_ = comtypes.server.localserver.REGCLS_MULTIPLEUSE

    bridge = None

    def __init__(self):
        self.bridge = NupicBridgeClass()

    def create_model(self, modelParamsDir):
        return self.bridge.create_model(str(modelParamsDir))    
    
    def load_model(self, modelSaveDir):
        return self.bridge.load_model(str(modelSaveDir))

    def step(self, timestampStr, names, values):
        names = get_array(names)
        values = get_array(values)
        return self.bridge.step(timestampStr, names, values)

    def save_model(self, modelSaveDir):
        return self.bridge.save_model(str(modelSaveDir))

    def init(self, predictedField, predictedSteps):
        return self.bridge.init(str(predictedField), predictedSteps)

    def test(self, this=None):
        return self.bridge.test(this)    

## Was necessary for Python.NET integration
#def create_nupic_bridge():
#    return NupicBridgeClass()
##
if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "test":
        bridge = NupicBridgeClass()
        bridge.test()
    else:
        from comtypes.server.register import UseCommandLine
        UseCommandLine(NupicBridgeImpl)

