{ Parsed from CoreData.framework NSPersistentStoreDescription.h }

{$ifdef TYPES}
type
  NSPersistentStoreDescriptionPtr = ^NSPersistentStoreDescription;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreDescription = objcclass external (NSObject, NSCopyingProtocol)
  private
  public
    class function persistentStoreDescriptionWithURL (URL: NSURL): id; message 'persistentStoreDescriptionWithURL:';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setConfiguration(newValue: NSString); message 'setConfiguration:';
    function configuration: NSString; message 'configuration';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    function options: NSDictionary; message 'options';
    procedure setOption_forKey (option: NSObjectPtr; key: NSString); message 'setOption:forKey:';
    procedure setReadOnly(newValue: objcbool); message 'setReadOnly:';
    function isReadOnly: objcbool; message 'isReadOnly';
    procedure setTimeout(newValue: NSTimeInterval); message 'setTimeout:';
    function timeout: NSTimeInterval; message 'timeout';
    function sqlitePragmas: NSDictionary; message 'sqlitePragmas';
    procedure setValue_forPragmaNamed (value: NSObjectPtr; name: NSString); message 'setValue:forPragmaNamed:';
    procedure setShouldAddStoreAsynchronously(newValue: objcbool); message 'setShouldAddStoreAsynchronously:';
    function shouldAddStoreAsynchronously: objcbool; message 'shouldAddStoreAsynchronously';
    procedure setShouldMigrateStoreAutomatically(newValue: objcbool); message 'setShouldMigrateStoreAutomatically:';
    function shouldMigrateStoreAutomatically: objcbool; message 'shouldMigrateStoreAutomatically';
    procedure setShouldInferMappingModelAutomatically(newValue: objcbool); message 'setShouldInferMappingModelAutomatically:';
    function shouldInferMappingModelAutomatically: objcbool; message 'shouldInferMappingModelAutomatically';
    function initWithURL (url_: NSURL): id; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  NSPersistentCloudKitContainerAdditions = objccategory external (NSPersistentStoreDescription)
    procedure setCloudKitContainerOptions(newValue: NSPersistentCloudKitContainerOptions); message 'setCloudKitContainerOptions:'; { available in macosx ,ios ,tvos ,watchos  }
    function cloudKitContainerOptions: NSPersistentCloudKitContainerOptions; message 'cloudKitContainerOptions'; { available in macosx ,ios ,tvos ,watchos  }
  end;
{$endif}

