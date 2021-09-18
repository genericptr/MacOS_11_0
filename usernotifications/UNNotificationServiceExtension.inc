{ Parsed from UserNotifications.framework UNNotificationServiceExtension.h }

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

