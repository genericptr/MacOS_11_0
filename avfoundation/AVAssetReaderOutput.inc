{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetReaderOutput.h }

{$ifdef TYPES}
type
  AVAssetReaderOutputPtr = ^AVAssetReaderOutput;
  AVAssetReaderTrackOutputPtr = ^AVAssetReaderTrackOutput;
  AVAssetReaderAudioMixOutputPtr = ^AVAssetReaderAudioMixOutput;
  AVAssetReaderVideoCompositionOutputPtr = ^AVAssetReaderVideoCompositionOutput;
  AVAssetReaderOutputMetadataAdaptorPtr = ^AVAssetReaderOutputMetadataAdaptor;
  AVAssetReaderSampleReferenceOutputPtr = ^AVAssetReaderSampleReferenceOutput;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetReaderOutput = objcclass external (NSObject)
  private
    _internal: AVAssetReaderOutputInternal;
  public
    function mediaType: AVMediaType; message 'mediaType';
    procedure setAlwaysCopiesSampleData(newValue: objcbool); message 'setAlwaysCopiesSampleData:'; { unavailable in watchos }
    function alwaysCopiesSampleData: objcbool; message 'alwaysCopiesSampleData'; { unavailable in watchos }
    function copyNextSampleBuffer: CMSampleBufferRef; message 'copyNextSampleBuffer'; { CF_RETURNS_RETAINED }
  end;


type
  AVAssetReaderOutputRandomAccess = objccategory external (AVAssetReaderOutput)
    procedure setSupportsRandomAccess(newValue: objcbool); message 'setSupportsRandomAccess:'; { unavailable in watchos }
    function supportsRandomAccess: objcbool; message 'supportsRandomAccess'; { unavailable in watchos }
    procedure resetForReadingTimeRanges (timeRanges: NSArray); message 'resetForReadingTimeRanges:'; { unavailable in watchos }
    procedure markConfigurationAsFinal; message 'markConfigurationAsFinal'; { unavailable in watchos }
  end;


type
  AVAssetReaderTrackOutput = objcclass external (AVAssetReaderOutput)
  private
    _trackOutputInternal: AVAssetReaderTrackOutputInternal;
  public
    class function assetReaderTrackOutputWithTrack_outputSettings (track: AVAssetTrack; outputSettings: NSDictionary): id; message 'assetReaderTrackOutputWithTrack:outputSettings:';
    function initWithTrack_outputSettings (track: AVAssetTrack; outputSettings: NSDictionary): id; message 'initWithTrack:outputSettings:'; { NS_DESIGNATED_INITIALIZER }
    function track: AVAssetTrack; message 'track';
    function outputSettings: NSDictionary; message 'outputSettings';
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { unavailable in watchos }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { unavailable in watchos }
  end;

type
  AVAssetReaderAudioMixOutput = objcclass external (AVAssetReaderOutput)
  private
    _audioMixOutputInternal: AVAssetReaderAudioMixOutputInternal;
  public
    class function assetReaderAudioMixOutputWithAudioTracks_audioSettings (audioTracks: NSArray; audioSettings: NSDictionary): id; message 'assetReaderAudioMixOutputWithAudioTracks:audioSettings:';
    function initWithAudioTracks_audioSettings (audioTracks: NSArray; audioSettings: NSDictionary): id; message 'initWithAudioTracks:audioSettings:'; { NS_DESIGNATED_INITIALIZER }
    function audioTracks: NSArray; message 'audioTracks';
    function audioSettings: NSDictionary; message 'audioSettings';
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { unavailable in watchos }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { unavailable in watchos }
  end;

type
  AVAssetReaderVideoCompositionOutput = objcclass external (AVAssetReaderOutput)
  private
    _videoCompositionOutputInternal: AVAssetReaderVideoCompositionOutputInternal;
  public
    class function assetReaderVideoCompositionOutputWithVideoTracks_videoSettings (videoTracks: NSArray; videoSettings: NSDictionary): id; message 'assetReaderVideoCompositionOutputWithVideoTracks:videoSettings:';
    function initWithVideoTracks_videoSettings (videoTracks: NSArray; videoSettings: NSDictionary): id; message 'initWithVideoTracks:videoSettings:'; { NS_DESIGNATED_INITIALIZER }
    function videoTracks: NSArray; message 'videoTracks';
    function videoSettings: NSDictionary; message 'videoSettings';
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function customVideoCompositor: id; message 'customVideoCompositor'; { unavailable in watchos }
  end;

type
  AVAssetReaderOutputMetadataAdaptor = objcclass external (NSObject)
  private
    _internal: AVAssetReaderOutputMetadataAdaptorInternal;
  public
    class function assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput (trackOutput: AVAssetReaderTrackOutput): id; message 'assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:';
    function initWithAssetReaderTrackOutput (trackOutput: AVAssetReaderTrackOutput): id; message 'initWithAssetReaderTrackOutput:'; { NS_DESIGNATED_INITIALIZER }
    function assetReaderTrackOutput: AVAssetReaderTrackOutput; message 'assetReaderTrackOutput';
    function nextTimedMetadataGroup: AVTimedMetadataGroup; message 'nextTimedMetadataGroup';
  end;

type
  AVAssetReaderSampleReferenceOutput = objcclass external (AVAssetReaderOutput)
  private
    _sampleReferenceOutputInternal: AVAssetReaderSampleReferenceOutputInternal;
  public
    class function assetReaderSampleReferenceOutputWithTrack (track: AVAssetTrack): id; message 'assetReaderSampleReferenceOutputWithTrack:';
    function initWithTrack (track: AVAssetTrack): id; message 'initWithTrack:'; { NS_DESIGNATED_INITIALIZER }
    function track: AVAssetTrack; message 'track';
  end;
{$endif}

{$else}
{$endif}
