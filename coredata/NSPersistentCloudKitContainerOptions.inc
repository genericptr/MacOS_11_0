{ Parsed from CoreData.framework NSPersistentCloudKitContainerOptions.h }

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerOptionsPtr = ^NSPersistentCloudKitContainerOptions;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentCloudKitContainerOptions = objcclass external (NSObject)
  public
    function containerIdentifier: NSString; message 'containerIdentifier';
    procedure setDatabaseScope(newValue: CKDatabaseScope); message 'setDatabaseScope:'; { available in macosx ,ios ,tvos ,watchos  }
    function databaseScope: CKDatabaseScope; message 'databaseScope'; { available in macosx ,ios ,tvos ,watchos  }
    function init: id; message 'init';
    function initWithContainerIdentifier (containerIdentifier_: NSString): id; message 'initWithContainerIdentifier:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

