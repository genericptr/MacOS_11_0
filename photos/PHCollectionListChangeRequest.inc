{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHCollectionListChangeRequest.h }

{$ifdef TYPES}
type
  PHCollectionListChangeRequestPtr = ^PHCollectionListChangeRequest;
{$endif}

{$ifdef CLASSES}

type
  PHCollectionListChangeRequest = objcclass external (PHChangeRequest)
  public
    class function creationRequestForCollectionListWithTitle (title: NSString): id; message 'creationRequestForCollectionListWithTitle:';
    function placeholderForCreatedCollectionList: PHObjectPlaceholder; message 'placeholderForCreatedCollectionList';
    class procedure deleteCollectionLists (collectionLists: id); message 'deleteCollectionLists:';
    class function changeRequestForCollectionList (collectionList: PHCollectionList): id; message 'changeRequestForCollectionList:';
    class function changeRequestForCollectionList_childCollections (collectionList: PHCollectionList; childCollections: PHFetchResult): id; message 'changeRequestForCollectionList:childCollections:';
    class function changeRequestForTopLevelCollectionListUserCollections (childCollections: PHFetchResult): id; message 'changeRequestForTopLevelCollectionListUserCollections:'; { available in macos , ios , tvos  }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure addChildCollections (collections: id); message 'addChildCollections:';
    procedure insertChildCollections_atIndexes (collections: id; indexes: NSIndexSet); message 'insertChildCollections:atIndexes:';
    procedure removeChildCollections (collections: id); message 'removeChildCollections:';
    procedure removeChildCollectionsAtIndexes (indexes: NSIndexSet); message 'removeChildCollectionsAtIndexes:';
    procedure replaceChildCollectionsAtIndexes_withChildCollections (indexes: NSIndexSet; collections: id); message 'replaceChildCollectionsAtIndexes:withChildCollections:';
    procedure moveChildCollectionsAtIndexes_toIndex (indexes: NSIndexSet; toIndex: NSUInteger); message 'moveChildCollectionsAtIndexes:toIndex:';
  end;
{$endif}

