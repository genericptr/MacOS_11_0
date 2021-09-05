{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLCustomModel.h }

{$ifdef TYPES}
type
  MLCustomModelProtocolPtr = ^MLCustomModelProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MLCustomModelProtocol = objcprotocol external name 'MLCustomModel'
    function initWithModelDescription_parameterDictionary_error (modelDescription: MLModelDescription; parameters: NSDictionary; error: NSErrorPtr): id; message 'initWithModelDescription:parameterDictionary:error:';
    function predictionFromFeatures_options_error (input: MLFeatureProviderProtocol; options: MLPredictionOptions; error: NSErrorPtr): id; message 'predictionFromFeatures:options:error:';
  optional
    function predictionsFromBatch_options_error (inputBatch: MLBatchProviderProtocol; options: MLPredictionOptions; error: NSErrorPtr): id; message 'predictionsFromBatch:options:error:';
  end;
{$endif}

