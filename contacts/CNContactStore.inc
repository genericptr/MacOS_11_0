{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContactStore.h }

{$ifdef CALLBACKS}
type
  CNContactStoreRequestAccessForEntityTypeCallback = reference to function (granted: objcbool; error: NSError): pointer; cblock; cdecl;
  CNContactStoreEnumerateContactsWithFetchRequestCallback = reference to function (contact: CNContact; stop: objcboolPtr): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CNContactStorePtr = ^CNContactStore;
{$endif}

{$ifdef TYPES}
type
  CNEntityType = NSInteger;
  CNEntityTypePtr = ^CNEntityType;

const
  CNEntityTypeContacts = 0;

type
  CNAuthorizationStatus = NSInteger;
  CNAuthorizationStatusPtr = ^CNAuthorizationStatus;

const
  CNAuthorizationStatusNotDetermined = 0;
  CNAuthorizationStatusRestricted = 1;
  CNAuthorizationStatusDenied = 2;
  CNAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  CNContactStore = objcclass external (NSObject)
  public
    class function authorizationStatusForEntityType (entityType: CNEntityType): CNAuthorizationStatus; message 'authorizationStatusForEntityType:';
    procedure requestAccessForEntityType_completionHandler (entityType: CNEntityType; completionHandler: CNContactStoreRequestAccessForEntityTypeCallback); message 'requestAccessForEntityType:completionHandler:';
    function unifiedContactsMatchingPredicate_keysToFetch_error (predicate: NSPredicate; keys: NSArray; error: NSErrorPtr): NSArray; message 'unifiedContactsMatchingPredicate:keysToFetch:error:';
    function unifiedContactWithIdentifier_keysToFetch_error (identifier: NSString; keys: NSArray; error: NSErrorPtr): CNContact; message 'unifiedContactWithIdentifier:keysToFetch:error:';
    function unifiedMeContactWithKeysToFetch_error (keys: NSArray; error: NSErrorPtr): CNContact; message 'unifiedMeContactWithKeysToFetch:error:'; { available in 10_11, NA }
    function enumeratorForContactFetchRequest_error (request: CNContactFetchRequest; error: NSErrorPtr): CNFetchResult; message 'enumeratorForContactFetchRequest:error:'; { unavailable in "" }
    function enumeratorForChangeHistoryFetchRequest_error (request: CNChangeHistoryFetchRequest; error: NSErrorPtr): CNFetchResult; message 'enumeratorForChangeHistoryFetchRequest:error:'; { unavailable in "" }
    function enumerateContactsWithFetchRequest_error_usingBlock (fetchRequest: CNContactFetchRequest; error: NSErrorPtr; block: CNContactStoreEnumerateContactsWithFetchRequestCallback): objcbool; message 'enumerateContactsWithFetchRequest:error:usingBlock:';
    function groupsMatchingPredicate_error (predicate: NSPredicate; error: NSErrorPtr): NSArray; message 'groupsMatchingPredicate:error:';
    function containersMatchingPredicate_error (predicate: NSPredicate; error: NSErrorPtr): NSArray; message 'containersMatchingPredicate:error:';
    function executeSaveRequest_error (saveRequest: CNSaveRequest; error: NSErrorPtr): objcbool; message 'executeSaveRequest:error:';
    function currentHistoryToken: NSData; message 'currentHistoryToken'; { available in macos , ios , watchos  }
    function defaultContainerIdentifier: NSString; message 'defaultContainerIdentifier';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContactStoreDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

