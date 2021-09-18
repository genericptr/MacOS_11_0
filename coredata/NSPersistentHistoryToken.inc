{ Parsed from CoreData.framework NSPersistentHistoryToken.h }

{$ifdef TYPES}
type
  NSPersistentHistoryTokenPtr = ^NSPersistentHistoryToken;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentHistoryToken = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

