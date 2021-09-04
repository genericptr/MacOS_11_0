{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayer.h }

{ Types from AVPlayerPlaybackControl }
{$ifdef TYPES}

type
  AVPlayerTimeControlStatus = NSInteger;
type
  AVPlayerTimeControlStatusPtr = ^AVPlayerTimeControlStatus;

const
  AVPlayerTimeControlStatusPaused = 0;
  AVPlayerTimeControlStatusWaitingToPlayAtSpecifiedRate = 1;
  AVPlayerTimeControlStatusPlaying = 2;

type
  AVPlayerWaitingReason = NSString;
type
  AVPlayerWaitingReasonPtr = ^AVPlayerWaitingReason;
{$endif}


{ Types from AVPlayerItemControl }
{$ifdef TYPES}

type
  AVPlayerActionAtItemEnd = NSInteger;
type
  AVPlayerActionAtItemEndPtr = ^AVPlayerActionAtItemEnd;

const
  AVPlayerActionAtItemEndAdvance = 0;
  AVPlayerActionAtItemEndPause = 1;
  AVPlayerActionAtItemEndNone = 2;
{$endif}


{$ifdef CALLBACKS}
type
  AVPlayerSeekToDateCallback = reference to procedure (finished: objcbool); cblock; cdecl;
  AVPlayerSeekToTimeCallback = reference to procedure (finished: objcbool); cblock; cdecl;
  AVPlayerPrerollAtRateCallback = reference to procedure (finished: objcbool); cblock; cdecl;
  AVPlayerAddPeriodicTimeObserverForIntervalCallback = reference to procedure (time: CMTime); cblock; cdecl;
  AVPlayerAddBoundaryTimeObserverForTimesCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVPlayerPtr = ^AVPlayer;
  AVQueuePlayerPtr = ^AVQueuePlayer;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVPlayerStatus = NSInteger;
  AVPlayerStatusPtr = ^AVPlayerStatus;

const
  AVPlayerStatusUnknown = 0;
  AVPlayerStatusReadyToPlay = 1;
  AVPlayerStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  AVPlayer = objcclass external (NSObject)
  private
    _player: AVPlayerInternal;
  public
    class function playerWithURL (URL: NSURL): id; message 'playerWithURL:';
    class function playerWithPlayerItem (item: AVPlayerItem): id; message 'playerWithPlayerItem:';
    function initWithURL (URL: NSURL): id; message 'initWithURL:';
    function initWithPlayerItem (item: AVPlayerItem): id; message 'initWithPlayerItem:';
    function status: AVPlayerStatus; message 'status';
    function error: NSError; message 'error';
  end;


type
  AVPlayerPlaybackControl = objccategory external (AVPlayer)
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure play; message 'play';
    procedure pause; message 'pause';
    function timeControlStatus: AVPlayerTimeControlStatus; message 'timeControlStatus'; { available in macos , ios , tvos , watchos  }
    function reasonForWaitingToPlay: AVPlayerWaitingReason; message 'reasonForWaitingToPlay'; { available in macos , ios , tvos , watchos  }
    procedure playImmediatelyAtRate (rate_: single); message 'playImmediatelyAtRate:'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemControl = objccategory external (AVPlayer)
    function currentItem: AVPlayerItem; message 'currentItem';
    procedure replaceCurrentItemWithPlayerItem (item: AVPlayerItem); message 'replaceCurrentItemWithPlayerItem:';
    procedure setActionAtItemEnd(newValue: AVPlayerActionAtItemEnd); message 'setActionAtItemEnd:';
    function actionAtItemEnd: AVPlayerActionAtItemEnd; message 'actionAtItemEnd';
  end;

