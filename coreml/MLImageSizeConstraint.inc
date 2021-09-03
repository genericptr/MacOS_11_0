{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLImageSizeConstraint.h }

{$ifdef TYPES}
type
  MLImageSizeConstraintPtr = ^MLImageSizeConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLImageSizeConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function type_: MLImageSizeConstraintType; message 'type';
    function pixelsWideRange: NSRange; message 'pixelsWideRange';
    function pixelsHighRange: NSRange; message 'pixelsHighRange';
    function enumeratedImageSizes: NSArray; message 'enumeratedImageSizes';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

