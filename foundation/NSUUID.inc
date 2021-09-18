{ Parsed from Foundation.framework NSUUID.h }

{$ifdef TYPES}
type
  NSUUIDPtr = ^NSUUID;
{$endif}

{$ifdef CLASSES}

type
  NSUUID = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function UUID: id; message 'UUID';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUUIDString (string_: NSString): id; message 'initWithUUIDString:';
    function initWithUUIDBytes (bytes: uuid_t): id; message 'initWithUUIDBytes:';
    procedure getUUIDBytes (uuid_: uuid_t); message 'getUUIDBytes:';
    function UUIDString: NSString; message 'UUIDString';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

