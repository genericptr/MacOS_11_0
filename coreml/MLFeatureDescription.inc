{ Parsed from CoreML.framework MLFeatureDescription.h }

{$ifdef TYPES}
type
  MLFeatureDescriptionPtr = ^MLFeatureDescription;
{$endif}

{$ifdef CLASSES}

type
  MLFeatureDescription = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function name: NSString; message 'name';
    function type_: MLFeatureType; message 'type';
    function isOptional: objcbool; message 'isOptional';
    function isAllowedValue (value: MLFeatureValue): objcbool; message 'isAllowedValue:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  MLFeatureValueConstraints = objccategory external (MLFeatureDescription)
    function multiArrayConstraint: MLMultiArrayConstraint; message 'multiArrayConstraint';
    function imageConstraint: MLImageConstraint; message 'imageConstraint';
    function dictionaryConstraint: MLDictionaryConstraint; message 'dictionaryConstraint';
    function sequenceConstraint: MLSequenceConstraint; message 'sequenceConstraint'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
  end;
{$endif}

