{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLMultiArrayShapeConstraint.h }

{$ifdef TYPES}
type
  MLMultiArrayShapeConstraintPtr = ^MLMultiArrayShapeConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLMultiArrayShapeConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function type_: MLMultiArrayShapeConstraintType; message 'type';
    function sizeRangeForDimension: NSArray; message 'sizeRangeForDimension';
    function enumeratedShapes: NSArray; message 'enumeratedShapes';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

