{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetTrack.h }

{ Types from AVAssetTrackTrackAssociations }
{$ifdef TYPES}

type
  AVTrackAssociationType = NSString;
type
  AVTrackAssociationTypePtr = ^AVTrackAssociationType;
{$endif}


{$ifdef TYPES}
type
  AVAssetTrackPtr = ^AVAssetTrack;
  AVFragmentedAssetTrackPtr = ^AVFragmentedAssetTrack;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetTrack = objcclass external (NSObject, NSCopyingProtocol, AVAsynchronousKeyValueLoadingProtocol)
  private
    _track: AVAssetTrackInternal;
  public
    function asset: AVAsset; message 'asset';
    function trackID: CMPersistentTrackID; message 'trackID';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSArray; handler: AVAsynchronousKeyValueLoadingLoadValuesAsynchronouslyForKeysCallback); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
    function statusOfValueForKey_error (key: NSString; outError: NSErrorPtr): AVKeyValueStatus; message 'statusOfValueForKey:error:';
  end;


type
  AVAssetTrackBasicPropertiesAndCharacteristics = objccategory external (AVAssetTrack)
    function mediaType: AVMediaType; message 'mediaType';
    function formatDescriptions: NSArray; message 'formatDescriptions';
    function isPlayable: objcbool; message 'isPlayable'; { available in macos , ios , tvos , watchos  }
    function isDecodable: objcbool; message 'isDecodable'; { available in macos , ios , tvos , watchos  }
    function isEnabled: objcbool; message 'isEnabled';
    function isSelfContained: objcbool; message 'isSelfContained';
    function totalSampleDataLength: clonglong; message 'totalSampleDataLength';
    function hasMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): objcbool; message 'hasMediaCharacteristic:';
  end;

type
  AVAssetTrackTemporalProperties = objccategory external (AVAssetTrack)
    function timeRange: CMTimeRange; message 'timeRange';
    function naturalTimeScale: CMTimeScale; message 'naturalTimeScale';
    function estimatedDataRate: single; message 'estimatedDataRate';
  end;

type
  AVAssetTrackLanguageProperties = objccategory external (AVAssetTrack)
    function languageCode: NSString; message 'languageCode';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
  end;

type
  AVAssetTrackPropertiesForVisualCharacteristic = objccategory external (AVAssetTrack)
    function naturalSize: CGSize; message 'naturalSize';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
  end;

type
  AVAssetTrackPropertiesForAudibleCharacteristic = objccategory external (AVAssetTrack)
    function preferredVolume: single; message 'preferredVolume';
    function hasAudioSampleDependencies: objcbool; message 'hasAudioSampleDependencies'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVAssetTrackPropertiesForFrameBasedCharacteristic = objccategory external (AVAssetTrack)
    function nominalFrameRate: single; message 'nominalFrameRate';
    function minFrameDuration: CMTime; message 'minFrameDuration'; { available in macos , ios , tvos , watchos  }
    function requiresFrameReordering: objcbool; message 'requiresFrameReordering'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVAssetTrackSegments = objccategory external (AVAssetTrack)
    function segments: NSArray; message 'segments';
    function segmentForTrackTime (trackTime: CMTime): AVAssetTrackSegment; message 'segmentForTrackTime:';
    function samplePresentationTimeForTrackTime (trackTime: CMTime): CMTime; message 'samplePresentationTimeForTrackTime:';
  end;

type
  AVAssetTrackMetadataReading = objccategory external (AVAssetTrack)
    function commonMetadata: NSArray; message 'commonMetadata';
    function metadata: NSArray; message 'metadata'; { available in macos , ios , tvos , watchos  }
    function availableMetadataFormats: NSArray; message 'availableMetadataFormats';
    function metadataForFormat (format: AVMetadataFormat): NSArray; message 'metadataForFormat:';
  end;

type
  AVAssetTrackTrackAssociations = objccategory external (AVAssetTrack)
    function availableTrackAssociationTypes: NSArray; message 'availableTrackAssociationTypes'; { available in macos , ios , tvos , watchos  }
    function associatedTracksOfType (trackAssociationType: AVTrackAssociationType): NSArray; message 'associatedTracksOfType:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  AVAssetTrackSampleCursorProvision = objccategory external (AVAssetTrack)
    function canProvideSampleCursors: objcbool; message 'canProvideSampleCursors'; { unavailable in ios, tvos, watchos }
    function makeSampleCursorWithPresentationTimeStamp (presentationTimeStamp: CMTime): AVSampleCursor; message 'makeSampleCursorWithPresentationTimeStamp:'; { unavailable in ios, tvos, watchos }
    function makeSampleCursorAtFirstSampleInDecodeOrder: AVSampleCursor; message 'makeSampleCursorAtFirstSampleInDecodeOrder'; { unavailable in ios, tvos, watchos }
    function makeSampleCursorAtLastSampleInDecodeOrder: AVSampleCursor; message 'makeSampleCursorAtLastSampleInDecodeOrder'; { unavailable in ios, tvos, watchos }
  end;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetTrackTimeRangeDidChangeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVAssetTrackSegmentsDidChangeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVAssetTrackTrackAssociationsDidChangeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedAssetTrack = objcclass external (AVAssetTrack)
  private
    _fragmentedAssetTrack: AVFragmentedAssetTrackInternal;
  end;
{$endif}

{$else}
{$endif}
