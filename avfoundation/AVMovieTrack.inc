{ Parsed from AVFoundation.framework AVMovieTrack.h }

{$ifdef TYPES}
type
  AVMovieTrackPtr = ^AVMovieTrack;
  AVMutableMovieTrackPtr = ^AVMutableMovieTrack;
  AVFragmentedMovieTrackPtr = ^AVFragmentedMovieTrack;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVMovieTrack = objcclass external (AVAssetTrack)
  private
    _movieTrackInternal: AVMovieTrackInternal;
  public
    function mediaPresentationTimeRange: CMTimeRange; message 'mediaPresentationTimeRange'; { unavailable in tvos } { available in macos 10.11, ios 13.0, watchos 6.0 }
    function mediaDecodeTimeRange: CMTimeRange; message 'mediaDecodeTimeRange'; { unavailable in tvos } { available in macos 10.11, ios 13.0, watchos 6.0 }
    function alternateGroupID: NSInteger; message 'alternateGroupID'; { unavailable in tvos } { available in macos 10.11, ios 13.0, watchos 6.0 }
  end;


type
  AVMovieTrackMediaDataStorage = objccategory external (AVMovieTrack)
    function mediaDataStorage: AVMediaDataStorage; message 'mediaDataStorage'; { unavailable in tvos } { available in macos 10.11, ios 13.0, watchos 6.0 }
  end;


type
  AVMutableMovieTrack = objcclass external (AVMovieTrack)
  private
    _mutableMovieTrackInternal: AVMutableMovieTrackInternal;
  public
    procedure setMediaDataStorage(newValue: AVMediaDataStorage); message 'setMediaDataStorage:';
    function mediaDataStorage: AVMediaDataStorage; message 'mediaDataStorage';
    procedure setSampleReferenceBaseURL(newValue: NSURL); message 'setSampleReferenceBaseURL:';
    function sampleReferenceBaseURL: NSURL; message 'sampleReferenceBaseURL';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setAlternateGroupID(newValue: NSInteger); message 'setAlternateGroupID:';
    function alternateGroupID: NSInteger; message 'alternateGroupID';
    procedure setModified(newValue: objcbool); message 'setModified:';
    function isModified: objcbool; message 'isModified';
    function hasProtectedContent: objcbool; message 'hasProtectedContent';
    procedure setTimescale(newValue: CMTimeScale); message 'setTimescale:';
    function timescale: CMTimeScale; message 'timescale';
  end;


type
  AVMutableMovieTrackLanguageProperties = objccategory external (AVMutableMovieTrack)
    procedure setLanguageCode(newValue: NSString); message 'setLanguageCode:';
    function languageCode: NSString; message 'languageCode';
    procedure setExtendedLanguageTag(newValue: NSString); message 'setExtendedLanguageTag:';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
  end;

type
  AVMutableMovieTrackVisualProperties = objccategory external (AVMutableMovieTrack)
    procedure setNaturalSize(newValue: CGSize); message 'setNaturalSize:';
    function naturalSize: CGSize; message 'naturalSize';
    procedure setPreferredTransform(newValue: CGAffineTransform); message 'setPreferredTransform:';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
    procedure setLayer(newValue: NSInteger); message 'setLayer:';
    function layer: NSInteger; message 'layer';
    procedure setCleanApertureDimensions(newValue: CGSize); message 'setCleanApertureDimensions:';
    function cleanApertureDimensions: CGSize; message 'cleanApertureDimensions';
    procedure setProductionApertureDimensions(newValue: CGSize); message 'setProductionApertureDimensions:';
    function productionApertureDimensions: CGSize; message 'productionApertureDimensions';
    procedure setEncodedPixelsDimensions(newValue: CGSize); message 'setEncodedPixelsDimensions:';
    function encodedPixelsDimensions: CGSize; message 'encodedPixelsDimensions';
  end;

type
  AVMutableMovieTrackAudibleProperties = objccategory external (AVMutableMovieTrack)
    procedure setPreferredVolume(newValue: single); message 'setPreferredVolume:';
    function preferredVolume: single; message 'preferredVolume';
  end;

