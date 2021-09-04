{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLUpdateTask.h }

{$ifdef CALLBACKS}
type
  MLUpdateTaskUpdateTaskForModelAtURLCallback = reference to procedure (context: MLUpdateContext); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MLUpdateTaskPtr = ^MLUpdateTask;
{$endif}

{$ifdef CLASSES}

type
  MLUpdateTask = objcclass external (MLTask)
  public
    class function updateTaskForModelAtURL_trainingData_configuration_completionHandler_error (modelURL: NSURL; trainingData: id; configuration: MLModelConfiguration; completionHandler: MLUpdateTaskUpdateTaskForModelAtURLCallback; error_: NSErrorPtr): id; message 'updateTaskForModelAtURL:trainingData:configuration:completionHandler:error:';
    class function updateTaskForModelAtURL_trainingData_completionHandler_error (modelURL: NSURL; trainingData: id; completionHandler: MLUpdateTaskUpdateTaskForModelAtURLCallback; error_: NSErrorPtr): id; message 'updateTaskForModelAtURL:trainingData:completionHandler:error:'; { available in macos , ios , watchos , tvos  }
    class function updateTaskForModelAtURL_trainingData_configuration_progressHandlers_error (modelURL: NSURL; trainingData: id; configuration: MLModelConfiguration; progressHandlers: MLUpdateProgressHandlers; error_: NSErrorPtr): id; message 'updateTaskForModelAtURL:trainingData:configuration:progressHandlers:error:';
    class function updateTaskForModelAtURL_trainingData_progressHandlers_error (modelURL: NSURL; trainingData: id; progressHandlers: MLUpdateProgressHandlers; error_: NSErrorPtr): id; message 'updateTaskForModelAtURL:trainingData:progressHandlers:error:'; { available in macos , ios , watchos , tvos  }
    procedure resumeWithParameters (updateParameters: NSDictionary); message 'resumeWithParameters:';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

