{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLImageSize.h }

{$ifdef TYPES}
type
  MLImageSizePtr = ^MLImageSize;
{$endif}

{$ifdef CLASSES}

type
  MLImageSize = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function pixelsWide: NSInteger; message 'pixelsWide';
    function pixelsHigh: NSInteger; message 'pixelsHigh';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

