{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLCredentialStorage.h }

{$ifdef CALLBACKS}
type
  NSURLCredentialStorageGetCredentialsForProtectionSpaceCallback = reference to function (credentials: NSDictionary): pointer; cblock; cdecl;
  NSURLCredentialStorageGetDefaultCredentialForProtectionSpaceCallback = reference to function (credential: NSURLCredential): pointer; cblock; cdecl;
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
    procedure removeCredential_forProtectionSpace_options (credential: NSURLCredential; space: NSURLProtectionSpace; options: NSDictionary); message 'removeCredential:forProtectionSpace:options:'; { available in macos , ios , watchos , tvos  }
    function defaultCredentialForProtectionSpace (space: NSURLProtectionSpace): NSURLCredential; message 'defaultCredentialForProtectionSpace:';
    procedure setDefaultCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'setDefaultCredential:forProtectionSpace:';
  end;


type
  NSURLCredentialStorage_NSURLSessionTaskAdditions = objccategory external name 'NSURLSessionTaskAdditions' (NSURLCredentialStorage)
    procedure getCredentialsForProtectionSpace_task_completionHandler (protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask; completionHandler: NSURLCredentialStorageGetCredentialsForProtectionSpaceCallback); message 'getCredentialsForProtectionSpace:task:completionHandler:'; { available in macos , ios , watchos , tvos  }
    procedure setCredential_forProtectionSpace_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask); message 'setCredential:forProtectionSpace:task:'; { available in macos , ios , watchos , tvos  }
    procedure removeCredential_forProtectionSpace_options_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; options: NSDictionary; task: NSURLSessionTask); message 'removeCredential:forProtectionSpace:options:task:'; { available in macos , ios , watchos , tvos  }
    procedure getDefaultCredentialForProtectionSpace_task_completionHandler (space: NSURLProtectionSpace; task: NSURLSessionTask; completionHandler: NSURLCredentialStorageGetDefaultCredentialForProtectionSpaceCallback); message 'getDefaultCredentialForProtectionSpace:task:completionHandler:'; { available in macos , ios , watchos , tvos  }
    procedure setDefaultCredential_forProtectionSpace_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask); message 'setDefaultCredential:forProtectionSpace:task:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLCredentialStorageChangedNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLCredentialStorageRemoveSynchronizableCredentials: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

