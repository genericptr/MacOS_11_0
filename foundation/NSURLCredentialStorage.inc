{ Parsed from Foundation.framework NSURLCredentialStorage.h }

{$ifdef CALLBACKS}
type
  NSURLCredentialStorageGetCredentialsForProtectionSpaceCallback = reference to procedure (credentials: NSDictionary); cblock; cdecl;
  NSURLCredentialStorageGetDefaultCredentialForProtectionSpaceCallback = reference to procedure (credential: NSURLCredential); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSURLCredentialStoragePtr = ^NSURLCredentialStorage;
{$endif}

{$ifdef CLASSES}

type
  NSURLCredentialStorage = objcclass external (NSObject)
  private
    _internal: NSURLCredentialStorageInternal;
  public
    class function sharedCredentialStorage: NSURLCredentialStorage; message 'sharedCredentialStorage';
    function credentialsForProtectionSpace (space: NSURLProtectionSpace): NSDictionary; message 'credentialsForProtectionSpace:';
    function allCredentials: NSDictionary; message 'allCredentials';
    procedure setCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'setCredential:forProtectionSpace:';
    procedure removeCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'removeCredential:forProtectionSpace:';
    procedure removeCredential_forProtectionSpace_options (credential: NSURLCredential; space: NSURLProtectionSpace; options: NSDictionary); message 'removeCredential:forProtectionSpace:options:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function defaultCredentialForProtectionSpace (space: NSURLProtectionSpace): NSURLCredential; message 'defaultCredentialForProtectionSpace:';
    procedure setDefaultCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'setDefaultCredential:forProtectionSpace:';
  end;


type
  NSURLCredentialStorage_NSURLSessionTaskAdditions = objccategory external name 'NSURLSessionTaskAdditions' (NSURLCredentialStorage)
    procedure getCredentialsForProtectionSpace_task_completionHandler (protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask; completionHandler: NSURLCredentialStorageGetCredentialsForProtectionSpaceCallback); message 'getCredentialsForProtectionSpace:task:completionHandler:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure setCredential_forProtectionSpace_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask); message 'setCredential:forProtectionSpace:task:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure removeCredential_forProtectionSpace_options_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; options: NSDictionary; task: NSURLSessionTask); message 'removeCredential:forProtectionSpace:options:task:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure getDefaultCredentialForProtectionSpace_task_completionHandler (space: NSURLProtectionSpace; task: NSURLSessionTask; completionHandler: NSURLCredentialStorageGetDefaultCredentialForProtectionSpaceCallback); message 'getDefaultCredentialForProtectionSpace:task:completionHandler:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure setDefaultCredential_forProtectionSpace_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask); message 'setDefaultCredential:forProtectionSpace:task:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLCredentialStorageChangedNotification: NSNotificationName { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSURLCredentialStorageRemoveSynchronizableCredentials: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

