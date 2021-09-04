{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationServiceExtension.h }

{$ifdef CALLBACKS}
type
  UNNotificationServiceExtensionDidReceiveNotificationRequestCallback = reference to procedure (contentToDeliver: UNNotificationContent); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  UNNotificationServiceExtensionPtr = ^UNNotificationServiceExtension;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationServiceExtension = objcclass external (NSObject)
  public
    procedure didReceiveNotificationRequest_withContentHandler (request: UNNotificationRequest; contentHandler: UNNotificationServiceExtensionDidReceiveNotificationRequestCallback); message 'didReceiveNotificationRequest:withContentHandler:';
    procedure serviceExtensionTimeWillExpire; message 'serviceExtensionTimeWillExpire';
  end;
{$endif}

