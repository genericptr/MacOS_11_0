{ Parsed from Foundation.framework NSURLHandle.h }

{$ifdef TYPES}
type
  NSURLHandlePtr = ^NSURLHandle;
  NSURLHandleClientProtocolPtr = ^NSURLHandleClientProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSHTTPPropertyStatusCodeKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSHTTPPropertyStatusReasonKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSHTTPPropertyServerHTTPVersionKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSHTTPPropertyRedirectionHeadersKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSHTTPPropertyErrorPageDataKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSHTTPPropertyHTTPProxy: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSFTPPropertyUserLoginKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSFTPPropertyUserPasswordKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSFTPPropertyActiveTransferModeKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSFTPPropertyFileOffsetKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSFTPPropertyFTPProxy: NSString { unavailable in ios, watchos, tvos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSURLHandleStatus = NSUInteger;
  NSURLHandleStatusPtr = ^NSURLHandleStatus;

const
  NSURLHandleNotLoaded = 0;
  NSURLHandleLoadSucceeded = 1;
  NSURLHandleLoadInProgress = 2;
  NSURLHandleLoadFailed = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLHandleClientProtocol = objcprotocol external name 'NSURLHandleClient'
    procedure URLHandle_resourceDataDidBecomeAvailable (sender: NSURLHandle; newBytes: NSData); message 'URLHandle:resourceDataDidBecomeAvailable:'; { unavailable in ios, watchos, tvos }
    procedure URLHandleResourceDidBeginLoading (sender: NSURLHandle); message 'URLHandleResourceDidBeginLoading:'; { unavailable in ios, watchos, tvos }
    procedure URLHandleResourceDidFinishLoading (sender: NSURLHandle); message 'URLHandleResourceDidFinishLoading:'; { unavailable in ios, watchos, tvos }
    procedure URLHandleResourceDidCancelLoading (sender: NSURLHandle); message 'URLHandleResourceDidCancelLoading:'; { unavailable in ios, watchos, tvos }
    procedure URLHandle_resourceDidFailLoadingWithReason (sender: NSURLHandle; reason: NSString); message 'URLHandle:resourceDidFailLoadingWithReason:'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSURLHandle = objcclass external (NSObject)
  private
    _clients: NSMutableArray;
    _data: id;
    _status: NSURLHandleStatus;
    _reserved: NSInteger;
  public
    class procedure registerURLHandleClass (anURLHandleSubclass: pobjc_class); message 'registerURLHandleClass:'; { unavailable in ios, watchos, tvos }
    class function URLHandleClassForURL (anURL: NSURL): pobjc_class; message 'URLHandleClassForURL:'; { unavailable in ios, watchos, tvos }
    function status: NSURLHandleStatus; message 'status'; { unavailable in ios, watchos, tvos }
    function failureReason: NSString; message 'failureReason'; { unavailable in ios, watchos, tvos }
    procedure addClient (client: NSURLHandleClientProtocol); message 'addClient:'; { unavailable in ios, watchos, tvos }
    procedure removeClient (client: NSURLHandleClientProtocol); message 'removeClient:'; { unavailable in ios, watchos, tvos }
    procedure loadInBackground; message 'loadInBackground'; { unavailable in ios, watchos, tvos }
    procedure cancelLoadInBackground; message 'cancelLoadInBackground'; { unavailable in ios, watchos, tvos }
    function resourceData: NSData; message 'resourceData'; { unavailable in ios, watchos, tvos }
    function availableResourceData: NSData; message 'availableResourceData'; { unavailable in ios, watchos, tvos }
    function expectedResourceDataSize: clonglong; message 'expectedResourceDataSize'; { unavailable in ios, watchos, tvos }
    procedure flushCachedData; message 'flushCachedData'; { unavailable in ios, watchos, tvos }
    procedure backgroundLoadDidFailWithReason (reason: NSString); message 'backgroundLoadDidFailWithReason:'; { unavailable in ios, watchos, tvos }
    procedure didLoadBytes_loadComplete (newBytes: NSData; yorn: objcbool); message 'didLoadBytes:loadComplete:'; { unavailable in ios, watchos, tvos }
    class function canInitWithURL (anURL: NSURL): objcbool; message 'canInitWithURL:'; { unavailable in ios, watchos, tvos }
    class function cachedHandleForURL (anURL: NSURL): NSURLHandle; message 'cachedHandleForURL:'; { unavailable in ios, watchos, tvos }
    function propertyForKey (propertyKey: NSString): id; message 'propertyForKey:'; { unavailable in ios, watchos, tvos }
    function propertyForKeyIfAvailable (propertyKey: NSString): id; message 'propertyForKeyIfAvailable:'; { unavailable in ios, watchos, tvos }
    function writeProperty_forKey (propertyValue: id; propertyKey: NSString): objcbool; message 'writeProperty:forKey:'; { unavailable in ios, watchos, tvos }
    function writeData (data: NSData): objcbool; message 'writeData:'; { unavailable in ios, watchos, tvos }
    function loadInForeground: NSData; message 'loadInForeground'; { unavailable in ios, watchos, tvos }
    procedure beginLoadInBackground; message 'beginLoadInBackground'; { unavailable in ios, watchos, tvos }
    procedure endLoadInBackground; message 'endLoadInBackground'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

