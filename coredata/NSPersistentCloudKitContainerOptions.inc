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
    procedure setDatabaseScope(newValue: CKDatabaseScope); message 'setDatabaseScope:'; { available in macosx 11.0,ios 14.0,tvos 14.0,watchos 7.0 }
    function databaseScope: CKDatabaseScope; message 'databaseScope'; { available in macosx 11.0,ios 14.0,tvos 14.0,watchos 7.0 }
    function init: id; message 'init';
    function initWithContainerIdentifier (containerIdentifier_: NSString): id; message 'initWithContainerIdentifier:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