type
  AVPlayerTimeControl = objccategory external (AVPlayer)
    function currentTime: CMTime; message 'currentTime';
    procedure seekToDate (date: NSDate); message 'seekToDate:';
    procedure seekToDate_completionHandler (date: NSDate; completionHandler: AVPlayerSeekToDateCallback); message 'seekToDate:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure seekToTime (time: CMTime); message 'seekToTime:';
    procedure seekToTime_toleranceBefore_toleranceAfter (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime); message 'seekToTime:toleranceBefore:toleranceAfter:';
    procedure seekToTime_completionHandler (time: CMTime; completionHandler: AVPlayerSeekToTimeCallback); message 'seekToTime:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure seekToTime_toleranceBefore_toleranceAfter_completionHandler (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime; completionHandler: AVPlayerSeekToTimeCallback); message 'seekToTime:toleranceBefore:toleranceAfter:completionHandler:'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerAdvancedRateControl = objccategory external (AVPlayer)
    procedure setAutomaticallyWaitsToMinimizeStalling(newValue: objcbool); message 'setAutomaticallyWaitsToMinimizeStalling:'; { available in macos , ios , tvos , watchos  }
    function automaticallyWaitsToMinimizeStalling: objcbool; message 'automaticallyWaitsToMinimizeStalling'; { available in macos , ios , tvos , watchos  }
    procedure setRate_time_atHostTime (rate: single; itemTime: CMTime; hostClockTime: CMTime); message 'setRate:time:atHostTime:'; { available in macos , ios , tvos , watchos  }
    procedure prerollAtRate_completionHandler (rate: single; completionHandler: AVPlayerPrerollAtRateCallback); message 'prerollAtRate:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure cancelPendingPrerolls; message 'cancelPendingPrerolls'; { available in macos , ios , tvos , watchos  }
    procedure setMasterClock(newValue: CMClockRef); message 'setMasterClock:'; { available in macos , ios , tvos , watchos  }
    function masterClock: CMClockRef; message 'masterClock'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerTimeObservation = objccategory external (AVPlayer)
    function addPeriodicTimeObserverForInterval_queue_usingBlock (interval: CMTime; queue: dispatch_queue_t; block: AVPlayerAddPeriodicTimeObserverForIntervalCallback): id; message 'addPeriodicTimeObserverForInterval:queue:usingBlock:';
    function addBoundaryTimeObserverForTimes_queue_usingBlock (times: NSArray; queue: dispatch_queue_t; block: AVPlayerAddBoundaryTimeObserverForTimesCallback): id; message 'addBoundaryTimeObserverForTimes:queue:usingBlock:';
    procedure removeTimeObserver (observer: id); message 'removeTimeObserver:';
  end;

type
  AVPlayerMediaControl = objccategory external (AVPlayer)
    procedure setVolume(newValue: single); message 'setVolume:'; { available in macos , ios , tvos , watchos  }
    function volume: single; message 'volume'; { available in macos , ios , tvos , watchos  }
    procedure setMuted(newValue: objcbool); message 'setMuted:'; { available in macos , ios , tvos , watchos  }
    function isMuted: objcbool; message 'isMuted'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerAutomaticMediaSelection = objccategory external (AVPlayer)
    procedure setAppliesMediaSelectionCriteriaAutomatically(newValue: objcbool); message 'setAppliesMediaSelectionCriteriaAutomatically:'; { available in macos , ios , tvos , watchos  }
    function appliesMediaSelectionCriteriaAutomatically: objcbool; message 'appliesMediaSelectionCriteriaAutomatically'; { available in macos , ios , tvos , watchos  }
    procedure setMediaSelectionCriteria_forMediaCharacteristic (criteria: AVPlayerMediaSelectionCriteria; mediaCharacteristic: AVMediaCharacteristic); message 'setMediaSelectionCriteria:forMediaCharacteristic:'; { available in macos , ios , tvos , watchos  }
    function mediaSelectionCriteriaForMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): AVPlayerMediaSelectionCriteria; message 'mediaSelectionCriteriaForMediaCharacteristic:'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerAudioDeviceSupport = objccategory external (AVPlayer)
    procedure setAudioOutputDeviceUniqueID(newValue: NSString); message 'setAudioOutputDeviceUniqueID:'; { unavailable in ios, tvos, watchos }
    function audioOutputDeviceUniqueID: NSString; message 'audioOutputDeviceUniqueID'; { unavailable in ios, tvos, watchos }
  end;

