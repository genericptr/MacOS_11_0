{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentStore.h }

{$ifdef TYPES}
type
  NSPersistentStorePtr = ^NSPersistentStore;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStore = objcclass external (NSObject)
  private
  public
    class function metadataForPersistentStoreWithURL_error (url: NSURL; error: NSErrorPtr): NSDictionary; message 'metadataForPersistentStoreWithURL:error:';
    class function setMetadata_forPersistentStoreWithURL_error (metadata: NSDictionary; url: NSURL; error: NSErrorPtr): objcbool; message 'setMetadata:forPersistentStoreWithURL:error:';
    class function migrationManagerClass: pobjc_class; message 'migrationManagerClass'; { available in macosx ,ios  }
    function initWithPersistentStoreCoordinator_configurationName_URL_options (root: NSPersistentStoreCoordinator; name: NSString; url: NSURL; options: NSDictionary): id; message 'initWithPersistentStoreCoordinator:configurationName:URL:options:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function loadMetadata (error: NSErrorPtr): objcbool; message 'loadMetadata:';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    function configurationName: NSString; message 'configurationName';
    function options: NSDictionary; message 'options';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    function type_: NSString; message 'type';
    procedure setReadOnly(newValue: objcbool); message 'setReadOnly:';
    function isReadOnly: objcbool; message 'isReadOnly';
    procedure setMetadata(newValue: NSDictionary); message 'setMetadata:';
    function metadata: NSDictionary; message 'metadata';
    procedure didAddToPersistentStoreCoordinator (coordinator: NSPersistentStoreCoordinator); message 'didAddToPersistentStoreCoordinator:';
    procedure willRemoveFromPersistentStoreCoordinator (coordinator: NSPersistentStoreCoordinator); message 'willRemoveFromPersistentStoreCoordinator:';
    function coreSpotlightExporter: NSCoreDataCoreSpotlightDelegate; message 'coreSpotlightExporter'; { unavailable in tvos,watchos }
  end;
{$endif}

