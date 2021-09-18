{ Parsed from UserNotifications.framework UNNotificationAction.h }

{$ifdef TYPES}
type
  UNNotificationActionPtr = ^UNNotificationAction;
  UNTextInputNotificationActionPtr = ^UNTextInputNotificationAction;
{$endif}

{$ifdef TYPES}
type
  UNNotificationActionOptions = NSUInteger;
  UNNotificationActionOptionsPtr = ^UNNotificationActionOptions;

const
  UNNotificationActionOptionAuthenticationRequired = 1 shl 0;
  UNNotificationActionOptionDestructive = 1 shl 1;
  UNNotificationActionOptionForeground = 1 shl 2;

const
  UNNotificationActionOptionNone = 0 { unavailable in "Use [] instead.") __API_AVAILABLE(macos , ios , watchos ) __API_UNAVAILABLE(tvos };
{$endif}

{$ifdef CLASSES}

type
  UNNotificationAction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    function options: UNNotificationActionOptions; message 'options';
    class function actionWithIdentifier_title_options (identifier_: NSString; title_: NSString; options_: UNNotificationActionOptions): id; message 'actionWithIdentifier:title:options:';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  UNTextInputNotificationAction = objcclass external (UNNotificationAction)
  public
    class function actionWithIdentifier_title_options_textInputButtonTitle_textInputPlaceholder (identifier_: NSString; title_: NSString; options_: UNNotificationActionOptions; textInputButtonTitle: NSString; textInputPlaceholder: NSString): id; message 'actionWithIdentifier:title:options:textInputButtonTitle:textInputPlaceholder:';
    function textInputButtonTitle: NSString; message 'textInputButtonTitle';
    function textInputPlaceholder: NSString; message 'textInputPlaceholder';
  end;
{$endif}

