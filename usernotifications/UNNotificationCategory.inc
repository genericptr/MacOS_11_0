{ Parsed from UserNotifications.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/UserNotifications.framework/Headers/UNNotificationCategory.h }

{$ifdef TYPES}
type
  UNNotificationCategoryPtr = ^UNNotificationCategory;
{$endif}

{$ifdef TYPES}
type
  UNNotificationCategoryOptions = NSUInteger;
  UNNotificationCategoryOptionsPtr = ^UNNotificationCategoryOptions;

const
  UNNotificationCategoryOptionCustomDismissAction = 1 shl 0;
  UNNotificationCategoryOptionAllowInCarPlay = 0 { unavailable in macos) = (1 << 1 };
  UNNotificationCategoryOptionHiddenPreviewsShowTitle = 1 { unavailable in watchos, tvos) = (1 << 2 };
  UNNotificationCategoryOptionHiddenPreviewsShowSubtitle = 2 { unavailable in watchos, tvos) = (1 << 3 };
  UNNotificationCategoryOptionAllowAnnouncement = 3 { unavailable in macos, tvos) = (1 << 4 };

const
  UNNotificationCategoryOptionNone = 0 { unavailable in "Use [] instead.") __API_AVAILABLE(macos , ios , watchos ) __API_UNAVAILABLE(tvos };
{$endif}

{$ifdef CLASSES}

type
  UNNotificationCategory = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function actions: NSArray; message 'actions';
    function intentIdentifiers: NSArray; message 'intentIdentifiers';
    function options: UNNotificationCategoryOptions; message 'options';
    function hiddenPreviewsBodyPlaceholder: NSString; message 'hiddenPreviewsBodyPlaceholder'; { unavailable in watchos, tvos }
    function categorySummaryFormat: NSString; message 'categorySummaryFormat'; { unavailable in watchos, tvos }
    class function categoryWithIdentifier_actions_intentIdentifiers_options (identifier_: NSString; actions_: NSArray; intentIdentifiers_: NSArray; options_: UNNotificationCategoryOptions): id; message 'categoryWithIdentifier:actions:intentIdentifiers:options:';
    class function categoryWithIdentifier_actions_intentIdentifiers_hiddenPreviewsBodyPlaceholder_options (identifier_: NSString; actions_: NSArray; intentIdentifiers_: NSArray; hiddenPreviewsBodyPlaceholder_: NSString; options_: UNNotificationCategoryOptions): id; message 'categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:options:'; { unavailable in watchos, tvos }
    class function categoryWithIdentifier_actions_intentIdentifiers_hiddenPreviewsBodyPlaceholder_categorySummaryFormat_options (identifier_: NSString; actions_: NSArray; intentIdentifiers_: NSArray; hiddenPreviewsBodyPlaceholder_: NSString; categorySummaryFormat_: NSString; options_: UNNotificationCategoryOptions): id; message 'categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:categorySummaryFormat:options:'; { unavailable in watchos, tvos }
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

