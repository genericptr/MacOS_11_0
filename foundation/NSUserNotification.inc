{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSUserNotification.h }

{$ifdef TYPES}
type
  NSUserNotificationPtr = ^NSUserNotification;
  NSUserNotificationActionPtr = ^NSUserNotificationAction;
  NSUserNotificationCenterPtr = ^NSUserNotificationCenter;
  NSUserNotificationCenterDelegateProtocolPtr = ^NSUserNotificationCenterDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSUserNotificationActivationType = NSInteger;
  NSUserNotificationActivationTypePtr = ^NSUserNotificationActivationType;

const
  NSUserNotificationActivationTypeNone = 0;
  NSUserNotificationActivationTypeContentsClicked = 1;
  NSUserNotificationActivationTypeActionButtonClicked = 2;
  NSUserNotificationActivationTypeReplied = 3 { unavailable in ios, watchos, tvos };
  NSUserNotificationActivationTypeAdditionalActionClicked = 4 { unavailable in ios, watchos, tvos };
{$endif}

{$ifdef CLASSES}

type
  NSUserNotification = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: id;
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:';
    function subtitle: NSString; message 'subtitle';
    procedure setInformativeText(newValue: NSString); message 'setInformativeText:';
    function informativeText: NSString; message 'informativeText';
    procedure setActionButtonTitle(newValue: NSString); message 'setActionButtonTitle:';
    function actionButtonTitle: NSString; message 'actionButtonTitle';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setDeliveryDate(newValue: NSDate); message 'setDeliveryDate:';
    function deliveryDate: NSDate; message 'deliveryDate';
    procedure setDeliveryTimeZone(newValue: NSTimeZone); message 'setDeliveryTimeZone:';
    function deliveryTimeZone: NSTimeZone; message 'deliveryTimeZone';
    procedure setDeliveryRepeatInterval(newValue: NSDateComponents); message 'setDeliveryRepeatInterval:';
    function deliveryRepeatInterval: NSDateComponents; message 'deliveryRepeatInterval';
    function actualDeliveryDate: NSDate; message 'actualDeliveryDate';
    function isPresented: objcbool; message 'isPresented';
    function isRemote: objcbool; message 'isRemote';
    procedure setSoundName(newValue: NSString); message 'setSoundName:';
    function soundName: NSString; message 'soundName';
    procedure setHasActionButton(newValue: objcbool); message 'setHasActionButton:';
    function hasActionButton: objcbool; message 'hasActionButton';
    function activationType: NSUserNotificationActivationType; message 'activationType';
    procedure setOtherButtonTitle(newValue: NSString); message 'setOtherButtonTitle:';
    function otherButtonTitle: NSString; message 'otherButtonTitle';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:'; { unavailable in ios, watchos, tvos }
    function identifier: NSString; message 'identifier'; { unavailable in ios, watchos, tvos }
    procedure setContentImage(newValue: NSImage); message 'setContentImage:'; { unavailable in ios, watchos, tvos }
    function contentImage: NSImage; message 'contentImage'; { unavailable in ios, watchos, tvos }
    procedure setHasReplyButton(newValue: objcbool); message 'setHasReplyButton:'; { unavailable in ios, watchos, tvos }
    function hasReplyButton: objcbool; message 'hasReplyButton'; { unavailable in ios, watchos, tvos }
    procedure setResponsePlaceholder(newValue: NSString); message 'setResponsePlaceholder:'; { unavailable in ios, watchos, tvos }
    function responsePlaceholder: NSString; message 'responsePlaceholder'; { unavailable in ios, watchos, tvos }
    function response: NSAttributedString; message 'response'; { unavailable in ios, watchos, tvos }
    procedure setAdditionalActions(newValue: NSArray); message 'setAdditionalActions:'; { unavailable in ios, watchos, tvos }
    function additionalActions: NSArray; message 'additionalActions'; { unavailable in ios, watchos, tvos }
    function additionalActivationAction: NSUserNotificationAction; message 'additionalActivationAction'; { unavailable in ios, watchos, tvos }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSUserNotificationAction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function actionWithIdentifier_title (identifier: NSString; title: NSString): id; message 'actionWithIdentifier:title:';
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserNotificationDefaultSoundName: NSString { unavailable in ios, watchos, tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSUserNotificationCenter = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function defaultUserNotificationCenter: NSUserNotificationCenter; message 'defaultUserNotificationCenter';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setScheduledNotifications(newValue: NSArray); message 'setScheduledNotifications:';
    function scheduledNotifications: NSArray; message 'scheduledNotifications';
    procedure scheduleNotification (notification: NSUserNotification); message 'scheduleNotification:';
    procedure removeScheduledNotification (notification: NSUserNotification); message 'removeScheduledNotification:';
    function deliveredNotifications: NSArray; message 'deliveredNotifications';
    procedure deliverNotification (notification: NSUserNotification); message 'deliverNotification:';
    procedure removeDeliveredNotification (notification: NSUserNotification); message 'removeDeliveredNotification:';
    procedure removeAllDeliveredNotifications; message 'removeAllDeliveredNotifications';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserNotificationCenterDelegateProtocol = objcprotocol external name 'NSUserNotificationCenterDelegate' (NSObjectProtocol)
  optional
    procedure userNotificationCenter_didDeliverNotification (center: NSUserNotificationCenter; notification: NSUserNotification); message 'userNotificationCenter:didDeliverNotification:'; { unavailable in ios, watchos, tvos }
    procedure userNotificationCenter_didActivateNotification (center: NSUserNotificationCenter; notification: NSUserNotification); message 'userNotificationCenter:didActivateNotification:'; { unavailable in ios, watchos, tvos }
    function userNotificationCenter_shouldPresentNotification (center: NSUserNotificationCenter; notification: NSUserNotification): objcbool; message 'userNotificationCenter:shouldPresentNotification:'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

