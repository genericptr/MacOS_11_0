{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLModel.h }

{$ifdef CALLBACKS}
type
  MLModelLoadContentsOfURLCallback = reference to procedure (model: MLModel; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MLModelPtr = ^MLModel;
{$endif}

{$ifdef CLASSES}

type
  MLModel = objcclass external (NSObject)
  public
    function modelDescription: MLModelDescription; message 'modelDescription';
    function configuration: MLModelConfiguration; message 'configuration'; { available in macos , ios , watchos , tvos  }
    class function modelWithContentsOfURL_error (url: NSURL; error: NSErrorPtr): id; message 'modelWithContentsOfURL:error:';
    class function modelWithContentsOfURL_configuration_error (url: NSURL; configuration_: MLModelConfiguration; error: NSErrorPtr): id; message 'modelWithContentsOfURL:configuration:error:'; { available in macos , ios , watchos , tvos  }
    class procedure loadContentsOfURL_configuration_completionHandler (url: NSURL; configuration_: MLModelConfiguration; handler: MLModelLoadContentsOfURLCallback); message 'loadContentsOfURL:configuration:completionHandler:'; { available in macos , ios , watchos , tvos  }
    function predictionFromFeatures_error (input: MLFeatureProviderProtocol; error: NSErrorPtr): id; message 'predictionFromFeatures:error:';
    function predictionFromFeatures_options_error (input: MLFeatureProviderProtocol; options: MLPredictionOptions; error: NSErrorPtr): id; message 'predictionFromFeatures:options:error:';
    function predictionsFromBatch_error (inputBatch: MLBatchProviderProtocol; error: NSErrorPtr): id; message 'predictionsFromBatch:error:'; { available in macos , ios , watchos , tvos  }
    function predictionsFromBatch_options_error (inputBatch: MLBatchProviderProtocol; options: MLPredictionOptions; error: NSErrorPtr): id; message 'predictionsFromBatch:options:error:'; { available in macos , ios , watchos , tvos  }
    function parameterValueForKey_error (key: MLParameterKey; error: NSErrorPtr): id; message 'parameterValueForKey:error:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

