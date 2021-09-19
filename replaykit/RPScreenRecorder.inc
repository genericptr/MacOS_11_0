{ Parsed from ReplayKit.framework RPScreenRecorder.h }

{ Types from RPScreenRecorder }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  RPScreenRecorderStartRecordingWithMicrophoneEnabledCallback = reference to procedure (error: NSError); cblock; cdecl;
  RPScreenRecorderStartRecordingWithHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  RPScreenRecorderStopRecordingWithHandlerCallback = reference to procedure (previewViewController: RPPreviewViewController; error: NSError); cblock; cdecl;
  RPScreenRecorderStopRecordingWithOutputURLCallback = reference to procedure (error: NSError); cblock; cdecl;
  RPScreenRecorderDiscardRecordingWithHandlerCallback = reference to procedure; cblock; cdecl;
  RPScreenRecorderStartCaptureWithHandlerCallback = reference to procedure (sampleBuffer: CMSampleBufferRef; bufferType: RPSampleBufferType; error: NSError); cblock; cdecl;
  RPScreenRecorderStopCaptureWithHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
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
    procedure startRecordingWithHandler (handler: RPScreenRecorderStartRecordingWithHandlerCallback); message 'startRecordingWithHandler:'; { available in ios 10.0, tvos 10.0, macos 11.0 }
    procedure stopRecordingWithHandler (handler: RPScreenRecorderStopRecordingWithHandlerCallback); message 'stopRecordingWithHandler:';
    procedure stopRecordingWithOutputURL_completionHandler (url: NSURL; completionHandler: RPScreenRecorderStopRecordingWithOutputURLCallback); message 'stopRecordingWithOutputURL:completionHandler:';
    procedure discardRecordingWithHandler (handler: RPScreenRecorderDiscardRecordingWithHandlerCallback); message 'discardRecordingWithHandler:';
    procedure startCaptureWithHandler_completionHandler (captureHandler: RPScreenRecorderStartCaptureWithHandlerCallback; completionHandler: RPScreenRecorderStartCaptureWithHandlerCallback); message 'startCaptureWithHandler:completionHandler:'; { available in ios 11.0, tvos 11.0, macos 11.0 }
    procedure stopCaptureWithHandler (handler: RPScreenRecorderStopCaptureWithHandlerCallback); message 'stopCaptureWithHandler:'; { available in ios 11.0, tvos 11.0, macos 11.0 }
    procedure setDelegate(newValue: RPScreenRecorderDelegateProtocol); message 'setDelegate:';
    function delegate: RPScreenRecorderDelegateProtocol; message 'delegate';
    function isAvailable: objcbool; message 'isAvailable';
    function isRecording: objcbool; message 'isRecording';
    procedure setMicrophoneEnabled(newValue: objcbool); message 'setMicrophoneEnabled:'; { unavailable in tvos }
    function isMicrophoneEnabled: objcbool; message 'isMicrophoneEnabled'; { unavailable in tvos }
    procedure setCameraEnabled(newValue: objcbool); message 'setCameraEnabled:'; { unavailable in tvos } { available in ios 10.0, macos 11.0 }
    function isCameraEnabled: objcbool; message 'isCameraEnabled'; { unavailable in tvos } { available in ios 10.0, macos 11.0 }
    procedure setCameraPosition(newValue: RPCameraPosition); message 'setCameraPosition:'; { unavailable in tvos } { available in ios 11.0, macos 11.0 }
    function cameraPosition: RPCameraPosition; message 'cameraPosition'; { unavailable in tvos } { available in ios 11.0, macos 11.0 }
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

