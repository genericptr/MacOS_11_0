{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKDatabase.h }

{$ifdef CALLBACKS}
type
  CKDatabaseFetchRecordWithIDCallback = reference to function (record_: CKRecord; error: NSError): pointer; cblock; cdecl;
  CKDatabaseSaveRecordCallback = reference to function (record_: CKRecord; error: NSError): pointer; cblock; cdecl;
  CKDatabaseDeleteRecordWithIDCallback = reference to function (recordID: CKRecordID; error: NSError): pointer; cblock; cdecl;
  CKDatabasePerformQueryCallback = reference to function (results: NSArray; error: NSError): pointer; cblock; cdecl;
  CKDatabaseFetchAllRecordZonesWithCompletionHandlerCallback = reference to function (zones: NSArray; error: NSError): pointer; cblock; cdecl;
  CKDatabaseFetchRecordZoneWithIDCallback = reference to function (zone: CKRecordZone; error: NSError): pointer; cblock; cdecl;
  CKDatabaseSaveRecordZoneCallback = reference to function (zone: CKRecordZone; error: NSError): pointer; cblock; cdecl;
  CKDatabaseDeleteRecordZoneWithIDCallback = reference to function (zoneID: CKRecordZoneID; error: NSError): pointer; cblock; cdecl;
  CKDatabaseFetchSubscriptionWithIDCallback = reference to function (subscription: CKSubscription; error: NSError): pointer; cblock; cdecl;
  CKDatabaseFetchAllSubscriptionsWithCompletionHandlerCallback = reference to function (subscriptions: NSArray; error: NSError): pointer; cblock; cdecl;
  CKDatabaseSaveSubscriptionCallback = reference to function (subscription: CKSubscription; error: NSError): pointer; cblock; cdecl;
  CKDatabaseDeleteSubscriptionWithIDCallback = reference to function (subscriptionID: NSString; error: NSError): pointer; cblock; cdecl;
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

