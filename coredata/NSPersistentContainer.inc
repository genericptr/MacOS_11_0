{ Parsed from CoreData.framework NSPersistentContainer.h }

{$ifdef CALLBACKS}
type
  NSPersistentContainerLoadPersistentStoresWithCompletionHandlerCallback = reference to procedure (param1: NSPersistentStoreDescription; param2: NSError); cblock; cdecl;
  NSPersistentContainerPerformBackgroundTaskCallback = reference to procedure (param1: NSManagedObjectContext); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPersistentContainerPtr = ^NSPersistentContainer;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentContainer = objcclass external (NSObject)
  private
  public
    class function persistentContainerWithName (name: NSString): id; message 'persistentContainerWithName:';
    class function persistentContainerWithName_managedObjectModel (name: NSString; model: NSManagedObjectModel): id; message 'persistentContainerWithName:managedObjectModel:';
    class function defaultDirectoryURL: NSURL; message 'defaultDirectoryURL';
    function name: NSString; message 'name';
    function viewContext: NSManagedObjectContext; message 'viewContext';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    procedure setPersistentStoreDescriptions(newValue: NSArray); message 'setPersistentStoreDescriptions:';
    function persistentStoreDescriptions: NSArray; message 'persistentStoreDescriptions';
    function initWithName (name_: NSString): id; message 'initWithName:';
    function initWithName_managedObjectModel (name_: NSString; model: NSManagedObjectModel): id; message 'initWithName:managedObjectModel:'; { NS_DESIGNATED_INITIALIZER }
    procedure loadPersistentStoresWithCompletionHandler (block: NSPersistentContainerLoadPersistentStoresWithCompletionHandlerCallback); message 'loadPersistentStoresWithCompletionHandler:';
    function newBackgroundContext: NSManagedObjectContext; message 'newBackgroundContext';
    procedure performBackgroundTask (block: NSPersistentContainerPerformBackgroundTaskCallback); message 'performBackgroundTask:';
  end;
{$endif}

