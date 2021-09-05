{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureDataOutputSynchronizer.h }

{$ifdef TYPES}
type
  AVCaptureDataOutputSynchronizerPtr = ^AVCaptureDataOutputSynchronizer;
  AVCaptureSynchronizedDataCollectionPtr = ^AVCaptureSynchronizedDataCollection;
  AVCaptureSynchronizedDataPtr = ^AVCaptureSynchronizedData;
  AVCaptureSynchronizedSampleBufferDataPtr = ^AVCaptureSynchronizedSampleBufferData;
  AVCaptureSynchronizedMetadataObjectDataPtr = ^AVCaptureSynchronizedMetadataObjectData;
  AVCaptureSynchronizedDepthDataPtr = ^AVCaptureSynchronizedDepthData;
  AVCaptureDataOutputSynchronizerDelegateProtocolPtr = ^AVCaptureDataOutputSynchronizerDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureDataOutputSynchronizer = objcclass external (NSObject)
  private
    _internal: AVCaptureDataOutputSynchronizerInternal;
  public
    function initWithDataOutputs (dataOutputs: NSArray): id; message 'initWithDataOutputs:';
    function dataOutputs: NSArray; message 'dataOutputs';
    procedure setDelegate_queue (delegate: AVCaptureDataOutputSynchronizerDelegateProtocol; delegateCallbackQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: AVCaptureDataOutputSynchronizerDelegateProtocol; message 'delegate';
    function delegateCallbackQueue: dispatch_queue_t; message 'delegateCallbackQueue';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureDataOutputSynchronizerDelegateProtocol = objcprotocol external name 'AVCaptureDataOutputSynchronizerDelegate' (NSObjectProtocol)
  required
    procedure dataOutputSynchronizer_didOutputSynchronizedDataCollection (synchronizer: AVCaptureDataOutputSynchronizer; synchronizedDataCollection: AVCaptureSynchronizedDataCollection); message 'dataOutputSynchronizer:didOutputSynchronizedDataCollection:';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureSynchronizedDataCollection = objcclass external (NSObject, NSFastEnumerationProtocol)
  private
    _internal: AVCaptureSynchronizedDataCollectionInternal;
  public
    function synchronizedDataForCaptureOutput (captureOutput: AVCaptureOutput): AVCaptureSynchronizedData; message 'synchronizedDataForCaptureOutput:';
    function objectForKeyedSubscript (key: AVCaptureOutput): AVCaptureSynchronizedData; message 'objectForKeyedSubscript:';
    function count: NSUInteger; message 'count';

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;

type
  AVCaptureSynchronizedData = objcclass external (NSObject)
  private
    _synchronizedDataInternal: AVCaptureSynchronizedDataInternal;
  public
    function timestamp: CMTime; message 'timestamp';
  end;

type
  AVCaptureSynchronizedSampleBufferData = objcclass external (AVCaptureSynchronizedData)
  private
    _internal: AVCaptureSynchronizedSampleBufferDataInternal;
  public
    function sampleBuffer: CMSampleBufferRef; message 'sampleBuffer';
    function sampleBufferWasDropped: objcbool; message 'sampleBufferWasDropped';
    function droppedReason: AVCaptureOutputDataDroppedReason; message 'droppedReason';
  end;

type
  AVCaptureSynchronizedMetadataObjectData = objcclass external (AVCaptureSynchronizedData)
  private
    _internal: AVCaptureSynchronizedMetadataObjectDataInternal;
  public
    function metadataObjects: NSArray; message 'metadataObjects';
  end;

type
  AVCaptureSynchronizedDepthData = objcclass external (AVCaptureSynchronizedData)
  private
    _internal: AVCaptureSynchronizedDepthDataInternal;
  public
    function depthData: AVDepthData; message 'depthData';
    function depthDataWasDropped: objcbool; message 'depthDataWasDropped';
    function droppedReason: AVCaptureOutputDataDroppedReason; message 'droppedReason';
  end;
{$endif}

{$else}
{$endif}
