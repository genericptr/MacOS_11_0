{ Parsed from AVFoundation.framework AVAssetExportSession.h }

{$ifdef CALLBACKS}
type
  AVAssetExportSessionExportAsynchronouslyWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
  AVAssetExportSessionDetermineCompatibilityOfExportPresetCallback = reference to procedure (compatible: objcbool); cblock; cdecl;
  AVAssetExportSessionDetermineCompatibleFileTypesWithCompletionHandlerCallback = reference to procedure (compatibleFileTypes: NSArray); cblock; cdecl;
  AVAssetExportSessionEstimateMaximumDurationWithCompletionHandlerCallback = reference to procedure (estimatedMaximumDuration: CMTime; error: NSError); cblock; cdecl;
  AVAssetExportSessionEstimateOutputFileLengthWithCompletionHandlerCallback = reference to procedure (estimatedOutputFileLength: cint64; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAssetExportSessionPtr = ^AVAssetExportSession;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetExportPresetLowQuality: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetMediumQuality: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHighestQuality: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHEVCHighestQuality: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHEVCHighestQualityWithAlpha: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPreset640x480: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPreset960x540: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPreset1280x720: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPreset1920x1080: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPreset3840x2160: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHEVC1920x1080: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHEVC1920x1080WithAlpha: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHEVC3840x2160: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetHEVC3840x2160WithAlpha: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetAppleM4A: NSString { unavailable in watchos }; cvar; external;
  AVAssetExportPresetPassthrough: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetExportPresetAppleM4VCellular: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleM4ViPod: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleM4V480pSD: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleM4VAppleTV: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleM4VWiFi: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleM4V720pHD: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleM4V1080pHD: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleProRes422LPCM: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVAssetExportPresetAppleProRes4444LPCM: NSString { unavailable in ios, tvos, watchos }; cvar; external;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVAssetExportSessionStatus = NSInteger;
  AVAssetExportSessionStatusPtr = ^AVAssetExportSessionStatus;

const
  AVAssetExportSessionStatusUnknown = 0;
  AVAssetExportSessionStatusWaiting = 1;
  AVAssetExportSessionStatusExporting = 2;
  AVAssetExportSessionStatusCompleted = 3;
  AVAssetExportSessionStatusFailed = 4;
  AVAssetExportSessionStatusCancelled = 5;
{$endif}

{$ifdef CLASSES}

type
  AVAssetExportSession = objcclass external (NSObject)
  private
    _exportSession: AVAssetExportSessionInternal;
  public
    class function exportSessionWithAsset_presetName (asset: AVAsset; presetName: NSString): id; message 'exportSessionWithAsset:presetName:'; { unavailable in watchos }
    function initWithAsset_presetName (asset: AVAsset; presetName: NSString): id; message 'initWithAsset:presetName:'; { NS_DESIGNATED_INITIALIZER }
    function presetName: NSString; message 'presetName';
    function asset: AVAsset; message 'asset'; { unavailable in watchos }
    procedure setOutputFileType(newValue: AVFileType); message 'setOutputFileType:';
    function outputFileType: AVFileType; message 'outputFileType';
    procedure setOutputURL(newValue: NSURL); message 'setOutputURL:';
    function outputURL: NSURL; message 'outputURL';
    procedure setShouldOptimizeForNetworkUse(newValue: objcbool); message 'setShouldOptimizeForNetworkUse:';
    function shouldOptimizeForNetworkUse: objcbool; message 'shouldOptimizeForNetworkUse';
    function status: AVAssetExportSessionStatus; message 'status';
    function error: NSError; message 'error';
    procedure exportAsynchronouslyWithCompletionHandler (handler: AVAssetExportSessionExportAsynchronouslyWithCompletionHandlerCallback); message 'exportAsynchronouslyWithCompletionHandler:';
    function progress: single; message 'progress';
    procedure cancelExport; message 'cancelExport';
  end;


type
  AVAssetExportSessionPresets = objccategory external (AVAssetExportSession)
    class function allExportPresets: NSArray; message 'allExportPresets';
    class function exportPresetsCompatibleWithAsset (asset_: AVAsset): NSArray; message 'exportPresetsCompatibleWithAsset:';
    class procedure determineCompatibilityOfExportPreset_withAsset_outputFileType_completionHandler (presetName_: NSString; asset_: AVAsset; outputFileType_: AVFileType; handler: AVAssetExportSessionDetermineCompatibilityOfExportPresetCallback); message 'determineCompatibilityOfExportPreset:withAsset:outputFileType:completionHandler:'; { unavailable in watchos }
  end;

type
  AVAssetExportSessionFileTypes = objccategory external (AVAssetExportSession)
    function supportedFileTypes: NSArray; message 'supportedFileTypes';
    procedure determineCompatibleFileTypesWithCompletionHandler (handler: AVAssetExportSessionDetermineCompatibleFileTypesWithCompletionHandlerCallback); message 'determineCompatibleFileTypesWithCompletionHandler:'; { unavailable in watchos }
  end;

type
  AVAssetExportSessionDurationAndLength = objccategory external (AVAssetExportSession)
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    function maxDuration: CMTime; message 'maxDuration'; { unavailable in watchos }
    function estimatedOutputFileLength: clonglong; message 'estimatedOutputFileLength'; { unavailable in watchos }
    procedure setFileLengthLimit(newValue: clonglong); message 'setFileLengthLimit:'; { unavailable in watchos }
    function fileLengthLimit: clonglong; message 'fileLengthLimit'; { unavailable in watchos }
    procedure estimateMaximumDurationWithCompletionHandler (handler: AVAssetExportSessionEstimateMaximumDurationWithCompletionHandlerCallback); message 'estimateMaximumDurationWithCompletionHandler:'; { unavailable in watchos }
    procedure estimateOutputFileLengthWithCompletionHandler (handler: AVAssetExportSessionEstimateOutputFileLengthWithCompletionHandlerCallback); message 'estimateOutputFileLengthWithCompletionHandler:'; { unavailable in watchos }
  end;

type
  AVAssetExportSessionMetadata = objccategory external (AVAssetExportSession)
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    procedure setMetadataItemFilter(newValue: AVMetadataItemFilter); message 'setMetadataItemFilter:'; { unavailable in watchos }
    function metadataItemFilter: AVMetadataItemFilter; message 'metadataItemFilter'; { unavailable in watchos }
  end;

type
  AVAssetExportSessionMediaProcessing = objccategory external (AVAssetExportSession)
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { unavailable in watchos }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { unavailable in watchos }
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function customVideoCompositor: AVVideoCompositingProtocol; message 'customVideoCompositor'; { unavailable in watchos }
  end;

type
  AVAssetExportSessionMultipass = objccategory external (AVAssetExportSession)
    procedure setCanPerformMultiplePassesOverSourceMediaData(newValue: objcbool); message 'setCanPerformMultiplePassesOverSourceMediaData:'; { unavailable in watchos }
    function canPerformMultiplePassesOverSourceMediaData: objcbool; message 'canPerformMultiplePassesOverSourceMediaData'; { unavailable in watchos }
    procedure setDirectoryForTemporaryFiles(newValue: NSURL); message 'setDirectoryForTemporaryFiles:'; { unavailable in watchos }
    function directoryForTemporaryFiles: NSURL; message 'directoryForTemporaryFiles'; { unavailable in watchos }
  end;
{$endif}

{$else}
{$endif}
