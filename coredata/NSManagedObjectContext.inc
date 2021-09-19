{ Parsed from CoreData.framework NSManagedObjectContext.h }

{$ifdef CALLBACKS}
type
  NSManagedObjectContextPerformBlockCallback = reference to procedure; cblock; cdecl;
  NSManagedObjectContextPerformBlockAndWaitCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSManagedObjectContextPtr = ^NSManagedObjectContext;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSManagedObjectContextWillSaveNotification: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSManagedObjectContextDidSaveNotification: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSManagedObjectContextObjectsDidChangeNotification: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSManagedObjectContextDidSaveObjectIDsNotification: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSManagedObjectContextDidMergeChangesObjectIDsNotification: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSInsertedObjectsKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSUpdatedObjectsKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSDeletedObjectsKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSRefreshedObjectsKey: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSInvalidatedObjectsKey: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSManagedObjectContextQueryGenerationKey: NSString { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }; cvar; external;
  NSInvalidatedAllObjectsKey: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSInsertedObjectIDsKey: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSUpdatedObjectIDsKey: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSDeletedObjectIDsKey: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSRefreshedObjectIDsKey: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSInvalidatedObjectIDsKey: NSString { available in macosx 10.12.4,ios 10.3,tvos 10.2,watchos 3.2 }; cvar; external;
  NSErrorMergePolicy: id { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSMergeByPropertyStoreTrumpMergePolicy: id { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSMergeByPropertyObjectTrumpMergePolicy: id { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSOverwriteMergePolicy: id { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSRollbackMergePolicy: id { available in macosx 10.4,ios 3.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSManagedObjectContextConcurrencyType = NSUInteger;
  NSManagedObjectContextConcurrencyTypePtr = ^NSManagedObjectContextConcurrencyType;

const
  NSConfinementConcurrencyType = $00 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", , ';
  NSPrivateQueueConcurrencyType = $01;
  NSMainQueueConcurrencyType = $02;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObjectContext = objcclass external (NSObject, NSCodingProtocol, NSLockingProtocol)
  private
  public
    class function new_: id; message 'new'; deprecated 'in  "Use -initWithConcurrencyType: instead", , ';
    function init: id; message 'init'; deprecated 'in  "Use -initWithConcurrencyType: instead", , ';
    function initWithConcurrencyType (ct: NSManagedObjectContextConcurrencyType): id; message 'initWithConcurrencyType:'; { available in macosx 10.7,ios 5.0 }
    procedure performBlock (block: NSManagedObjectContextPerformBlockCallback); message 'performBlock:'; { available in macosx 10.7,ios 5.0 }
    procedure performBlockAndWait (block: NSManagedObjectContextPerformBlockAndWaitCallback); message 'performBlockAndWait:'; { available in macosx 10.7,ios 5.0 }
    procedure setPersistentStoreCoordinator(newValue: NSPersistentStoreCoordinator); message 'setPersistentStoreCoordinator:';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    procedure setParentContext(newValue: NSManagedObjectContext); message 'setParentContext:'; { available in macosx 10.7,ios 5.0 }
    function parentContext: NSManagedObjectContext; message 'parentContext'; { available in macosx 10.7,ios 5.0 }
    procedure setName(newValue: NSString); message 'setName:'; { available in macosx 10.10,ios 8.0 }
    function name: NSString; message 'name'; { available in macosx 10.10,ios 8.0 }
    procedure setUndoManager(newValue: NSUndoManager); message 'setUndoManager:';
    function undoManager: NSUndoManager; message 'undoManager';
    function hasChanges: objcbool; message 'hasChanges';
    function userInfo: NSMutableDictionary; message 'userInfo'; { available in macosx 10.7,ios 5.0 }
    function concurrencyType: NSManagedObjectContextConcurrencyType; message 'concurrencyType'; { available in macosx 10.7,ios 5.0 }
    function objectRegisteredForID (objectID: NSManagedObjectID): NSManagedObject; message 'objectRegisteredForID:';
    function objectWithID (objectID: NSManagedObjectID): NSManagedObject; message 'objectWithID:';
    function existingObjectWithID_error (objectID: NSManagedObjectID; error: NSErrorPtr): NSManagedObject; message 'existingObjectWithID:error:'; { available in macosx 10.6,ios 3.0 }
    function executeFetchRequest_error (request: NSFetchRequest; error: NSErrorPtr): NSArray; message 'executeFetchRequest:error:';
    function countForFetchRequest_error (request: NSFetchRequest; error: NSErrorPtr): NSUInteger; message 'countForFetchRequest:error:'; { available in macosx 10.5,ios 3.0 }
    function executeRequest_error (request: NSPersistentStoreRequest; error: NSErrorPtr): NSPersistentStoreResult; message 'executeRequest:error:'; { available in macosx 10.10,ios 8.0 }
    procedure insertObject (object_: NSManagedObject); message 'insertObject:';
    procedure deleteObject (object_: NSManagedObject); message 'deleteObject:';
    procedure refreshObject_mergeChanges (object_: NSManagedObject; flag: objcbool); message 'refreshObject:mergeChanges:';
    procedure detectConflictsForObject (object_: NSManagedObject); message 'detectConflictsForObject:';
    procedure observeValueForKeyPath_ofObject_change_context (keyPath: NSString; object_: id; change: NSDictionary; context: pointer); message 'observeValueForKeyPath:ofObject:change:context:';
    procedure processPendingChanges; message 'processPendingChanges';
    procedure assignObject_toPersistentStore (object_: id; store: NSPersistentStore); message 'assignObject:toPersistentStore:';
    function insertedObjects: NSSet; message 'insertedObjects';
    function updatedObjects: NSSet; message 'updatedObjects';
    function deletedObjects: NSSet; message 'deletedObjects';
    function registeredObjects: NSSet; message 'registeredObjects';
    procedure undo; message 'undo';
    procedure redo; message 'redo';
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function save (error: NSErrorPtr): objcbool; message 'save:';
    procedure refreshAllObjects; message 'refreshAllObjects'; { available in macosx 10.11,ios 8.3 }
    procedure lock; message 'lock'; deprecated 'in  "Use a queue style context and -performBlockAndWait: instead", , ';
    procedure unlock; message 'unlock'; deprecated 'in  "Use a queue style context and -performBlockAndWait: instead", , ';
    function tryLock: objcbool; message 'tryLock'; deprecated 'in  "Use a queue style context and -performBlock: instead", , ';
    procedure setPropagatesDeletesAtEndOfEvent(newValue: objcbool); message 'setPropagatesDeletesAtEndOfEvent:';
    function propagatesDeletesAtEndOfEvent: objcbool; message 'propagatesDeletesAtEndOfEvent';
    procedure setRetainsRegisteredObjects(newValue: objcbool); message 'setRetainsRegisteredObjects:';
    function retainsRegisteredObjects: objcbool; message 'retainsRegisteredObjects';
    procedure setShouldDeleteInaccessibleFaults(newValue: objcbool); message 'setShouldDeleteInaccessibleFaults:'; { available in macosx 10.11,ios 9.0 }
    function shouldDeleteInaccessibleFaults: objcbool; message 'shouldDeleteInaccessibleFaults'; { available in macosx 10.11,ios 9.0 }
    function shouldHandleInaccessibleFault_forObjectID_triggeredByProperty (fault: NSManagedObject; oid: NSManagedObjectID; property_: NSPropertyDescription): objcbool; message 'shouldHandleInaccessibleFault:forObjectID:triggeredByProperty:'; { available in macosx 10.11,ios 9.0 }
    procedure setStalenessInterval(newValue: NSTimeInterval); message 'setStalenessInterval:';
    function stalenessInterval: NSTimeInterval; message 'stalenessInterval';
    procedure setMergePolicy(newValue: id); message 'setMergePolicy:';
    function mergePolicy: id; message 'mergePolicy';
    function obtainPermanentIDsForObjects_error (objects: NSArray; error: NSErrorPtr): objcbool; message 'obtainPermanentIDsForObjects:error:'; { available in macosx 10.5,ios 3.0 }
    procedure mergeChangesFromContextDidSaveNotification (notification: NSNotification); message 'mergeChangesFromContextDidSaveNotification:'; { available in macosx 10.5,ios 3.0 }
    class procedure mergeChangesFromRemoteContextSave_intoContexts (changeNotificationData: NSDictionary; contexts: NSArray); message 'mergeChangesFromRemoteContextSave:intoContexts:'; { available in macosx 10.11,ios 9.0 }
    function queryGenerationToken: NSQueryGenerationToken; message 'queryGenerationToken'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    function setQueryGenerationFromToken_error (generation: NSQueryGenerationToken; error: NSErrorPtr): objcbool; message 'setQueryGenerationFromToken:error:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    procedure setAutomaticallyMergesChangesFromParent(newValue: objcbool); message 'setAutomaticallyMergesChangesFromParent:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    function automaticallyMergesChangesFromParent: objcbool; message 'automaticallyMergesChangesFromParent'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    procedure setTransactionAuthor(newValue: NSString); message 'setTransactionAuthor:'; { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }
    function transactionAuthor: NSString; message 'transactionAuthor'; { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

