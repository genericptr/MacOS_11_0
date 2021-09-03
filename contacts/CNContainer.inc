{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContainer.h }

{$ifdef TYPES}
type
  CNContainerPtr = ^CNContainer;
{$endif}

{$ifdef TYPES}
type
  CNContainerType = NSInteger;
  CNContainerTypePtr = ^CNContainerType;

const
  CNContainerTypeUnassigned = 0;
  CNContainerTypeLocal = 1;
  CNContainerTypeExchange = 2;
  CNContainerTypeCardDAV = 3;
{$endif}

{$ifdef CLASSES}

type
  CNContainer = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function name: NSString; message 'name';
    function type_: CNContainerType; message 'type';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContainerIdentifierKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContainerNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContainerTypeKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

