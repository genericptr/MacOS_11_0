{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentCloudKitContainerEvent.h }

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerEventPtr = ^NSPersistentCloudKitContainerEvent;
{$endif}

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerEventType = NSInteger;
  NSPersistentCloudKitContainerEventTypePtr = ^NSPersistentCloudKitContainerEventType;

const
  NSPersistentCloudKitContainerEventTypeSetup = 0;
  NSPersistentCloudKitContainerEventTypeImport = 1;
  NSPersistentCloudKitContainerEventTypeExport = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPersistentCloudKitContainerEventChangedNotification: NSNotificationName { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSPersistentCloudKitContainerEventUserInfoKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentCloudKitContainerEvent = objcclass external (NSObject, NSCopyingProtocol)
  public
    function identifier: NSUUID; message 'identifier';
    function storeIdentifier: NSString; message 'storeIdentifier';
    function type_: NSPersistentCloudKitContainerEventType; message 'type';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function succeeded: objcbool; message 'succeeded';
    function error: NSError; message 'error';
    class function new_: id; message 'new';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

