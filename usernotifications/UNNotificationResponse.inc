{ Parsed from UserNotifications.framework UNNotificationResponse.h }

{$ifdef TYPES}
type
  UNNotificationResponsePtr = ^UNNotificationResponse;
  UNTextInputNotificationResponsePtr = ^UNTextInputNotificationResponse;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UNNotificationDefaultActionIdentifier: NSString { unavailable in tvos } { available in macos 10.14, ios 10.0, watchos 3.0 }; cvar; external;
  UNNotificationDismissActionIdentifier: NSString { unavailable in tvos } { available in macos 10.14, ios 10.0, watchos 3.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationResponse = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function notification: UNNotification; message 'notification';
    function actionIdentifier: NSString; message 'actionIdentifier';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  UNTextInputNotificationResponse = objcclass external (UNNotificationResponse)
  public
    function userText: NSString; message 'userText';
  end;
{$endif}

