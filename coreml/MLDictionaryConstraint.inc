{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLDictionaryConstraint.h }

{$ifdef TYPES}
type
  MLDictionaryConstraintPtr = ^MLDictionaryConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLDictionaryConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function keyType: MLFeatureType; message 'keyType';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

