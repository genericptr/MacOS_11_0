{ Parsed from SensorKit.framework SRUsageReports.h }

{$ifdef TYPES}
type
  SRDeviceUsageReportPtr = ^SRDeviceUsageReport;
  SRApplicationUsagePtr = ^SRApplicationUsage;
  SRNotificationUsagePtr = ^SRNotificationUsage;
  SRWebUsagePtr = ^SRWebUsage;
  SRMessagesUsageReportPtr = ^SRMessagesUsageReport;
  SRPhoneUsageReportPtr = ^SRPhoneUsageReport;
{$endif}

{$ifdef CLASSES}

type
  SRDeviceUsageReport = objcclass external (NSObject)
  public
    function duration: NSTimeInterval; message 'duration';
    function applicationUsageByCategory: NSDictionary; message 'applicationUsageByCategory';
    function notificationUsageByCategory: NSDictionary; message 'notificationUsageByCategory';
    function webUsageByCategory: NSDictionary; message 'webUsageByCategory';
    function totalScreenWakes: NSInteger; message 'totalScreenWakes';
    function totalUnlocks: NSInteger; message 'totalUnlocks';
    function totalUnlockDuration: NSTimeInterval; message 'totalUnlockDuration';
  end;

type
  SRApplicationUsage = objcclass external (NSObject)
  public
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    function usageTime: NSTimeInterval; message 'usageTime';
  end;
{$endif}

{$ifdef TYPES}
type
  SRNotificationEvent = NSInteger;
  SRNotificationEventPtr = ^SRNotificationEvent;

const
  SRNotificationEventUnknown = 0;
  SRNotificationEventReceived = 1;
  SRNotificationEventDefaultAction = 2;
  SRNotificationEventSupplementaryAction = 3;
  SRNotificationEventClear = 4;
  SRNotificationEventNotificationCenterClearAll = 5;
  SRNotificationEventRemoved = 6;
  SRNotificationEventHide = 7;
  SRNotificationEventLongLook = 8;
  SRNotificationEventSilence = 9;
  SRNotificationEventAppLaunch = 10;
  SRNotificationEventExpired = 11;
  SRNotificationEventBannerPulldown = 12;
  SRNotificationEventTapCoalesce = 13;
  SRNotificationEventDeduped = 14;
  SRNotificationEventDeviceActivated = 15;
  SRNotificationEventDeviceUnlocked = 16;
{$endif}

{$ifdef CLASSES}

type
  SRNotificationUsage = objcclass external (NSObject)
  public
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    function event: SRNotificationEvent; message 'event';
  end;

type
  SRWebUsage = objcclass external (NSObject)
  public
    function totalUsageTime: NSTimeInterval; message 'totalUsageTime';
  end;

type
  SRMessagesUsageReport = objcclass external (NSObject)
  public
    function duration: NSTimeInterval; message 'duration';
    function totalOutgoingMessages: NSInteger; message 'totalOutgoingMessages';
    function totalIncomingMessages: NSInteger; message 'totalIncomingMessages';
    function totalUniqueContacts: NSInteger; message 'totalUniqueContacts';
  end;

type
  SRPhoneUsageReport = objcclass external (NSObject)
  public
    function duration: NSTimeInterval; message 'duration';
    function totalOutgoingCalls: NSInteger; message 'totalOutgoingCalls';
    function totalIncomingCalls: NSInteger; message 'totalIncomingCalls';
    function totalUniqueContacts: NSInteger; message 'totalUniqueContacts';
    function totalPhoneCallDuration: NSTimeInterval; message 'totalPhoneCallDuration';
  end;
{$endif}

