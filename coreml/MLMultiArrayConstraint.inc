{ Parsed from CoreML.framework MLMultiArrayConstraint.h }

{$ifdef TYPES}
type
  MLMultiArrayConstraintPtr = ^MLMultiArrayConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLMultiArrayConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function shape: NSArray; message 'shape';
    function dataType: MLMultiArrayDataType; message 'dataType';
    function shapeConstraint: MLMultiArrayShapeConstraint; message 'shapeConstraint'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

