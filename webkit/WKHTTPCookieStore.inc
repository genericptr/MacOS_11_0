{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKHTTPCookieStore.h }

{$ifdef CALLBACKS}
type
  WKHTTPCookieStoreGetAllCookiesCallback = reference to procedure (param1: NSArray); cblock; cdecl;
  WKHTTPCookieStoreSetCookieCallback = reference to procedure; cblock; cdecl;
  WKHTTPCookieStoreDeleteCookieCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKHTTPCookieStorePtr = ^WKHTTPCookieStore;
  WKHTTPCookieStoreObserverProtocolPtr = ^WKHTTPCookieStoreObserverProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKHTTPCookieStoreObserverProtocol = objcprotocol external name 'WKHTTPCookieStoreObserver' (NSObjectProtocol)
  optional
    procedure cookiesDidChangeInCookieStore (cookieStore: WKHTTPCookieStore); message 'cookiesDidChangeInCookieStore:';
  end;
{$endif}

{$ifdef CLASSES}

type
  WKHTTPCookieStore = objcclass external (NSObject)
  public
    function init: id; message 'init';
    procedure getAllCookies (completionHandler: WKHTTPCookieStoreGetAllCookiesCallback); message 'getAllCookies:';
    procedure setCookie_completionHandler (cookie: NSHTTPCookie; completionHandler: WKHTTPCookieStoreSetCookieCallback); message 'setCookie:completionHandler:';
    procedure deleteCookie_completionHandler (cookie: NSHTTPCookie; completionHandler: WKHTTPCookieStoreDeleteCookieCallback); message 'deleteCookie:completionHandler:';
    procedure addObserver (observer: id); message 'addObserver:';
    procedure removeObserver (observer: id); message 'removeObserver:';
  end;
{$endif}

