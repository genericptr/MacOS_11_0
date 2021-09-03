{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLMultiArrayConstraint.h }

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
    function shapeConstraint: MLMultiArrayShapeConstraint; message 'shapeConstraint'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

