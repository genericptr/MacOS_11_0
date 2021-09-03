{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKSubscription.h }

{$ifdef TYPES}
type
  CKSubscriptionPtr = ^CKSubscription;
  CKQuerySubscriptionPtr = ^CKQuerySubscription;
  CKRecordZoneSubscriptionPtr = ^CKRecordZoneSubscription;
  CKDatabaseSubscriptionPtr = ^CKDatabaseSubscription;
  CKNotificationInfoPtr = ^CKNotificationInfo;
{$endif}

{$ifdef TYPES}
type
  CKSubscriptionType = NSInteger;
  CKSubscriptionTypePtr = ^CKSubscriptionType;

const
  CKSubscriptionTypeQuery = 1;
  CKSubscriptionTypeRecordZone = 2;
  CKSubscriptionTypeDatabase = 3 { available in macos , ios , tvos , watchos  };

type
  CKSubscriptionID = NSString;
  CKSubscriptionIDPtr = ^CKSubscriptionID;
{$endif}

{$ifdef CLASSES}

type
  CKSubscription = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function subscriptionID: CKSubscriptionID; message 'subscriptionID'; { available in watchos  }
    function subscriptionType: CKSubscriptionType; message 'subscriptionType'; { available in watchos  }
    procedure setNotificationInfo(newValue: CKNotificationInfo); message 'setNotificationInfo:'; { available in watchos  }
    function notificationInfo: CKNotificationInfo; message 'notificationInfo'; { available in watchos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CKQuerySubscriptionOptions = NSUInteger;
  CKQuerySubscriptionOptionsPtr = ^CKQuerySubscriptionOptions;

const
  CKQuerySubscriptionOptionsFiresOnRecordCreation = 1 shl 0;
  CKQuerySubscriptionOptionsFiresOnRecordUpdate = 1 shl 1;
  CKQuerySubscriptionOptionsFiresOnRecordDeletion = 1 shl 2;
  CKQuerySubscriptionOptionsFiresOnce = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  CKQuerySubscription = objcclass external (CKSubscription, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithRecordType_predicate_options (recordType: CKRecordType; predicate: NSPredicate; querySubscriptionOptions: CKQuerySubscriptionOptions): id; message 'initWithRecordType:predicate:options:';
    function initWithRecordType_predicate_subscriptionID_options (recordType: CKRecordType; predicate: NSPredicate; subscriptionID_: CKSubscriptionID; querySubscriptionOptions: CKQuerySubscriptionOptions): id; message 'initWithRecordType:predicate:subscriptionID:options:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function recordType: CKRecordType; message 'recordType';
    function predicate: NSPredicate; message 'predicate';
    procedure setZoneID(newValue: CKRecordZoneID); message 'setZoneID:';
    function zoneID: CKRecordZoneID; message 'zoneID';
    function querySubscriptionOptions: CKQuerySubscriptionOptions; message 'querySubscriptionOptions';
  end;

type
  CKRecordZoneSubscription = objcclass external (CKSubscription, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithZoneID (zoneID: CKRecordZoneID): id; message 'initWithZoneID:';
    function initWithZoneID_subscriptionID (zoneID: CKRecordZoneID; subscriptionID_: CKSubscriptionID): id; message 'initWithZoneID:subscriptionID:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function zoneID: CKRecordZoneID; message 'zoneID';
    procedure setRecordType(newValue: CKRecordType); message 'setRecordType:';
    function recordType: CKRecordType; message 'recordType';
  end;

type
  CKDatabaseSubscription = objcclass external (CKSubscription, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new'; { unavailable in "use object initializers instead" }
    function initWithSubscriptionID (subscriptionID_: CKSubscriptionID): id; message 'initWithSubscriptionID:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setRecordType(newValue: CKRecordType); message 'setRecordType:';
    function recordType: CKRecordType; message 'recordType';
  end;

type
  CKNotificationInfo = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setAlertBody(newValue: NSString); message 'setAlertBody:';
    function alertBody: NSString; message 'alertBody';
    procedure setAlertLocalizationKey(newValue: NSString); message 'setAlertLocalizationKey:';
    function alertLocalizationKey: NSString; message 'alertLocalizationKey';
    procedure setAlertLocalizationArgs(newValue: NSArray); message 'setAlertLocalizationArgs:';
    function alertLocalizationArgs: NSArray; message 'alertLocalizationArgs';
    procedure setTitle(newValue: NSString); message 'setTitle:'; { available in macos , ios  }
    function title: NSString; message 'title'; { available in macos , ios  }
    procedure setTitleLocalizationKey(newValue: NSString); message 'setTitleLocalizationKey:'; { available in macos , ios  }
    function titleLocalizationKey: NSString; message 'titleLocalizationKey'; { available in macos , ios  }
    procedure setTitleLocalizationArgs(newValue: NSArray); message 'setTitleLocalizationArgs:'; { available in macos , ios  }
    function titleLocalizationArgs: NSArray; message 'titleLocalizationArgs'; { available in macos , ios  }
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:'; { available in macos , ios  }
    function subtitle: NSString; message 'subtitle'; { available in macos , ios  }
    procedure setSubtitleLocalizationKey(newValue: NSString); message 'setSubtitleLocalizationKey:'; { available in macos , ios  }
    function subtitleLocalizationKey: NSString; message 'subtitleLocalizationKey'; { available in macos , ios  }
    procedure setSubtitleLocalizationArgs(newValue: NSArray); message 'setSubtitleLocalizationArgs:'; { available in macos , ios  }
    function subtitleLocalizationArgs: NSArray; message 'subtitleLocalizationArgs'; { available in macos , ios  }
    procedure setAlertActionLocalizationKey(newValue: NSString); message 'setAlertActionLocalizationKey:';
    function alertActionLocalizationKey: NSString; message 'alertActionLocalizationKey';
    procedure setAlertLaunchImage(newValue: NSString); message 'setAlertLaunchImage:';
    function alertLaunchImage: NSString; message 'alertLaunchImage';
    procedure setSoundName(newValue: NSString); message 'setSoundName:';
    function soundName: NSString; message 'soundName';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';
    procedure setShouldBadge(newValue: objcbool); message 'setShouldBadge:'; { available in tvos  }
    function shouldBadge: objcbool; message 'shouldBadge'; { available in tvos  }
    procedure setShouldSendContentAvailable(newValue: objcbool); message 'setShouldSendContentAvailable:';
    function shouldSendContentAvailable: objcbool; message 'shouldSendContentAvailable';
    procedure setShouldSendMutableContent(newValue: objcbool); message 'setShouldSendMutableContent:'; { available in macos , ios , tvos  }
    function shouldSendMutableContent: objcbool; message 'shouldSendMutableContent'; { available in macos , ios , tvos  }
    procedure setCategory(newValue: NSString); message 'setCategory:'; { available in macos , ios  }
    function category: NSString; message 'category'; { available in macos , ios  }
    procedure setCollapseIDKey(newValue: NSString); message 'setCollapseIDKey:'; { available in macos , ios , tvos  }
    function collapseIDKey: NSString; message 'collapseIDKey'; { available in macos , ios , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

