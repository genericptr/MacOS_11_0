{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationContent.h }

{$ifdef TYPES}
type
  UNNotificationContentPtr = ^UNNotificationContent;
  UNMutableNotificationContentPtr = ^UNMutableNotificationContent;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationContent = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function attachments: NSArray; message 'attachments'; { unavailable in tvos }
    function badge: NSNumber; message 'badge';
    function body: NSString; message 'body'; { unavailable in tvos }
    function categoryIdentifier: NSString; message 'categoryIdentifier'; { unavailable in tvos }
    function launchImageName: NSString; message 'launchImageName'; { unavailable in macos, tvos }
    function sound: UNNotificationSound; message 'sound'; { unavailable in tvos }
    function subtitle: NSString; message 'subtitle'; { unavailable in tvos }
    function threadIdentifier: NSString; message 'threadIdentifier'; { unavailable in tvos }
    function title: NSString; message 'title'; { unavailable in tvos }
    function userInfo: NSDictionary; message 'userInfo'; { unavailable in tvos }
    function summaryArgument: NSString; message 'summaryArgument'; { unavailable in watchos, tvos }
    function summaryArgumentCount: NSUInteger; message 'summaryArgumentCount'; { unavailable in watchos, tvos }
    function targetContentIdentifier: NSString; message 'targetContentIdentifier'; { available in ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  UNMutableNotificationContent = objcclass external (UNNotificationContent)
  public
    procedure setAttachments(newValue: NSArray); message 'setAttachments:'; { unavailable in tvos }
    function attachments: NSArray; message 'attachments'; { unavailable in tvos }
    procedure setBadge(newValue: NSNumber); message 'setBadge:';
    function badge: NSNumber; message 'badge';
    procedure setBody(newValue: NSString); message 'setBody:'; { unavailable in tvos }
    function body: NSString; message 'body'; { unavailable in tvos }
    procedure setCategoryIdentifier(newValue: NSString); message 'setCategoryIdentifier:'; { unavailable in tvos }
    function categoryIdentifier: NSString; message 'categoryIdentifier'; { unavailable in tvos }
    procedure setLaunchImageName(newValue: NSString); message 'setLaunchImageName:'; { unavailable in macos, tvos }
    function launchImageName: NSString; message 'launchImageName'; { unavailable in macos, tvos }
    procedure setSound(newValue: UNNotificationSound); message 'setSound:'; { unavailable in tvos }
    function sound: UNNotificationSound; message 'sound'; { unavailable in tvos }
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:'; { unavailable in tvos }
    function subtitle: NSString; message 'subtitle'; { unavailable in tvos }
    procedure setThreadIdentifier(newValue: NSString); message 'setThreadIdentifier:'; { unavailable in tvos }
    function threadIdentifier: NSString; message 'threadIdentifier'; { unavailable in tvos }
    procedure setTitle(newValue: NSString); message 'setTitle:'; { unavailable in tvos }
    function title: NSString; message 'title'; { unavailable in tvos }
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:'; { unavailable in tvos }
    function userInfo: NSDictionary; message 'userInfo'; { unavailable in tvos }
    procedure setSummaryArgument(newValue: NSString); message 'setSummaryArgument:'; { unavailable in watchos, tvos }
    function summaryArgument: NSString; message 'summaryArgument'; { unavailable in watchos, tvos }
    procedure setSummaryArgumentCount(newValue: NSUInteger); message 'setSummaryArgumentCount:'; { unavailable in watchos, tvos }
    function summaryArgumentCount: NSUInteger; message 'summaryArgumentCount'; { unavailable in watchos, tvos }
    procedure setTargetContentIdentifier(newValue: NSString); message 'setTargetContentIdentifier:'; { available in ios  }
    function targetContentIdentifier: NSString; message 'targetContentIdentifier'; { available in ios  }
  end;
{$endif}

