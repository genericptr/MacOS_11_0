{ Parsed from UserNotifications.framework NSString+UserNotifications.h }
{$ifdef CLASSES}

type
  UNUserNotificationCenterSupport = objccategory external (NSString)
    class function localizedUserNotificationStringForKey_arguments (key: NSString; arguments: NSArray): NSString; message 'localizedUserNotificationStringForKey:arguments:'; { unavailable in tvos } { available in macos 10.14, ios 10.0, watchos 3.0 }
  end;
{$endif}

