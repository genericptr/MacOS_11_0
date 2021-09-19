{ Parsed from CoreData.framework NSRelationshipDescription.h }

{$ifdef TYPES}
type
  NSRelationshipDescriptionPtr = ^NSRelationshipDescription;
{$endif}

{$ifdef TYPES}
type
  NSDeleteRule = NSUInteger;
  NSDeleteRulePtr = ^NSDeleteRule;

const
  NSNoActionDeleteRule = 0;
  NSNullifyDeleteRule = 1;
  NSCascadeDeleteRule = 2;
  NSDenyDeleteRule = 3;
{$endif}

{$ifdef CLASSES}

type
  NSRelationshipDescription = objcclass external (NSPropertyDescription)
  private
  public
    procedure setDestinationEntity(newValue: NSEntityDescription); message 'setDestinationEntity:';
    function destinationEntity: NSEntityDescription; message 'destinationEntity';
    procedure setInverseRelationship(newValue: NSRelationshipDescription); message 'setInverseRelationship:';
    function inverseRelationship: NSRelationshipDescription; message 'inverseRelationship';
    procedure setMaxCount(newValue: NSUInteger); message 'setMaxCount:';
    function maxCount: NSUInteger; message 'maxCount';
    procedure setMinCount(newValue: NSUInteger); message 'setMinCount:';
    function minCount: NSUInteger; message 'minCount';
    procedure setDeleteRule(newValue: NSDeleteRule); message 'setDeleteRule:';
    function deleteRule: NSDeleteRule; message 'deleteRule';
    function isToMany: objcbool; message 'isToMany';
    function versionHash: NSData; message 'versionHash'; { available in macosx 10.5,ios 3.0 }
    procedure setOrdered(newValue: objcbool); message 'setOrdered:'; { available in macosx 10.7,ios 5.0 }
    function isOrdered: objcbool; message 'isOrdered'; { available in macosx 10.7,ios 5.0 }
  end;
{$endif}

