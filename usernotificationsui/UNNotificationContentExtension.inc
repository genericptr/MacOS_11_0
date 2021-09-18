{ Parsed from UserNotificationsUI.framework UNNotificationContentExtension.h }

{ Types from UNNotificationContentExtensionProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  UNNotificationContentExtensionDidReceiveNotificationResponseCallback = reference to procedure (option: UNNotificationContentExtensionResponseOption); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  UNNotificationContentExtensionProtocolPtr = ^UNNotificationContentExtensionProtocol;
{$endif}

{$ifdef TYPES}
type
  UNNotificationContentExtensionMediaPlayPauseButtonType = NSUInteger;
  UNNotificationContentExtensionMediaPlayPauseButtonTypePtr = ^UNNotificationContentExtensionMediaPlayPauseButtonType;

const
  UNNotificationContentExtensionMediaPlayPauseButtonTypeNone = 0;
  UNNotificationContentExtensionMediaPlayPauseButtonTypeDefault = 1;
  UNNotificationContentExtensionMediaPlayPauseButtonTypeOverlay = 2;

type
  UNNotificationContentExtensionResponseOption = NSUInteger;
  UNNotificationContentExtensionResponseOptionPtr = ^UNNotificationContentExtensionResponseOption;

const
  UNNotificationContentExtensionResponseOptionDoNotDismiss = 0;
  UNNotificationContentExtensionResponseOptionDismiss = 1;
  UNNotificationContentExtensionResponseOptionDismissAndForwardAction = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  UNNotificationContentExtensionProtocol = objcprotocol external name 'UNNotificationContentExtension' (NSObjectProtocol)
    procedure didReceiveNotification (notification: UNNotification); message 'didReceiveNotification:';
  optional
    procedure didReceiveNotificationResponse_completionHandler (response: UNNotificationResponse; completion: UNNotificationContentExtensionDidReceiveNotificationResponseCallback); message 'didReceiveNotificationResponse:completionHandler:';
    function mediaPlayPauseButtonType: UNNotificationContentExtensionMediaPlayPauseButtonType; message 'mediaPlayPauseButtonType';
    function mediaPlayPauseButtonFrame: CGRect; message 'mediaPlayPauseButtonFrame';
    {$if defined(TARGET_OS_IOS)}
    function mediaPlayPauseButtonTintColor: UIColorPtr; message 'mediaPlayPauseButtonTintColor';
    {$else}
    function mediaPlayPauseButtonTintColor_: NSColorPtr; message 'mediaPlayPauseButtonTintColor';
    {$endif}
    procedure mediaPlay; message 'mediaPlay';
    procedure mediaPause; message 'mediaPause';
  end;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationContentExtension = objccategory external (NSExtensionContext)
    procedure setNotificationActions(newValue: NSArray); message 'setNotificationActions:'; { unavailable in tvos, watchos }
    function notificationActions: NSArray; message 'notificationActions'; { unavailable in tvos, watchos }
    procedure performNotificationDefaultAction; message 'performNotificationDefaultAction'; { unavailable in tvos, watchos }
    procedure dismissNotificationContentExtension; message 'dismissNotificationContentExtension'; { unavailable in tvos, watchos }
    procedure mediaPlayingStarted; message 'mediaPlayingStarted'; { unavailable in tvos, watchos }
    procedure mediaPlayingPaused; message 'mediaPlayingPaused'; { unavailable in tvos, watchos }
  end;
{$endif}

