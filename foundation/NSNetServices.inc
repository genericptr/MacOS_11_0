{ Parsed from Foundation.framework NSNetServices.h }

{$ifdef TYPES}
type
  NSNetServicePtr = ^NSNetService;
  NSNetServiceBrowserPtr = ^NSNetServiceBrowser;
  NSNetServiceDelegateProtocolPtr = ^NSNetServiceDelegateProtocol;
  NSNetServiceBrowserDelegateProtocolPtr = ^NSNetServiceBrowserDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSNetServicesErrorCode: NSString { unavailable in watchos } { available in macos 10.2, ios 2.0, tvos 9.0 }; cvar; external;
  NSNetServicesErrorDomain: NSErrorDomain { unavailable in watchos } { available in macos 10.2, ios 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSNetServicesError = NSInteger;
  NSNetServicesErrorPtr = ^NSNetServicesError;

const
  NSNetServicesUnknownError = -72000;
  NSNetServicesCollisionError = -72001;
  NSNetServicesNotFoundError = -72002;
  NSNetServicesActivityInProgress = -72003;
  NSNetServicesBadArgumentError = -72004;
  NSNetServicesCancelledError = -72005;
  NSNetServicesInvalidError = -72006;
  NSNetServicesTimeoutError = -72007;
  NSNetServicesMissingRequiredConfigurationError = -72008 { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 };

type
  NSNetServiceOptions = NSUInteger;
  NSNetServiceOptionsPtr = ^NSNetServiceOptions;

const
  NSNetServiceNoAutoRename = 1 shl 0;
  NSNetServiceListenForConnections = 1 shl 1 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
{$endif}

{$ifdef CLASSES}

type
  NSNetService = objcclass external (NSObject)
  private
    _netService: id;
    _delegate: id;
    _reserved: id;
  public
    function initWithDomain_type_name_port (domain: NSString; type_: NSString; name: NSString; port: cint): id; message 'initWithDomain:type:name:port:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDomain_type_name (domain: NSString; type_: NSString; name: NSString): id; message 'initWithDomain:type:name:';
    procedure scheduleInRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    procedure setDelegate(newValue: NSNetServiceDelegateProtocol); message 'setDelegate:';
    function delegate: NSNetServiceDelegateProtocol; message 'delegate';
    procedure setIncludesPeerToPeer(newValue: objcbool); message 'setIncludesPeerToPeer:'; { available in macos 10.10, ios 7.0, watchos 2.0, tvos 9.0 }
    function includesPeerToPeer: objcbool; message 'includesPeerToPeer'; { available in macos 10.10, ios 7.0, watchos 2.0, tvos 9.0 }
    function name: NSString; message 'name';
    function type_: NSString; message 'type';
    function domain: NSString; message 'domain';
    function hostName: NSString; message 'hostName';
    function addresses: NSArray; message 'addresses';
    function port: NSInteger; message 'port'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure publish; message 'publish';
    procedure publishWithOptions (options: NSNetServiceOptions); message 'publishWithOptions:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure resolve; message 'resolve'; deprecated 'Not supported';
    procedure stop; message 'stop';
    class function dictionaryFromTXTRecordData (txtData: NSData): NSDictionary; message 'dictionaryFromTXTRecordData:';
    class function dataFromTXTRecordDictionary (txtDictionary: NSDictionary): NSData; message 'dataFromTXTRecordDictionary:';
    procedure resolveWithTimeout (timeout: NSTimeInterval); message 'resolveWithTimeout:';
    function getInputStream_outputStream (inputStream: NSInputStreamPtr; outputStream: NSOutputStreamPtr): objcbool; message 'getInputStream:outputStream:';
    function setTXTRecordData (recordData: NSData): objcbool; message 'setTXTRecordData:';
    function TXTRecordData: NSData; message 'TXTRecordData';
    procedure startMonitoring; message 'startMonitoring';
    procedure stopMonitoring; message 'stopMonitoring';
  end;

type
  NSNetServiceBrowser = objcclass external (NSObject)
  private
    _netServiceBrowser: id;
    _delegate: id;
    _reserved: pointer;
  public
    function init: id; message 'init';
    procedure setDelegate(newValue: NSNetServiceBrowserDelegateProtocol); message 'setDelegate:';
    function delegate: NSNetServiceBrowserDelegateProtocol; message 'delegate';
    procedure setIncludesPeerToPeer(newValue: objcbool); message 'setIncludesPeerToPeer:'; { available in macos 10.10, ios 7.0, watchos 2.0, tvos 9.0 }
    function includesPeerToPeer: objcbool; message 'includesPeerToPeer'; { available in macos 10.10, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure scheduleInRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    procedure searchForBrowsableDomains; message 'searchForBrowsableDomains';
    procedure searchForRegistrationDomains; message 'searchForRegistrationDomains';
    procedure searchForServicesOfType_inDomain (type_: NSString; domainString: NSString); message 'searchForServicesOfType:inDomain:';
    procedure stop; message 'stop';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSNetServiceDelegateProtocol = objcprotocol external name 'NSNetServiceDelegate' (NSObjectProtocol)
  optional
    procedure netServiceWillPublish (sender: NSNetService); message 'netServiceWillPublish:';
    procedure netServiceDidPublish (sender: NSNetService); message 'netServiceDidPublish:';
    procedure netService_didNotPublish (sender: NSNetService; errorDict: NSDictionary); message 'netService:didNotPublish:';
    procedure netServiceWillResolve (sender: NSNetService); message 'netServiceWillResolve:';
    procedure netServiceDidResolveAddress (sender: NSNetService); message 'netServiceDidResolveAddress:';
    procedure netService_didNotResolve (sender: NSNetService; errorDict: NSDictionary); message 'netService:didNotResolve:';
    procedure netServiceDidStop (sender: NSNetService); message 'netServiceDidStop:';
    procedure netService_didUpdateTXTRecordData (sender: NSNetService; data: NSData); message 'netService:didUpdateTXTRecordData:';
    procedure netService_didAcceptConnectionWithInputStream_outputStream (sender: NSNetService; inputStream: NSInputStream; outputStream: NSOutputStream); message 'netService:didAcceptConnectionWithInputStream:outputStream:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSNetServiceBrowserDelegateProtocol = objcprotocol external name 'NSNetServiceBrowserDelegate' (NSObjectProtocol)
  optional
    procedure netServiceBrowserWillSearch (browser: NSNetServiceBrowser); message 'netServiceBrowserWillSearch:';
    procedure netServiceBrowserDidStopSearch (browser: NSNetServiceBrowser); message 'netServiceBrowserDidStopSearch:';
    procedure netServiceBrowser_didNotSearch (browser: NSNetServiceBrowser; errorDict: NSDictionary); message 'netServiceBrowser:didNotSearch:';
    procedure netServiceBrowser_didFindDomain_moreComing (browser: NSNetServiceBrowser; domainString: NSString; moreComing: objcbool); message 'netServiceBrowser:didFindDomain:moreComing:';
    procedure netServiceBrowser_didFindService_moreComing (browser: NSNetServiceBrowser; service: NSNetService; moreComing: objcbool); message 'netServiceBrowser:didFindService:moreComing:';
    procedure netServiceBrowser_didRemoveDomain_moreComing (browser: NSNetServiceBrowser; domainString: NSString; moreComing: objcbool); message 'netServiceBrowser:didRemoveDomain:moreComing:';
    procedure netServiceBrowser_didRemoveService_moreComing (browser: NSNetServiceBrowser; service: NSNetService; moreComing: objcbool); message 'netServiceBrowser:didRemoveService:moreComing:';
  end;
{$endif}

