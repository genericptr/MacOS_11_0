{ Parsed from CoreData.framework NSEntityDescription.h }

{$ifdef TYPES}
type
  NSEntityDescriptionPtr = ^NSEntityDescription;
{$endif}

{$ifdef CLASSES}

type
  NSEntityDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol, NSFastEnumerationProtocol)
  private
  public
    class function entityForName_inManagedObjectContext (entityName: NSString; context: NSManagedObjectContext): NSEntityDescription; message 'entityForName:inManagedObjectContext:';
    class function insertNewObjectForEntityForName_inManagedObjectContext (entityName: NSString; context: NSManagedObjectContext): NSManagedObject; message 'insertNewObjectForEntityForName:inManagedObjectContext:';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    procedure setManagedObjectClassName(newValue: NSString); message 'setManagedObjectClassName:';
    function managedObjectClassName: NSString; message 'managedObjectClassName';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setAbstract(newValue: objcbool); message 'setAbstract:';
    function isAbstract: objcbool; message 'isAbstract';
    function subentitiesByName: NSDictionary; message 'subentitiesByName';
    procedure setSubentities(newValue: NSArray); message 'setSubentities:';
    function subentities: NSArray; message 'subentities';
    function superentity: NSEntityDescription; message 'superentity';
    function propertiesByName: NSDictionary; message 'propertiesByName';
    procedure setProperties(newValue: NSArray); message 'setProperties:';
    function properties: NSArray; message 'properties';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    function attributesByName: NSDictionary; message 'attributesByName';
    function relationshipsByName: NSDictionary; message 'relationshipsByName';
    function relationshipsWithDestinationEntity (entity: NSEntityDescription): NSArray; message 'relationshipsWithDestinationEntity:';
    function isKindOfEntity (entity: NSEntityDescription): objcbool; message 'isKindOfEntity:'; { available in macosx 10.5,ios 3.0 }
    function versionHash: NSData; message 'versionHash'; { available in macosx 10.5,ios 3.0 }
    procedure setVersionHashModifier(newValue: NSString); message 'setVersionHashModifier:'; { available in macosx 10.5,ios 3.0 }
    function versionHashModifier: NSString; message 'versionHashModifier'; { available in macosx 10.5,ios 3.0 }
    procedure setRenamingIdentifier(newValue: NSString); message 'setRenamingIdentifier:'; { available in macosx 10.6,ios 3.0 }
    function renamingIdentifier: NSString; message 'renamingIdentifier'; { available in macosx 10.6,ios 3.0 }
    procedure setIndexes(newValue: NSArray); message 'setIndexes:'; { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }
    function indexes: NSArray; message 'indexes'; { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }
    procedure setUniquenessConstraints(newValue: NSArray); message 'setUniquenessConstraints:'; { available in macosx 10.11,ios 9.0 }
    function uniquenessConstraints: NSArray; message 'uniquenessConstraints'; { available in macosx 10.11,ios 9.0 }
    procedure setCompoundIndexes(newValue: NSArray); message 'setCompoundIndexes:'; deprecated 'in  "Use NSEntityDescription.indexes instead", ,,,';
    function compoundIndexes: NSArray; message 'compoundIndexes'; deprecated 'in  "Use NSEntityDescription.indexes instead", ,,,';
    procedure setCoreSpotlightDisplayNameExpression(newValue: NSExpression); message 'setCoreSpotlightDisplayNameExpression:'; { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }
    function coreSpotlightDisplayNameExpression: NSExpression; message 'coreSpotlightDisplayNameExpression'; { available in macosx 10.13,ios 11.0,tvos 11.0,watchos 4.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

