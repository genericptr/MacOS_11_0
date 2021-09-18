{ Parsed from UserNotifications.framework UNNotification.h }

{$ifdef TYPES}
type
  UNNotificationPtr = ^UNNotification;
{$endif}

{$ifdef CLASSES}

type
  UNNotification = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function date: NSDate; message 'date';
    function request: UNNotificationRequest; message 'request';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

