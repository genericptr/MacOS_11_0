{ Parsed from CoreData.framework NSAttributeDescription.h }

{$ifdef TYPES}
type
  NSAttributeDescriptionPtr = ^NSAttributeDescription;
{$endif}

{$ifdef TYPES}
type
  NSAttributeType = NSUInteger;
  NSAttributeTypePtr = ^NSAttributeType;

const
  NSUndefinedAttributeType = 0;
  NSInteger16AttributeType = 100;
  NSInteger32AttributeType = 200;
  NSInteger64AttributeType = 300;
  NSDecimalAttributeType = 400;
  NSDoubleAttributeType = 500;
  NSFloatAttributeType = 600;
  NSStringAttributeType = 700;
  NSBooleanAttributeType = 800;
  NSDateAttributeType = 900;
  NSBinaryDataAttributeType = 1000;
  NSUUIDAttributeType = 1100 { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  NSURIAttributeType = 1200 { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  NSTransformableAttributeType = 1800 { available in macosx 10.5, ios 3.0 };
  NSObjectIDAttributeType = 2000 { available in macosx 10.6, ios 3.0 };
{$endif}

{$ifdef CLASSES}

type
  NSAttributeDescription = objcclass external (NSPropertyDescription)
  private
  public
    procedure setAttributeType(newValue: NSAttributeType); message 'setAttributeType:';
    function attributeType: NSAttributeType; message 'attributeType';
    procedure setAttributeValueClassName(newValue: NSString); message 'setAttributeValueClassName:';
    function attributeValueClassName: NSString; message 'attributeValueClassName';
    procedure setDefaultValue(newValue: id); message 'setDefaultValue:';
    function defaultValue: id; message 'defaultValue';
    function versionHash: NSData; message 'versionHash'; { available in macosx 10.5,ios 3.0 }
    procedure setValueTransformerName(newValue: NSString); message 'setValueTransformerName:'; { available in macosx 10.5,ios 3.0 }
    function valueTransformerName: NSString; message 'valueTransformerName'; { available in macosx 10.5,ios 3.0 }
    procedure setAllowsExternalBinaryDataStorage(newValue: objcbool); message 'setAllowsExternalBinaryDataStorage:'; { available in macosx 10.7,ios 5.0 }
    function allowsExternalBinaryDataStorage: objcbool; message 'allowsExternalBinaryDataStorage'; { available in macosx 10.7,ios 5.0 }
    procedure setPreservesValueInHistoryOnDeletion(newValue: objcbool); message 'setPreservesValueInHistoryOnDeletion:'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    function preservesValueInHistoryOnDeletion: objcbool; message 'preservesValueInHistoryOnDeletion'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
  end;
{$endif}

