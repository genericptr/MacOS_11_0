{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLRequest.h }

{$ifdef TYPES}
type
  NSURLRequestPtr = ^NSURLRequest;
  NSMutableURLRequestPtr = ^NSMutableURLRequest;
{$endif}

{$ifdef TYPES}
type
  NSURLRequestCachePolicy = NSUInteger;
  NSURLRequestCachePolicyPtr = ^NSURLRequestCachePolicy;

const
  NSURLRequestUseProtocolCachePolicy = 0;
  NSURLRequestReloadIgnoringLocalCacheData = 1;
  NSURLRequestReloadIgnoringLocalAndRemoteCacheData = 4;
  NSURLRequestReloadIgnoringCacheData = NSURLRequestReloadIgnoringLocalCacheData;
  NSURLRequestReturnCacheDataElseLoad = 2;
  NSURLRequestReturnCacheDataDontLoad = 3;
  NSURLRequestReloadRevalidatingCacheData = 5;

type
  NSURLRequestNetworkServiceType = NSUInteger;
  NSURLRequestNetworkServiceTypePtr = ^NSURLRequestNetworkServiceType;

const
  NSURLNetworkServiceTypeDefault = 0;
  NSURLNetworkServiceTypeVoIP = 1 deprecated 'Use PushKit for VoIP control purposes';
  NSURLNetworkServiceTypeVideo = 2;
  NSURLNetworkServiceTypeBackground = 3;
  NSURLNetworkServiceTypeVoice = 4;
  NSURLNetworkServiceTypeResponsiveData = 6;
  NSURLNetworkServiceTypeAVStreaming = 8 { available in macosx , ios , watchos , tvos  };
  NSURLNetworkServiceTypeResponsiveAV = 9 { available in macosx , ios , watchos , tvos  };
  NSURLNetworkServiceTypeCallSignaling = 11 { available in macosx , ios , watchos , tvos  };
{$endif}

{$ifdef CLASSES}

type
  NSURLRequest = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _internal: NSURLRequestInternal;
  public
    class function requestWithURL (URL: NSURL): id; message 'requestWithURL:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    class function requestWithURL_cachePolicy_timeoutInterval (URL: NSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): id; message 'requestWithURL:cachePolicy:timeoutInterval:';
    function initWithURL (URL: NSURL): id; message 'initWithURL:';
    function initWithURL_cachePolicy_timeoutInterval (URL: NSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): id; message 'initWithURL:cachePolicy:timeoutInterval:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
    function cachePolicy: NSURLRequestCachePolicy; message 'cachePolicy';
    function timeoutInterval: NSTimeInterval; message 'timeoutInterval';
    function mainDocumentURL: NSURL; message 'mainDocumentURL';
    function networkServiceType: NSURLRequestNetworkServiceType; message 'networkServiceType'; { available in macos , ios , watchos , tvos  }
    function allowsCellularAccess: objcbool; message 'allowsCellularAccess'; { available in macos , ios , watchos , tvos  }
    function allowsExpensiveNetworkAccess: objcbool; message 'allowsExpensiveNetworkAccess'; { available in macos , ios , watchos , tvos  }
    function allowsConstrainedNetworkAccess: objcbool; message 'allowsConstrainedNetworkAccess'; { available in macos , ios , watchos , tvos  }
    function assumesHTTP3Capable: objcbool; message 'assumesHTTP3Capable'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding_: objcbool; message 'supportsSecureCoding';
  end;

