{ Parsed from AVFoundation.framework AVAssetReaderOutput.h }

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
    procedure setAlwaysCopiesSampleData(newValue: objcbool); message 'setAlwaysCopiesSampleData:'; { unavailable in watchos } { available in macos 10.8, ios 5.0, tvos 9.0 }
    function alwaysCopiesSampleData: objcbool; message 'alwaysCopiesSampleData'; { unavailable in watchos } { available in macos 10.8, ios 5.0, tvos 9.0 }
    function copyNextSampleBuffer: CMSampleBufferRef; message 'copyNextSampleBuffer'; { CF_RETURNS_RETAINED }
  end;


type
  AVAssetReaderOutputRandomAccess = objccategory external (AVAssetReaderOutput)
    procedure setSupportsRandomAccess(newValue: objcbool); message 'setSupportsRandomAccess:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function supportsRandomAccess: objcbool; message 'supportsRandomAccess'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure resetForReadingTimeRanges (timeRanges: NSArray); message 'resetForReadingTimeRanges:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure markConfigurationAsFinal; message 'markConfigurationAsFinal'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
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
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
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
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
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
    function customVideoCompositor: AVVideoCompositingProtocol; message 'customVideoCompositor'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
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
