{ Parsed from AVFoundation.framework AVMovie.h }

{$ifdef TYPES}
type
  AVMoviePtr = ^AVMovie;
  AVMutableMoviePtr = ^AVMutableMovie;
  AVMediaDataStoragePtr = ^AVMediaDataStorage;
  AVFragmentedMoviePtr = ^AVFragmentedMovie;
  AVFragmentedMovieMinderPtr = ^AVFragmentedMovieMinder;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVMovieReferenceRestrictionsKey: NSString { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMovie = objcclass external (AVAsset, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _movie: AVMovieInternal;
  public
    class function movieTypes: NSArray; message 'movieTypes';
    class function movieWithURL_options (URL: NSURL; options: NSDictionary): id; message 'movieWithURL:options:';
    function initWithURL_options (URL: NSURL; options: NSDictionary): id; message 'initWithURL:options:'; { NS_DESIGNATED_INITIALIZER }
    class function movieWithData_options (data: NSData; options: NSDictionary): id; message 'movieWithData:options:'; { unavailable in tvos }
    function initWithData_options (data: NSData; options: NSDictionary): id; message 'initWithData:options:'; { unavailable in tvos }
    function URL: NSURL; message 'URL';
    function data: NSData; message 'data'; { unavailable in tvos }
    function defaultMediaDataStorage: AVMediaDataStorage; message 'defaultMediaDataStorage'; { unavailable in tvos }
    function tracks: NSArray; message 'tracks';
    function canContainMovieFragments: objcbool; message 'canContainMovieFragments';
    function containsMovieFragments: objcbool; message 'containsMovieFragments'; { unavailable in tvos }

    { Adopted protocols }
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  AVMovieWritingOptions = NSUInteger;
  AVMovieWritingOptionsPtr = ^AVMovieWritingOptions;

const
  AVMovieWritingAddMovieHeaderToDestination = 0;
  AVMovieWritingTruncateDestinationToMovieHeaderOnly = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  AVMovieMovieHeaderSupport = objccategory external (AVMovie)
    function movieHeaderWithFileType_error (fileType: AVFileType; outError: NSErrorPtr): NSData; message 'movieHeaderWithFileType:error:'; { unavailable in tvos }
    function writeMovieHeaderToURL_fileType_options_error (URL_: NSURL; fileType: AVFileType; options: AVMovieWritingOptions; outError: NSErrorPtr): objcbool; message 'writeMovieHeaderToURL:fileType:options:error:'; { unavailable in tvos }
    function isCompatibleWithFileType (fileType: AVFileType): objcbool; message 'isCompatibleWithFileType:'; { unavailable in tvos }
  end;

type
  AVMovieTrackInspection = objccategory external (AVMovie)
    function trackWithTrackID (trackID: CMPersistentTrackID): AVMovieTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVMutableMovie = objcclass external (AVMovie)
  private
    _mutableMovieInternal: AVMutableMovieInternal;
  public
    class function movieWithURL_options_error (URL_: NSURL; options: NSDictionary; outError: NSErrorPtr): id; message 'movieWithURL:options:error:';
    function initWithURL_options_error (URL_: NSURL; options: NSDictionary; outError: NSErrorPtr): id; message 'initWithURL:options:error:'; { NS_DESIGNATED_INITIALIZER }
    class function movieWithData_options_error (data_: NSData; options: NSDictionary; outError: NSErrorPtr): id; message 'movieWithData:options:error:'; { unavailable in tvos }
    function initWithData_options_error (data_: NSData; options: NSDictionary; outError: NSErrorPtr): id; message 'initWithData:options:error:'; { NS_DESIGNATED_INITIALIZER }
    class function movieWithSettingsFromMovie_options_error (movie: AVMovie; options: NSDictionary; outError: NSErrorPtr): id; message 'movieWithSettingsFromMovie:options:error:';
    function initWithSettingsFromMovie_options_error (movie: AVMovie; options: NSDictionary; outError: NSErrorPtr): id; message 'initWithSettingsFromMovie:options:error:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPreferredRate(newValue: single); message 'setPreferredRate:';
    function preferredRate: single; message 'preferredRate';
    procedure setPreferredVolume(newValue: single); message 'setPreferredVolume:';
    function preferredVolume: single; message 'preferredVolume';
    procedure setPreferredTransform(newValue: CGAffineTransform); message 'setPreferredTransform:';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
    procedure setTimescale(newValue: CMTimeScale); message 'setTimescale:';
    function timescale: CMTimeScale; message 'timescale';
    function tracks: NSArray; message 'tracks';
  end;


type
  AVMutableMovieMovieLevelEditing = objccategory external (AVMutableMovie)
    procedure setModified(newValue: objcbool); message 'setModified:';
    function isModified: objcbool; message 'isModified';
    procedure setDefaultMediaDataStorage(newValue: AVMediaDataStorage); message 'setDefaultMediaDataStorage:';
    function defaultMediaDataStorage: AVMediaDataStorage; message 'defaultMediaDataStorage';
    procedure setInterleavingPeriod(newValue: CMTime); message 'setInterleavingPeriod:';
    function interleavingPeriod: CMTime; message 'interleavingPeriod';
    function insertTimeRange_ofAsset_atTime_copySampleData_error (timeRange: CMTimeRange; asset: AVAsset; startTime: CMTime; copySampleData: objcbool; outError: NSErrorPtr): objcbool; message 'insertTimeRange:ofAsset:atTime:copySampleData:error:';
    procedure insertEmptyTimeRange (timeRange: CMTimeRange); message 'insertEmptyTimeRange:';
    procedure removeTimeRange (timeRange: CMTimeRange); message 'removeTimeRange:';
    procedure scaleTimeRange_toDuration (timeRange: CMTimeRange; duration_: CMTime); message 'scaleTimeRange:toDuration:';
  end;

type
  AVMutableMovieTrackLevelEditing = objccategory external (AVMutableMovie)
    function mutableTrackCompatibleWithTrack (track: AVAssetTrack): AVMutableMovieTrack; message 'mutableTrackCompatibleWithTrack:';
    function addMutableTrackWithMediaType_copySettingsFromTrack_options (mediaType: AVMediaType; track: AVAssetTrack; options: NSDictionary): AVMutableMovieTrack; message 'addMutableTrackWithMediaType:copySettingsFromTrack:options:';
    function addMutableTracksCopyingSettingsFromTracks_options (existingTracks: NSArray; options: NSDictionary): NSArray; message 'addMutableTracksCopyingSettingsFromTracks:options:';
    procedure removeTrack (track: AVMovieTrack); message 'removeTrack:';
  end;

type
  AVMutableMovieMetadataEditing = objccategory external (AVMutableMovie)
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
  end;

type
  AVMutableMovieTrackInspection = objccategory external (AVMutableMovie)
    function trackWithTrackID (trackID: CMPersistentTrackID): AVMutableMovieTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVMediaDataStorage = objcclass external (NSObject)
  private
    _mediaDataStorageInternal: AVMediaDataStorageInternal;
  public
    function initWithURL_options (URL: NSURL; options: NSDictionary): id; message 'initWithURL:options:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFragmentedMovieContainsMovieFragmentsDidChangeNotification: NSString { unavailable in tvos }; cvar; external;
  AVFragmentedMovieDurationDidChangeNotification: NSString { unavailable in tvos }; cvar; external;
  AVFragmentedMovieWasDefragmentedNotification: NSString { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedMovie = objcclass external (AVMovie, AVFragmentMindingProtocol)
  private
  public
    function tracks: NSArray; message 'tracks';

    { Adopted protocols }
    function isAssociatedWithFragmentMinder: objcbool; message 'isAssociatedWithFragmentMinder'; { available in macos , ios , tvos , watchos  }
  end;


type
  AVFragmentedMovieTrackInspection = objccategory external (AVFragmentedMovie)
    function trackWithTrackID (trackID: CMPersistentTrackID): AVFragmentedMovieTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVFragmentedMovieMinder = objcclass external (AVFragmentedAssetMinder)
  public
    class function fragmentedMovieMinderWithMovie_mindingInterval (movie: AVFragmentedMovie; mindingInterval_: NSTimeInterval): id; message 'fragmentedMovieMinderWithMovie:mindingInterval:';
    function initWithMovie_mindingInterval (movie: AVFragmentedMovie; mindingInterval_: NSTimeInterval): id; message 'initWithMovie:mindingInterval:'; { NS_DESIGNATED_INITIALIZER }
    procedure setMindingInterval(newValue: NSTimeInterval); message 'setMindingInterval:';
    function mindingInterval: NSTimeInterval; message 'mindingInterval';
    function movies: NSArray; message 'movies';
    procedure addFragmentedMovie (movie: AVFragmentedMovie); message 'addFragmentedMovie:';
    procedure removeFragmentedMovie (movie: AVFragmentedMovie); message 'removeFragmentedMovie:';
  end;
{$endif}

{$else}
{$endif}
