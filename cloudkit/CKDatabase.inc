{ Parsed from CloudKit.framework CKDatabase.h }

{$ifdef CALLBACKS}
type
  CKDatabaseFetchRecordWithIDCallback = reference to procedure (record_: CKRecord; error: NSError); cblock; cdecl;
  CKDatabaseSaveRecordCallback = reference to procedure (record_: CKRecord; error: NSError); cblock; cdecl;
  CKDatabaseDeleteRecordWithIDCallback = reference to procedure (recordID: CKRecordID; error: NSError); cblock; cdecl;
  CKDatabasePerformQueryCallback = reference to procedure (results: NSArray; error: NSError); cblock; cdecl;
  CKDatabaseFetchAllRecordZonesWithCompletionHandlerCallback = reference to procedure (zones: NSArray; error: NSError); cblock; cdecl;
  CKDatabaseFetchRecordZoneWithIDCallback = reference to procedure (zone: CKRecordZone; error: NSError); cblock; cdecl;
  CKDatabaseSaveRecordZoneCallback = reference to procedure (zone: CKRecordZone; error: NSError); cblock; cdecl;
  CKDatabaseDeleteRecordZoneWithIDCallback = reference to procedure (zoneID: CKRecordZoneID; error: NSError); cblock; cdecl;
  CKDatabaseFetchSubscriptionWithIDCallback = reference to procedure (subscription: CKSubscription; error: NSError); cblock; cdecl;
  CKDatabaseFetchAllSubscriptionsWithCompletionHandlerCallback = reference to procedure (subscriptions: NSArray; error: NSError); cblock; cdecl;
  CKDatabaseSaveSubscriptionCallback = reference to procedure (subscription: CKSubscription; error: NSError); cblock; cdecl;
  CKDatabaseDeleteSubscriptionWithIDCallback = reference to procedure (subscriptionID: NSString; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKDatabasePtr = ^CKDatabase;
{$endif}

{$ifdef TYPES}
type
  CKDatabaseScope = NSInteger;
  CKDatabaseScopePtr = ^CKDatabaseScope;

const
  CKDatabaseScopePublic = 1;
  CKDatabaseScopePrivate = 2;
  CKDatabaseScopeShared = 3;
{$endif}

{$ifdef CLASSES}

type
  CKDatabase = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure addOperation (operation: CKDatabaseOperation); message 'addOperation:';
    function databaseScope: CKDatabaseScope; message 'databaseScope'; { available in macos , ios , tvos , watchos  }
  end;


type
  ConvenienceMethods = objccategory external (CKDatabase)
    procedure fetchRecordWithID_completionHandler (recordID: CKRecordID; completionHandler: CKDatabaseFetchRecordWithIDCallback); message 'fetchRecordWithID:completionHandler:';
    procedure saveRecord_completionHandler (record_: CKRecord; completionHandler: CKDatabaseSaveRecordCallback); message 'saveRecord:completionHandler:';
    procedure deleteRecordWithID_completionHandler (recordID: CKRecordID; completionHandler: CKDatabaseDeleteRecordWithIDCallback); message 'deleteRecordWithID:completionHandler:';
    procedure performQuery_inZoneWithID_completionHandler (query: CKQuery; zoneID: CKRecordZoneID; completionHandler: CKDatabasePerformQueryCallback); message 'performQuery:inZoneWithID:completionHandler:';
    procedure fetchAllRecordZonesWithCompletionHandler (completionHandler: CKDatabaseFetchAllRecordZonesWithCompletionHandlerCallback); message 'fetchAllRecordZonesWithCompletionHandler:';
    procedure fetchRecordZoneWithID_completionHandler (zoneID: CKRecordZoneID; completionHandler: CKDatabaseFetchRecordZoneWithIDCallback); message 'fetchRecordZoneWithID:completionHandler:';
    procedure saveRecordZone_completionHandler (zone: CKRecordZone; completionHandler: CKDatabaseSaveRecordZoneCallback); message 'saveRecordZone:completionHandler:';
    procedure deleteRecordZoneWithID_completionHandler (zoneID: CKRecordZoneID; completionHandler: CKDatabaseDeleteRecordZoneWithIDCallback); message 'deleteRecordZoneWithID:completionHandler:';
    procedure fetchSubscriptionWithID_completionHandler (subscriptionID: CKSubscriptionID; completionHandler: CKDatabaseFetchSubscriptionWithIDCallback); message 'fetchSubscriptionWithID:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure fetchAllSubscriptionsWithCompletionHandler (completionHandler: CKDatabaseFetchAllSubscriptionsWithCompletionHandlerCallback); message 'fetchAllSubscriptionsWithCompletionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure saveSubscription_completionHandler (subscription: CKSubscription; completionHandler: CKDatabaseSaveSubscriptionCallback); message 'saveSubscription:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure deleteSubscriptionWithID_completionHandler (subscriptionID: CKSubscriptionID; completionHandler: CKDatabaseDeleteSubscriptionWithIDCallback); message 'deleteSubscriptionWithID:completionHandler:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

