{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVSampleBufferRenderSynchronizer.h }

{$ifdef CALLBACKS}
type
  AVSampleBufferRenderSynchronizerRemoveRendererCallback = reference to function (didRemoveRenderer: objcbool): pointer; cblock; cdecl;
  AVSampleBufferRenderSynchronizerAddPeriodicTimeObserverForIntervalCallback = reference to function (time: CMTime): pointer; cblock; cdecl;
  AVSampleBufferRenderSynchronizerAddBoundaryTimeObserverForTimesCallback = reference to function : pointer; cblock; cdecl;
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
    function currentTime: CMTime; message 'currentTime'; { available in macos , ios , tvos , watchos  }
    procedure setRate_time (rate_: single; time: CMTime); message 'setRate:time:';
    procedure setRate_time_atHostTime (rate_: single; time: CMTime; hostTime: CMTime); message 'setRate:time:atHostTime:'; { available in macos , ios , tvos , watchos  }
    procedure setDelaysRateChangeUntilHasSufficientMediaData(newValue: objcbool); message 'setDelaysRateChangeUntilHasSufficientMediaData:'; { available in macos , ios , tvos , watchos  }
    function delaysRateChangeUntilHasSufficientMediaData: objcbool; message 'delaysRateChangeUntilHasSufficientMediaData'; { available in macos , ios , tvos , watchos  }
  end;


type
  AVSampleBufferRenderSynchronizerRendererManagement = objccategory external (AVSampleBufferRenderSynchronizer)
    function renderers: NSArray; message 'renderers';
    procedure addRenderer (renderer: id); message 'addRenderer:';
    procedure removeRenderer_atTime_completionHandler (renderer: id; time: CMTime; completionHandler: AVSampleBufferRenderSynchronizerRemoveRendererCallback); message 'removeRenderer:atTime:completionHandler:';
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
