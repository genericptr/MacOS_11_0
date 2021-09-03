{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLProtectionSpace.h }

{$ifdef TYPES}
type
  NSURLProtectionSpacePtr = ^NSURLProtectionSpace;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLProtectionSpaceHTTP: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLProtectionSpaceHTTPS: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLProtectionSpaceFTP: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLProtectionSpaceHTTPProxy: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLProtectionSpaceHTTPSProxy: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLProtectionSpaceFTPProxy: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLProtectionSpaceSOCKSProxy: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodDefault: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodHTTPBasic: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodHTTPDigest: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodHTMLForm: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodNTLM: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodNegotiate: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodClientCertificate: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLAuthenticationMethodServerTrust: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLProtectionSpace = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internal: NSURLProtectionSpaceInternal;
  public
    function initWithHost_port_protocol_realm_authenticationMethod (host: NSString; port: NSInteger; protocol: NSString; realm: NSString; authenticationMethod: NSString): id; message 'initWithHost:port:protocol:realm:authenticationMethod:';
    function initWithProxyHost_port_type_realm_authenticationMethod (host: NSString; port: NSInteger; type_: NSString; realm: NSString; authenticationMethod: NSString): id; message 'initWithProxyHost:port:type:realm:authenticationMethod:';
    function realm: NSString; message 'realm';
    function receivesCredentialSecurely: objcbool; message 'receivesCredentialSecurely';
    function isProxy: objcbool; message 'isProxy';
    function host: NSString; message 'host';
    function port: NSInteger; message 'port';
    function proxyType: NSString; message 'proxyType';
    function protocol: NSString; message 'protocol';
    function authenticationMethod: NSString; message 'authenticationMethod';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSClientCertificateSpace = objccategory external (NSURLProtectionSpace)
    function distinguishedNames: NSArray; message 'distinguishedNames'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSServerTrustValidationSpace = objccategory external (NSURLProtectionSpace)
    function serverTrust: SecTrustRef; message 'serverTrust'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

