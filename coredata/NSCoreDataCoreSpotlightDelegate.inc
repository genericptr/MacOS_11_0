{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSCoreDataCoreSpotlightDelegate.h }

{$ifdef CALLBACKS}
type
  NSCoreDataCoreSpotlightDelegateSearchableIndexCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSCoreDataCoreSpotlightDelegatePtr = ^NSCoreDataCoreSpotlightDelegate;
{$endif}

{$ifdef CLASSES}

type
  NSCoreDataCoreSpotlightDelegate = objcclass external (NSObject)
  private
  public
    function domainIdentifier: NSString; message 'domainIdentifier';
    function indexName: NSString; message 'indexName';
    function init: id; message 'init';
    function initForStoreWithDescription_model (description: NSPersistentStoreDescription; model: NSManagedObjectModel): id; message 'initForStoreWithDescription:model:'; { NS_DESIGNATED_INITIALIZER }
    function attributeSetForObject (object_: NSManagedObject): CSSearchableItemAttributeSet; message 'attributeSetForObject:';
    procedure searchableIndex_reindexAllSearchableItemsWithAcknowledgementHandler (searchableIndex: CSSearchableIndex; acknowledgementHandler: NSCoreDataCoreSpotlightDelegateSearchableIndexCallback); message 'searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler:';
    procedure searchableIndex_reindexSearchableItemsWithIdentifiers_acknowledgementHandler (searchableIndex: CSSearchableIndex; identifiers: NSArray; acknowledgementHandler: NSCoreDataCoreSpotlightDelegateSearchableIndexCallback); message 'searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:';
  end;
{$endif}

