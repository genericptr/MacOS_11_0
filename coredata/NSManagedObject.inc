{ Parsed from CoreData.framework NSManagedObject.h }

{$ifdef TYPES}
type
  NSManagedObjectPtr = ^NSManagedObject;
{$endif}

{$ifdef TYPES}
type
  NSSnapshotEventType = NSUInteger;
  NSSnapshotEventTypePtr = ^NSSnapshotEventType;

const
  NSSnapshotEventUndoInsertion = 1 shl 1;
  NSSnapshotEventUndoDeletion = 1 shl 2;
  NSSnapshotEventUndoUpdate = 1 shl 3;
  NSSnapshotEventRollback = 1 shl 4;
  NSSnapshotEventRefresh = 1 shl 5;
  NSSnapshotEventMergePolicy = 1 shl 6;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObject = objcclass external (NSObject)
  private
  public
    class function contextShouldIgnoreUnmodeledPropertyChanges: objcbool; message 'contextShouldIgnoreUnmodeledPropertyChanges'; { available in macosx 10.6,ios 3.0 }
    class function classEntity: NSEntityDescription; message 'entity'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    class function fetchRequest: NSFetchRequest; message 'fetchRequest'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    function initWithEntity_insertIntoManagedObjectContext (entity: NSEntityDescription; context: NSManagedObjectContext): NSManagedObject; message 'initWithEntity:insertIntoManagedObjectContext:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContext (moc: NSManagedObjectContext): id; message 'initWithContext:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function entity: NSEntityDescription; message 'entity';
    function objectID: NSManagedObjectID; message 'objectID';
    function isInserted: objcbool; message 'isInserted';
    function isUpdated: objcbool; message 'isUpdated';
    function isDeleted: objcbool; message 'isDeleted';
    function hasChanges: objcbool; message 'hasChanges'; { available in macosx 10.7,ios 5.0 }
    function hasPersistentChangedValues: objcbool; message 'hasPersistentChangedValues'; { available in macosx 10.9,ios 7.0 }
    function isFault: objcbool; message 'isFault';
    function hasFaultForRelationshipNamed (key: NSString): objcbool; message 'hasFaultForRelationshipNamed:'; { available in macosx 10.5,ios 3.0 }
    function objectIDsForRelationshipNamed (key: NSString): NSArray; message 'objectIDsForRelationshipNamed:'; { available in macosx 10.11,ios 8.3 }
    function faultingState: NSUInteger; message 'faultingState'; { available in macosx 10.5,ios 3.0 }
    procedure willAccessValueForKey (key: NSString); message 'willAccessValueForKey:';
    procedure didAccessValueForKey (key: NSString); message 'didAccessValueForKey:';
    procedure willChangeValueForKey (key: NSString); message 'willChangeValueForKey:';
    procedure didChangeValueForKey (key: NSString); message 'didChangeValueForKey:';
    procedure willChangeValueForKey_withSetMutation_usingObjects (inKey: NSString; inMutationKind: NSKeyValueSetMutationKind; inObjects: NSSet); message 'willChangeValueForKey:withSetMutation:usingObjects:';
    procedure didChangeValueForKey_withSetMutation_usingObjects (inKey: NSString; inMutationKind: NSKeyValueSetMutationKind; inObjects: NSSet); message 'didChangeValueForKey:withSetMutation:usingObjects:';
    procedure awakeFromFetch; message 'awakeFromFetch';
    procedure awakeFromInsert; message 'awakeFromInsert';
    procedure awakeFromSnapshotEvents (flags: NSSnapshotEventType); message 'awakeFromSnapshotEvents:'; { available in macosx 10.6,ios 3.0 }
    procedure prepareForDeletion; message 'prepareForDeletion'; { available in macosx 10.6,ios 3.0 }
    procedure willSave; message 'willSave';
    procedure didSave; message 'didSave';
    procedure willTurnIntoFault; message 'willTurnIntoFault'; { available in macosx 10.5,ios 3.0 }
    procedure didTurnIntoFault; message 'didTurnIntoFault';
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
    function primitiveValueForKey (key: NSString): id; message 'primitiveValueForKey:';
    procedure setPrimitiveValue_forKey (value: id; key: NSString); message 'setPrimitiveValue:forKey:';
    function committedValuesForKeys (keys: NSArray): NSDictionary; message 'committedValuesForKeys:';
    function changedValues: NSDictionary; message 'changedValues';
    function changedValuesForCurrentEvent: NSDictionary; message 'changedValuesForCurrentEvent'; { available in macosx 10.7,ios 5.0 }
    function validateValue_forKey_error (value: idPtr; key: NSString; error: NSErrorPtr): objcbool; message 'validateValue:forKey:error:';
    function validateForDelete (error: NSErrorPtr): objcbool; message 'validateForDelete:';
    function validateForInsert (error: NSErrorPtr): objcbool; message 'validateForInsert:';
    function validateForUpdate (error: NSErrorPtr): objcbool; message 'validateForUpdate:';
    procedure setObservationInfo (inObservationInfo: pointer); message 'setObservationInfo:';
    function observationInfo: pointer; message 'observationInfo';
  end;
{$endif}

