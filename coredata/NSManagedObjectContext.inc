{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSManagedObjectContext.h }

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
  NSManagedObjectContextWillSaveNotification: NSString { available in macosx ,ios  }; cvar; external;
  NSManagedObjectContextDidSaveNotification: NSString { available in macosx ,ios  }; cvar; external;
  NSManagedObjectContextObjectsDidChangeNotification: NSString { available in macosx ,ios  }; cvar; external;
  NSManagedObjectContextDidSaveObjectIDsNotification: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSManagedObjectContextDidMergeChangesObjectIDsNotification: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSInsertedObjectsKey: NSString { available in macosx ,ios  }; cvar; external;
  NSUpdatedObjectsKey: NSString { available in macosx ,ios  }; cvar; external;
  NSDeletedObjectsKey: NSString { available in macosx ,ios  }; cvar; external;
  NSRefreshedObjectsKey: NSString { available in macosx ,ios  }; cvar; external;
  NSInvalidatedObjectsKey: NSString { available in macosx ,ios  }; cvar; external;
  NSManagedObjectContextQueryGenerationKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSInvalidatedAllObjectsKey: NSString { available in macosx ,ios  }; cvar; external;
  NSInsertedObjectIDsKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSUpdatedObjectIDsKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSDeletedObjectIDsKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSRefreshedObjectIDsKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSInvalidatedObjectIDsKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSErrorMergePolicy: id { available in macosx ,ios  }; cvar; external;
  NSMergeByPropertyStoreTrumpMergePolicy: id { available in macosx ,ios  }; cvar; external;
  NSMergeByPropertyObjectTrumpMergePolicy: id { available in macosx ,ios  }; cvar; external;
  NSOverwriteMergePolicy: id { available in macosx ,ios  }; cvar; external;
  NSRollbackMergePolicy: id { available in macosx ,ios  }; cvar; external;
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
    function initWithConcurrencyType (ct: NSManagedObjectContextConcurrencyType): id; message 'initWithConcurrencyType:'; { available in macosx ,ios  }
    procedure performBlock (block: NSManagedObjectContextPerformBlockCallback); message 'performBlock:'; { available in macosx ,ios  }
    procedure performBlockAndWait (block: NSManagedObjectContextPerformBlockAndWaitCallback); message 'performBlockAndWait:'; { available in macosx ,ios  }
    procedure setPersistentStoreCoordinator(newValue: NSPersistentStoreCoordinator); message 'setPersistentStoreCoordinator:';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    procedure setParentContext(newValue: NSManagedObjectContext); message 'setParentContext:'; { available in macosx ,ios  }
    function parentContext: NSManagedObjectContext; message 'parentContext'; { available in macosx ,ios  }
    procedure setName(newValue: NSString); message 'setName:'; { available in macosx ,ios  }
    function name: NSString; message 'name'; { available in macosx ,ios  }
    procedure setUndoManager(newValue: NSUndoManager); message 'setUndoManager:';
    function undoManager: NSUndoManager; message 'undoManager';
    function hasChanges: objcbool; message 'hasChanges';
    function userInfo: NSMutableDictionary; message 'userInfo'; { available in macosx ,ios  }
    function concurrencyType: NSManagedObjectContextConcurrencyType; message 'concurrencyType'; { available in macosx ,ios  }
    function objectRegisteredForID (objectID: NSManagedObjectID): NSManagedObject; message 'objectRegisteredForID:';
    function objectWithID (objectID: NSManagedObjectID): NSManagedObject; message 'objectWithID:';
    function existingObjectWithID_error (objectID: NSManagedObjectID; error: NSErrorPtr): NSManagedObject; message 'existingObjectWithID:error:'; { available in macosx ,ios  }
    function executeFetchRequest_error (request: NSFetchRequest; error: NSErrorPtr): NSArray; message 'executeFetchRequest:error:';
    function countForFetchRequest_error (request: NSFetchRequest; error: NSErrorPtr): NSUInteger; message 'countForFetchRequest:error:'; { available in macosx ,ios  }
    function executeRequest_error (request: NSPersistentStoreRequest; error: NSErrorPtr): NSPersistentStoreResult; message 'executeRequest:error:'; { available in macosx ,ios  }
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
    procedure refreshAllObjects; message 'refreshAllObjects'; { available in macosx ,ios  }
    procedure lock; message 'lock'; deprecated 'in  "Use a queue style context and -performBlockAndWait: instead", , ';
    procedure unlock; message 'unlock'; deprecated 'in  "Use a queue style context and -performBlockAndWait: instead", , ';
    function tryLock: objcbool; message 'tryLock'; deprecated 'in  "Use a queue style context and -performBlock: instead", , ';
    procedure setPropagatesDeletesAtEndOfEvent(newValue: objcbool); message 'setPropagatesDeletesAtEndOfEvent:';
    function propagatesDeletesAtEndOfEvent: objcbool; message 'propagatesDeletesAtEndOfEvent';
    procedure setRetainsRegisteredObjects(newValue: objcbool); message 'setRetainsRegisteredObjects:';
    function retainsRegisteredObjects: objcbool; message 'retainsRegisteredObjects';
    procedure setShouldDeleteInaccessibleFaults(newValue: objcbool); message 'setShouldDeleteInaccessibleFaults:'; { available in macosx ,ios  }
    function shouldDeleteInaccessibleFaults: objcbool; message 'shouldDeleteInaccessibleFaults'; { available in macosx ,ios  }
    function shouldHandleInaccessibleFault_forObjectID_triggeredByProperty (fault: NSManagedObject; oid: NSManagedObjectID; property_: NSPropertyDescription): objcbool; message 'shouldHandleInaccessibleFault:forObjectID:triggeredByProperty:'; { available in macosx ,ios  }
    procedure setStalenessInterval(newValue: NSTimeInterval); message 'setStalenessInterval:';
    function stalenessInterval: NSTimeInterval; message 'stalenessInterval';
    procedure setMergePolicy(newValue: id); message 'setMergePolicy:';
    function mergePolicy: id; message 'mergePolicy';
    function obtainPermanentIDsForObjects_error (objects: NSArray; error: NSErrorPtr): objcbool; message 'obtainPermanentIDsForObjects:error:'; { available in macosx ,ios  }
    procedure mergeChangesFromContextDidSaveNotification (notification: NSNotification); message 'mergeChangesFromContextDidSaveNotification:'; { available in macosx ,ios  }
    class procedure mergeChangesFromRemoteContextSave_intoContexts (changeNotificationData: NSDictionary; contexts: NSArray); message 'mergeChangesFromRemoteContextSave:intoContexts:'; { available in macosx ,ios  }
    function queryGenerationToken: NSQueryGenerationToken; message 'queryGenerationToken'; { available in macosx ,ios ,tvos ,watchos  }
    function setQueryGenerationFromToken_error (generation: NSQueryGenerationToken; error: NSErrorPtr): objcbool; message 'setQueryGenerationFromToken:error:'; { available in macosx ,ios ,tvos ,watchos  }
    procedure setAutomaticallyMergesChangesFromParent(newValue: objcbool); message 'setAutomaticallyMergesChangesFromParent:'; { available in macosx ,ios ,tvos ,watchos  }
    function automaticallyMergesChangesFromParent: objcbool; message 'automaticallyMergesChangesFromParent'; { available in macosx ,ios ,tvos ,watchos  }
    procedure setTransactionAuthor(newValue: NSString); message 'setTransactionAuthor:'; { available in macosx ,ios ,tvos ,watchos  }
    function transactionAuthor: NSString; message 'transactionAuthor'; { available in macosx ,ios ,tvos ,watchos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

