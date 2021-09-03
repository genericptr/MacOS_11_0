{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationSettings.h }

{$ifdef TYPES}
type
  UNNotificationSettingsPtr = ^UNNotificationSettings;
{$endif}

{$ifdef TYPES}
type
  UNAuthorizationStatus = NSInteger;
  UNAuthorizationStatusPtr = ^UNAuthorizationStatus;

const
  UNAuthorizationStatusNotDetermined = 0;
  UNAuthorizationStatusDenied = 1;
  UNAuthorizationStatusAuthorized = 2;
  UNAuthorizationStatusProvisional = 3 { available in macos , ios , watchos , tvos  };
  UNAuthorizationStatusEphemeral = 4 { unavailable in macos, watchos, tvos };

type
  UNShowPreviewsSetting = NSInteger;
  UNShowPreviewsSettingPtr = ^UNShowPreviewsSetting;

const
  UNShowPreviewsSettingAlways = 0;
  UNShowPreviewsSettingWhenAuthenticated = 1;
  UNShowPreviewsSettingNever = 2;

type
  UNNotificationSetting = NSInteger;
  UNNotificationSettingPtr = ^UNNotificationSetting;

const
  UNNotificationSettingNotSupported = 0;
  UNNotificationSettingDisabled = 1;
  UNNotificationSettingEnabled = 2;

type
  UNAlertStyle = NSInteger;
  UNAlertStylePtr = ^UNAlertStyle;

const
  UNAlertStyleNone = 0;
  UNAlertStyleBanner = 1;
  UNAlertStyleAlert = 2;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationSettings = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function authorizationStatus: UNAuthorizationStatus; message 'authorizationStatus';
    function soundSetting: UNNotificationSetting; message 'soundSetting'; { unavailable in tvos }
    function badgeSetting: UNNotificationSetting; message 'badgeSetting'; { unavailable in watchos }
    function alertSetting: UNNotificationSetting; message 'alertSetting'; { unavailable in tvos }
    function notificationCenterSetting: UNNotificationSetting; message 'notificationCenterSetting'; { unavailable in tvos }
    function lockScreenSetting: UNNotificationSetting; message 'lockScreenSetting'; { unavailable in watchos, tvos }
    function carPlaySetting: UNNotificationSetting; message 'carPlaySetting'; { unavailable in macos, tvos, watchos }
    function alertStyle: UNAlertStyle; message 'alertStyle'; { unavailable in watchos, tvos }
    function showPreviewsSetting: UNShowPreviewsSetting; message 'showPreviewsSetting'; { unavailable in watchos, tvos }
    function criticalAlertSetting: UNNotificationSetting; message 'criticalAlertSetting'; { unavailable in tvos }
    function providesAppNotificationSettings: objcbool; message 'providesAppNotificationSettings'; { unavailable in tvos }
    function announcementSetting: UNNotificationSetting; message 'announcementSetting'; { unavailable in macos, tvos }
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

