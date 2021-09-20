{ Parsed from Contacts.framework CNGroup.h }

{$ifdef TYPES}
type
  CNGroupPtr = ^CNGroup;
{$endif}

{$ifdef CLASSES}

type
  CNGroup = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function name: NSString; message 'name';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNGroupIdentifierKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNGroupNameKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