type
  NSMutableURLRequest = objcclass external (NSURLRequest)
  public
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setCachePolicy(newValue: NSURLRequestCachePolicy); message 'setCachePolicy:';
    function cachePolicy: NSURLRequestCachePolicy; message 'cachePolicy';
    procedure setTimeoutInterval(newValue: NSTimeInterval); message 'setTimeoutInterval:';
    function timeoutInterval: NSTimeInterval; message 'timeoutInterval';
    procedure setMainDocumentURL(newValue: NSURL); message 'setMainDocumentURL:';
    function mainDocumentURL: NSURL; message 'mainDocumentURL';
    procedure setNetworkServiceType(newValue: NSURLRequestNetworkServiceType); message 'setNetworkServiceType:'; { available in macos , ios , watchos , tvos  }
    function networkServiceType: NSURLRequestNetworkServiceType; message 'networkServiceType'; { available in macos , ios , watchos , tvos  }
    procedure setAllowsCellularAccess(newValue: objcbool); message 'setAllowsCellularAccess:'; { available in macos , ios , watchos , tvos  }
    function allowsCellularAccess: objcbool; message 'allowsCellularAccess'; { available in macos , ios , watchos , tvos  }
    procedure setAllowsExpensiveNetworkAccess(newValue: objcbool); message 'setAllowsExpensiveNetworkAccess:'; { available in macos , ios , watchos , tvos  }
    function allowsExpensiveNetworkAccess: objcbool; message 'allowsExpensiveNetworkAccess'; { available in macos , ios , watchos , tvos  }
    procedure setAllowsConstrainedNetworkAccess(newValue: objcbool); message 'setAllowsConstrainedNetworkAccess:'; { available in macos , ios , watchos , tvos  }
    function allowsConstrainedNetworkAccess: objcbool; message 'allowsConstrainedNetworkAccess'; { available in macos , ios , watchos , tvos  }
    procedure setAssumesHTTP3Capable(newValue: objcbool); message 'setAssumesHTTP3Capable:'; { available in macos , ios , watchos , tvos  }
    function assumesHTTP3Capable: objcbool; message 'assumesHTTP3Capable'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSHTTPURLRequest = objccategory external (NSURLRequest)
    function HTTPMethod: NSString; message 'HTTPMethod';
    function allHTTPHeaderFields: NSDictionary; message 'allHTTPHeaderFields';
    function valueForHTTPHeaderField (field: NSString): NSString; message 'valueForHTTPHeaderField:';
    function HTTPBody: NSData; message 'HTTPBody';
    function HTTPBodyStream: NSInputStream; message 'HTTPBodyStream';
    function HTTPShouldHandleCookies: objcbool; message 'HTTPShouldHandleCookies';
    function HTTPShouldUsePipelining: objcbool; message 'HTTPShouldUsePipelining'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSMutableHTTPURLRequest = objccategory external (NSMutableURLRequest)
    procedure setHTTPMethod(newValue: NSString); message 'setHTTPMethod:';
    function HTTPMethod: NSString; message 'HTTPMethod';
    procedure setAllHTTPHeaderFields(newValue: NSDictionary); message 'setAllHTTPHeaderFields:';
    function allHTTPHeaderFields: NSDictionary; message 'allHTTPHeaderFields';
    procedure setValue_forHTTPHeaderField (value: NSString; field: NSString); message 'setValue:forHTTPHeaderField:';
    procedure addValue_forHTTPHeaderField (value: NSString; field: NSString); message 'addValue:forHTTPHeaderField:';
    procedure setHTTPBody(newValue: NSData); message 'setHTTPBody:';
    function HTTPBody: NSData; message 'HTTPBody';
    procedure setHTTPBodyStream(newValue: NSInputStream); message 'setHTTPBodyStream:';
    function HTTPBodyStream: NSInputStream; message 'HTTPBodyStream';
    procedure setHTTPShouldHandleCookies(newValue: objcbool); message 'setHTTPShouldHandleCookies:';
    function HTTPShouldHandleCookies: objcbool; message 'HTTPShouldHandleCookies';
    procedure setHTTPShouldUsePipelining(newValue: objcbool); message 'setHTTPShouldUsePipelining:'; { available in macos , ios , watchos , tvos  }
    function HTTPShouldUsePipelining: objcbool; message 'HTTPShouldUsePipelining'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

