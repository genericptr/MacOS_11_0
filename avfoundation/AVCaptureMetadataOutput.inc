{ Parsed from AVFoundation.framework AVCaptureMetadataOutput.h }

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
    procedure setMetadataObjectsDelegate_queue (objectsDelegate: AVCaptureMetadataOutputObjectsDelegateProtocol; objectsCallbackQueue: dispatch_queue_t); message 'setMetadataObjectsDelegate:queue:';
    function metadataObjectsDelegate: AVCaptureMetadataOutputObjectsDelegateProtocol; message 'metadataObjectsDelegate';
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
