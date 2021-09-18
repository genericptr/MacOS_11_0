{ Parsed from UserNotifications.framework NSString+UserNotifications.h }
{$ifdef CLASSES}

type
  UNUserNotificationCenterSupport = objccategory external (NSString)
    class function localizedUserNotificationStringForKey_arguments (key: NSString; arguments: NSArray): NSString; message 'localizedUserNotificationStringForKey:arguments:'; { unavailable in tvos }
  end;
{$endif}

