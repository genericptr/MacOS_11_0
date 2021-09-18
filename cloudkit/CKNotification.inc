{ Parsed from CloudKit.framework CKNotification.h }

{$ifdef TYPES}
type
  CKNotificationIDPtr = ^CKNotificationID;
  CKNotificationPtr = ^CKNotification;
  CKQueryNotificationPtr = ^CKQueryNotification;
  CKRecordZoneNotificationPtr = ^CKRecordZoneNotification;
  CKDatabaseNotificationPtr = ^CKDatabaseNotification;
{$endif}

{$ifdef CLASSES}

type
  CKNotificationID = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CKNotificationType = NSInteger;
  CKNotificationTypePtr = ^CKNotificationType;

const
  CKNotificationTypeQuery = 1;
  CKNotificationTypeRecordZone = 2;
  CKNotificationTypeReadNotification = 3;
  CKNotificationTypeDatabase = 4 { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef CLASSES}

type
  CKNotification = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    class function notificationFromRemoteNotificationDictionary (notificationDictionary: NSDictionary): id; message 'notificationFromRemoteNotificationDictionary:';
    function notificationType: CKNotificationType; message 'notificationType';
    function notificationID: CKNotificationID; message 'notificationID';
    function containerIdentifier: NSString; message 'containerIdentifier';
    function subscriptionOwnerUserRecordID: CKRecordID; message 'subscriptionOwnerUserRecordID'; { available in macos , ios , tvos , watchos  }
    function isPruned: objcbool; message 'isPruned';
    function alertBody: NSString; message 'alertBody';
    function alertLocalizationKey: NSString; message 'alertLocalizationKey';
    function alertLocalizationArgs: NSArray; message 'alertLocalizationArgs';
    function title: NSString; message 'title'; { available in macos , ios , watchos  }
    function titleLocalizationKey: NSString; message 'titleLocalizationKey'; { available in macos , ios , watchos  }
    function titleLocalizationArgs: NSArray; message 'titleLocalizationArgs'; { available in macos , ios , watchos  }
    function subtitle: NSString; message 'subtitle'; { available in macos , ios , watchos  }
    function subtitleLocalizationKey: NSString; message 'subtitleLocalizationKey'; { available in macos , ios , watchos  }
    function subtitleLocalizationArgs: NSArray; message 'subtitleLocalizationArgs'; { available in macos , ios , watchos  }
    function alertActionLocalizationKey: NSString; message 'alertActionLocalizationKey';
    function alertLaunchImage: NSString; message 'alertLaunchImage';
    function badge: NSNumber; message 'badge'; { available in tvos  }
    function soundName: NSString; message 'soundName';
    function subscriptionID: CKSubscriptionID; message 'subscriptionID'; { available in macos , ios , watchos  }
    function category: NSString; message 'category'; { available in macos , ios , watchos  }
  end;
{$endif}

{$ifdef TYPES}
type
  CKQueryNotificationReason = NSInteger;
  CKQueryNotificationReasonPtr = ^CKQueryNotificationReason;

const
  CKQueryNotificationReasonRecordCreated = 1;
  CKQueryNotificationReasonRecordUpdated = 2;
  CKQueryNotificationReasonRecordDeleted = 3;
{$endif}

{$ifdef CLASSES}

type
  CKQueryNotification = objcclass external (CKNotification)
  public
    function queryNotificationReason: CKQueryNotificationReason; message 'queryNotificationReason';
    function recordFields: NSDictionary; message 'recordFields';
    function recordID: CKRecordID; message 'recordID';
    function databaseScope: CKDatabaseScope; message 'databaseScope'; { available in macos , ios , tvos , watchos  }
  end;

type
  CKRecordZoneNotification = objcclass external (CKNotification)
  public
    function recordZoneID: CKRecordZoneID; message 'recordZoneID';
    function databaseScope: CKDatabaseScope; message 'databaseScope'; { available in macos , ios , tvos , watchos  }
  end;

type
  CKDatabaseNotification = objcclass external (CKNotification)
  public
    function databaseScope: CKDatabaseScope; message 'databaseScope';
  end;
{$endif}

