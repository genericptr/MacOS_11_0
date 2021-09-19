{ Parsed from CoreData.framework NSPersistentHistoryChange.h }

{$ifdef TYPES}
type
  NSPersistentHistoryChangePtr = ^NSPersistentHistoryChange;
{$endif}

{$ifdef TYPES}
type
  NSPersistentHistoryChangeType = NSInteger;
  NSPersistentHistoryChangeTypePtr = ^NSPersistentHistoryChangeType;

const
  NSPersistentHistoryChangeTypeInsert = 0;
  NSPersistentHistoryChangeTypeUpdate = 1;
  NSPersistentHistoryChangeTypeDelete = 2;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentHistoryChange = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function entityDescriptionWithContext (context: NSManagedObjectContext): NSEntityDescription; message 'entityDescriptionWithContext:'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    class function entityDescription: NSEntityDescription; message 'entityDescription'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    class function fetchRequest: NSFetchRequest; message 'fetchRequest'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    function changeID: cint64; message 'changeID';
    function changedObjectID: NSManagedObjectID; message 'changedObjectID';
    function changeType: NSPersistentHistoryChangeType; message 'changeType';
    function tombstone: NSDictionary; message 'tombstone';
    function transaction: NSPersistentHistoryTransaction; message 'transaction';
    function updatedProperties: NSSet; message 'updatedProperties';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

