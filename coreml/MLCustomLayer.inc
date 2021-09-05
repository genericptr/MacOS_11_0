{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLCustomLayer.h }

{$ifdef TYPES}
type
  MLCustomLayerProtocolPtr = ^MLCustomLayerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MLCustomLayerProtocol = objcprotocol external name 'MLCustomLayer'
    function initWithParameterDictionary_error (parameters: NSDictionary; error: NSErrorPtr): id; message 'initWithParameterDictionary:error:';
    function setWeightData_error (weights: NSArray; error: NSErrorPtr): objcbool; message 'setWeightData:error:';
    function outputShapesForInputShapes_error (inputShapes: NSArray; error: NSErrorPtr): NSArray; message 'outputShapesForInputShapes:error:';
    function evaluateOnCPUWithInputs_outputs_error (inputs: NSArray; outputs: NSArray; error: NSErrorPtr): objcbool; message 'evaluateOnCPUWithInputs:outputs:error:';
  optional
    function encodeToCommandBuffer_inputs_outputs_error (commandBuffer: MTLCommandBufferProtocol; inputs: NSArray; outputs: NSArray; error: NSErrorPtr): objcbool; message 'encodeToCommandBuffer:inputs:outputs:error:';
  end;
{$endif}

