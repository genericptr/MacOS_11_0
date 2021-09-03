{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSNull.h }

{$ifdef TYPES}
type
  NSNullPtr = ^NSNull;
{$endif}

{$ifdef CLASSES}

type
  NSNull = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function null: NSNull; message 'null';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

