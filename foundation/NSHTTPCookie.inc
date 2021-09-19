{ Parsed from Foundation.framework NSHTTPCookie.h }

{$ifdef TYPES}
type
  NSHTTPCookiePtr = ^NSHTTPCookie;
{$endif}

{$ifdef TYPES}
type
  NSHTTPCookiePropertyKey = NSString;
  NSHTTPCookiePropertyKeyPtr = ^NSHTTPCookiePropertyKey;
  NSHTTPCookieStringPolicy = NSString;
  NSHTTPCookieStringPolicyPtr = ^NSHTTPCookieStringPolicy;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSHTTPCookieName: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieValue: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieOriginURL: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieVersion: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieDomain: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookiePath: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieSecure: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieExpires: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieComment: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieCommentURL: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieDiscard: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieMaximumAge: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookiePort: NSHTTPCookiePropertyKey { available in macos 10.2, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSHTTPCookieSameSitePolicy: NSHTTPCookiePropertyKey { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }; cvar; external;
  NSHTTPCookieSameSiteLax: NSHTTPCookieStringPolicy { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }; cvar; external;
  NSHTTPCookieSameSiteStrict: NSHTTPCookieStringPolicy { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSHTTPCookie = objcclass external (NSObject)
  private
    _cookiePrivate: NSHTTPCookieInternal;
  public
    function initWithProperties (properties: NSDictionary): id; message 'initWithProperties:';
    class function cookieWithProperties (properties: NSDictionary): NSHTTPCookie; message 'cookieWithProperties:';
    class function requestHeaderFieldsWithCookies (cookies: NSArray): NSDictionary; message 'requestHeaderFieldsWithCookies:';
    class function cookiesWithResponseHeaderFields_forURL (headerFields: NSDictionary; URL: NSURL): NSArray; message 'cookiesWithResponseHeaderFields:forURL:';
    function properties: NSDictionary; message 'properties';
    function version: NSUInteger; message 'version';
    function name: NSString; message 'name';
    function value: NSString; message 'value';
    function expiresDate: NSDate; message 'expiresDate';
    function isSessionOnly: objcbool; message 'isSessionOnly';
    function domain: NSString; message 'domain';
    function path: NSString; message 'path';
    function isSecure: objcbool; message 'isSecure';
    function isHTTPOnly: objcbool; message 'isHTTPOnly';
    function comment: NSString; message 'comment';
    function commentURL: NSURL; message 'commentURL';
    function portList: NSArray; message 'portList';
    function sameSitePolicy: NSHTTPCookieStringPolicy; message 'sameSitePolicy'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
  end;
{$endif}

