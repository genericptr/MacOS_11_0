{ Parsed from Photos.framework PHCollectionListChangeRequest.h }

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
    class procedure deleteCollectionLists (collectionLists: NSFastEnumerationProtocol); message 'deleteCollectionLists:';
    class function changeRequestForCollectionList (collectionList: PHCollectionList): id; message 'changeRequestForCollectionList:';
    class function changeRequestForCollectionList_childCollections (collectionList: PHCollectionList; childCollections: PHFetchResult): id; message 'changeRequestForCollectionList:childCollections:';
    class function changeRequestForTopLevelCollectionListUserCollections (childCollections: PHFetchResult): id; message 'changeRequestForTopLevelCollectionListUserCollections:'; { available in macos 11, ios 14.2, tvos 14 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure addChildCollections (collections: NSFastEnumerationProtocol); message 'addChildCollections:';
    procedure insertChildCollections_atIndexes (collections: NSFastEnumerationProtocol; indexes: NSIndexSet); message 'insertChildCollections:atIndexes:';
    procedure removeChildCollections (collections: NSFastEnumerationProtocol); message 'removeChildCollections:';
    procedure removeChildCollectionsAtIndexes (indexes: NSIndexSet); message 'removeChildCollectionsAtIndexes:';
    procedure replaceChildCollectionsAtIndexes_withChildCollections (indexes: NSIndexSet; collections: NSFastEnumerationProtocol); message 'replaceChildCollectionsAtIndexes:withChildCollections:';
    procedure moveChildCollectionsAtIndexes_toIndex (indexes: NSIndexSet; toIndex: NSUInteger); message 'moveChildCollectionsAtIndexes:toIndex:';
  end;
{$endif}

