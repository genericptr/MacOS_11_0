{ Parsed from AVFoundation.framework AVSampleBufferRenderSynchronizer.h }

{$ifdef CALLBACKS}
type
  AVSampleBufferRenderSynchronizerRemoveRendererCallback = reference to procedure (didRemoveRenderer: objcbool); cblock; cdecl;
  AVSampleBufferRenderSynchronizerAddPeriodicTimeObserverForIntervalCallback = reference to procedure (time: CMTime); cblock; cdecl;
  AVSampleBufferRenderSynchronizerAddBoundaryTimeObserverForTimesCallback = reference to procedure; cblock; cdecl;
{$endif}

{$ifdef TYPES}
type
  AVSampleBufferRenderSynchronizerPtr = ^AVSampleBufferRenderSynchronizer;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVSampleBufferRenderSynchronizer = objcclass external (NSObject)
  private
    _synchronizerInternal: AVSampleBufferRenderSynchronizerInternal;
  public
    function timebase: CMTimebaseRef; message 'timebase';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    function currentTime: CMTime; message 'currentTime'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    procedure setRate_time (rate_: single; time: CMTime); message 'setRate:time:';
    procedure setRate_time_atHostTime (rate_: single; time: CMTime; hostTime: CMTime); message 'setRate:time:atHostTime:'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
    procedure setDelaysRateChangeUntilHasSufficientMediaData(newValue: objcbool); message 'setDelaysRateChangeUntilHasSufficientMediaData:'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
    function delaysRateChangeUntilHasSufficientMediaData: objcbool; message 'delaysRateChangeUntilHasSufficientMediaData'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
  end;


type
  AVSampleBufferRenderSynchronizerRendererManagement = objccategory external (AVSampleBufferRenderSynchronizer)
    function renderers: NSArray; message 'renderers';
    procedure addRenderer (renderer: AVQueuedSampleBufferRenderingProtocol); message 'addRenderer:';
    procedure removeRenderer_atTime_completionHandler (renderer: AVQueuedSampleBufferRenderingProtocol; time: CMTime; completionHandler: AVSampleBufferRenderSynchronizerRemoveRendererCallback); message 'removeRenderer:atTime:completionHandler:';
  end;

type
  AVSampleBufferRenderSynchronizerTimeObservation = objccategory external (AVSampleBufferRenderSynchronizer)
    function addPeriodicTimeObserverForInterval_queue_usingBlock (interval: CMTime; queue: dispatch_queue_t; block: AVSampleBufferRenderSynchronizerAddPeriodicTimeObserverForIntervalCallback): id; message 'addPeriodicTimeObserverForInterval:queue:usingBlock:';
    function addBoundaryTimeObserverForTimes_queue_usingBlock (times: NSArray; queue: dispatch_queue_t; block: AVSampleBufferRenderSynchronizerAddBoundaryTimeObserverForTimesCallback): id; message 'addBoundaryTimeObserverForTimes:queue:usingBlock:';
    procedure removeTimeObserver (observer: id); message 'removeTimeObserver:';
  end;
{$endif}

{$else}
{$endif}
