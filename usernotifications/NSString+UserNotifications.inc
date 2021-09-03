{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/NSString+UserNotifications.h }
{$ifdef CLASSES}

type
  UNUserNotificationCenterSupport = objccategory external (NSString)
    class function localizedUserNotificationStringForKey_arguments (key: NSString; arguments: NSArray): NSString; message 'localizedUserNotificationStringForKey:arguments:'; { unavailable in tvos }
  end;
{$endif}

