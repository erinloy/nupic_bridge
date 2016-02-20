import sys
from nupic_bridge import nupic_bridge

import comtypes
import comtypes.server.localserver
from comtypes.safearray import safearray_as_ndarray

from comtypes.client import GetModule
# generate wrapper code for the type library, this needs
# to be done only once (but also each time the IDL file changes)
GetModule("NupicBridge.tlb")

from comtypes.gen.NupicBridgeTypeLib import NupicBridge

# Converts a SAFEARRAY to an array that nupic can use
def get_array(sa):
    """Get an array from a safe array type"""
    with safearray_as_ndarray:
        return sa[0]

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
        self.bridge = nupic_bridge()

    def create_model(self, modelParamsDir):
        return self.bridge.create_model(str(modelParamsDir))    
    
    def load_model(self, modelSaveDir):
        return self.bridge.load_model(str(modelSaveDir))

    def step(self, timestampStr, names, values):
        names = get_array(names)
        values = get_array(values)
        if timestampStr is not None:
            timestampStr = str(timestampStr)
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
        bridge = nupic_bridge()
        bridge.test()
    else:
        from comtypes.server.register import UseCommandLine
        UseCommandLine(NupicBridgeImpl)

