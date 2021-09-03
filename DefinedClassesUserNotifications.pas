{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesUserNotifications;
interface

type
  UNCalendarNotificationTrigger = objcclass external;
  UNLocationNotificationTrigger = objcclass external;
  UNMutableNotificationContent = objcclass external;
  UNNotification = objcclass external;
  UNNotificationAction = objcclass external;
  UNNotificationAttachment = objcclass external;
  UNNotificationCategory = objcclass external;
  UNNotificationContent = objcclass external;
  UNNotificationRequest = objcclass external;
  UNNotificationResponse = objcclass external;
  UNNotificationServiceExtension = objcclass external;
  UNNotificationSettings = objcclass external;
  UNNotificationSound = objcclass external;
  UNNotificationTrigger = objcclass external;
  UNPushNotificationTrigger = objcclass external;
  UNTextInputNotificationAction = objcclass external;
  UNTextInputNotificationResponse = objcclass external;
  UNTimeIntervalNotificationTrigger = objcclass external;
  UNUserNotificationCenter = objcclass external;
  UNUserNotificationCenterDelegateProtocol = objcprotocol external name 'UNUserNotificationCenterDelegate';

type
  CLRegion = objcclass external;

implementation
end.
