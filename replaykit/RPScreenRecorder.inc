{ Parsed from ReplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ReplayKit.framework/Headers/RPScreenRecorder.h }

{ Types from RPScreenRecorder }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  RPScreenRecorderStartRecordingWithMicrophoneEnabledCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  RPScreenRecorderStartRecordingWithHandlerCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  RPScreenRecorderStopRecordingWithHandlerCallback = reference to function (previewViewController: RPPreviewViewController; error: NSError): pointer; cblock; cdecl;
  RPScreenRecorderStopRecordingWithOutputURLCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  RPScreenRecorderDiscardRecordingWithHandlerCallback = reference to function : pointer; cblock; cdecl;
  RPScreenRecorderStartCaptureWithHandlerCallback = reference to function (sampleBuffer: CMSampleBufferRef; bufferType: RPSampleBufferType; error: NSError): pointer; cblock; cdecl;
  RPScreenRecorderStopCaptureWithHandlerCallback = reference to function (error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  RPScreenRecorderPtr = ^RPScreenRecorder;
  RPScreenRecorderDelegateProtocolPtr = ^RPScreenRecorderDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  RPCameraPosition = NSInteger;
  RPCameraPositionPtr = ^RPCameraPosition;

const
  RPCameraPositionFront = 1;
  RPCameraPositionBack = 2;
{$endif}

{$ifdef CLASSES}

type
  RPScreenRecorder = objcclass external (NSObject)
  public
    class function sharedRecorder: RPScreenRecorder; message 'sharedRecorder';
    function init: id; message 'init'; { unavailable in ios, tvos, macCatalyst, macos }
    procedure startRecordingWithMicrophoneEnabled_handler (microphoneEnabled: objcbool; handler: RPScreenRecorderStartRecordingWithMicrophoneEnabledCallback); message 'startRecordingWithMicrophoneEnabled:handler:'; { unavailable in macos }
    procedure startRecordingWithHandler (handler: RPScreenRecorderStartRecordingWithHandlerCallback); message 'startRecordingWithHandler:'; { available in ios , tvos , macos  }
    procedure stopRecordingWithHandler (handler: RPScreenRecorderStopRecordingWithHandlerCallback); message 'stopRecordingWithHandler:';
    procedure stopRecordingWithOutputURL_completionHandler (url: NSURL; completionHandler: RPScreenRecorderStopRecordingWithOutputURLCallback); message 'stopRecordingWithOutputURL:completionHandler:';
    procedure discardRecordingWithHandler (handler: RPScreenRecorderDiscardRecordingWithHandlerCallback); message 'discardRecordingWithHandler:';
    procedure startCaptureWithHandler_completionHandler (captureHandler: RPScreenRecorderStartCaptureWithHandlerCallback; completionHandler: RPScreenRecorderStartCaptureWithHandlerCallback); message 'startCaptureWithHandler:completionHandler:'; { available in ios , tvos , macos  }
    procedure stopCaptureWithHandler (handler: RPScreenRecorderStopCaptureWithHandlerCallback); message 'stopCaptureWithHandler:'; { available in ios , tvos , macos  }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function isAvailable: objcbool; message 'isAvailable';
    function isRecording: objcbool; message 'isRecording';
    procedure setMicrophoneEnabled(newValue: objcbool); message 'setMicrophoneEnabled:'; { unavailable in tvos }
    function isMicrophoneEnabled: objcbool; message 'isMicrophoneEnabled'; { unavailable in tvos }
    procedure setCameraEnabled(newValue: objcbool); message 'setCameraEnabled:'; { unavailable in tvos }
    function isCameraEnabled: objcbool; message 'isCameraEnabled'; { unavailable in tvos }
    procedure setCameraPosition(newValue: RPCameraPosition); message 'setCameraPosition:'; { unavailable in tvos }
    function cameraPosition: RPCameraPosition; message 'cameraPosition'; { unavailable in tvos }
    function cameraPreviewView: NSViewPtr; message 'cameraPreviewView'; { unavailable in tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPScreenRecorderDelegateProtocol = objcprotocol external name 'RPScreenRecorderDelegate' (NSObjectProtocol)
  optional
    procedure screenRecorder_didStopRecordingWithError_previewViewController (screenRecorder: RPScreenRecorder; error: NSError; previewViewController: RPPreviewViewController); message 'screenRecorder:didStopRecordingWithError:previewViewController:'; { unavailable in macos }
    procedure screenRecorder_didStopRecordingWithPreviewViewController_error (screenRecorder: RPScreenRecorder; previewViewController: RPPreviewViewController; error: NSError); message 'screenRecorder:didStopRecordingWithPreviewViewController:error:'; { available in ios , tvos , macos  }
    procedure screenRecorderDidChangeAvailability (screenRecorder: RPScreenRecorder); message 'screenRecorderDidChangeAvailability:';
  end;
{$endif}

