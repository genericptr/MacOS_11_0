{ Parsed from CoreData.framework NSMergePolicy.h }

{$ifdef TYPES}
type
  NSMergeConflictPtr = ^NSMergeConflict;
  NSConstraintConflictPtr = ^NSConstraintConflict;
  NSMergePolicyPtr = ^NSMergePolicy;
{$endif}

{$ifdef TYPES}
type
  NSMergePolicyType = NSUInteger;
  NSMergePolicyTypePtr = ^NSMergePolicyType;

const
  NSErrorMergePolicyType = $00;
  NSMergeByPropertyStoreTrumpMergePolicyType = $01;
  NSMergeByPropertyObjectTrumpMergePolicyType = $02;
  NSOverwriteMergePolicyType = $03;
  NSRollbackMergePolicyType = $04;
{$endif}

{$ifdef CLASSES}

type
  NSMergeConflict = objcclass external (NSObject)
  private
  public
    function sourceObject: NSManagedObject; message 'sourceObject';
    function objectSnapshot: NSDictionary; message 'objectSnapshot';
    function cachedSnapshot: NSDictionary; message 'cachedSnapshot';
    function persistedSnapshot: NSDictionary; message 'persistedSnapshot';
    function newVersionNumber: NSUInteger; message 'newVersionNumber';
    function oldVersionNumber: NSUInteger; message 'oldVersionNumber';
    function initWithSource_newVersion_oldVersion_cachedSnapshot_persistedSnapshot (srcObject: NSManagedObject; newvers: NSUInteger; oldvers: NSUInteger; cachesnap: NSDictionary; persnap: NSDictionary): id; message 'initWithSource:newVersion:oldVersion:cachedSnapshot:persistedSnapshot:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
  end;

type
  NSConstraintConflict = objcclass external (NSObject)
  private
  public
    function constraint: NSArray; message 'constraint';
    function constraintValues: NSDictionary; message 'constraintValues';
    function databaseObject: NSManagedObject; message 'databaseObject';
    function databaseSnapshot: NSDictionary; message 'databaseSnapshot';
    function conflictingObjects: NSArray; message 'conflictingObjects';
    function conflictingSnapshots: NSArray; message 'conflictingSnapshots';
    function initWithConstraint_databaseObject_databaseSnapshot_conflictingObjects_conflictingSnapshots (contraint: NSArray; databaseObject_: NSManagedObject; databaseSnapshot_: NSDictionary; conflictingObjects_: NSArray; conflictingSnapshots_: NSArray): id; message 'initWithConstraint:databaseObject:databaseSnapshot:conflictingObjects:conflictingSnapshots:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSMergePolicy = objcclass external (NSObject)
  private
  public
    class function errorMergePolicy: NSMergePolicy; message 'errorMergePolicy'; { available in macosx ,ios ,tvos ,watchos  }
    class function rollbackMergePolicy: NSMergePolicy; message 'rollbackMergePolicy'; { available in macosx ,ios ,tvos ,watchos  }
    class function overwriteMergePolicy: NSMergePolicy; message 'overwriteMergePolicy'; { available in macosx ,ios ,tvos ,watchos  }
    class function mergeByPropertyObjectTrumpMergePolicy: NSMergePolicy; message 'mergeByPropertyObjectTrumpMergePolicy'; { available in macosx ,ios ,tvos ,watchos  }
    class function mergeByPropertyStoreTrumpMergePolicy: NSMergePolicy; message 'mergeByPropertyStoreTrumpMergePolicy'; { available in macosx ,ios ,tvos ,watchos  }
    function mergeType: NSMergePolicyType; message 'mergeType';
    function initWithMergeType (ty: NSMergePolicyType): id; message 'initWithMergeType:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function resolveConflicts_error (list: NSArray; error: NSErrorPtr): objcbool; message 'resolveConflicts:error:';
    function resolveOptimisticLockingVersionConflicts_error (list: NSArray; error: NSErrorPtr): objcbool; message 'resolveOptimisticLockingVersionConflicts:error:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    function resolveConstraintConflicts_error (list: NSArray; error: NSErrorPtr): objcbool; message 'resolveConstraintConflicts:error:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
  end;
{$endif}

