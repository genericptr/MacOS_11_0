{ Parsed from UserNotifications.framework UNUserNotificationCenter.h }

{$ifdef CALLBACKS}
type
  UNUserNotificationCenterRequestAuthorizationWithOptionsCallback = reference to procedure (granted: objcbool; error: NSError); cblock; cdecl;
  UNUserNotificationCenterGetNotificationCategoriesWithCompletionHandlerCallback = reference to procedure (categories: NSSet); cblock; cdecl;
  UNUserNotificationCenterGetNotificationSettingsWithCompletionHandlerCallback = reference to procedure (settings: UNNotificationSettings); cblock; cdecl;
  UNUserNotificationCenterAddNotificationRequestCallback = reference to procedure (error: NSError); cblock; cdecl;
  UNUserNotificationCenterGetPendingNotificationRequestsWithCompletionHandlerCallback = reference to procedure (requests: NSArray); cblock; cdecl;
  UNUserNotificationCenterGetDeliveredNotificationsWithCompletionHandlerCallback = reference to procedure (notifications: NSArray); cblock; cdecl;
  UNUserNotificationCenterUserNotificationCenterCallback = reference to procedure (options: UNNotificationPresentationOptions); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  UNUserNotificationCenterPtr = ^UNUserNotificationCenter;
  UNUserNotificationCenterDelegateProtocolPtr = ^UNUserNotificationCenterDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UNAuthorizationOptions = NSUInteger;
  UNAuthorizationOptionsPtr = ^UNAuthorizationOptions;

const
  UNAuthorizationOptionBadge = 1 shl 0;
  UNAuthorizationOptionSound = 1 shl 1;
  UNAuthorizationOptionAlert = 1 shl 2;
  UNAuthorizationOptionCarPlay = 1 shl 3;
  UNAuthorizationOptionCriticalAlert = 0 { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 };
  UNAuthorizationOptionProvidesAppNotificationSettings = 1 { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 };
  UNAuthorizationOptionProvisional = 2 { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 };
  UNAuthorizationOptionAnnouncement = 3 { unavailable in macos, tvos } { available in ios 13.0, watchos 6.0 };

const
  UNAuthorizationOptionNone = 0 { unavailable in "Use [] instead." } { available in macos 10.14, ios 10.0, watchos 3.0, tvos 10.0 };
{$endif}

{$ifdef CLASSES}

type
  UNUserNotificationCenter = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: UNUserNotificationCenterDelegateProtocol); message 'setDelegate:';
    function delegate: UNUserNotificationCenterDelegateProtocol; message 'delegate';
    function supportsContentExtensions: objcbool; message 'supportsContentExtensions';
    class function currentNotificationCenter: UNUserNotificationCenter; message 'currentNotificationCenter';
    function init: id; message 'init';
    procedure requestAuthorizationWithOptions_completionHandler (options: UNAuthorizationOptions; completionHandler: UNUserNotificationCenterRequestAuthorizationWithOptionsCallback); message 'requestAuthorizationWithOptions:completionHandler:';
    procedure setNotificationCategories (categories: NSSet); message 'setNotificationCategories:'; { unavailable in tvos }
    procedure getNotificationCategoriesWithCompletionHandler (completionHandler: UNUserNotificationCenterGetNotificationCategoriesWithCompletionHandlerCallback); message 'getNotificationCategoriesWithCompletionHandler:'; { unavailable in tvos }
    procedure getNotificationSettingsWithCompletionHandler (completionHandler: UNUserNotificationCenterGetNotificationSettingsWithCompletionHandlerCallback); message 'getNotificationSettingsWithCompletionHandler:';
    procedure addNotificationRequest_withCompletionHandler (request: UNNotificationRequest; completionHandler: UNUserNotificationCenterAddNotificationRequestCallback); message 'addNotificationRequest:withCompletionHandler:';
    procedure getPendingNotificationRequestsWithCompletionHandler (completionHandler: UNUserNotificationCenterGetPendingNotificationRequestsWithCompletionHandlerCallback); message 'getPendingNotificationRequestsWithCompletionHandler:';
    procedure removePendingNotificationRequestsWithIdentifiers (identifiers: NSArray); message 'removePendingNotificationRequestsWithIdentifiers:';
    procedure removeAllPendingNotificationRequests; message 'removeAllPendingNotificationRequests';
    procedure getDeliveredNotificationsWithCompletionHandler (completionHandler: UNUserNotificationCenterGetDeliveredNotificationsWithCompletionHandlerCallback); message 'getDeliveredNotificationsWithCompletionHandler:'; { unavailable in tvos }
    procedure removeDeliveredNotificationsWithIdentifiers (identifiers: NSArray); message 'removeDeliveredNotificationsWithIdentifiers:'; { unavailable in tvos }
    procedure removeAllDeliveredNotifications; message 'removeAllDeliveredNotifications'; { unavailable in tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  UNNotificationPresentationOptions = NSUInteger;
  UNNotificationPresentationOptionsPtr = ^UNNotificationPresentationOptions;

const
  UNNotificationPresentationOptionBadge = 1 shl 0;
  UNNotificationPresentationOptionSound = 1 shl 1;
  UNNotificationPresentationOptionAlert = 1 shl 2 deprecated 'Use UNNotificationPresentationOptionList | UNNotificationPresentationOptionBanner';
  UNNotificationPresentationOptionList = 0 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };
  UNNotificationPresentationOptionBanner = 1 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };

const
  UNNotificationPresentationOptionNone = 0 { unavailable in "Use [] instead." } { available in macos 10.14, ios 10.0, watchos 3.0, tvos 10.0 };
{$endif}

{$ifdef PROTOCOLS}

type
  UNUserNotificationCenterDelegateProtocol = objcprotocol external name 'UNUserNotificationCenterDelegate' (NSObjectProtocol)
  optional
    procedure userNotificationCenter_willPresentNotification_withCompletionHandler (center: UNUserNotificationCenter; notification: UNNotification; completionHandler: UNUserNotificationCenterUserNotificationCenterCallback); message 'userNotificationCenter:willPresentNotification:withCompletionHandler:'; { available in macos 10.14, ios 10.0, watchos 3.0, tvos 10.0 }
    procedure userNotificationCenter_didReceiveNotificationResponse_withCompletionHandler (center: UNUserNotificationCenter; response: UNNotificationResponse; completionHandler: UNUserNotificationCenterUserNotificationCenterCallback); message 'userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:'; { unavailable in tvos } { available in macos 10.14, ios 10.0, watchos 3.0 }
    procedure userNotificationCenter_openSettingsForNotification (center: UNUserNotificationCenter; notification: UNNotification); message 'userNotificationCenter:openSettingsForNotification:'; { unavailable in watchos, tvos } { available in macos 10.14, ios 12.0 }
  end;
{$endif}

