{ Parsed from CoreData.framework NSBatchInsertRequest.h }

{$ifdef CALLBACKS}
type
  NSBatchInsertRequestDictionaryHandlerCallback = reference to function (obj: NSMutableDictionary): objcbool; cblock; cdecl;
  NSBatchInsertRequestManagedObjectHandlerCallback = reference to function (obj: NSManagedObject): objcbool; cblock; cdecl;
  NSBatchInsertRequestBatchInsertRequestWithEntityNameCallback = reference to function (obj: NSMutableDictionary): objcbool; cblock; cdecl;
  NSBatchInsertRequestInitWithEntityCallback = reference to function (obj: NSMutableDictionary): objcbool; cblock; cdecl;
  NSBatchInsertRequestInitWithEntityNameCallback = reference to function (obj: NSMutableDictionary): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSBatchInsertRequestPtr = ^NSBatchInsertRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBatchInsertRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    function entityName: NSString; message 'entityName';
    function entity: NSEntityDescription; message 'entity';
    procedure setObjectsToInsert(newValue: NSArray); message 'setObjectsToInsert:';
    function objectsToInsert: NSArray; message 'objectsToInsert';
    procedure setDictionaryHandler(newValue: NSBatchInsertRequestDictionaryHandlerCallback); message 'setDictionaryHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function dictionaryHandler: NSBatchInsertRequestDictionaryHandlerCallback; message 'dictionaryHandler'; { available in macosx ,ios ,tvos ,watchos  }
    procedure setManagedObjectHandler(newValue: NSBatchInsertRequestManagedObjectHandlerCallback); message 'setManagedObjectHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function managedObjectHandler: NSBatchInsertRequestManagedObjectHandlerCallback; message 'managedObjectHandler'; { available in macosx ,ios ,tvos ,watchos  }
    procedure setResultType(newValue: NSBatchInsertRequestResultType); message 'setResultType:';
    function resultType: NSBatchInsertRequestResultType; message 'resultType';
    class function batchInsertRequestWithEntityName_objects (entityName_: NSString; dictionaries: NSArray): id; message 'batchInsertRequestWithEntityName:objects:';
    class function batchInsertRequestWithEntityName_dictionaryHandler (entityName_: NSString; handler: NSBatchInsertRequestBatchInsertRequestWithEntityNameCallback): id; message 'batchInsertRequestWithEntityName:dictionaryHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    class function batchInsertRequestWithEntityName_managedObjectHandler (entityName_: NSString; handler: NSBatchInsertRequestBatchInsertRequestWithEntityNameCallback): id; message 'batchInsertRequestWithEntityName:managedObjectHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function init: id; message 'init'; deprecated 'replace with initWithEntityName';
    function initWithEntityName_objects (entityName_: NSString; dictionaries: NSArray): id; message 'initWithEntityName:objects:'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntity_objects (entity_: NSEntityDescription; dictionaries: NSArray): id; message 'initWithEntity:objects:'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntity_dictionaryHandler (entity_: NSEntityDescription; handler: NSBatchInsertRequestInitWithEntityCallback): id; message 'initWithEntity:dictionaryHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function initWithEntity_managedObjectHandler (entity_: NSEntityDescription; handler: NSBatchInsertRequestInitWithEntityCallback): id; message 'initWithEntity:managedObjectHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function initWithEntityName_dictionaryHandler (entityName_: NSString; handler: NSBatchInsertRequestInitWithEntityNameCallback): id; message 'initWithEntityName:dictionaryHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function initWithEntityName_managedObjectHandler (entityName_: NSString; handler: NSBatchInsertRequestInitWithEntityNameCallback): id; message 'initWithEntityName:managedObjectHandler:'; { available in macosx ,ios ,tvos ,watchos  }
  end;
{$endif}

