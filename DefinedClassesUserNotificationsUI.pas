{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesUserNotificationsUI;
interface

type
  UNNotificationContentExtensionProtocol = objcprotocol external name 'UNNotificationContentExtension';

type
  UNNotification = objcclass external;
  UNNotificationAction = objcclass external;
  UNNotificationResponse = objcclass external;

implementation
end.
