{ Parsed from CoreData.framework NSPersistentStoreCoordinator.h }

{$ifdef CALLBACKS}
type
  NSPersistentStoreCoordinatorAddPersistentStoreWithDescriptionCallback = reference to procedure (param1: NSPersistentStoreDescription; param2: NSError); cblock; cdecl;
  NSPersistentStoreCoordinatorPerformBlockCallback = reference to procedure; cblock; cdecl;
  NSPersistentStoreCoordinatorPerformBlockAndWaitCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPersistentStoreCoordinatorPtr = ^NSPersistentStoreCoordinator;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSQLiteStoreType: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSXMLStoreType: NSString { unavailable in ios } { available in macosx 10.4 }; cvar; external;
  NSBinaryStoreType: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSInMemoryStoreType: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSStoreTypeKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSStoreUUIDKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSPersistentStoreCoordinatorStoresWillChangeNotification: NSString { available in macosx 10.9,ios 7.0 }; cvar; external;
  NSPersistentStoreCoordinatorStoresDidChangeNotification: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSPersistentStoreCoordinatorWillRemoveStoreNotification: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSAddedPersistentStoresKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSRemovedPersistentStoresKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSUUIDChangedPersistentStoresKey: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSReadOnlyPersistentStoreOption: NSString { available in macosx 10.4,ios 3.0 }; cvar; external;
  NSValidateXMLStoreOption: NSString { unavailable in ios } { available in macosx 10.4 }; cvar; external;
  NSPersistentStoreTimeoutOption: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSSQLitePragmasOption: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSSQLiteAnalyzeOption: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSSQLiteManualVacuumOption: NSString { available in macosx 10.6,ios 3.0 }; cvar; external;
  NSIgnorePersistentStoreVersioningOption: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSMigratePersistentStoresAutomaticallyOption: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSInferMappingModelAutomaticallyOption: NSString { available in macosx 10.6,ios 3.0 }; cvar; external;
  NSStoreModelVersionHashesKey: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSStoreModelVersionIdentifiersKey: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSPersistentStoreOSCompatibility: NSString { available in macosx 10.5,ios 3.0 }; cvar; external;
  NSPersistentStoreConnectionPoolMaxSizeKey: NSString { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }; cvar; external;
  NSCoreDataCoreSpotlightExporter: NSString { unavailable in tvos,watchos } { available in macosx 10.13,ios 11.0 }; cvar; external;
  NSXMLExternalRecordType: NSString { unavailable in ios }; cvar; external;
  NSBinaryExternalRecordType: NSString { unavailable in ios }; cvar; external;
  NSExternalRecordsFileFormatOption: NSString { unavailable in ios }; cvar; external;
  NSExternalRecordsDirectoryOption: NSString { unavailable in ios }; cvar; external;
  NSExternalRecordExtensionOption: NSString { unavailable in ios }; cvar; external;
  NSEntityNameInPathKey: NSString { unavailable in ios }; cvar; external;
  NSStoreUUIDInPathKey: NSString { unavailable in ios }; cvar; external;
  NSStorePathKey: NSString { unavailable in ios }; cvar; external;
  NSModelPathKey: NSString { unavailable in ios }; cvar; external;
  NSObjectURIKey: NSString { unavailable in ios }; cvar; external;
  NSPersistentStoreForceDestroyOption: NSString { available in macosx 10.8,ios 6.0 }; cvar; external;
  NSPersistentStoreFileProtectionKey: NSString { unavailable in macosx } { available in ios 5.0 }; cvar; external;
  NSPersistentHistoryTrackingKey: NSString { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }; cvar; external;
  NSBinaryStoreSecureDecodingClasses: NSString { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }; cvar; external;
  NSBinaryStoreInsecureDecodingCompatibilityOption: NSString { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }; cvar; external;
  NSPersistentStoreRemoteChangeNotificationPostOptionKey: NSString { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }; cvar; external;
  NSPersistentStoreRemoteChangeNotification: NSString { available in macosx 10.14,ios 12.0,tvos 12.0,watchos 5.0 }; cvar; external;
  NSPersistentStoreURLKey: NSString { available in macosx 10.14,ios 12.0,tvos 12.0,watchos 5.0 }; cvar; external;
  NSPersistentHistoryTokenKey: NSString { available in macosx 10.14,ios 12.0,tvos 12.0,watchos 5.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreCoordinator = objcclass external (NSObject, NSLockingProtocol)
  private
  public
    function initWithManagedObjectModel (model: NSManagedObjectModel): id; message 'initWithManagedObjectModel:'; { NS_DESIGNATED_INITIALIZER }
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    function persistentStores: NSArray; message 'persistentStores';
    procedure setName(newValue: NSString); message 'setName:'; { available in macosx 10.10,ios 8.0 }
    function name: NSString; message 'name'; { available in macosx 10.10,ios 8.0 }
    function persistentStoreForURL (URL: NSURL): NSPersistentStore; message 'persistentStoreForURL:';
    function URLForPersistentStore (store: NSPersistentStore): NSURL; message 'URLForPersistentStore:';
    function setURL_forPersistentStore (url: NSURL; store: NSPersistentStore): objcbool; message 'setURL:forPersistentStore:'; { available in macosx 10.5,ios 3.0 }
    function addPersistentStoreWithType_configuration_URL_options_error (storeType: NSString; configuration: NSString; storeURL: NSURL; options: NSDictionary; error: NSErrorPtr): NSPersistentStore; message 'addPersistentStoreWithType:configuration:URL:options:error:';
    procedure addPersistentStoreWithDescription_completionHandler (storeDescription: NSPersistentStoreDescription; block: NSPersistentStoreCoordinatorAddPersistentStoreWithDescriptionCallback); message 'addPersistentStoreWithDescription:completionHandler:'; { available in macosx 10.12,ios 10.0,tvos 10.0,watchos 3.0 }
    function removePersistentStore_error (store: NSPersistentStore; error: NSErrorPtr): objcbool; message 'removePersistentStore:error:';
    procedure setMetadata_forPersistentStore (metadata: NSDictionary; store: NSPersistentStore); message 'setMetadata:forPersistentStore:';
    function metadataForPersistentStore (store: NSPersistentStore): NSDictionary; message 'metadataForPersistentStore:';
    function managedObjectIDForURIRepresentation (url: NSURL): NSManagedObjectID; message 'managedObjectIDForURIRepresentation:';
    function executeRequest_withContext_error (request: NSPersistentStoreRequest; context: NSManagedObjectContext; error: NSErrorPtr): id; message 'executeRequest:withContext:error:'; { available in macosx 10.7,ios 5.0 }
    class function registeredStoreTypes: NSDictionary; message 'registeredStoreTypes'; { available in macosx 10.5,ios 3.0 }
    class procedure registerStoreClass_forStoreType (storeClass: pobjc_class; storeType: NSString); message 'registerStoreClass:forStoreType:'; { available in macosx 10.5,ios 3.0 }
    class function metadataForPersistentStoreOfType_URL_options_error (storeType: NSString; url: NSURL; options: NSDictionary; error: NSErrorPtr): NSDictionary; message 'metadataForPersistentStoreOfType:URL:options:error:'; { available in macosx 10.9,ios 7.0 }
    class function setMetadata_forPersistentStoreOfType_URL_options_error (metadata: NSDictionary; storeType: NSString; url: NSURL; options: NSDictionary; error: NSErrorPtr): objcbool; message 'setMetadata:forPersistentStoreOfType:URL:options:error:'; { available in macosx 10.9,ios 7.0 }
    class function elementsDerivedFromExternalRecordURL (fileURL: NSURL): NSDictionary; message 'elementsDerivedFromExternalRecordURL:'; { unavailable in ios } { available in macosx 10.6 }
    function importStoreWithIdentifier_fromExternalRecordsDirectory_toURL_options_withType_error (storeIdentifier: NSString; externalRecordsURL: NSURL; destinationURL: NSURL; options: NSDictionary; storeType: NSString; error: NSErrorPtr): NSPersistentStore; message 'importStoreWithIdentifier:fromExternalRecordsDirectory:toURL:options:withType:error:'; { unavailable in ios } { available in macosx 10.6 }
    function migratePersistentStore_toURL_options_withType_error (store: NSPersistentStore; URL: NSURL; options: NSDictionary; storeType: NSString; error: NSErrorPtr): NSPersistentStore; message 'migratePersistentStore:toURL:options:withType:error:';
    function destroyPersistentStoreAtURL_withType_options_error (url: NSURL; storeType: NSString; options: NSDictionary; error: NSErrorPtr): objcbool; message 'destroyPersistentStoreAtURL:withType:options:error:'; { available in macosx 10.11,ios 9.0 }
    function replacePersistentStoreAtURL_destinationOptions_withPersistentStoreFromURL_sourceOptions_storeType_error (destinationURL: NSURL; destinationOptions: NSDictionary; sourceURL: NSURL; sourceOptions: NSDictionary; storeType: NSString; error: NSErrorPtr): objcbool; message 'replacePersistentStoreAtURL:destinationOptions:withPersistentStoreFromURL:sourceOptions:storeType:error:'; { available in macosx 10.11,ios 9.0 }
    procedure performBlock (block: NSPersistentStoreCoordinatorPerformBlockCallback); message 'performBlock:'; { available in macosx 10.10,ios 8.0 }
    procedure performBlockAndWait (block: NSPersistentStoreCoordinatorPerformBlockAndWaitCallback); message 'performBlockAndWait:'; { available in macosx 10.10,ios 8.0 }
    function currentPersistentHistoryTokenFromStores (stores: NSArray): NSPersistentHistoryToken; message 'currentPersistentHistoryTokenFromStores:'; { available in macosx 10.14,ios 12.0,tvos 12.0,watchos 5.0 }
    class function metadataForPersistentStoreWithURL_error (url: NSURL; error: NSErrorPtr): NSDictionary; message 'metadataForPersistentStoreWithURL:error:'; deprecated 'Use -metadataForPersistentStoreOfType:URL:options:error: and pass in an options dictionary matching addPersistentStoreWithType';
    procedure lock; message 'lock'; deprecated 'in  "Use -performBlockAndWait: instead", , ';
    procedure unlock; message 'unlock'; deprecated 'in  "Use -performBlockAndWait: instead", , ';
    function tryLock: objcbool; message 'tryLock'; deprecated 'in  "Use -performBlock: instead", , ';
    class function metadataForPersistentStoreOfType_URL_error (storeType: NSString; url: NSURL; error: NSErrorPtr): NSDictionary; message 'metadataForPersistentStoreOfType:URL:error:'; deprecated 'Use -metadataForPersistentStoreOfType:URL:options:error: and pass in an options dictionary matching addPersistentStoreWithType';
    class function setMetadata_forPersistentStoreOfType_URL_error (metadata: NSDictionary; storeType: NSString; url: NSURL; error: NSErrorPtr): objcbool; message 'setMetadata:forPersistentStoreOfType:URL:error:'; deprecated 'Use  -setMetadata:forPersistentStoreOfType:URL:options:error: and pass in an options dictionary matching addPersistentStoreWithType';
    class function removeUbiquitousContentAndPersistentStoreAtURL_options_error (storeURL: NSURL; options: NSDictionary; error: NSErrorPtr): objcbool; message 'removeUbiquitousContentAndPersistentStoreAtURL:options:error:'; deprecated 'Please see the release notes and Core Data documentation.';
  end;
{$endif}

{$ifdef TYPES}
type
  NSPersistentStoreUbiquitousTransitionType = NSUInteger;
  NSPersistentStoreUbiquitousTransitionTypePtr = ^NSPersistentStoreUbiquitousTransitionType;

const
  NSPersistentStoreUbiquitousTransitionTypeAccountAdded = 1;
  NSPersistentStoreUbiquitousTransitionTypeAccountRemoved = 2;
  NSPersistentStoreUbiquitousTransitionTypeContentRemoved = 3;
  NSPersistentStoreUbiquitousTransitionTypeInitialImportCompleted = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPersistentStoreUbiquitousContentNameKey: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreUbiquitousContentURLKey: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreDidImportUbiquitousContentChangesNotification: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreUbiquitousTransitionTypeKey: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreUbiquitousPeerTokenOption: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreRemoveUbiquitousMetadataOption: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreUbiquitousContainerIdentifierKey: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
  NSPersistentStoreRebuildFromUbiquitousContentOption: NSString deprecated 'Please see the release notes and Core Data documentation.'; cvar; external;
{$endif}

