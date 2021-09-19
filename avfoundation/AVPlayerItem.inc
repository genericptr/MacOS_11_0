{ Parsed from AVFoundation.framework AVPlayerItem.h }

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
  AVPlayerItemTimeJumpedNotification: NSString { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVPlayerItemDidPlayToEndTimeNotification: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVPlayerItemFailedToPlayToEndTimeNotification: NSString { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }; cvar; external;
  AVPlayerItemPlaybackStalledNotification: NSString { available in macos 10.9, ios 6.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVPlayerItemNewAccessLogEntryNotification: NSString { available in macos 10.9, ios 6.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVPlayerItemNewErrorLogEntryNotification: NSString { available in macos 10.9, ios 6.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVPlayerItemRecommendedTimeOffsetFromLiveDidChangeNotification: NSNotificationName { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  AVPlayerItemMediaSelectionDidChangeNotification: NSNotificationName { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  AVPlayerItemFailedToPlayToEndTimeErrorKey: NSString { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }; cvar; external;
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
    class function playerItemWithAsset_automaticallyLoadedAssetKeys (asset: AVAsset; automaticallyLoadedAssetKeys: NSArray): id; message 'playerItemWithAsset:automaticallyLoadedAssetKeys:'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function initWithURL (URL: NSURL): id; message 'initWithURL:';
    function initWithAsset (asset: AVAsset): id; message 'initWithAsset:';
    function initWithAsset_automaticallyLoadedAssetKeys (asset: AVAsset; automaticallyLoadedAssetKeys: NSArray): id; message 'initWithAsset:automaticallyLoadedAssetKeys:'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function status: AVPlayerItemStatus; message 'status';
    function error: NSError; message 'error';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVPlayerItemInspection = objccategory external (AVPlayerItem)
    function asset: AVAsset; message 'asset';
    function tracks: NSArray; message 'tracks';
    function duration: CMTime; message 'duration'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
    function presentationSize: CGSize; message 'presentationSize';
    function timedMetadata: NSArray; message 'timedMetadata'; { unavailable in watchos }
    function automaticallyLoadedAssetKeys: NSArray; message 'automaticallyLoadedAssetKeys'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVPlayerItemRateAndSteppingSupport = objccategory external (AVPlayerItem)
    function canPlayFastForward: objcbool; message 'canPlayFastForward'; { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }
    function canPlaySlowForward: objcbool; message 'canPlaySlowForward'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    function canPlayReverse: objcbool; message 'canPlayReverse'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    function canPlaySlowReverse: objcbool; message 'canPlaySlowReverse'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    function canPlayFastReverse: objcbool; message 'canPlayFastReverse'; { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }
    function canStepForward: objcbool; message 'canStepForward'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    function canStepBackward: objcbool; message 'canStepBackward'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    procedure setConfiguredTimeOffsetFromLive(newValue: CMTime); message 'setConfiguredTimeOffsetFromLive:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function configuredTimeOffsetFromLive: CMTime; message 'configuredTimeOffsetFromLive'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function recommendedTimeOffsetFromLive: CMTime; message 'recommendedTimeOffsetFromLive'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setAutomaticallyPreservesTimeOffsetFromLive(newValue: objcbool); message 'setAutomaticallyPreservesTimeOffsetFromLive:'; { available in macos 10.15, ios 13.0, tvos 13.0,watchos 6.0 }
    function automaticallyPreservesTimeOffsetFromLive: objcbool; message 'automaticallyPreservesTimeOffsetFromLive'; { available in macos 10.15, ios 13.0, tvos 13.0,watchos 6.0 }
  end;

type
  AVPlayerItemTimeControl = objccategory external (AVPlayerItem)
    function currentTime: CMTime; message 'currentTime';
    procedure setForwardPlaybackEndTime(newValue: CMTime); message 'setForwardPlaybackEndTime:';
    function forwardPlaybackEndTime: CMTime; message 'forwardPlaybackEndTime';
    procedure setReversePlaybackEndTime(newValue: CMTime); message 'setReversePlaybackEndTime:';
    function reversePlaybackEndTime: CMTime; message 'reversePlaybackEndTime';
    function seekableTimeRanges: NSArray; message 'seekableTimeRanges';
    procedure seekToTime_completionHandler (time: CMTime; completionHandler: AVPlayerItemSeekToTimeCallback); message 'seekToTime:completionHandler:'; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }
    procedure seekToTime_toleranceBefore_toleranceAfter_completionHandler (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime; completionHandler: AVPlayerItemSeekToTimeCallback); message 'seekToTime:toleranceBefore:toleranceAfter:completionHandler:'; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }
    procedure cancelPendingSeeks; message 'cancelPendingSeeks'; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }
    function currentDate: NSDate; message 'currentDate';
    function seekToDate_completionHandler (date: NSDate; completionHandler: AVPlayerItemSeekToDateCallback): objcbool; message 'seekToDate:completionHandler:'; { available in macos 10.9, ios 6.0, tvos 9.0, watchos 1.0 }
    procedure stepByCount (stepCount: NSInteger); message 'stepByCount:';
    function timebase: CMTimebaseRef; message 'timebase'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVPlayerItemVisualPresentation = objccategory external (AVPlayerItem)
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:'; { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }
    function videoComposition: AVVideoComposition; message 'videoComposition'; { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }
    function customVideoCompositor: AVVideoCompositingProtocol; message 'customVideoCompositor'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setSeekingWaitsForVideoCompositionRendering(newValue: objcbool); message 'setSeekingWaitsForVideoCompositionRendering:'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    function seekingWaitsForVideoCompositionRendering: objcbool; message 'seekingWaitsForVideoCompositionRendering'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    procedure setTextStyleRules(newValue: NSArray); message 'setTextStyleRules:'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    function textStyleRules: NSArray; message 'textStyleRules'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    procedure setVideoApertureMode(newValue: AVVideoApertureMode); message 'setVideoApertureMode:'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    function videoApertureMode: AVVideoApertureMode; message 'videoApertureMode'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    procedure setAppliesPerFrameHDRDisplayMetadata(newValue: objcbool); message 'setAppliesPerFrameHDRDisplayMetadata:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function appliesPerFrameHDRDisplayMetadata: objcbool; message 'appliesPerFrameHDRDisplayMetadata'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
  end;

type
  AVPlayerItemAudioProcessing = objccategory external (AVPlayerItem)
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    procedure setAudioSpatializationAllowed(newValue: objcbool); message 'setAudioSpatializationAllowed:'; { unavailable in tvos, watchos }
    function isAudioSpatializationAllowed: objcbool; message 'isAudioSpatializationAllowed'; { unavailable in tvos, watchos }
    procedure setAllowedAudioSpatializationFormats(newValue: AVAudioSpatializationFormats); message 'setAllowedAudioSpatializationFormats:'; { unavailable in tvos, watchos } { available in macos 11.0, ios 14.0 }
    function allowedAudioSpatializationFormats: AVAudioSpatializationFormats; message 'allowedAudioSpatializationFormats'; { unavailable in tvos, watchos } { available in macos 11.0, ios 14.0 }
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
  end;

type
  AVPlayerItemPlayability = objccategory external (AVPlayerItem)
    function loadedTimeRanges: NSArray; message 'loadedTimeRanges';
    function isPlaybackLikelyToKeepUp: objcbool; message 'isPlaybackLikelyToKeepUp';
    function isPlaybackBufferFull: objcbool; message 'isPlaybackBufferFull';
    function isPlaybackBufferEmpty: objcbool; message 'isPlaybackBufferEmpty';
    procedure setCanUseNetworkResourcesForLiveStreamingWhilePaused(newValue: objcbool); message 'setCanUseNetworkResourcesForLiveStreamingWhilePaused:'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
    function canUseNetworkResourcesForLiveStreamingWhilePaused: objcbool; message 'canUseNetworkResourcesForLiveStreamingWhilePaused'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
    procedure setPreferredForwardBufferDuration(newValue: NSTimeInterval); message 'setPreferredForwardBufferDuration:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    function preferredForwardBufferDuration: NSTimeInterval; message 'preferredForwardBufferDuration'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
  end;

type
  AVPlayerItemVariantControl = objccategory external (AVPlayerItem)
    procedure setPreferredPeakBitRate(newValue: double); message 'setPreferredPeakBitRate:'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function preferredPeakBitRate: double; message 'preferredPeakBitRate'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    procedure setPreferredMaximumResolution(newValue: CGSize); message 'setPreferredMaximumResolution:'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    function preferredMaximumResolution: CGSize; message 'preferredMaximumResolution'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    procedure setStartsOnFirstEligibleVariant(newValue: objcbool); message 'setStartsOnFirstEligibleVariant:'; { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 }
    function startsOnFirstEligibleVariant: objcbool; message 'startsOnFirstEligibleVariant'; { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 }
    procedure setVariantPreferences(newValue: AVVariantPreferences); message 'setVariantPreferences:'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
    function variantPreferences: AVVariantPreferences; message 'variantPreferences'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
  end;

type
  AVPlayerItemMediaSelection = objccategory external (AVPlayerItem)
    procedure selectMediaOption_inMediaSelectionGroup (mediaSelectionOption: AVMediaSelectionOption; mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOption:inMediaSelectionGroup:'; { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }
    procedure selectMediaOptionAutomaticallyInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOptionAutomaticallyInMediaSelectionGroup:'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function currentMediaSelection: AVMediaSelection; message 'currentMediaSelection'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
  end;

type
  AVPlayerItemLogging = objccategory external (AVPlayerItem)
    function accessLog: AVPlayerItemAccessLog; message 'accessLog'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
    function errorLog: AVPlayerItemErrorLog; message 'errorLog'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
  end;

type
  AVPlayerItemOutputs = objccategory external (AVPlayerItem)
    procedure addOutput (output: AVPlayerItemOutput); message 'addOutput:'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    procedure removeOutput (output: AVPlayerItemOutput); message 'removeOutput:'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    function outputs: NSArray; message 'outputs'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVPlayerItemMediaDataCollectors = objccategory external (AVPlayerItem)
    procedure addMediaDataCollector (collector: AVPlayerItemMediaDataCollector); message 'addMediaDataCollector:'; { available in macos 10.11.3, ios 9.3, tvos 9.3, watchos 2.3 }
    procedure removeMediaDataCollector (collector: AVPlayerItemMediaDataCollector); message 'removeMediaDataCollector:'; { available in macos 10.11.3, ios 9.3, tvos 9.3, watchos 2.3 }
    function mediaDataCollectors: NSArray; message 'mediaDataCollectors'; { available in macos 10.11.3, ios 9.3, tvos 9.3, watchos 2.3 }
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
    function numberOfMediaRequests: NSInteger; message 'numberOfMediaRequests'; { available in macos 10.9, ios 6.0, tvos 9.0, watchos 1.0 }
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
    function transferDuration: NSTimeInterval; message 'transferDuration'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function observedBitrate: double; message 'observedBitrate';
    function indicatedBitrate: double; message 'indicatedBitrate';
    function indicatedAverageBitrate: double; message 'indicatedAverageBitrate'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    function averageVideoBitrate: double; message 'averageVideoBitrate'; { unavailable in watchos } { available in macos 10.12, ios 10.0, tvos 10.0 }
    function averageAudioBitrate: double; message 'averageAudioBitrate'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    function numberOfDroppedVideoFrames: NSInteger; message 'numberOfDroppedVideoFrames';
    function startupTime: NSTimeInterval; message 'startupTime'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function downloadOverdue: NSInteger; message 'downloadOverdue'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function observedMaxBitrate: double; message 'observedMaxBitrate'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function observedMinBitrate: double; message 'observedMinBitrate'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function observedBitrateStandardDeviation: double; message 'observedBitrateStandardDeviation'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function playbackType: NSString; message 'playbackType'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function mediaRequestsWWAN: NSInteger; message 'mediaRequestsWWAN'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
    function switchBitrate: double; message 'switchBitrate'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }

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
