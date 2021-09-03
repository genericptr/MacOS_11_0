{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationAttachment.h }

{$ifdef TYPES}
type
  UNNotificationAttachmentPtr = ^UNNotificationAttachment;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationAttachment = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function URL: NSURL; message 'URL';
    function type_: NSString; message 'type';
    class function attachmentWithIdentifier_URL_options_error (identifier_: NSString; URL_: NSURL; options: NSDictionary; error: NSErrorPtr): id; message 'attachmentWithIdentifier:URL:options:error:';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UNNotificationAttachmentOptionsTypeHintKey: NSString { unavailable in tvos }; cvar; external;
  UNNotificationAttachmentOptionsThumbnailHiddenKey: NSString { unavailable in tvos }; cvar; external;
  UNNotificationAttachmentOptionsThumbnailClippingRectKey: NSString { unavailable in tvos }; cvar; external;
  UNNotificationAttachmentOptionsThumbnailTimeKey: NSString { unavailable in tvos }; cvar; external;
{$endif}

