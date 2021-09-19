{ Parsed from AVFoundation.framework AVAsset.h }

{ Types from AVAsset_AVAssetReferenceRestrictions }
{$ifdef TYPES}

type
  AVAssetReferenceRestrictions = NSUInteger;
type
  AVAssetReferenceRestrictionsPtr = ^AVAssetReferenceRestrictions;

const
  AVAssetReferenceRestrictionForbidNone = 0;
  AVAssetReferenceRestrictionForbidRemoteReferenceToLocal = 1 shl 0;
  AVAssetReferenceRestrictionForbidLocalReferenceToRemote = 1 shl 1;
  AVAssetReferenceRestrictionForbidCrossSiteReference = 1 shl 2;
  AVAssetReferenceRestrictionForbidLocalReferenceToLocal = 1 shl 3;
  AVAssetReferenceRestrictionForbidAll = $FFFF;
  AVAssetReferenceRestrictionDefaultPolicy = AVAssetReferenceRestrictionForbidLocalReferenceToRemote;
{$endif}


{$ifdef TYPES}
type
  AVAssetPtr = ^AVAsset;
  AVURLAssetPtr = ^AVURLAsset;
  AVFragmentedAssetPtr = ^AVFragmentedAsset;
  AVFragmentedAssetMinderPtr = ^AVFragmentedAssetMinder;
  AVFragmentMindingProtocolPtr = ^AVFragmentMindingProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAsset = objcclass external (NSObject, NSCopyingProtocol, AVAsynchronousKeyValueLoadingProtocol)
  private
    _asset: AVAssetInternal;
  public
    class function assetWithURL (URL: NSURL): id; message 'assetWithURL:';
    function duration: CMTime; message 'duration';
    function preferredRate: single; message 'preferredRate';
    function preferredVolume: single; message 'preferredVolume';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
    function naturalSize: CGSize; message 'naturalSize'; { unavailable in watchos }
    function preferredDisplayCriteria: AVDisplayCriteria; message 'preferredDisplayCriteria'; { unavailable in ios } { unavailable in macos, watchos }
    function minimumTimeOffsetFromLive: CMTime; message 'minimumTimeOffsetFromLive'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSArray; handler: AVAsynchronousKeyValueLoadingLoadValuesAsynchronouslyForKeysCallback); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
    function statusOfValueForKey_error (key: NSString; outError: NSErrorPtr): AVKeyValueStatus; message 'statusOfValueForKey:error:';
  end;


type
  AVAssetAsynchronousLoading = objccategory external (AVAsset)
    function providesPreciseDurationAndTiming: objcbool; message 'providesPreciseDurationAndTiming';
    procedure cancelLoading; message 'cancelLoading';
  end;

type
  AVAsset_AVAssetReferenceRestrictions = objccategory external name 'AVAssetReferenceRestrictions' (AVAsset)
    function referenceRestrictions: AVAssetReferenceRestrictions; message 'referenceRestrictions'; { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }
  end;

type
  AVAssetTrackInspection = objccategory external (AVAsset)
    function tracks: NSArray; message 'tracks';
    function trackWithTrackID (trackID: CMPersistentTrackID): AVAssetTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
    function trackGroups: NSArray; message 'trackGroups'; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVAssetMetadataReading = objccategory external (AVAsset)
    function creationDate: AVMetadataItem; message 'creationDate'; { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }
    function lyrics: NSString; message 'lyrics';
    function commonMetadata: NSArray; message 'commonMetadata';
    function metadata: NSArray; message 'metadata'; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }
    function availableMetadataFormats: NSArray; message 'availableMetadataFormats';
    function metadataForFormat (format: AVMetadataFormat): NSArray; message 'metadataForFormat:';
  end;

type
  AVAssetChapterInspection = objccategory external (AVAsset)
    function availableChapterLocales: NSArray; message 'availableChapterLocales'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
    function chapterMetadataGroupsWithTitleLocale_containingItemsWithCommonKeys (locale: NSLocale; commonKeys: NSArray): NSArray; message 'chapterMetadataGroupsWithTitleLocale:containingItemsWithCommonKeys:'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
    function chapterMetadataGroupsBestMatchingPreferredLanguages (preferredLanguages: NSArray): NSArray; message 'chapterMetadataGroupsBestMatchingPreferredLanguages:'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVAssetMediaSelection = objccategory external (AVAsset)
    function availableMediaCharacteristicsWithMediaSelectionOptions: NSArray; message 'availableMediaCharacteristicsWithMediaSelectionOptions'; { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }
    function mediaSelectionGroupForMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): AVMediaSelectionGroup; message 'mediaSelectionGroupForMediaCharacteristic:'; { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }
    function preferredMediaSelection: AVMediaSelection; message 'preferredMediaSelection'; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }
    function allMediaSelections: NSArray; message 'allMediaSelections'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
  end;

type
  AVAssetProtectedContent = objccategory external (AVAsset)
    function hasProtectedContent: objcbool; message 'hasProtectedContent'; { unavailable in watchos } { available in macos 10.7, ios 4.2, tvos 9.0 }
  end;

type
  AVAssetFragments = objccategory external (AVAsset)
    function canContainFragments: objcbool; message 'canContainFragments'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function containsFragments: objcbool; message 'containsFragments'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function overallDurationHint: CMTime; message 'overallDurationHint'; { available in macos 10.12.2, ios 10.2, tvos 10.2, watchos 3.2 }
  end;

