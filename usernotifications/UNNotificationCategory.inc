{ Parsed from UserNotifications.framework UNNotificationCategory.h }

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
  UNNotificationCategoryOptionAllowInCarPlay = 0 { unavailable in macos };
  UNNotificationCategoryOptionHiddenPreviewsShowTitle = 1 { unavailable in watchos, tvos } { available in macos 10.14, ios 11.0 };
  UNNotificationCategoryOptionHiddenPreviewsShowSubtitle = 2 { unavailable in watchos, tvos } { available in macos 10.14, ios 11.0 };
  UNNotificationCategoryOptionAllowAnnouncement = 3 { unavailable in macos, tvos } { available in ios 13.0, watchos 6.0 };

const
  UNNotificationCategoryOptionNone = 0 { unavailable in "Use [] instead." } { unavailable in tvos };
{$endif}

{$ifdef CLASSES}

type
  UNNotificationCategory = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function actions: NSArray; message 'actions';
    function intentIdentifiers: NSArray; message 'intentIdentifiers';
    function options: UNNotificationCategoryOptions; message 'options';
    function hiddenPreviewsBodyPlaceholder: NSString; message 'hiddenPreviewsBodyPlaceholder'; { unavailable in watchos, tvos } { available in ios 11.0 }
    function categorySummaryFormat: NSString; message 'categorySummaryFormat'; { unavailable in watchos, tvos } { available in ios 12.0 }
    class function categoryWithIdentifier_actions_intentIdentifiers_options (identifier_: NSString; actions_: NSArray; intentIdentifiers_: NSArray; options_: UNNotificationCategoryOptions): id; message 'categoryWithIdentifier:actions:intentIdentifiers:options:';
    class function categoryWithIdentifier_actions_intentIdentifiers_hiddenPreviewsBodyPlaceholder_options (identifier_: NSString; actions_: NSArray; intentIdentifiers_: NSArray; hiddenPreviewsBodyPlaceholder_: NSString; options_: UNNotificationCategoryOptions): id; message 'categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:options:'; { unavailable in watchos, tvos } { available in ios 11.0 }
    class function categoryWithIdentifier_actions_intentIdentifiers_hiddenPreviewsBodyPlaceholder_categorySummaryFormat_options (identifier_: NSString; actions_: NSArray; intentIdentifiers_: NSArray; hiddenPreviewsBodyPlaceholder_: NSString; categorySummaryFormat_: NSString; options_: UNNotificationCategoryOptions): id; message 'categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:categorySummaryFormat:options:'; { unavailable in watchos, tvos } { available in ios 12.0 }
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

