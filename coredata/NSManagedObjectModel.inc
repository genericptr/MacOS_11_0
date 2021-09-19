{ Parsed from CoreData.framework NSManagedObjectModel.h }

{$ifdef TYPES}
type
  NSManagedObjectModelPtr = ^NSManagedObjectModel;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObjectModel = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol, NSFastEnumerationProtocol)
  private
  public
    class function mergedModelFromBundles (bundles: NSArray): NSManagedObjectModel; message 'mergedModelFromBundles:';
    class function modelByMergingModels (models: NSArray): NSManagedObjectModel; message 'modelByMergingModels:';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:';
    function entitiesByName: NSDictionary; message 'entitiesByName';
    procedure setEntities(newValue: NSArray); message 'setEntities:';
    function entities: NSArray; message 'entities';
    function configurations: NSArray; message 'configurations';
    function entitiesForConfiguration (configuration: NSString): NSArray; message 'entitiesForConfiguration:';
    procedure setEntities_forConfiguration (entities_: NSArray; configuration: NSString); message 'setEntities:forConfiguration:';
    procedure setFetchRequestTemplate_forName (fetchRequestTemplate: NSFetchRequest; name: NSString); message 'setFetchRequestTemplate:forName:';
    function fetchRequestTemplateForName (name: NSString): NSFetchRequest; message 'fetchRequestTemplateForName:';
    function fetchRequestFromTemplateWithName_substitutionVariables (name: NSString; variables: NSDictionary): NSFetchRequest; message 'fetchRequestFromTemplateWithName:substitutionVariables:';
    procedure setLocalizationDictionary(newValue: NSDictionary); message 'setLocalizationDictionary:';
    function localizationDictionary: NSDictionary; message 'localizationDictionary';
    class function mergedModelFromBundles_forStoreMetadata (bundles: NSArray; metadata: NSDictionary): NSManagedObjectModel; message 'mergedModelFromBundles:forStoreMetadata:'; { available in macosx 10.5,ios 3.0 }
    class function modelByMergingModels_forStoreMetadata (models: NSArray; metadata: NSDictionary): NSManagedObjectModel; message 'modelByMergingModels:forStoreMetadata:'; { available in macosx 10.5,ios 3.0 }
    function fetchRequestTemplatesByName: NSDictionary; message 'fetchRequestTemplatesByName'; { available in macosx 10.5,ios 3.0 }
    procedure setVersionIdentifiers(newValue: NSSet); message 'setVersionIdentifiers:'; { available in macosx 10.5,ios 3.0 }
    function versionIdentifiers: NSSet; message 'versionIdentifiers'; { available in macosx 10.5,ios 3.0 }
    function isConfiguration_compatibleWithStoreMetadata (configuration: NSString; metadata: NSDictionary): objcbool; message 'isConfiguration:compatibleWithStoreMetadata:'; { available in macosx 10.5,ios 3.0 }
    function entityVersionHashesByName: NSDictionary; message 'entityVersionHashesByName'; { available in macosx 10.5,ios 3.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

