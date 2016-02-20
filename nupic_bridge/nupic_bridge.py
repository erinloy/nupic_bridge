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

def parse_date(datestring):
    DATE_FORMATS = ['%Y-%m-%dT%H:%M:%S.%fZ',
                    '%Y-%m-%d %H:%M:%S.%f',
                    '%Y-%m-%d %H:%M:%S:%f',
                    '%Y-%m-%d %H:%M:%S',
                    '%Y-%m-%d %H:%M',
                    '%Y-%m-%d',
                    '%m/%d/%Y %H:%M',
                    '%m/%d/%y %H:%M',
                    '%Y-%m-%dT%H:%M:%SZ',
                    '%Y-%m-%dT%H:%M:%S']
    if datestring.isdigit():
        dt = datetime.datetime.utcfromtimestamp(float(datestring))
    else:
        for date_format in DATE_FORMATS:
            try:
                dt = datetime.datetime.strptime(datestring, date_format)
            except ValueError:
                pass
            else:
              break
        else:
            dt = None
    return dt    

class nupic_bridge:

    MODEL_PARAMS_IMPORT_NAME = "model_params"
    PredictedField = None
    PredictedSteps = 0
    Metrics = None
    Model = None

    def _init_model(self, model):
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

    def create_model(self, modelParamsDir):
        modelParams = self._getModelParamsFromName(modelParamsDir)
        print "Creating model..."
        model = ModelFactory.create(modelParams)
        self._init_model(model)

    def load_model(self, modelSaveDir):
        try:
            print "Loading model from %s..." % modelSaveDir
            model = ModelFactory.loadFromCheckpoint(modelSaveDir)
            self._init_model(model)
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
            if timestampStr is not None:
                row['Timestamp'] = parse_date(timestampStr)
            for i in range(0, len(names)):
                row[names[i]] = values[i]

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
        ModelParamsDir = os.path.abspath("..\data\model_0")
        ModelSaveDir = os.path.abspath("..\data\model_save")
        PredictedField = "kw_energy_consumption"

        print "init"
        self.init(PredictedField, PredictionSteps)
        print "create"
        self.create_model(ModelParamsDir)
        print "save"
        self.save_model(ModelSaveDir)
        print "load"
        self.load_model(ModelSaveDir)
        print "step"
        self.step(["timestamp", PredictedField], [datetime.datetime.now(), 0.1])
        print "save"
        self.save_model(ModelSaveDir)
        print "load"
        self.load_model(ModelSaveDir)
        print "done."            
