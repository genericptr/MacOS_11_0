{ Parsed from CoreData.framework NSMigrationManager.h }

{$ifdef TYPES}
type
  NSMigrationManagerPtr = ^NSMigrationManager;
{$endif}

{$ifdef CLASSES}

type
  NSMigrationManager = objcclass external (NSObject)
  private
  public
    function initWithSourceModel_destinationModel (sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel): id; message 'initWithSourceModel:destinationModel:';
    function migrateStoreFromURL_type_options_withMappingModel_toDestinationURL_destinationType_destinationOptions_error (sourceURL: NSURL; sStoreType: NSString; sOptions: NSDictionary; mappings: NSMappingModel; dURL: NSURL; dStoreType: NSString; dOptions: NSDictionary; error: NSErrorPtr): objcbool; message 'migrateStoreFromURL:type:options:withMappingModel:toDestinationURL:destinationType:destinationOptions:error:';
    procedure setUsesStoreSpecificMigrationManager(newValue: objcbool); message 'setUsesStoreSpecificMigrationManager:'; { available in macosx 10.7,ios 5.0 }
    function usesStoreSpecificMigrationManager: objcbool; message 'usesStoreSpecificMigrationManager'; { available in macosx 10.7,ios 5.0 }
    procedure reset; message 'reset';
    function mappingModel: NSMappingModel; message 'mappingModel';
    function sourceModel: NSManagedObjectModel; message 'sourceModel';
    function destinationModel: NSManagedObjectModel; message 'destinationModel';
    function sourceContext: NSManagedObjectContext; message 'sourceContext';
    function destinationContext: NSManagedObjectContext; message 'destinationContext';
    function sourceEntityForEntityMapping (mEntity: NSEntityMapping): NSEntityDescription; message 'sourceEntityForEntityMapping:';
    function destinationEntityForEntityMapping (mEntity: NSEntityMapping): NSEntityDescription; message 'destinationEntityForEntityMapping:';
    procedure associateSourceInstance_withDestinationInstance_forEntityMapping (sourceInstance: NSManagedObject; destinationInstance: NSManagedObject; entityMapping: NSEntityMapping); message 'associateSourceInstance:withDestinationInstance:forEntityMapping:';
    function destinationInstancesForEntityMappingNamed_sourceInstances (mappingName: NSString; sourceInstances: NSArray): NSArray; message 'destinationInstancesForEntityMappingNamed:sourceInstances:';
    function sourceInstancesForEntityMappingNamed_destinationInstances (mappingName: NSString; destinationInstances: NSArray): NSArray; message 'sourceInstancesForEntityMappingNamed:destinationInstances:';
    function currentEntityMapping: NSEntityMapping; message 'currentEntityMapping';
    function migrationProgress: single; message 'migrationProgress';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure cancelMigrationWithError (error: NSError); message 'cancelMigrationWithError:';
  end;
{$endif}

