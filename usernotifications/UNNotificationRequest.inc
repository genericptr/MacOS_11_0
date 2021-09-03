{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationRequest.h }

{$ifdef TYPES}
type
  UNNotificationRequestPtr = ^UNNotificationRequest;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationRequest = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function content: UNNotificationContent; message 'content';
    function trigger: UNNotificationTrigger; message 'trigger';
    class function requestWithIdentifier_content_trigger (identifier_: NSString; content_: UNNotificationContent; trigger_: UNNotificationTrigger): id; message 'requestWithIdentifier:content:trigger:';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

