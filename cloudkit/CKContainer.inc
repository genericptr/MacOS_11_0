{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKContainer.h }

{$ifdef CALLBACKS}
type
  CKContainerAccountStatusWithCompletionHandlerCallback = reference to function (accountStatus: CKAccountStatus; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchUserRecordIDWithCompletionHandlerCallback = reference to function (recordID: CKRecordID; error: NSError): pointer; cblock; cdecl;
  CKContainerDiscoverAllIdentitiesWithCompletionHandlerCallback = reference to function (userIdentities: NSArray; error: NSError): pointer; cblock; cdecl;
  CKContainerDiscoverUserIdentityWithEmailAddressCallback = reference to function (userInfo: CKUserIdentity; error: NSError): pointer; cblock; cdecl;
  CKContainerDiscoverUserIdentityWithPhoneNumberCallback = reference to function (userInfo: CKUserIdentity; error: NSError): pointer; cblock; cdecl;
  CKContainerDiscoverUserIdentityWithUserRecordIDCallback = reference to function (userInfo: CKUserIdentity; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchShareParticipantWithEmailAddressCallback = reference to function (shareParticipant: CKShareParticipant; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchShareParticipantWithPhoneNumberCallback = reference to function (shareParticipant: CKShareParticipant; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchShareParticipantWithUserRecordIDCallback = reference to function (shareParticipant: CKShareParticipant; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchShareMetadataWithURLCallback = reference to function (metadata: CKShareMetadata; error: NSError): pointer; cblock; cdecl;
  CKContainerAcceptShareMetadataCallback = reference to function (acceptedShare: CKShare; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchAllLongLivedOperationIDsWithCompletionHandlerCallback = reference to function (outstandingOperationIDs: NSArray; error: NSError): pointer; cblock; cdecl;
  CKContainerFetchLongLivedOperationWithIDCallback = reference to function (outstandingOperation: CKOperation; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKContainerPtr = ^CKContainer;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKCurrentUserDefaultName: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
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
    function sharedCloudDatabase: CKDatabase; message 'sharedCloudDatabase'; { available in macos , ios , tvos , watchos  }
    function databaseWithDatabaseScope (databaseScope: CKDatabaseScope): CKDatabase; message 'databaseWithDatabaseScope:'; { available in macos , ios , tvos , watchos  }
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
  CKAccountChangedNotification: NSString { available in macos , ios , watchos  }; cvar; external;
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
  CKApplicationPermissionBlock = reference to function (applicationPermissionStatus: CKApplicationPermissionStatus; error: NSError): pointer; cblock; cdecl;
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
    procedure discoverAllIdentitiesWithCompletionHandler (completionHandler: CKContainerDiscoverAllIdentitiesWithCompletionHandlerCallback); message 'discoverAllIdentitiesWithCompletionHandler:'; { unavailable in tvos }
    procedure discoverUserIdentityWithEmailAddress_completionHandler (email: NSString; completionHandler: CKContainerDiscoverUserIdentityWithEmailAddressCallback); message 'discoverUserIdentityWithEmailAddress:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure discoverUserIdentityWithPhoneNumber_completionHandler (phoneNumber: NSString; completionHandler: CKContainerDiscoverUserIdentityWithPhoneNumberCallback); message 'discoverUserIdentityWithPhoneNumber:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure discoverUserIdentityWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: CKContainerDiscoverUserIdentityWithUserRecordIDCallback); message 'discoverUserIdentityWithUserRecordID:completionHandler:'; { available in macos , ios , tvos , watchos  }
  end;

type
  Sharing = objccategory external (CKContainer)
    procedure fetchShareParticipantWithEmailAddress_completionHandler (emailAddress: NSString; completionHandler: CKContainerFetchShareParticipantWithEmailAddressCallback); message 'fetchShareParticipantWithEmailAddress:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure fetchShareParticipantWithPhoneNumber_completionHandler (phoneNumber: NSString; completionHandler: CKContainerFetchShareParticipantWithPhoneNumberCallback); message 'fetchShareParticipantWithPhoneNumber:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure fetchShareParticipantWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: CKContainerFetchShareParticipantWithUserRecordIDCallback); message 'fetchShareParticipantWithUserRecordID:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure fetchShareMetadataWithURL_completionHandler (url: NSURL; completionHandler: CKContainerFetchShareMetadataWithURLCallback); message 'fetchShareMetadataWithURL:completionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure acceptShareMetadata_completionHandler (metadata: CKShareMetadata; completionHandler: CKContainerAcceptShareMetadataCallback); message 'acceptShareMetadata:completionHandler:'; { available in macos , ios , tvos , watchos  }
  end;

type
  CKLongLivedOperations = objccategory external (CKContainer)
    procedure fetchAllLongLivedOperationIDsWithCompletionHandler (completionHandler: CKContainerFetchAllLongLivedOperationIDsWithCompletionHandlerCallback); message 'fetchAllLongLivedOperationIDsWithCompletionHandler:'; { available in macos , ios , tvos , watchos  }
    procedure fetchLongLivedOperationWithID_completionHandler (operationID: CKOperationID; completionHandler: CKContainerFetchLongLivedOperationWithIDCallback); message 'fetchLongLivedOperationWithID:completionHandler:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}
