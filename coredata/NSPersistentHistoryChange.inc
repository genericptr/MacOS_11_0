{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentHistoryChange.h }

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
    class function entityDescriptionWithContext (context: NSManagedObjectContext): NSEntityDescription; message 'entityDescriptionWithContext:'; { available in macosx ,ios ,tvos ,watchos  }
    class function entityDescription: NSEntityDescription; message 'entityDescription'; { available in macosx ,ios ,tvos ,watchos  }
    class function fetchRequest: NSFetchRequest; message 'fetchRequest'; { available in macosx ,ios ,tvos ,watchos  }
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

