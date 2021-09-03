{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAsset.h }

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
    function preferredDisplayCriteria: AVDisplayCriteria; message 'preferredDisplayCriteria'; { unavailable in ios }
    function minimumTimeOffsetFromLive: CMTime; message 'minimumTimeOffsetFromLive'; { available in macos , ios , tvos , watchos  }

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
    function referenceRestrictions: AVAssetReferenceRestrictions; message 'referenceRestrictions'; { unavailable in watchos }
  end;

type
  AVAssetTrackInspection = objccategory external (AVAsset)
    function tracks: NSArray; message 'tracks';
    function trackWithTrackID (trackID: CMPersistentTrackID): AVAssetTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
    function trackGroups: NSArray; message 'trackGroups'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVAssetMetadataReading = objccategory external (AVAsset)
    function creationDate: AVMetadataItem; message 'creationDate'; { available in macos , ios , tvos , watchos  }
    function lyrics: NSString; message 'lyrics';
    function commonMetadata: NSArray; message 'commonMetadata';
    function metadata: NSArray; message 'metadata'; { available in macos , ios , tvos , watchos  }
    function availableMetadataFormats: NSArray; message 'availableMetadataFormats';
    function metadataForFormat (format: AVMetadataFormat): NSArray; message 'metadataForFormat:';
  end;

type
  AVAssetChapterInspection = objccategory external (AVAsset)
    function availableChapterLocales: NSArray; message 'availableChapterLocales'; { available in macos , ios , tvos , watchos  }
    function chapterMetadataGroupsWithTitleLocale_containingItemsWithCommonKeys (locale: NSLocale; commonKeys: NSArray): NSArray; message 'chapterMetadataGroupsWithTitleLocale:containingItemsWithCommonKeys:'; { available in macos , ios , tvos , watchos  }
    function chapterMetadataGroupsBestMatchingPreferredLanguages (preferredLanguages: NSArray): NSArray; message 'chapterMetadataGroupsBestMatchingPreferredLanguages:'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVAssetMediaSelection = objccategory external (AVAsset)
    function availableMediaCharacteristicsWithMediaSelectionOptions: NSArray; message 'availableMediaCharacteristicsWithMediaSelectionOptions'; { available in macos , ios , tvos , watchos  }
    function mediaSelectionGroupForMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): AVMediaSelectionGroup; message 'mediaSelectionGroupForMediaCharacteristic:'; { available in macos , ios , tvos , watchos  }
    function preferredMediaSelection: AVMediaSelection; message 'preferredMediaSelection'; { available in macos , ios , tvos , watchos  }
    function allMediaSelections: NSArray; message 'allMediaSelections'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVAssetProtectedContent = objccategory external (AVAsset)
    function hasProtectedContent: objcbool; message 'hasProtectedContent'; { unavailable in watchos }
  end;

type
  AVAssetFragments = objccategory external (AVAsset)
    function canContainFragments: objcbool; message 'canContainFragments'; { unavailable in watchos }
    function containsFragments: objcbool; message 'containsFragments'; { unavailable in watchos }
    function overallDurationHint: CMTime; message 'overallDurationHint'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVAssetUsability = objccategory external (AVAsset)
    function isPlayable: objcbool; message 'isPlayable'; { available in macos , ios , tvos , watchos  }
    function isExportable: objcbool; message 'isExportable'; { unavailable in watchos }
    function isReadable: objcbool; message 'isReadable'; { unavailable in watchos }
    function isComposable: objcbool; message 'isComposable'; { available in macos , ios , tvos , watchos  }
    function isCompatibleWithSavedPhotosAlbum: objcbool; message 'isCompatibleWithSavedPhotosAlbum'; { unavailable in macos, watchos }
    function isCompatibleWithAirPlayVideo: objcbool; message 'isCompatibleWithAirPlayVideo'; { unavailable in watchos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVURLAssetPreferPreciseDurationAndTimingKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVURLAssetReferenceRestrictionsKey: NSString { unavailable in watchos }; cvar; external;
  AVURLAssetHTTPCookiesKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVURLAssetAllowsCellularAccessKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVURLAssetAllowsExpensiveNetworkAccessKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVURLAssetAllowsConstrainedNetworkAccessKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVURLAsset = objcclass external (AVAsset)
  private
    _URLAsset: AVURLAssetInternal;
  public
    class function audiovisualTypes: NSArray; message 'audiovisualTypes'; { available in macos , ios , tvos , watchos  }
    class function audiovisualMIMETypes: NSArray; message 'audiovisualMIMETypes'; { available in macos , ios , tvos , watchos  }
    class function isPlayableExtendedMIMEType (extendedMIMEType: NSString): objcbool; message 'isPlayableExtendedMIMEType:'; { available in macos , ios , tvos , watchos  }
    class function URLAssetWithURL_options (URL: NSURL; options: NSDictionary): id; message 'URLAssetWithURL:options:';
    function initWithURL_options (URL: NSURL; options: NSDictionary): id; message 'initWithURL:options:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
  end;


type
  AVURLAssetURLHandling = objccategory external (AVURLAsset)
    function resourceLoader: AVAssetResourceLoader; message 'resourceLoader'; { unavailable in watchos }
  end;

type
  AVURLAssetCache = objccategory external (AVURLAsset)
    function assetCache: AVAssetCache; message 'assetCache'; { unavailable in watchos }
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
  AVAssetDurationDidChangeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVAssetContainsFragmentsDidChangeNotification: NSString { unavailable in watchos }; cvar; external;
  AVAssetWasDefragmentedNotification: NSString { unavailable in watchos }; cvar; external;
  AVAssetChapterMetadataGroupsDidChangeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVAssetMediaSelectionGroupsDidChangeNotification: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  AVFragmentMindingProtocol = objcprotocol external name 'AVFragmentMinding'
    function isAssociatedWithFragmentMinder: objcbool; message 'isAssociatedWithFragmentMinder'; { available in macos , ios , tvos , watchos  }
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
    function isAssociatedWithFragmentMinder: objcbool; message 'isAssociatedWithFragmentMinder'; { available in macos , ios , tvos , watchos  }
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
    function mayRequireContentKeysForMediaDataProcessing: objcbool; message 'mayRequireContentKeysForMediaDataProcessing'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$else}
{$endif}
