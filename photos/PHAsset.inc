{ Parsed from Photos.framework PHAsset.h }

{$ifdef TYPES}
type
  PHAssetPtr = ^PHAsset;
{$endif}

{$ifdef CLASSES}

type
  PHAsset = objcclass external (PHObject)
  public
    function playbackStyle: PHAssetPlaybackStyle; message 'playbackStyle'; { available in macos 10.15, ios 11, tvos 11 }
    function mediaType: PHAssetMediaType; message 'mediaType';
    function mediaSubtypes: PHAssetMediaSubtype; message 'mediaSubtypes';
    function pixelWidth: NSUInteger; message 'pixelWidth';
    function pixelHeight: NSUInteger; message 'pixelHeight';
    function creationDate: NSDate; message 'creationDate';
    function modificationDate: NSDate; message 'modificationDate';
    function location: CLLocationPtr; message 'location';
    function duration: NSTimeInterval; message 'duration';
    function isHidden: objcbool; message 'isHidden';
    function isFavorite: objcbool; message 'isFavorite';
    function isSyncFailureHidden: objcbool; message 'isSyncFailureHidden'; { unavailable in ios, tvos, watchos }
    function burstIdentifier: NSString; message 'burstIdentifier'; { available in macos 10.15 }
    function burstSelectionTypes: PHAssetBurstSelectionType; message 'burstSelectionTypes'; { available in macos 10.15 }
    function representsBurst: objcbool; message 'representsBurst'; { available in macos 10.15 }
    function sourceType: PHAssetSourceType; message 'sourceType'; { available in ios 9 }
    function canPerformEditOperation (editOperation: PHAssetEditOperation): objcbool; message 'canPerformEditOperation:'; { available in macos 10.15 }
    class function fetchAssetsInAssetCollection_options (assetCollection: PHAssetCollection; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsInAssetCollection:options:';
    class function fetchAssetsWithLocalIdentifiers_options (identifiers: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithLocalIdentifiers:options:';
    class function fetchKeyAssetsInAssetCollection_options (assetCollection: PHAssetCollection; options: PHFetchOptions): PHFetchResult; message 'fetchKeyAssetsInAssetCollection:options:';
    class function fetchAssetsWithBurstIdentifier_options (burstIdentifier_: NSString; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithBurstIdentifier:options:'; { available in macos 10.15 }
    class function fetchAssetsWithOptions (options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithOptions:'; { available in macos 10.15 }
    class function fetchAssetsWithMediaType_options (mediaType_: PHAssetMediaType; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithMediaType:options:'; { available in macos 10.15 }
    class function fetchAssetsWithALAssetURLs_options (assetURLs: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithALAssetURLs:options:'; { unavailable in macos }
  end;
{$endif}

