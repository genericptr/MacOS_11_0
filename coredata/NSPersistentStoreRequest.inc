{ Parsed from CoreData.framework NSPersistentStoreRequest.h }

{$ifdef TYPES}
type
  NSPersistentStoreRequestPtr = ^NSPersistentStoreRequest;
{$endif}

{$ifdef TYPES}
type
  NSPersistentStoreRequestType = NSUInteger;
  NSPersistentStoreRequestTypePtr = ^NSPersistentStoreRequestType;

const
  NSFetchRequestType = 1;
  NSSaveRequestType = 2;
  NSBatchInsertRequestType = 5 { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 };
  NSBatchUpdateRequestType = 6 { available in macosx 10.10, ios 8.0 };
  NSBatchDeleteRequestType = 7 { available in macosx 10.11, ios 9.0 };
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreRequest = objcclass external (NSObject, NSCopyingProtocol)
  private
  public
    procedure setAffectedStores(newValue: NSArray); message 'setAffectedStores:';
    function affectedStores: NSArray; message 'affectedStores';
    function requestType: NSPersistentStoreRequestType; message 'requestType';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

