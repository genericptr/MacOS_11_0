{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentStoreCoordinator.h }

{$ifdef CALLBACKS}
type
  NSPersistentStoreCoordinatorAddPersistentStoreWithDescriptionCallback = reference to function (param1: NSPersistentStoreDescription; param2: NSError): pointer; cblock; cdecl;
  NSPersistentStoreCoordinatorPerformBlockCallback = reference to function : pointer; cblock; cdecl;
  NSPersistentStoreCoordinatorPerformBlockAndWaitCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPersistentStoreCoordinatorPtr = ^NSPersistentStoreCoordinator;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSQLiteStoreType: NSString { available in macosx ,ios  }; cvar; external;
  NSXMLStoreType: NSString { unavailable in ios }; cvar; external;
  NSBinaryStoreType: NSString { available in macosx ,ios  }; cvar; external;
  NSInMemoryStoreType: NSString { available in macosx ,ios  }; cvar; external;
  NSStoreTypeKey: NSString { available in macosx ,ios  }; cvar; external;
  NSStoreUUIDKey: NSString { available in macosx ,ios  }; cvar; external;
  NSPersistentStoreCoordinatorStoresWillChangeNotification: NSString { available in macosx ,ios  }; cvar; external;
  NSPersistentStoreCoordinatorStoresDidChangeNotification: NSString { available in macosx ,ios  }; cvar; external;
  NSPersistentStoreCoordinatorWillRemoveStoreNotification: NSString { available in macosx ,ios  }; cvar; external;
  NSAddedPersistentStoresKey: NSString { available in macosx ,ios  }; cvar; external;
  NSRemovedPersistentStoresKey: NSString { available in macosx ,ios  }; cvar; external;
  NSUUIDChangedPersistentStoresKey: NSString { available in macosx ,ios  }; cvar; external;
  NSReadOnlyPersistentStoreOption: NSString { available in macosx ,ios  }; cvar; external;
  NSValidateXMLStoreOption: NSString { unavailable in ios }; cvar; external;
  NSPersistentStoreTimeoutOption: NSString { available in macosx ,ios  }; cvar; external;
  NSSQLitePragmasOption: NSString { available in macosx ,ios  }; cvar; external;
  NSSQLiteAnalyzeOption: NSString { available in macosx ,ios  }; cvar; external;
  NSSQLiteManualVacuumOption: NSString { available in macosx ,ios  }; cvar; external;
  NSIgnorePersistentStoreVersioningOption: NSString { available in macosx ,ios  }; cvar; external;
  NSMigratePersistentStoresAutomaticallyOption: NSString { available in macosx ,ios  }; cvar; external;
  NSInferMappingModelAutomaticallyOption: NSString { available in macosx ,ios  }; cvar; external;
  NSStoreModelVersionHashesKey: NSString { available in macosx ,ios  }; cvar; external;
  NSStoreModelVersionIdentifiersKey: NSString { available in macosx ,ios  }; cvar; external;
  NSPersistentStoreOSCompatibility: NSString { available in macosx ,ios  }; cvar; external;
  NSPersistentStoreConnectionPoolMaxSizeKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSCoreDataCoreSpotlightExporter: NSString { unavailable in tvos,watchos }; cvar; external;
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
  NSPersistentStoreForceDestroyOption: NSString { available in macosx ,ios  }; cvar; external;
  NSPersistentStoreFileProtectionKey: NSString { unavailable in macosx }; cvar; external;
  NSPersistentHistoryTrackingKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSBinaryStoreSecureDecodingClasses: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSBinaryStoreInsecureDecodingCompatibilityOption: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSPersistentStoreRemoteChangeNotificationPostOptionKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSPersistentStoreRemoteChangeNotification: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSPersistentStoreURLKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
  NSPersistentHistoryTokenKey: NSString { available in macosx ,ios ,tvos ,watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreCoordinator = objcclass external (NSObject, NSLockingProtocol)
  private
  public
    function initWithManagedObjectModel (model: NSManagedObjectModel): id; message 'initWithManagedObjectModel:'; { NS_DESIGNATED_INITIALIZER }
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    function persistentStores: NSArray; message 'persistentStores';
    procedure setName(newValue: NSString); message 'setName:'; { available in macosx ,ios  }
    function name: NSString; message 'name'; { available in macosx ,ios  }
    function persistentStoreForURL (URL: NSURL): NSPersistentStore; message 'persistentStoreForURL:';
    function URLForPersistentStore (store: NSPersistentStore): NSURL; message 'URLForPersistentStore:';
    function setURL_forPersistentStore (url: NSURL; store: NSPersistentStore): objcbool; message 'setURL:forPersistentStore:'; { available in macosx ,ios  }
    function addPersistentStoreWithType_configuration_URL_options_error (storeType: NSString; configuration: NSString; storeURL: NSURL; options: NSDictionary; error: NSErrorPtr): NSPersistentStore; message 'addPersistentStoreWithType:configuration:URL:options:error:';
    procedure addPersistentStoreWithDescription_completionHandler (storeDescription: NSPersistentStoreDescription; block: NSPersistentStoreCoordinatorAddPersistentStoreWithDescriptionCallback); message 'addPersistentStoreWithDescription:completionHandler:'; { available in macosx ,ios ,tvos ,watchos  }
    function removePersistentStore_error (store: NSPersistentStore; error: NSErrorPtr): objcbool; message 'removePersistentStore:error:';
    procedure setMetadata_forPersistentStore (metadata: NSDictionary; store: NSPersistentStore); message 'setMetadata:forPersistentStore:';
    function metadataForPersistentStore (store: NSPersistentStore): NSDictionary; message 'metadataForPersistentStore:';
    function managedObjectIDForURIRepresentation (url: NSURL): NSManagedObjectID; message 'managedObjectIDForURIRepresentation:';
    function executeRequest_withContext_error (request: NSPersistentStoreRequest; context: NSManagedObjectContext; error: NSErrorPtr): id; message 'executeRequest:withContext:error:'; { available in macosx ,ios  }
    class function registeredStoreTypes: NSDictionary; message 'registeredStoreTypes'; { available in macosx ,ios  }
    class procedure registerStoreClass_forStoreType (storeClass: pobjc_class; storeType: NSString); message 'registerStoreClass:forStoreType:'; { available in macosx ,ios  }
    class function metadataForPersistentStoreOfType_URL_options_error (storeType: NSString; url: NSURL; options: NSDictionary; error: NSErrorPtr): NSDictionary; message 'metadataForPersistentStoreOfType:URL:options:error:'; { available in macosx ,ios  }
    class function setMetadata_forPersistentStoreOfType_URL_options_error (metadata: NSDictionary; storeType: NSString; url: NSURL; options: NSDictionary; error: NSErrorPtr): objcbool; message 'setMetadata:forPersistentStoreOfType:URL:options:error:'; { available in macosx ,ios  }
    class function elementsDerivedFromExternalRecordURL (fileURL: NSURL): NSDictionary; message 'elementsDerivedFromExternalRecordURL:'; { unavailable in ios }
    function importStoreWithIdentifier_fromExternalRecordsDirectory_toURL_options_withType_error (storeIdentifier: NSString; externalRecordsURL: NSURL; destinationURL: NSURL; options: NSDictionary; storeType: NSString; error: NSErrorPtr): NSPersistentStore; message 'importStoreWithIdentifier:fromExternalRecordsDirectory:toURL:options:withType:error:'; { unavailable in ios }
    function migratePersistentStore_toURL_options_withType_error (store: NSPersistentStore; URL: NSURL; options: NSDictionary; storeType: NSString; error: NSErrorPtr): NSPersistentStore; message 'migratePersistentStore:toURL:options:withType:error:';
    function destroyPersistentStoreAtURL_withType_options_error (url: NSURL; storeType: NSString; options: NSDictionary; error: NSErrorPtr): objcbool; message 'destroyPersistentStoreAtURL:withType:options:error:'; { available in macosx ,ios  }
    function replacePersistentStoreAtURL_destinationOptions_withPersistentStoreFromURL_sourceOptions_storeType_error (destinationURL: NSURL; destinationOptions: NSDictionary; sourceURL: NSURL; sourceOptions: NSDictionary; storeType: NSString; error: NSErrorPtr): objcbool; message 'replacePersistentStoreAtURL:destinationOptions:withPersistentStoreFromURL:sourceOptions:storeType:error:'; { available in macosx ,ios  }
    procedure performBlock (block: NSPersistentStoreCoordinatorPerformBlockCallback); message 'performBlock:'; { available in macosx ,ios  }
    procedure performBlockAndWait (block: NSPersistentStoreCoordinatorPerformBlockAndWaitCallback); message 'performBlockAndWait:'; { available in macosx ,ios  }
    function currentPersistentHistoryTokenFromStores (stores: NSArray): NSPersistentHistoryToken; message 'currentPersistentHistoryTokenFromStores:'; { available in macosx ,ios ,tvos ,watchos  }
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

