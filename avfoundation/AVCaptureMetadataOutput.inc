{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureMetadataOutput.h }

{$ifdef TYPES}
type
  AVCaptureMetadataOutputPtr = ^AVCaptureMetadataOutput;
  AVCaptureMetadataOutputObjectsDelegateProtocolPtr = ^AVCaptureMetadataOutputObjectsDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureMetadataOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureMetadataOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setMetadataObjectsDelegate_queue (objectsDelegate: id; objectsCallbackQueue: dispatch_queue_t); message 'setMetadataObjectsDelegate:queue:';
    function metadataObjectsDelegate: id; message 'metadataObjectsDelegate';
    function metadataObjectsCallbackQueue: dispatch_queue_t; message 'metadataObjectsCallbackQueue';
    function availableMetadataObjectTypes: NSArray; message 'availableMetadataObjectTypes';
    procedure setMetadataObjectTypes(newValue: NSArray); message 'setMetadataObjectTypes:';
    function metadataObjectTypes: NSArray; message 'metadataObjectTypes';
    procedure setRectOfInterest(newValue: CGRect); message 'setRectOfInterest:'; { unavailable in tvos }
    function rectOfInterest: CGRect; message 'rectOfInterest'; { unavailable in tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureMetadataOutputObjectsDelegateProtocol = objcprotocol external name 'AVCaptureMetadataOutputObjectsDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didOutputMetadataObjects_fromConnection (output: AVCaptureOutput; metadataObjects: NSArray; connection: AVCaptureConnection); message 'captureOutput:didOutputMetadataObjects:fromConnection:';
  end;
{$endif}

{$else}
{$endif}
