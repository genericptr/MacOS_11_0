{ Parsed from AVFoundation.framework AVCaptureDepthDataOutput.h }

{$ifdef TYPES}
type
  AVCaptureDepthDataOutputPtr = ^AVCaptureDepthDataOutput;
  AVCaptureDepthDataOutputDelegateProtocolPtr = ^AVCaptureDepthDataOutputDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureDepthDataOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureDepthDataOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setDelegate_callbackQueue (delegate: AVCaptureDepthDataOutputDelegateProtocol; callbackQueue: dispatch_queue_t); message 'setDelegate:callbackQueue:';
    function delegate: AVCaptureDepthDataOutputDelegateProtocol; message 'delegate';
    function delegateCallbackQueue: dispatch_queue_t; message 'delegateCallbackQueue';
    procedure setAlwaysDiscardsLateDepthData(newValue: objcbool); message 'setAlwaysDiscardsLateDepthData:';
    function alwaysDiscardsLateDepthData: objcbool; message 'alwaysDiscardsLateDepthData';
    procedure setFilteringEnabled(newValue: objcbool); message 'setFilteringEnabled:';
    function isFilteringEnabled: objcbool; message 'isFilteringEnabled';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureDepthDataOutputDelegateProtocol = objcprotocol external name 'AVCaptureDepthDataOutputDelegate' (NSObjectProtocol)
  optional
    procedure depthDataOutput_didOutputDepthData_timestamp_connection (output: AVCaptureDepthDataOutput; depthData: AVDepthData; timestamp: CMTime; connection: AVCaptureConnection); message 'depthDataOutput:didOutputDepthData:timestamp:connection:';
    procedure depthDataOutput_didDropDepthData_timestamp_connection_reason (output: AVCaptureDepthDataOutput; depthData: AVDepthData; timestamp: CMTime; connection: AVCaptureConnection; reason: AVCaptureOutputDataDroppedReason); message 'depthDataOutput:didDropDepthData:timestamp:connection:reason:';
  end;
{$endif}

{$else}
{$endif}
