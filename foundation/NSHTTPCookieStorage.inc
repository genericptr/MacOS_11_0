{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSHTTPCookieStorage.h }

{$ifdef CALLBACKS}
type
  NSHTTPCookieStorageGetCookiesForTaskCallback = reference to procedure (cookies: NSArray); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSHTTPCookieStoragePtr = ^NSHTTPCookieStorage;
{$endif}

{$ifdef TYPES}
type
  NSHTTPCookieAcceptPolicy = NSUInteger;
  NSHTTPCookieAcceptPolicyPtr = ^NSHTTPCookieAcceptPolicy;

const
  NSHTTPCookieAcceptPolicyAlways = 0;
  NSHTTPCookieAcceptPolicyNever = 1;
  NSHTTPCookieAcceptPolicyOnlyFromMainDocumentDomain = 2;
{$endif}

{$ifdef CLASSES}

type
  NSHTTPCookieStorage = objcclass external (NSObject)
  private
    _internal: NSHTTPCookieStorageInternal;
  public
    class function sharedHTTPCookieStorage: NSHTTPCookieStorage; message 'sharedHTTPCookieStorage';
    class function sharedCookieStorageForGroupContainerIdentifier (identifier: NSString): NSHTTPCookieStorage; message 'sharedCookieStorageForGroupContainerIdentifier:'; { available in macos , ios , watchos , tvos  }
    function cookies: NSArray; message 'cookies';
    procedure setCookie (cookie: NSHTTPCookie); message 'setCookie:';
    procedure deleteCookie (cookie: NSHTTPCookie); message 'deleteCookie:';
    procedure removeCookiesSinceDate (date: NSDate); message 'removeCookiesSinceDate:'; { available in macos , ios , watchos , tvos  }
    function cookiesForURL (URL: NSURL): NSArray; message 'cookiesForURL:';
    procedure setCookies_forURL_mainDocumentURL (cookies_: NSArray; URL: NSURL; mainDocumentURL: NSURL); message 'setCookies:forURL:mainDocumentURL:';
    procedure setCookieAcceptPolicy(newValue: NSHTTPCookieAcceptPolicy); message 'setCookieAcceptPolicy:';
    function cookieAcceptPolicy: NSHTTPCookieAcceptPolicy; message 'cookieAcceptPolicy';
    function sortedCookiesUsingDescriptors (sortOrder: NSArray): NSArray; message 'sortedCookiesUsingDescriptors:'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSHTTPCookieStorage_NSURLSessionTaskAdditions = objccategory external name 'NSURLSessionTaskAdditions' (NSHTTPCookieStorage)
    procedure storeCookies_forTask (cookies_: NSArray; task: NSURLSessionTask); message 'storeCookies:forTask:'; { available in macos , ios , watchos , tvos  }
    procedure getCookiesForTask_completionHandler (task: NSURLSessionTask; completionHandler: NSHTTPCookieStorageGetCookiesForTaskCallback); message 'getCookiesForTask:completionHandler:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSHTTPCookieManagerAcceptPolicyChangedNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieManagerCookiesChangedNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

