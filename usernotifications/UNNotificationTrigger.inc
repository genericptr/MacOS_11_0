{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationTrigger.h }

{$ifdef TYPES}
type
  UNNotificationTriggerPtr = ^UNNotificationTrigger;
  UNPushNotificationTriggerPtr = ^UNPushNotificationTrigger;
  UNTimeIntervalNotificationTriggerPtr = ^UNTimeIntervalNotificationTrigger;
  UNCalendarNotificationTriggerPtr = ^UNCalendarNotificationTrigger;
  UNLocationNotificationTriggerPtr = ^UNLocationNotificationTrigger;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationTrigger = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function repeats: objcbool; message 'repeats';
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  UNPushNotificationTrigger = objcclass external (UNNotificationTrigger)
  end;

type
  UNTimeIntervalNotificationTrigger = objcclass external (UNNotificationTrigger)
  public
    function timeInterval: NSTimeInterval; message 'timeInterval';
    class function triggerWithTimeInterval_repeats (timeInterval_: NSTimeInterval; repeats_: objcbool): id; message 'triggerWithTimeInterval:repeats:';
    function nextTriggerDate: NSDate; message 'nextTriggerDate';
  end;

type
  UNCalendarNotificationTrigger = objcclass external (UNNotificationTrigger)
  public
    function dateComponents: NSDateComponents; message 'dateComponents';
    class function triggerWithDateMatchingComponents_repeats (dateComponents_: NSDateComponents; repeats_: objcbool): id; message 'triggerWithDateMatchingComponents:repeats:';
    function nextTriggerDate: NSDate; message 'nextTriggerDate';
  end;

type
  UNLocationNotificationTrigger = objcclass external (UNNotificationTrigger)
  public
    function region: CLRegion; message 'region';
    class function triggerWithRegion_repeats (region_: CLRegion; repeats_: objcbool): id; message 'triggerWithRegion:repeats:'; { unavailable in watchos }
  end;
{$endif}

