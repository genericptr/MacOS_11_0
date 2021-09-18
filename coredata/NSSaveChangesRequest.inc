{ Parsed from CoreData.framework NSSaveChangesRequest.h }

{$ifdef TYPES}
type
  NSSaveChangesRequestPtr = ^NSSaveChangesRequest;
{$endif}

{$ifdef CLASSES}

type
  NSSaveChangesRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    function initWithInsertedObjects_updatedObjects_deletedObjects_lockedObjects (insertedObjects: NSSet; updatedObjects: NSSet; deletedObjects: NSSet; lockedObjects: NSSet): id; message 'initWithInsertedObjects:updatedObjects:deletedObjects:lockedObjects:';
    function insertedObjects: NSSet; message 'insertedObjects';
    function updatedObjects: NSSet; message 'updatedObjects';
    function deletedObjects: NSSet; message 'deletedObjects';
    function lockedObjects: NSSet; message 'lockedObjects';
  end;
{$endif}

