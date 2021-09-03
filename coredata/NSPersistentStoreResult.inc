{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentStoreResult.h }

{$ifdef TYPES}
type
  NSPersistentStoreResultPtr = ^NSPersistentStoreResult;
  NSPersistentStoreAsynchronousResultPtr = ^NSPersistentStoreAsynchronousResult;
  NSAsynchronousFetchResultPtr = ^NSAsynchronousFetchResult;
  NSBatchInsertResultPtr = ^NSBatchInsertResult;
  NSBatchUpdateResultPtr = ^NSBatchUpdateResult;
  NSBatchDeleteResultPtr = ^NSBatchDeleteResult;
  NSPersistentHistoryResultPtr = ^NSPersistentHistoryResult;
  NSPersistentCloudKitContainerEventResultPtr = ^NSPersistentCloudKitContainerEventResult;
{$endif}

{$ifdef TYPES}
type
  NSBatchInsertRequestResultType = NSUInteger;
  NSBatchInsertRequestResultTypePtr = ^NSBatchInsertRequestResultType;

const
  NSBatchInsertRequestResultTypeStatusOnly = $0;
  NSBatchInsertRequestResultTypeObjectIDs = $1;
  NSBatchInsertRequestResultTypeCount = $2;

type
  NSBatchUpdateRequestResultType = NSUInteger;
  NSBatchUpdateRequestResultTypePtr = ^NSBatchUpdateRequestResultType;

const
  NSStatusOnlyResultType = $0;
  NSUpdatedObjectIDsResultType = $1;
  NSUpdatedObjectsCountResultType = $2;

type
  NSBatchDeleteRequestResultType = NSUInteger;
  NSBatchDeleteRequestResultTypePtr = ^NSBatchDeleteRequestResultType;

const
  NSBatchDeleteResultTypeStatusOnly = $0;
  NSBatchDeleteResultTypeObjectIDs = $1;
  NSBatchDeleteResultTypeCount = $2;

type
  NSPersistentHistoryResultType = NSInteger;
  NSPersistentHistoryResultTypePtr = ^NSPersistentHistoryResultType;

const
  NSPersistentHistoryResultTypeStatusOnly = $0;
  NSPersistentHistoryResultTypeObjectIDs = $1;
  NSPersistentHistoryResultTypeCount = $2;
  NSPersistentHistoryResultTypeTransactionsOnly = $3;
  NSPersistentHistoryResultTypeChangesOnly = $4;
  NSPersistentHistoryResultTypeTransactionsAndChanges = $5;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreResult = objcclass external (NSObject)
  end;

type
  NSPersistentStoreAsynchronousResult = objcclass external (NSPersistentStoreResult)
  private
  public
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function operationError: NSError; message 'operationError';
    function progress: NSProgress; message 'progress';
    procedure cancel; message 'cancel';
  end;

type
  NSAsynchronousFetchResult = objcclass external (NSPersistentStoreAsynchronousResult)
  private
  public
    function fetchRequest: NSAsynchronousFetchRequest; message 'fetchRequest';
    function finalResult: NSArray; message 'finalResult';
  end;

type
  NSBatchInsertResult = objcclass external (NSPersistentStoreResult)
  private
  public
    function result_: id; message 'result';
    function resultType: NSBatchInsertRequestResultType; message 'resultType';
  end;

type
  NSBatchUpdateResult = objcclass external (NSPersistentStoreResult)
  private
  public
    function result_: id; message 'result';
    function resultType: NSBatchUpdateRequestResultType; message 'resultType';
  end;

type
  NSBatchDeleteResult = objcclass external (NSPersistentStoreResult)
  private
  public
    function result_: id; message 'result';
    function resultType: NSBatchDeleteRequestResultType; message 'resultType';
  end;

type
  NSPersistentHistoryResult = objcclass external (NSPersistentStoreResult)
  private
  public
    function result_: id; message 'result';
    function resultType: NSPersistentHistoryResultType; message 'resultType';
  end;
{$endif}

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerEventResultType = NSInteger;
  NSPersistentCloudKitContainerEventResultTypePtr = ^NSPersistentCloudKitContainerEventResultType;

const
  NSPersistentCloudKitContainerEventResultTypeEvents = 0;
  NSPersistentCloudKitContainerEventResultTypeCountEvents = 1;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentCloudKitContainerEventResult = objcclass external (NSPersistentStoreResult)
  public
    function result_: id; message 'result';
    function resultType: NSPersistentCloudKitContainerEventResultType; message 'resultType';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