type
  AVMutableMovieTrackChunkProperties = objccategory external (AVMutableMovieTrack)
    procedure setPreferredMediaChunkSize(newValue: NSInteger); message 'setPreferredMediaChunkSize:';
    function preferredMediaChunkSize: NSInteger; message 'preferredMediaChunkSize';
    procedure setPreferredMediaChunkDuration(newValue: CMTime); message 'setPreferredMediaChunkDuration:';
    function preferredMediaChunkDuration: CMTime; message 'preferredMediaChunkDuration';
    procedure setPreferredMediaChunkAlignment(newValue: NSInteger); message 'setPreferredMediaChunkAlignment:';
    function preferredMediaChunkAlignment: NSInteger; message 'preferredMediaChunkAlignment';
  end;

type
  AVMutableMovieTrackTrackLevelEditing = objccategory external (AVMutableMovieTrack)
    function insertTimeRange_ofTrack_atTime_copySampleData_error (timeRange: CMTimeRange; track: AVAssetTrack; startTime: CMTime; copySampleData: objcbool; outError: NSErrorPtr): objcbool; message 'insertTimeRange:ofTrack:atTime:copySampleData:error:';
    procedure insertEmptyTimeRange (timeRange: CMTimeRange); message 'insertEmptyTimeRange:';
    procedure removeTimeRange (timeRange: CMTimeRange); message 'removeTimeRange:';
    procedure scaleTimeRange_toDuration (timeRange: CMTimeRange; duration: CMTime); message 'scaleTimeRange:toDuration:';
  end;

type
  AVMutableMovieTrackMetadataEditing = objccategory external (AVMutableMovieTrack)
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
  end;

type
  AVMutableMovieTrackTrackAssociations = objccategory external (AVMutableMovieTrack)
    procedure addTrackAssociationToTrack_type (movieTrack: AVMovieTrack; trackAssociationType: AVTrackAssociationType); message 'addTrackAssociationToTrack:type:';
    procedure removeTrackAssociationToTrack_type (movieTrack: AVMovieTrack; trackAssociationType: AVTrackAssociationType); message 'removeTrackAssociationToTrack:type:';
  end;

type
  AVMutableMovieTrackFormatDescriptions = objccategory external (AVMutableMovieTrack)
    procedure replaceFormatDescription_withFormatDescription (formatDescription: CMFormatDescriptionRef; newFormatDescription: CMFormatDescriptionRef); message 'replaceFormatDescription:withFormatDescription:'; { unavailable in tvos } { available in macos 10.13, ios 13.0, watchos 6.0 }
  end;

type
  AVMutableMovieTrackSampleLevelEditing = objccategory external (AVMutableMovieTrack)
    function appendSampleBuffer_decodeTime_presentationTime_error (sampleBuffer: CMSampleBufferRef; outDecodeTime: CMTimePtr; outPresentationTime: CMTimePtr; outError: NSErrorPtr): objcbool; message 'appendSampleBuffer:decodeTime:presentationTime:error:'; { unavailable in tvos } { available in macos 10.12, ios 13.0, watchos 6.0 }
    function insertMediaTimeRange_intoTimeRange (mediaTimeRange: CMTimeRange; trackTimeRange: CMTimeRange): objcbool; message 'insertMediaTimeRange:intoTimeRange:'; { unavailable in tvos } { available in macos 10.12, ios 13.0, watchos 6.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFragmentedMovieTrackTimeRangeDidChangeNotification: NSString { unavailable in tvos } { available in macos 10.10, ios 13.0, watchos 6.0 }; cvar; external;
  AVFragmentedMovieTrackSegmentsDidChangeNotification: NSString { unavailable in tvos } { available in macos 10.10, ios 13.0, watchos 6.0 }; cvar; external;
  AVFragmentedMovieTrackTotalSampleDataLengthDidChangeNotification: NSString { unavailable in ios, tvos, watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedMovieTrack = objcclass external (AVMovieTrack)
  private
    _fragmentedMovieTrack: AVFragmentedMovieTrackInternal;
  end;
{$endif}

{$else}
{$endif}