type
  AVAssetUsability = objccategory external (AVAsset)
    function isPlayable: objcbool; message 'isPlayable'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
    function isExportable: objcbool; message 'isExportable'; { unavailable in watchos } { available in macos 10.7, ios 4.3, tvos 9.0 }
    function isReadable: objcbool; message 'isReadable'; { unavailable in watchos } { available in macos 10.7, ios 4.3, tvos 9.0 }
    function isComposable: objcbool; message 'isComposable'; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }
    function isCompatibleWithSavedPhotosAlbum: objcbool; message 'isCompatibleWithSavedPhotosAlbum'; { unavailable in macos, watchos } { available in ios 5.0, tvos 9.0 }
    function isCompatibleWithAirPlayVideo: objcbool; message 'isCompatibleWithAirPlayVideo'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVURLAssetPreferPreciseDurationAndTimingKey: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVURLAssetReferenceRestrictionsKey: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVURLAssetHTTPCookiesKey: NSString { available in macos 10.15, ios 8.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVURLAssetAllowsCellularAccessKey: NSString { available in macos 10.15, ios 10.0, tvos 10.0, watchos 3.0 }; cvar; external;
  AVURLAssetAllowsExpensiveNetworkAccessKey: NSString { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  AVURLAssetAllowsConstrainedNetworkAccessKey: NSString { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVURLAsset = objcclass external (AVAsset)
  private
    _URLAsset: AVURLAssetInternal;
  public
    class function audiovisualTypes: NSArray; message 'audiovisualTypes'; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }
    class function audiovisualMIMETypes: NSArray; message 'audiovisualMIMETypes'; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }
    class function isPlayableExtendedMIMEType (extendedMIMEType: NSString): objcbool; message 'isPlayableExtendedMIMEType:'; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 1.0 }
    class function URLAssetWithURL_options (URL: NSURL; options: NSDictionary): id; message 'URLAssetWithURL:options:';
    function initWithURL_options (URL: NSURL; options: NSDictionary): id; message 'initWithURL:options:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
  end;


type
  AVURLAssetURLHandling = objccategory external (AVURLAsset)
    function resourceLoader: AVAssetResourceLoader; message 'resourceLoader'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
  end;

type
  AVURLAssetCache = objccategory external (AVURLAsset)
    function assetCache: AVAssetCache; message 'assetCache'; { unavailable in watchos } { available in macos 10.12, ios 10.0, tvos 10.0 }
  end;

type
  AVAssetCompositionUtility = objccategory external (AVURLAsset)
    function compatibleTrackForCompositionTrack (compositionTrack: AVCompositionTrack): AVAssetTrack; message 'compatibleTrackForCompositionTrack:';
  end;

type
  AVURLAssetNSItemProvider = objccategory external (AVURLAsset)
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetDurationDidChangeNotification: NSString { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
  AVAssetContainsFragmentsDidChangeNotification: NSString { unavailable in watchos } { available in macos 10.11, ios 12.0, tvos 12.0 }; cvar; external;
  AVAssetWasDefragmentedNotification: NSString { unavailable in watchos } { available in macos 10.11, ios 12.0, tvos 12.0 }; cvar; external;
  AVAssetChapterMetadataGroupsDidChangeNotification: NSString { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
  AVAssetMediaSelectionGroupsDidChangeNotification: NSString { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  AVFragmentMindingProtocol = objcprotocol external name 'AVFragmentMinding'
    function isAssociatedWithFragmentMinder: objcbool; message 'isAssociatedWithFragmentMinder'; { available in macos 10.11, ios 12.0, tvos 12.0, watchos 6.0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedAsset = objcclass external (AVURLAsset, AVFragmentMindingProtocol)
  private
    _fragmentedAsset: AVFragmentedAssetInternal;
  public
    class function fragmentedAssetWithURL_options (URL_: NSURL; options: NSDictionary): id; message 'fragmentedAssetWithURL:options:';
    function tracks: NSArray; message 'tracks';

    { Adopted protocols }
    function isAssociatedWithFragmentMinder: objcbool; message 'isAssociatedWithFragmentMinder'; { available in macos 10.11, ios 12.0, tvos 12.0, watchos 6.0 }
  end;


type
  AVFragmentedAssetTrackInspection = objccategory external (AVFragmentedAsset)
    function trackWithTrackID (trackID: CMPersistentTrackID): AVFragmentedAssetTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVFragmentedAssetMinder = objcclass external (NSObject)
  private
    _fragmentedAssetMinder: AVFragmentedAssetMinderInternal;
  public
    class function fragmentedAssetMinderWithAsset_mindingInterval (asset: AVAsset; mindingInterval: NSTimeInterval): id; message 'fragmentedAssetMinderWithAsset:mindingInterval:';
    function initWithAsset_mindingInterval (asset: AVAsset; mindingInterval: NSTimeInterval): id; message 'initWithAsset:mindingInterval:';
    procedure setMindingInterval(newValue: NSTimeInterval); message 'setMindingInterval:';
    function mindingInterval: NSTimeInterval; message 'mindingInterval';
    function assets: NSArray; message 'assets';
    procedure addFragmentedAsset (asset: AVAsset); message 'addFragmentedAsset:';
    procedure removeFragmentedAsset (asset: AVAsset); message 'removeFragmentedAsset:';
  end;


type
  AVURLAssetContentKeyEligibility = objccategory external (AVURLAsset)
    function mayRequireContentKeysForMediaDataProcessing: objcbool; message 'mayRequireContentKeysForMediaDataProcessing'; { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 3.3 }
  end;
{$endif}

{$else}
{$endif}