type
  AVPlayerExternalPlaybackSupport = objccategory external (AVPlayer)
    procedure setAllowsExternalPlayback(newValue: objcbool); message 'setAllowsExternalPlayback:'; { unavailable in watchos }
    function allowsExternalPlayback: objcbool; message 'allowsExternalPlayback'; { unavailable in watchos }
    function isExternalPlaybackActive: objcbool; message 'isExternalPlaybackActive'; { unavailable in watchos }
    procedure setUsesExternalPlaybackWhileExternalScreenIsActive(newValue: objcbool); message 'setUsesExternalPlaybackWhileExternalScreenIsActive:'; { unavailable in macos, watchos }
    function usesExternalPlaybackWhileExternalScreenIsActive: objcbool; message 'usesExternalPlaybackWhileExternalScreenIsActive'; { unavailable in macos, watchos }
    procedure setExternalPlaybackVideoGravity(newValue: AVLayerVideoGravity); message 'setExternalPlaybackVideoGravity:'; { unavailable in macos, watchos }
    function externalPlaybackVideoGravity: AVLayerVideoGravity; message 'externalPlaybackVideoGravity'; { unavailable in macos, watchos }
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  AVPlayerAirPlaySupport = objccategory external (AVPlayer)
    procedure setAllowsAirPlayVideo(newValue: objcbool); message 'setAllowsAirPlayVideo:'; { unavailable in watchos }
    function allowsAirPlayVideo: objcbool; message 'allowsAirPlayVideo'; { unavailable in watchos }
    function isAirPlayVideoActive: objcbool; message 'isAirPlayVideoActive'; { unavailable in watchos }
    procedure setUsesAirPlayVideoWhileAirPlayScreenIsActive(newValue: objcbool); message 'setUsesAirPlayVideoWhileAirPlayScreenIsActive:'; { unavailable in watchos }
    function usesAirPlayVideoWhileAirPlayScreenIsActive: objcbool; message 'usesAirPlayVideoWhileAirPlayScreenIsActive'; { unavailable in watchos }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVPlayerProtectedContent = objccategory external (AVPlayer)
    function outputObscuredDueToInsufficientExternalProtection: objcbool; message 'outputObscuredDueToInsufficientExternalProtection'; { unavailable in watchos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVPlayerHDRMode = NSInteger;
  AVPlayerHDRModePtr = ^AVPlayerHDRMode;

const
  AVPlayerHDRModeHLG = $1;
  AVPlayerHDRModeHDR10 = $2;
  AVPlayerHDRModeDolbyVision = $4;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerPlaybackCapabilities = objccategory external (AVPlayer)
    class function availableHDRModes: AVPlayerHDRMode; message 'availableHDRModes'; { unavailable in macos }
    class function eligibleForHDRPlayback: objcbool; message 'eligibleForHDRPlayback'; { unavailable in watchos }
  end;

type
  AVPlayerVideoDecoderGPUSupport = objccategory external (AVPlayer)
    procedure setPreferredVideoDecoderGPURegistryID(newValue: cuint64); message 'setPreferredVideoDecoderGPURegistryID:'; { unavailable in ios, tvos, watchos }
    function preferredVideoDecoderGPURegistryID: cuint64; message 'preferredVideoDecoderGPURegistryID'; { unavailable in ios, tvos, watchos }
  end;

type
  AVPlayerVideoDisplaySleepPrevention = objccategory external (AVPlayer)
    procedure setPreventsDisplaySleepDuringVideoPlayback(newValue: objcbool); message 'setPreventsDisplaySleepDuringVideoPlayback:'; { unavailable in watchos }
    function preventsDisplaySleepDuringVideoPlayback: objcbool; message 'preventsDisplaySleepDuringVideoPlayback'; { unavailable in watchos }
  end;

type
  AVPlayerDeprecated = objccategory external (AVPlayer)
    procedure setClosedCaptionDisplayEnabled(newValue: objcbool); message 'setClosedCaptionDisplayEnabled:'; { unavailable in watchos }
    function isClosedCaptionDisplayEnabled: objcbool; message 'isClosedCaptionDisplayEnabled'; { unavailable in watchos }
  end;


type
  AVQueuePlayer = objcclass external (AVPlayer)
  private
    _queuePlayer: AVQueuePlayerInternal;
  public
    class function queuePlayerWithItems (items: NSArray): id; message 'queuePlayerWithItems:';
    function initWithItems (items: NSArray): AVQueuePlayer; message 'initWithItems:';
    function items: NSArray; message 'items';
    procedure advanceToNextItem; message 'advanceToNextItem';
    function canInsertItem_afterItem (item: AVPlayerItem; afterItem: AVPlayerItem): objcbool; message 'canInsertItem:afterItem:';
    procedure insertItem_afterItem (item: AVPlayerItem; afterItem: AVPlayerItem); message 'insertItem:afterItem:';
    procedure removeItem (item: AVPlayerItem); message 'removeItem:';
    procedure removeAllItems; message 'removeAllItems';
  end;
{$endif}

{$else}
{$endif}
