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
  NSHTTPCookieName: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieValue: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieOriginURL: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieVersion: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieDomain: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookiePath: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieSecure: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieExpires: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieComment: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieCommentURL: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieDiscard: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieMaximumAge: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookiePort: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieSameSitePolicy: NSHTTPCookiePropertyKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieSameSiteLax: NSHTTPCookieStringPolicy { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTTPCookieSameSiteStrict: NSHTTPCookieStringPolicy { available in macos , ios , watchos , tvos  }; cvar; external;
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
    function sameSitePolicy: NSHTTPCookieStringPolicy; message 'sameSitePolicy'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

