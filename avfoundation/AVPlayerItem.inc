{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayerItem.h }

{ Types from AVPlayerItemVariantControl }
{$ifdef TYPES}

type
  AVVariantPreferences = NSUInteger;
type
  AVVariantPreferencesPtr = ^AVVariantPreferences;

const
  AVVariantPreferenceNone = 0;
  AVVariantPreferenceScalabilityToLosslessAudio = 1 shl 0;
{$endif}


{$ifdef CALLBACKS}
type
  AVPlayerItemSeekToTimeCallback = reference to procedure (finished: objcbool); cblock; cdecl;
  AVPlayerItemSeekToDateCallback = reference to procedure (finished: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVPlayerItemPtr = ^AVPlayerItem;
  AVPlayerItemAccessLogPtr = ^AVPlayerItemAccessLog;
  AVPlayerItemErrorLogPtr = ^AVPlayerItemErrorLog;
  AVPlayerItemAccessLogEventPtr = ^AVPlayerItemAccessLogEvent;
  AVPlayerItemErrorLogEventPtr = ^AVPlayerItemErrorLogEvent;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVPlayerItemTimeJumpedNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemDidPlayToEndTimeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemFailedToPlayToEndTimeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemPlaybackStalledNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemNewAccessLogEntryNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemNewErrorLogEntryNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemRecommendedTimeOffsetFromLiveDidChangeNotification: NSNotificationName { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemMediaSelectionDidChangeNotification: NSNotificationName { available in macos , ios , tvos , watchos  }; cvar; external;
  AVPlayerItemFailedToPlayToEndTimeErrorKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVPlayerItemStatus = NSInteger;
  AVPlayerItemStatusPtr = ^AVPlayerItemStatus;

const
  AVPlayerItemStatusUnknown = 0;
  AVPlayerItemStatusReadyToPlay = 1;
  AVPlayerItemStatusFailed = 2;

type
  AVAudioSpatializationFormats = NSUInteger;
  AVAudioSpatializationFormatsPtr = ^AVAudioSpatializationFormats;

const
  AVAudioSpatializationFormatNone = 0;
  AVAudioSpatializationFormatMonoAndStereo = $3;
  AVAudioSpatializationFormatMultichannel = $4;
  AVAudioSpatializationFormatMonoStereoAndMultichannel = $7;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerItem = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItem: AVPlayerItemInternal;
  public
    class function playerItemWithURL (URL: NSURL): id; message 'playerItemWithURL:';
    class function playerItemWithAsset (asset: AVAsset): id; message 'playerItemWithAsset:';
    class function playerItemWithAsset_automaticallyLoadedAssetKeys (asset: AVAsset; automaticallyLoadedAssetKeys: NSArray): id; message 'playerItemWithAsset:automaticallyLoadedAssetKeys:'; { available in macos , ios , tvos , watchos  }
    function initWithURL (URL: NSURL): id; message 'initWithURL:';
    function initWithAsset (asset: AVAsset): id; message 'initWithAsset:';
    function initWithAsset_automaticallyLoadedAssetKeys (asset: AVAsset; automaticallyLoadedAssetKeys: NSArray): id; message 'initWithAsset:automaticallyLoadedAssetKeys:'; { available in macos , ios , tvos , watchos  }
    function status: AVPlayerItemStatus; message 'status';
    function error: NSError; message 'error';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVPlayerItemInspection = objccategory external (AVPlayerItem)
    function asset: AVAsset; message 'asset';
    function tracks: NSArray; message 'tracks';
    function duration: CMTime; message 'duration'; { available in macos , ios , tvos , watchos  }
    function presentationSize: CGSize; message 'presentationSize';
    function timedMetadata: NSArray; message 'timedMetadata'; { unavailable in watchos }
    function automaticallyLoadedAssetKeys: NSArray; message 'automaticallyLoadedAssetKeys'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemRateAndSteppingSupport = objccategory external (AVPlayerItem)
    function canPlayFastForward: objcbool; message 'canPlayFastForward'; { available in macos , ios , tvos , watchos  }
    function canPlaySlowForward: objcbool; message 'canPlaySlowForward'; { available in macos , ios , tvos , watchos  }
    function canPlayReverse: objcbool; message 'canPlayReverse'; { available in macos , ios , tvos , watchos  }
    function canPlaySlowReverse: objcbool; message 'canPlaySlowReverse'; { available in macos , ios , tvos , watchos  }
    function canPlayFastReverse: objcbool; message 'canPlayFastReverse'; { available in macos , ios , tvos , watchos  }
    function canStepForward: objcbool; message 'canStepForward'; { available in macos , ios , tvos , watchos  }
    function canStepBackward: objcbool; message 'canStepBackward'; { available in macos , ios , tvos , watchos  }
    procedure setConfiguredTimeOffsetFromLive(newValue: CMTime); message 'setConfiguredTimeOffsetFromLive:'; { available in macos , ios , tvos , watchos  }
    function configuredTimeOffsetFromLive: CMTime; message 'configuredTimeOffsetFromLive'; { available in macos , ios , tvos , watchos  }
    function recommendedTimeOffsetFromLive: CMTime; message 'recommendedTimeOffsetFromLive'; { available in macos , ios , tvos , watchos  }
    procedure setAutomaticallyPreservesTimeOffsetFromLive(newValue: objcbool); message 'setAutomaticallyPreservesTimeOffsetFromLive:'; { available in macos , ios , tvos ,watchos  }
    function automaticallyPreservesTimeOffsetFromLive: objcbool; message 'automaticallyPreservesTimeOffsetFromLive'; { available in macos , ios , tvos ,watchos  }
  end;

type
  AVPlayerItemTimeControl = objccategory external (AVPlayerItem)
    function currentTime: CMTime; message 'currentTime';
    procedure setForwardPlaybackEndTime(newValue: CMTime); message 'setForwardPlaybackEndTime:';
    function forwardPlaybackEndTime: CMTime; message 'forwardPlaybackEndTime';
    procedure setReversePlaybackEndTime(newValue: CMTime); message 'setReversePlaybackEndTime:';
    function reversePlaybackEndTime: CMTime; message 'reversePlaybackEndTime';
    function seekableTimeRanges: NSArray; message 'seekableTimeRanges';
    procedure seekToTime_completionHandler (time: CMTime; completionHandler: AVPlayerItemSeekToTimeCallback); message 'seekToTime:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure seekToTime_toleranceBefore_toleranceAfter_completionHandler (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime; completionHandler: AVPlayerItemSeekToTimeCallback); message 'seekToTime:toleranceBefore:toleranceAfter:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure cancelPendingSeeks; message 'cancelPendingSeeks'; { available in macos , ios , tvos , watchos  }
    function currentDate: NSDate; message 'currentDate';
    function seekToDate_completionHandler (date: NSDate; completionHandler: AVPlayerItemSeekToDateCallback): objcbool; message 'seekToDate:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure stepByCount (stepCount: NSInteger); message 'stepByCount:';
    function timebase: CMTimebaseRef; message 'timebase'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemVisualPresentation = objccategory external (AVPlayerItem)
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:'; { unavailable in watchos }
    function videoComposition: AVVideoComposition; message 'videoComposition'; { unavailable in watchos }
    function customVideoCompositor: id; message 'customVideoCompositor'; { unavailable in watchos }
    procedure setSeekingWaitsForVideoCompositionRendering(newValue: objcbool); message 'setSeekingWaitsForVideoCompositionRendering:'; { unavailable in watchos }
    function seekingWaitsForVideoCompositionRendering: objcbool; message 'seekingWaitsForVideoCompositionRendering'; { unavailable in watchos }
    procedure setTextStyleRules(newValue: NSArray); message 'setTextStyleRules:'; { unavailable in watchos }
    function textStyleRules: NSArray; message 'textStyleRules'; { unavailable in watchos }
    procedure setVideoApertureMode(newValue: AVVideoApertureMode); message 'setVideoApertureMode:'; { unavailable in watchos }
    function videoApertureMode: AVVideoApertureMode; message 'videoApertureMode'; { unavailable in watchos }
    procedure setAppliesPerFrameHDRDisplayMetadata(newValue: objcbool); message 'setAppliesPerFrameHDRDisplayMetadata:'; { unavailable in watchos }
    function appliesPerFrameHDRDisplayMetadata: objcbool; message 'appliesPerFrameHDRDisplayMetadata'; { unavailable in watchos }
  end;

type
  AVPlayerItemAudioProcessing = objccategory external (AVPlayerItem)
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { available in macos , ios , tvos , watchos  }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { available in macos , ios , tvos , watchos  }
    procedure setAudioSpatializationAllowed(newValue: objcbool); message 'setAudioSpatializationAllowed:'; { unavailable in tvos, watchos }
    function isAudioSpatializationAllowed: objcbool; message 'isAudioSpatializationAllowed'; { unavailable in tvos, watchos }
    procedure setAllowedAudioSpatializationFormats(newValue: AVAudioSpatializationFormats); message 'setAllowedAudioSpatializationFormats:'; { unavailable in tvos, watchos }
    function allowedAudioSpatializationFormats: AVAudioSpatializationFormats; message 'allowedAudioSpatializationFormats'; { unavailable in tvos, watchos }
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
  end;

type
  AVPlayerItemPlayability = objccategory external (AVPlayerItem)
    function loadedTimeRanges: NSArray; message 'loadedTimeRanges';
    function isPlaybackLikelyToKeepUp: objcbool; message 'isPlaybackLikelyToKeepUp';
    function isPlaybackBufferFull: objcbool; message 'isPlaybackBufferFull';
    function isPlaybackBufferEmpty: objcbool; message 'isPlaybackBufferEmpty';
    procedure setCanUseNetworkResourcesForLiveStreamingWhilePaused(newValue: objcbool); message 'setCanUseNetworkResourcesForLiveStreamingWhilePaused:'; { available in macos , ios , tvos , watchos  }
    function canUseNetworkResourcesForLiveStreamingWhilePaused: objcbool; message 'canUseNetworkResourcesForLiveStreamingWhilePaused'; { available in macos , ios , tvos , watchos  }
    procedure setPreferredForwardBufferDuration(newValue: NSTimeInterval); message 'setPreferredForwardBufferDuration:'; { available in macos , ios , tvos , watchos  }
    function preferredForwardBufferDuration: NSTimeInterval; message 'preferredForwardBufferDuration'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemVariantControl = objccategory external (AVPlayerItem)
    procedure setPreferredPeakBitRate(newValue: double); message 'setPreferredPeakBitRate:'; { available in macos , ios , tvos , watchos  }
    function preferredPeakBitRate: double; message 'preferredPeakBitRate'; { available in macos , ios , tvos , watchos  }
    procedure setPreferredMaximumResolution(newValue: CGSize); message 'setPreferredMaximumResolution:'; { unavailable in watchos }
    function preferredMaximumResolution: CGSize; message 'preferredMaximumResolution'; { unavailable in watchos }
    procedure setStartsOnFirstEligibleVariant(newValue: objcbool); message 'setStartsOnFirstEligibleVariant:'; { available in macos , ios , tvos , watchos  }
    function startsOnFirstEligibleVariant: objcbool; message 'startsOnFirstEligibleVariant'; { available in macos , ios , tvos , watchos  }
    procedure setVariantPreferences(newValue: AVVariantPreferences); message 'setVariantPreferences:'; { available in macos , ios , tvos , watchos  }
    function variantPreferences: AVVariantPreferences; message 'variantPreferences'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemMediaSelection = objccategory external (AVPlayerItem)
    procedure selectMediaOption_inMediaSelectionGroup (mediaSelectionOption: AVMediaSelectionOption; mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOption:inMediaSelectionGroup:'; { available in macos , ios , tvos , watchos  }
    procedure selectMediaOptionAutomaticallyInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOptionAutomaticallyInMediaSelectionGroup:'; { available in macos , ios , tvos , watchos  }
    function currentMediaSelection: AVMediaSelection; message 'currentMediaSelection'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemLogging = objccategory external (AVPlayerItem)
    function accessLog: AVPlayerItemAccessLog; message 'accessLog'; { available in macos , ios , tvos , watchos  }
    function errorLog: AVPlayerItemErrorLog; message 'errorLog'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemOutputs = objccategory external (AVPlayerItem)
    procedure addOutput (output: AVPlayerItemOutput); message 'addOutput:'; { available in macos , ios , tvos , watchos  }
    procedure removeOutput (output: AVPlayerItemOutput); message 'removeOutput:'; { available in macos , ios , tvos , watchos  }
    function outputs: NSArray; message 'outputs'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemMediaDataCollectors = objccategory external (AVPlayerItem)
    procedure addMediaDataCollector (collector: AVPlayerItemMediaDataCollector); message 'addMediaDataCollector:'; { available in macos , ios , tvos , watchos  }
    procedure removeMediaDataCollector (collector: AVPlayerItemMediaDataCollector); message 'removeMediaDataCollector:'; { available in macos , ios , tvos , watchos  }
    function mediaDataCollectors: NSArray; message 'mediaDataCollectors'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVPlayerItemDeprecated = objccategory external (AVPlayerItem)
    procedure seekToTime (time: CMTime); message 'seekToTime:'; { unavailable in watchos }
    procedure seekToTime_toleranceBefore_toleranceAfter (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime); message 'seekToTime:toleranceBefore:toleranceAfter:'; { unavailable in watchos }
    function seekToDate (date: NSDate): objcbool; message 'seekToDate:'; { unavailable in watchos }
    function selectedMediaOptionInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): AVMediaSelectionOption; message 'selectedMediaOptionInMediaSelectionGroup:'; { unavailable in watchos }
  end;


type
  AVPlayerItemAccessLog = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemAccessLog: AVPlayerItemAccessLogInternal;
  public
    function extendedLogData: NSData; message 'extendedLogData';
    function extendedLogDataStringEncoding: NSStringEncoding; message 'extendedLogDataStringEncoding';
    function events: NSArray; message 'events';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVPlayerItemErrorLog = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemErrorLog: AVPlayerItemErrorLogInternal;
  public
    function extendedLogData: NSData; message 'extendedLogData';
    function extendedLogDataStringEncoding: NSStringEncoding; message 'extendedLogDataStringEncoding';
    function events: NSArray; message 'events';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVPlayerItemAccessLogEvent = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemAccessLogEvent: AVPlayerItemAccessLogEventInternal;
  public
    function numberOfSegmentsDownloaded: NSInteger; message 'numberOfSegmentsDownloaded'; { unavailable in watchos }
    function numberOfMediaRequests: NSInteger; message 'numberOfMediaRequests'; { available in macos , ios , tvos , watchos  }
    function playbackStartDate: NSDate; message 'playbackStartDate';
    function URI: NSString; message 'URI';
    function serverAddress: NSString; message 'serverAddress';
    function numberOfServerAddressChanges: NSInteger; message 'numberOfServerAddressChanges';
    function playbackSessionID: NSString; message 'playbackSessionID';
    function playbackStartOffset: NSTimeInterval; message 'playbackStartOffset';
    function segmentsDownloadedDuration: NSTimeInterval; message 'segmentsDownloadedDuration';
    function durationWatched: NSTimeInterval; message 'durationWatched';
    function numberOfStalls: NSInteger; message 'numberOfStalls';
    function numberOfBytesTransferred: clonglong; message 'numberOfBytesTransferred';
    function transferDuration: NSTimeInterval; message 'transferDuration'; { available in macos , ios , tvos , watchos  }
    function observedBitrate: double; message 'observedBitrate';
    function indicatedBitrate: double; message 'indicatedBitrate';
    function indicatedAverageBitrate: double; message 'indicatedAverageBitrate'; { available in macos , ios , tvos , watchos  }
    function averageVideoBitrate: double; message 'averageVideoBitrate'; { unavailable in watchos }
    function averageAudioBitrate: double; message 'averageAudioBitrate'; { available in macos , ios , tvos , watchos  }
    function numberOfDroppedVideoFrames: NSInteger; message 'numberOfDroppedVideoFrames';
    function startupTime: NSTimeInterval; message 'startupTime'; { available in macos , ios , tvos , watchos  }
    function downloadOverdue: NSInteger; message 'downloadOverdue'; { available in macos , ios , tvos , watchos  }
    function observedMaxBitrate: double; message 'observedMaxBitrate'; { available in macos , ios , tvos , watchos  }
    function observedMinBitrate: double; message 'observedMinBitrate'; { available in macos , ios , tvos , watchos  }
    function observedBitrateStandardDeviation: double; message 'observedBitrateStandardDeviation'; { available in macos , ios , tvos , watchos  }
    function playbackType: NSString; message 'playbackType'; { available in macos , ios , tvos , watchos  }
    function mediaRequestsWWAN: NSInteger; message 'mediaRequestsWWAN'; { available in macos , ios , tvos , watchos  }
    function switchBitrate: double; message 'switchBitrate'; { available in macos , ios , tvos , watchos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVPlayerItemErrorLogEvent = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemErrorLogEvent: AVPlayerItemErrorLogEventInternal;
  public
    function date: NSDate; message 'date';
    function URI: NSString; message 'URI';
    function serverAddress: NSString; message 'serverAddress';
    function playbackSessionID: NSString; message 'playbackSessionID';
    function errorStatusCode: NSInteger; message 'errorStatusCode';
    function errorDomain: NSString; message 'errorDomain';
    function errorComment: NSString; message 'errorComment';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$else}
{$endif}
