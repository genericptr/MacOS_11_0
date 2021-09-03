{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLParameterDescription.h }

{$ifdef TYPES}
type
  MLParameterDescriptionPtr = ^MLParameterDescription;
{$endif}

{$ifdef CLASSES}

type
  MLParameterDescription = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function key: MLParameterKey; message 'key';
    function defaultValue: id; message 'defaultValue';
    function numericConstraint: MLNumericConstraint; message 'numericConstraint';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

