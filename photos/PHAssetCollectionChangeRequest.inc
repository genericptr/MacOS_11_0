{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHAssetCollectionChangeRequest.h }

{$ifdef TYPES}
type
  PHAssetCollectionChangeRequestPtr = ^PHAssetCollectionChangeRequest;
{$endif}

{$ifdef CLASSES}

type
  PHAssetCollectionChangeRequest = objcclass external (PHChangeRequest)
  public
    class function creationRequestForAssetCollectionWithTitle (title: NSString): id; message 'creationRequestForAssetCollectionWithTitle:';
    function placeholderForCreatedAssetCollection: PHObjectPlaceholder; message 'placeholderForCreatedAssetCollection';
    class procedure deleteAssetCollections (assetCollections: id); message 'deleteAssetCollections:';
    class function changeRequestForAssetCollection (assetCollection: PHAssetCollection): id; message 'changeRequestForAssetCollection:';
    class function changeRequestForAssetCollection_assets (assetCollection: PHAssetCollection; assets: PHFetchResult): id; message 'changeRequestForAssetCollection:assets:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure addAssets (assets: id); message 'addAssets:';
    procedure insertAssets_atIndexes (assets: id; indexes: NSIndexSet); message 'insertAssets:atIndexes:';
    procedure removeAssets (assets: id); message 'removeAssets:';
    procedure removeAssetsAtIndexes (indexes: NSIndexSet); message 'removeAssetsAtIndexes:';
    procedure replaceAssetsAtIndexes_withAssets (indexes: NSIndexSet; assets: id); message 'replaceAssetsAtIndexes:withAssets:';
    procedure moveAssetsAtIndexes_toIndex (fromIndexes: NSIndexSet; toIndex: NSUInteger); message 'moveAssetsAtIndexes:toIndex:';
  end;
{$endif}

