{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentStoreRequest.h }

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
  NSBatchInsertRequestType = 5 { available in macosx ,ios ,tvos ,watchos  };
  NSBatchUpdateRequestType = 6 { available in macosx , ios  };
  NSBatchDeleteRequestType = 7 { available in macosx , ios  };
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

