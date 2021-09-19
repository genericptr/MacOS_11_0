{ Parsed from CloudKit.framework CKContainer.h }

{$ifdef CALLBACKS}
type
  CKContainerAccountStatusWithCompletionHandlerCallback = reference to procedure (accountStatus: CKAccountStatus; error: NSError); cblock; cdecl;
  CKContainerFetchUserRecordIDWithCompletionHandlerCallback = reference to procedure (recordID: CKRecordID; error: NSError); cblock; cdecl;
  CKContainerDiscoverAllIdentitiesWithCompletionHandlerCallback = reference to procedure (userIdentities: NSArray; error: NSError); cblock; cdecl;
  CKContainerDiscoverUserIdentityWithEmailAddressCallback = reference to procedure (userInfo: CKUserIdentity; error: NSError); cblock; cdecl;
  CKContainerDiscoverUserIdentityWithPhoneNumberCallback = reference to procedure (userInfo: CKUserIdentity; error: NSError); cblock; cdecl;
  CKContainerDiscoverUserIdentityWithUserRecordIDCallback = reference to procedure (userInfo: CKUserIdentity; error: NSError); cblock; cdecl;
  CKContainerFetchShareParticipantWithEmailAddressCallback = reference to procedure (shareParticipant: CKShareParticipant; error: NSError); cblock; cdecl;
  CKContainerFetchShareParticipantWithPhoneNumberCallback = reference to procedure (shareParticipant: CKShareParticipant; error: NSError); cblock; cdecl;
  CKContainerFetchShareParticipantWithUserRecordIDCallback = reference to procedure (shareParticipant: CKShareParticipant; error: NSError); cblock; cdecl;
  CKContainerFetchShareMetadataWithURLCallback = reference to procedure (metadata: CKShareMetadata; error: NSError); cblock; cdecl;
  CKContainerAcceptShareMetadataCallback = reference to procedure (acceptedShare: CKShare; error: NSError); cblock; cdecl;
  CKContainerFetchAllLongLivedOperationIDsWithCompletionHandlerCallback = reference to procedure (outstandingOperationIDs: NSArray; error: NSError); cblock; cdecl;
  CKContainerFetchLongLivedOperationWithIDCallback = reference to procedure (outstandingOperation: CKOperation; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKContainerPtr = ^CKContainer;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKCurrentUserDefaultName: NSString { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }; cvar; external;
  CKOwnerDefaultName: NSString deprecated 'replace with CKCurrentUserDefaultName'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKContainer = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    class function defaultContainer: CKContainer; message 'defaultContainer';
    class function containerWithIdentifier (containerIdentifier: NSString): CKContainer; message 'containerWithIdentifier:';
    function containerIdentifier: NSString; message 'containerIdentifier';
    procedure addOperation (operation: CKOperation); message 'addOperation:';
  end;


type
  Database = objccategory external (CKContainer)
    function privateCloudDatabase: CKDatabase; message 'privateCloudDatabase';
    function publicCloudDatabase: CKDatabase; message 'publicCloudDatabase';
    function sharedCloudDatabase: CKDatabase; message 'sharedCloudDatabase'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    function databaseWithDatabaseScope (databaseScope: CKDatabaseScope): CKDatabase; message 'databaseWithDatabaseScope:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  CKAccountStatus = NSInteger;
  CKAccountStatusPtr = ^CKAccountStatus;

const
  CKAccountStatusCouldNotDetermine = 0;
  CKAccountStatusAvailable = 1;
  CKAccountStatusRestricted = 2;
  CKAccountStatusNoAccount = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKAccountChangedNotification: NSString { available in macos 10.11, ios 9.0, watchos 3.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AccountStatus = objccategory external (CKContainer)
    procedure accountStatusWithCompletionHandler (completionHandler: CKContainerAccountStatusWithCompletionHandlerCallback); message 'accountStatusWithCompletionHandler:';
  end;
{$endif}

{$ifdef TYPES}
type
  CKApplicationPermissions = NSUInteger;
  CKApplicationPermissionsPtr = ^CKApplicationPermissions;

const
  CKApplicationPermissionUserDiscoverability = 1 shl 0;

type
  CKApplicationPermissionStatus = NSInteger;
  CKApplicationPermissionStatusPtr = ^CKApplicationPermissionStatus;

const
  CKApplicationPermissionStatusInitialState = 0;
  CKApplicationPermissionStatusCouldNotComplete = 1;
  CKApplicationPermissionStatusDenied = 2;
  CKApplicationPermissionStatusGranted = 3;

type
  CKApplicationPermissionBlock = reference to procedure (applicationPermissionStatus: CKApplicationPermissionStatus; error: NSError); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  ApplicationPermission = objccategory external (CKContainer)
    procedure statusForApplicationPermission_completionHandler (applicationPermission: CKApplicationPermissions; completionHandler: CKApplicationPermissionBlock); message 'statusForApplicationPermission:completionHandler:';
    procedure requestApplicationPermission_completionHandler (applicationPermission: CKApplicationPermissions; completionHandler: CKApplicationPermissionBlock); message 'requestApplicationPermission:completionHandler:';
  end;

type
  UserRecords = objccategory external (CKContainer)
    procedure fetchUserRecordIDWithCompletionHandler (completionHandler: CKContainerFetchUserRecordIDWithCompletionHandlerCallback); message 'fetchUserRecordIDWithCompletionHandler:';
    procedure discoverAllIdentitiesWithCompletionHandler (completionHandler: CKContainerDiscoverAllIdentitiesWithCompletionHandlerCallback); message 'discoverAllIdentitiesWithCompletionHandler:'; { unavailable in tvos } { available in macos 10.12, ios 10.0, watchos 3.0 }
    procedure discoverUserIdentityWithEmailAddress_completionHandler (email: NSString; completionHandler: CKContainerDiscoverUserIdentityWithEmailAddressCallback); message 'discoverUserIdentityWithEmailAddress:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    procedure discoverUserIdentityWithPhoneNumber_completionHandler (phoneNumber: NSString; completionHandler: CKContainerDiscoverUserIdentityWithPhoneNumberCallback); message 'discoverUserIdentityWithPhoneNumber:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    procedure discoverUserIdentityWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: CKContainerDiscoverUserIdentityWithUserRecordIDCallback); message 'discoverUserIdentityWithUserRecordID:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
  end;

type
  Sharing = objccategory external (CKContainer)
    procedure fetchShareParticipantWithEmailAddress_completionHandler (emailAddress: NSString; completionHandler: CKContainerFetchShareParticipantWithEmailAddressCallback); message 'fetchShareParticipantWithEmailAddress:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    procedure fetchShareParticipantWithPhoneNumber_completionHandler (phoneNumber: NSString; completionHandler: CKContainerFetchShareParticipantWithPhoneNumberCallback); message 'fetchShareParticipantWithPhoneNumber:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    procedure fetchShareParticipantWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: CKContainerFetchShareParticipantWithUserRecordIDCallback); message 'fetchShareParticipantWithUserRecordID:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    procedure fetchShareMetadataWithURL_completionHandler (url: NSURL; completionHandler: CKContainerFetchShareMetadataWithURLCallback); message 'fetchShareMetadataWithURL:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
    procedure acceptShareMetadata_completionHandler (metadata: CKShareMetadata; completionHandler: CKContainerAcceptShareMetadataCallback); message 'acceptShareMetadata:completionHandler:'; { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }
  end;

type
  CKLongLivedOperations = objccategory external (CKContainer)
    procedure fetchAllLongLivedOperationIDsWithCompletionHandler (completionHandler: CKContainerFetchAllLongLivedOperationIDsWithCompletionHandlerCallback); message 'fetchAllLongLivedOperationIDsWithCompletionHandler:'; { available in macos 10.12, ios 9.3, tvos 9.2, watchos 3.0 }
    procedure fetchLongLivedOperationWithID_completionHandler (operationID: CKOperationID; completionHandler: CKContainerFetchLongLivedOperationWithIDCallback); message 'fetchLongLivedOperationWithID:completionHandler:'; { available in macos 10.12, ios 9.3, tvos 9.2, watchos 3.0 }
  end;
{$endif}

