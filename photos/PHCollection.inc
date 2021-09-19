{ Parsed from Photos.framework PHCollection.h }

{$ifdef TYPES}
type
  PHCollectionPtr = ^PHCollection;
  PHAssetCollectionPtr = ^PHAssetCollection;
  PHCollectionListPtr = ^PHCollectionList;
{$endif}

{$ifdef CLASSES}

type
  PHCollection = objcclass external (PHObject)
  public
    function canContainAssets: objcbool; message 'canContainAssets';
    function canContainCollections: objcbool; message 'canContainCollections';
    function localizedTitle: NSString; message 'localizedTitle'; { available in macos 10.13 }
    function canPerformEditOperation (anOperation: PHCollectionEditOperation): objcbool; message 'canPerformEditOperation:';
    class function fetchCollectionsInCollectionList_options (collectionList: PHCollectionList; options: PHFetchOptions): PHFetchResult; message 'fetchCollectionsInCollectionList:options:';
    class function fetchTopLevelUserCollectionsWithOptions (options: PHFetchOptions): PHFetchResult; message 'fetchTopLevelUserCollectionsWithOptions:';
  end;

type
  PHAssetCollection = objcclass external (PHCollection)
  public
    function assetCollectionType: PHAssetCollectionType; message 'assetCollectionType';
    function assetCollectionSubtype: PHAssetCollectionSubtype; message 'assetCollectionSubtype';
    function estimatedAssetCount: NSUInteger; message 'estimatedAssetCount';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function approximateLocation: CLLocation; message 'approximateLocation';
    function localizedLocationNames: NSArray; message 'localizedLocationNames';
    class function fetchAssetCollectionsWithLocalIdentifiers_options (identifiers: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchAssetCollectionsWithLocalIdentifiers:options:';
    class function fetchAssetCollectionsWithType_subtype_options (type_: PHAssetCollectionType; subtype: PHAssetCollectionSubtype; options: PHFetchOptions): PHFetchResult; message 'fetchAssetCollectionsWithType:subtype:options:';
    class function fetchAssetCollectionsContainingAsset_withType_options (asset: PHAsset; type_: PHAssetCollectionType; options: PHFetchOptions): PHFetchResult; message 'fetchAssetCollectionsContainingAsset:withType:options:';
    class function fetchAssetCollectionsWithALAssetGroupURLs_options (assetGroupURLs: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchAssetCollectionsWithALAssetGroupURLs:options:';
    class function fetchMomentsInMomentList_options (momentList: PHCollectionList; options: PHFetchOptions): PHFetchResult; message 'fetchMomentsInMomentList:options:'; { unavailable in macos }
    class function fetchMomentsWithOptions (options: PHFetchOptions): PHFetchResult; message 'fetchMomentsWithOptions:'; { unavailable in macos }
    class function transientAssetCollectionWithAssets_title (assets: NSArray; title: NSString): PHAssetCollection; message 'transientAssetCollectionWithAssets:title:';
    class function transientAssetCollectionWithAssetFetchResult_title (fetchResult: PHFetchResult; title: NSString): PHAssetCollection; message 'transientAssetCollectionWithAssetFetchResult:title:';
  end;

type
  PHCollectionList = objcclass external (PHCollection)
  public
    function collectionListType: PHCollectionListType; message 'collectionListType';
    function collectionListSubtype: PHCollectionListSubtype; message 'collectionListSubtype';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function localizedLocationNames: NSArray; message 'localizedLocationNames';
    class function fetchCollectionListsContainingCollection_options (collection: PHCollection; options: PHFetchOptions): PHFetchResult; message 'fetchCollectionListsContainingCollection:options:';
    class function fetchCollectionListsWithLocalIdentifiers_options (identifiers: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchCollectionListsWithLocalIdentifiers:options:';
    class function fetchCollectionListsWithType_subtype_options (collectionListType_: PHCollectionListType; subtype: PHCollectionListSubtype; options: PHFetchOptions): PHFetchResult; message 'fetchCollectionListsWithType:subtype:options:';
    class function fetchMomentListsWithSubtype_containingMoment_options (momentListSubtype: PHCollectionListSubtype; moment: PHAssetCollection; options: PHFetchOptions): PHFetchResult; message 'fetchMomentListsWithSubtype:containingMoment:options:'; { unavailable in macos }
    class function fetchMomentListsWithSubtype_options (momentListSubtype: PHCollectionListSubtype; options: PHFetchOptions): PHFetchResult; message 'fetchMomentListsWithSubtype:options:'; { unavailable in macos }
    class function transientCollectionListWithCollections_title (collections: NSArray; title: NSString): PHCollectionList; message 'transientCollectionListWithCollections:title:';
    class function transientCollectionListWithCollectionsFetchResult_title (fetchResult: PHFetchResult; title: NSString): PHCollectionList; message 'transientCollectionListWithCollectionsFetchResult:title:';
  end;
{$endif}

