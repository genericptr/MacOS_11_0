{ Parsed from CoreData.framework NSFetchRequest.h }

{$ifdef CALLBACKS}
type
  NSFetchRequestInitWithFetchRequestCallback = reference to procedure (param1: NSAsynchronousFetchResult); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFetchRequestPtr = ^NSFetchRequest;
  NSAsynchronousFetchRequestPtr = ^NSAsynchronousFetchRequest;
  NSFetchRequestResultProtocolPtr = ^NSFetchRequestResultProtocol;
{$endif}

{$ifdef TYPES}
type
  NSFetchRequestResultType = NSUInteger;
  NSFetchRequestResultTypePtr = ^NSFetchRequestResultType;

const
  NSManagedObjectResultType = $00;
  NSManagedObjectIDResultType = $01;
  NSDictionaryResultType = $02 { available in macosx 10.6, ios 3.0 };
  NSCountResultType = $04 { available in macosx 10.6, ios 3.0 };
{$endif}

{$ifdef PROTOCOLS}

type
  NSFetchRequestResultProtocol = objcprotocol external name 'NSFetchRequestResult' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  NSNumber_NSFetchedResultSupport = objccategory external name 'NSFetchedResultSupport' (NSNumber)
  end;

type
  NSDictionary_NSFetchedResultSupport = objccategory external name 'NSFetchedResultSupport' (NSDictionary)
  end;

type
  NSManagedObject_NSFetchedResultSupport = objccategory external name 'NSFetchedResultSupport' (NSManagedObject)
  end;

type
  NSFetchedResultSupport = objccategory external (NSManagedObjectID)
  end;


type
  NSFetchRequest = objcclass external (NSPersistentStoreRequest, NSCodingProtocol)
  private
  public
    class function fetchRequestWithEntityName (entityName: NSString): id; message 'fetchRequestWithEntityName:'; { available in macosx 10.7,ios 4.0 }
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntityName (entityName: NSString): id; message 'initWithEntityName:'; { available in macosx 10.7,ios 4.0 }
    function execute (error: NSErrorPtr): NSArray; message 'execute:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    procedure setEntity(newValue: NSEntityDescription); message 'setEntity:';
    function entity: NSEntityDescription; message 'entity';
    function entityName: NSString; message 'entityName'; { available in macosx 10.7,ios 4.0 }
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setFetchLimit(newValue: NSUInteger); message 'setFetchLimit:';
    function fetchLimit: NSUInteger; message 'fetchLimit';
    procedure setAffectedStores(newValue: NSArray); message 'setAffectedStores:';
    function affectedStores: NSArray; message 'affectedStores';
    procedure setResultType(newValue: NSFetchRequestResultType); message 'setResultType:'; { available in macosx 10.5,ios 3.0 }
    function resultType: NSFetchRequestResultType; message 'resultType'; { available in macosx 10.5,ios 3.0 }
    procedure setIncludesSubentities(newValue: objcbool); message 'setIncludesSubentities:'; { available in macosx 10.5,ios 3.0 }
    function includesSubentities: objcbool; message 'includesSubentities'; { available in macosx 10.5,ios 3.0 }
    procedure setIncludesPropertyValues(newValue: objcbool); message 'setIncludesPropertyValues:'; { available in macosx 10.5,ios 3.0 }
    function includesPropertyValues: objcbool; message 'includesPropertyValues'; { available in macosx 10.5,ios 3.0 }
    procedure setReturnsObjectsAsFaults(newValue: objcbool); message 'setReturnsObjectsAsFaults:'; { available in macosx 10.5,ios 3.0 }
    function returnsObjectsAsFaults: objcbool; message 'returnsObjectsAsFaults'; { available in macosx 10.5,ios 3.0 }
    procedure setRelationshipKeyPathsForPrefetching(newValue: NSArray); message 'setRelationshipKeyPathsForPrefetching:'; { available in macosx 10.5,ios 3.0 }
    function relationshipKeyPathsForPrefetching: NSArray; message 'relationshipKeyPathsForPrefetching'; { available in macosx 10.5,ios 3.0 }
    procedure setIncludesPendingChanges(newValue: objcbool); message 'setIncludesPendingChanges:'; { available in macosx 10.6,ios 3.0 }
    function includesPendingChanges: objcbool; message 'includesPendingChanges'; { available in macosx 10.6,ios 3.0 }
    procedure setReturnsDistinctResults(newValue: objcbool); message 'setReturnsDistinctResults:'; { available in macosx 10.6,ios 3.0 }
    function returnsDistinctResults: objcbool; message 'returnsDistinctResults'; { available in macosx 10.6,ios 3.0 }
    procedure setPropertiesToFetch(newValue: NSArray); message 'setPropertiesToFetch:'; { available in macosx 10.6,ios 3.0 }
    function propertiesToFetch: NSArray; message 'propertiesToFetch'; { available in macosx 10.6,ios 3.0 }
    procedure setFetchOffset(newValue: NSUInteger); message 'setFetchOffset:'; { available in macosx 10.6,ios 3.0 }
    function fetchOffset: NSUInteger; message 'fetchOffset'; { available in macosx 10.6,ios 3.0 }
    procedure setFetchBatchSize(newValue: NSUInteger); message 'setFetchBatchSize:'; { available in macosx 10.6,ios 3.0 }
    function fetchBatchSize: NSUInteger; message 'fetchBatchSize'; { available in macosx 10.6,ios 3.0 }
    procedure setShouldRefreshRefetchedObjects(newValue: objcbool); message 'setShouldRefreshRefetchedObjects:'; { available in macosx 10.7,ios 5.0 }
    function shouldRefreshRefetchedObjects: objcbool; message 'shouldRefreshRefetchedObjects'; { available in macosx 10.7,ios 5.0 }
    procedure setPropertiesToGroupBy(newValue: NSArray); message 'setPropertiesToGroupBy:'; { available in macosx 10.7,ios 5.0 }
    function propertiesToGroupBy: NSArray; message 'propertiesToGroupBy'; { available in macosx 10.7,ios 5.0 }
    procedure setHavingPredicate(newValue: NSPredicate); message 'setHavingPredicate:'; { available in macosx 10.7,ios 5.0 }
    function havingPredicate: NSPredicate; message 'havingPredicate'; { available in macosx 10.7,ios 5.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSPersistentStoreAsynchronousFetchResultCompletionBlock = reference to procedure (result_: NSAsynchronousFetchResult); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSAsynchronousFetchRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
    function completionBlock: NSPersistentStoreAsynchronousFetchResultCompletionBlock; message 'completionBlock';
    procedure setEstimatedResultCount(newValue: NSInteger); message 'setEstimatedResultCount:';
    function estimatedResultCount: NSInteger; message 'estimatedResultCount';
    function initWithFetchRequest_completionBlock (request: NSFetchRequest; blk: NSFetchRequestInitWithFetchRequestCallback): id; message 'initWithFetchRequest:completionBlock:';
  end;
{$endif}

