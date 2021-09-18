{ Parsed from CoreData.framework NSEntityMapping.h }

{$ifdef TYPES}
type
  NSEntityMappingPtr = ^NSEntityMapping;
{$endif}

{$ifdef TYPES}
type
  NSEntityMappingType = NSUInteger;
  NSEntityMappingTypePtr = ^NSEntityMappingType;

const
  NSUndefinedEntityMappingType = $00;
  NSCustomEntityMappingType = $01;
  NSAddEntityMappingType = $02;
  NSRemoveEntityMappingType = $03;
  NSCopyEntityMappingType = $04;
  NSTransformEntityMappingType = $05;
{$endif}

{$ifdef CLASSES}

type
  NSEntityMapping = objcclass external (NSObject)
  private
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setMappingType(newValue: NSEntityMappingType); message 'setMappingType:';
    function mappingType: NSEntityMappingType; message 'mappingType';
    procedure setSourceEntityName(newValue: NSString); message 'setSourceEntityName:';
    function sourceEntityName: NSString; message 'sourceEntityName';
    procedure setSourceEntityVersionHash(newValue: NSData); message 'setSourceEntityVersionHash:';
    function sourceEntityVersionHash: NSData; message 'sourceEntityVersionHash';
    procedure setDestinationEntityName(newValue: NSString); message 'setDestinationEntityName:';
    function destinationEntityName: NSString; message 'destinationEntityName';
    procedure setDestinationEntityVersionHash(newValue: NSData); message 'setDestinationEntityVersionHash:';
    function destinationEntityVersionHash: NSData; message 'destinationEntityVersionHash';
    procedure setAttributeMappings(newValue: NSArray); message 'setAttributeMappings:';
    function attributeMappings: NSArray; message 'attributeMappings';
    procedure setRelationshipMappings(newValue: NSArray); message 'setRelationshipMappings:';
    function relationshipMappings: NSArray; message 'relationshipMappings';
    procedure setSourceExpression(newValue: NSExpression); message 'setSourceExpression:';
    function sourceExpression: NSExpression; message 'sourceExpression';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setEntityMigrationPolicyClassName(newValue: NSString); message 'setEntityMigrationPolicyClassName:';
    function entityMigrationPolicyClassName: NSString; message 'entityMigrationPolicyClassName';
  end;
{$endif}

