{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLKey.h }

{$ifdef TYPES}
type
  MLKeyPtr = ^MLKey;
{$endif}

{$ifdef CLASSES}

type
  MLKey = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function name: NSString; message 'name';
    function scope: NSString; message 'scope';
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

