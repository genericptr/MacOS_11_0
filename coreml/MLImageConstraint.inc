{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLImageConstraint.h }

{$ifdef TYPES}
type
  MLImageConstraintPtr = ^MLImageConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLImageConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function pixelsHigh: NSInteger; message 'pixelsHigh';
    function pixelsWide: NSInteger; message 'pixelsWide';
    function pixelFormatType: OSType; message 'pixelFormatType';
    function sizeConstraint: MLImageSizeConstraint; message 'sizeConstraint'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; { unavailable in "" }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

