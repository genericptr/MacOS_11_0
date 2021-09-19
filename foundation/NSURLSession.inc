{ Parsed from Foundation.framework NSURLSession.h }

{$ifdef CALLBACKS}
type
  NSURLSessionResetWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
  NSURLSessionFlushWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
  NSURLSessionGetTasksWithCompletionHandlerCallback = reference to procedure (dataTasks: NSArray; uploadTasks: NSArray; downloadTasks: NSArray); cblock; cdecl;
  NSURLSessionGetAllTasksWithCompletionHandlerCallback = reference to procedure (tasks: NSArray); cblock; cdecl;
  NSURLSessionDataTaskWithRequestCallback = reference to procedure (data: NSData; response: NSURLResponse; error: NSError); cblock; cdecl;
  NSURLSessionDataTaskWithURLCallback = reference to procedure (data: NSData; response: NSURLResponse; error: NSError); cblock; cdecl;
  NSURLSessionUploadTaskWithRequestCallback = reference to procedure (data: NSData; response: NSURLResponse; error: NSError); cblock; cdecl;
  NSURLSessionDownloadTaskWithRequestCallback = reference to procedure (location: NSURL; response: NSURLResponse; error: NSError); cblock; cdecl;
  NSURLSessionDownloadTaskWithURLCallback = reference to procedure (location: NSURL; response: NSURLResponse; error: NSError); cblock; cdecl;
  NSURLSessionDownloadTaskWithResumeDataCallback = reference to procedure (location: NSURL; response: NSURLResponse; error: NSError); cblock; cdecl;
  NSURLSessionCancelByProducingResumeDataCallback = reference to procedure (resumeData: NSData); cblock; cdecl;
  NSURLSessionReadDataOfMinLengthCallback = reference to procedure (data: NSData; atEOF: objcbool; error: NSError); cblock; cdecl;
  NSURLSessionWriteDataCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSURLSessionSendMessageCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSURLSessionReceiveMessageWithCompletionHandlerCallback = reference to procedure (message_: NSURLSessionWebSocketMessage; error: NSError); cblock; cdecl;
  NSURLSessionSendPingWithPongReceiveHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSURLSessionURLSessionCallback = reference to procedure (disposition: NSURLSessionAuthChallengeDisposition; credential: NSURLCredential); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSURLSessionPtr = ^NSURLSession;
  NSURLSessionTaskPtr = ^NSURLSessionTask;
  NSURLSessionDataTaskPtr = ^NSURLSessionDataTask;
  NSURLSessionUploadTaskPtr = ^NSURLSessionUploadTask;
  NSURLSessionDownloadTaskPtr = ^NSURLSessionDownloadTask;
  NSURLSessionStreamTaskPtr = ^NSURLSessionStreamTask;
  NSURLSessionWebSocketMessagePtr = ^NSURLSessionWebSocketMessage;
  NSURLSessionWebSocketTaskPtr = ^NSURLSessionWebSocketTask;
  NSURLSessionConfigurationPtr = ^NSURLSessionConfiguration;
  NSURLSessionTaskTransactionMetricsPtr = ^NSURLSessionTaskTransactionMetrics;
  NSURLSessionTaskMetricsPtr = ^NSURLSessionTaskMetrics;
  NSURLSessionDelegateProtocolPtr = ^NSURLSessionDelegateProtocol;
  NSURLSessionTaskDelegateProtocolPtr = ^NSURLSessionTaskDelegateProtocol;
  NSURLSessionDataDelegateProtocolPtr = ^NSURLSessionDataDelegateProtocol;
  NSURLSessionDownloadDelegateProtocolPtr = ^NSURLSessionDownloadDelegateProtocol;
  NSURLSessionStreamDelegateProtocolPtr = ^NSURLSessionStreamDelegateProtocol;
  NSURLSessionWebSocketDelegateProtocolPtr = ^NSURLSessionWebSocketDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLSessionTransferSizeUnknown: cint64 { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLSession = objcclass external (NSObject)
  public
    class function sharedSession: NSURLSession; message 'sharedSession';
    class function sessionWithConfiguration (configuration: NSURLSessionConfiguration): NSURLSession; message 'sessionWithConfiguration:';
    class function sessionWithConfiguration_delegate_delegateQueue (configuration: NSURLSessionConfiguration; delegate: id; queue: NSOperationQueue): NSURLSession; message 'sessionWithConfiguration:delegate:delegateQueue:';
    function delegateQueue: NSOperationQueue; message 'delegateQueue';
    function delegate: id; message 'delegate';
    function configuration: NSURLSessionConfiguration; message 'configuration';
    procedure setSessionDescription(newValue: NSString); message 'setSessionDescription:';
    function sessionDescription: NSString; message 'sessionDescription';
    procedure finishTasksAndInvalidate; message 'finishTasksAndInvalidate';
    procedure invalidateAndCancel; message 'invalidateAndCancel';
    procedure resetWithCompletionHandler (completionHandler: NSURLSessionResetWithCompletionHandlerCallback); message 'resetWithCompletionHandler:';
    procedure flushWithCompletionHandler (completionHandler: NSURLSessionFlushWithCompletionHandlerCallback); message 'flushWithCompletionHandler:';
    procedure getTasksWithCompletionHandler (completionHandler: NSURLSessionGetTasksWithCompletionHandlerCallback); message 'getTasksWithCompletionHandler:';
    procedure getAllTasksWithCompletionHandler (completionHandler: NSURLSessionGetAllTasksWithCompletionHandlerCallback); message 'getAllTasksWithCompletionHandler:'; { available in macos , ios , watchos , tvos  }
    function dataTaskWithRequest (request: NSURLRequest): NSURLSessionDataTask; message 'dataTaskWithRequest:';
    function dataTaskWithURL (url: NSURL): NSURLSessionDataTask; message 'dataTaskWithURL:';
    function uploadTaskWithRequest_fromFile (request: NSURLRequest; fileURL: NSURL): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:';
    function uploadTaskWithRequest_fromData (request: NSURLRequest; bodyData: NSData): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:';
    function uploadTaskWithStreamedRequest (request: NSURLRequest): NSURLSessionUploadTask; message 'uploadTaskWithStreamedRequest:';
    function downloadTaskWithRequest (request: NSURLRequest): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:';
    function downloadTaskWithURL (url: NSURL): NSURLSessionDownloadTask; message 'downloadTaskWithURL:';
    function downloadTaskWithResumeData (resumeData: NSData): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:';
    function streamTaskWithHostName_port (hostname: NSString; port: NSInteger): NSURLSessionStreamTask; message 'streamTaskWithHostName:port:'; { available in macos , ios , watchos , tvos  }
    function streamTaskWithNetService (service: NSNetService): NSURLSessionStreamTask; message 'streamTaskWithNetService:'; { unavailable in watchos }
    function webSocketTaskWithURL (url: NSURL): NSURLSessionWebSocketTask; message 'webSocketTaskWithURL:'; { available in macos , ios , watchos , tvos  }
    function webSocketTaskWithURL_protocols (url: NSURL; protocols: NSArray): NSURLSessionWebSocketTask; message 'webSocketTaskWithURL:protocols:'; { available in macos , ios , watchos , tvos  }
    function webSocketTaskWithRequest (request: NSURLRequest): NSURLSessionWebSocketTask; message 'webSocketTaskWithRequest:'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; deprecated 'Please use +[NSURLSession sessionWithConfiguration:] or other class methods to create instances';
    class function new_: id; message 'new'; deprecated 'Please use +[NSURLSession sessionWithConfiguration:] or other class methods to create instances';
  end;


type
  NSURLSessionAsynchronousConvenience = objccategory external (NSURLSession)
    function dataTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: NSURLSessionDataTaskWithRequestCallback): NSURLSessionDataTask; message 'dataTaskWithRequest:completionHandler:';
    function dataTaskWithURL_completionHandler (url: NSURL; completionHandler: NSURLSessionDataTaskWithURLCallback): NSURLSessionDataTask; message 'dataTaskWithURL:completionHandler:';
    function uploadTaskWithRequest_fromFile_completionHandler (request: NSURLRequest; fileURL: NSURL; completionHandler: NSURLSessionUploadTaskWithRequestCallback): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:completionHandler:';
    function uploadTaskWithRequest_fromData_completionHandler (request: NSURLRequest; bodyData: NSData; completionHandler: NSURLSessionUploadTaskWithRequestCallback): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:completionHandler:';
    function downloadTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: NSURLSessionDownloadTaskWithRequestCallback): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:completionHandler:';
    function downloadTaskWithURL_completionHandler (url: NSURL; completionHandler: NSURLSessionDownloadTaskWithURLCallback): NSURLSessionDownloadTask; message 'downloadTaskWithURL:completionHandler:';
    function downloadTaskWithResumeData_completionHandler (resumeData: NSData; completionHandler: NSURLSessionDownloadTaskWithResumeDataCallback): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:completionHandler:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionTaskState = NSInteger;
  NSURLSessionTaskStatePtr = ^NSURLSessionTaskState;

const
  NSURLSessionTaskStateRunning = 0;
  NSURLSessionTaskStateSuspended = 1;
  NSURLSessionTaskStateCanceling = 2;
  NSURLSessionTaskStateCompleted = 3;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionTask = objcclass external (NSObject, NSCopyingProtocol, NSProgressReportingProtocol)
  public
    function taskIdentifier: NSUInteger; message 'taskIdentifier';
    function originalRequest: NSURLRequest; message 'originalRequest';
    function currentRequest: NSURLRequest; message 'currentRequest';
    function response: NSURLResponse; message 'response';
    function progress: NSProgress; message 'progress'; { available in macos , ios , watchos , tvos  }
    procedure setEarliestBeginDate(newValue: NSDate); message 'setEarliestBeginDate:'; { available in macos , ios , watchos , tvos  }
    function earliestBeginDate: NSDate; message 'earliestBeginDate'; { available in macos , ios , watchos , tvos  }
    procedure setCountOfBytesClientExpectsToSend(newValue: cint64); message 'setCountOfBytesClientExpectsToSend:'; { available in macos , ios , watchos , tvos  }
    function countOfBytesClientExpectsToSend: cint64; message 'countOfBytesClientExpectsToSend'; { available in macos , ios , watchos , tvos  }
    procedure setCountOfBytesClientExpectsToReceive(newValue: cint64); message 'setCountOfBytesClientExpectsToReceive:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function countOfBytesClientExpectsToReceive: cint64; message 'countOfBytesClientExpectsToReceive'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function countOfBytesReceived: cint64; message 'countOfBytesReceived';
    function countOfBytesSent: cint64; message 'countOfBytesSent';
    function countOfBytesExpectedToSend: cint64; message 'countOfBytesExpectedToSend';
    function countOfBytesExpectedToReceive: cint64; message 'countOfBytesExpectedToReceive';
    procedure setTaskDescription(newValue: NSString); message 'setTaskDescription:';
    function taskDescription: NSString; message 'taskDescription';
    procedure cancel; message 'cancel';
    function state: NSURLSessionTaskState; message 'state';
    function error: NSError; message 'error';
    procedure suspend; message 'suspend';
    procedure resume; message 'resume';
    procedure setPriority(newValue: single); message 'setPriority:'; { available in macos , ios , watchos , tvos  }
    function priority: single; message 'priority'; { available in macos , ios , watchos , tvos  }
    procedure setPrefersIncrementalDelivery(newValue: objcbool); message 'setPrefersIncrementalDelivery:'; { available in macos , ios , watchos , tvos  }
    function prefersIncrementalDelivery: objcbool; message 'prefersIncrementalDelivery'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; deprecated 'Not supported';
    class function new_: id; message 'new'; deprecated 'Not supported';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function progress_: NSProgress; message 'progress';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLSessionTaskPriorityDefault: single { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLSessionTaskPriorityLow: single { available in macos , ios , watchos , tvos  }; cvar; external;
  NSURLSessionTaskPriorityHigh: single { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionDataTask = objcclass external (NSURLSessionTask)
  public
    function init: id; message 'init'; deprecated 'Please use -[NSURLSession dataTaskWithRequest:] or other NSURLSession methods to create instances';
    class function new_: id; message 'new'; deprecated 'Please use -[NSURLSession dataTaskWithRequest:] or other NSURLSession methods to create instances';
  end;

type
  NSURLSessionUploadTask = objcclass external (NSURLSessionDataTask)
  public
    function init: id; message 'init'; deprecated 'Please use -[NSURLSession uploadTaskWithStreamedRequest:] or other NSURLSession methods to create instances';
    class function new_: id; message 'new'; deprecated 'Please use -[NSURLSession uploadTaskWithStreamedRequest:] or other NSURLSession methods to create instances';
  end;

type
  NSURLSessionDownloadTask = objcclass external (NSURLSessionTask)
  public
    procedure cancelByProducingResumeData (completionHandler: NSURLSessionCancelByProducingResumeDataCallback); message 'cancelByProducingResumeData:';
    function init: id; message 'init'; deprecated 'Please use -[NSURLSession downloadTaskWithRequest:] or other NSURLSession methods to create instances';
    class function new_: id; message 'new'; deprecated 'Please use -[NSURLSession downloadTaskWithRequest:] or other NSURLSession methods to create instances';
  end;

type
  NSURLSessionStreamTask = objcclass external (NSURLSessionTask)
  public
    procedure readDataOfMinLength_maxLength_timeout_completionHandler (minBytes: NSUInteger; maxBytes: NSUInteger; timeout: NSTimeInterval; completionHandler: NSURLSessionReadDataOfMinLengthCallback); message 'readDataOfMinLength:maxLength:timeout:completionHandler:';
    procedure writeData_timeout_completionHandler (data: NSData; timeout: NSTimeInterval; completionHandler: NSURLSessionWriteDataCallback); message 'writeData:timeout:completionHandler:';
    procedure captureStreams; message 'captureStreams';
    procedure closeWrite; message 'closeWrite';
    procedure closeRead; message 'closeRead';
    procedure startSecureConnection; message 'startSecureConnection';
    procedure stopSecureConnection; message 'stopSecureConnection'; deprecated 'TLS cannot be disabled once it is enabled';
    function init: id; message 'init'; deprecated 'Please use -[NSURLSession streamTaskWithHostName:port:] or other NSURLSession methods to create instances';
    class function new_: id; message 'new'; deprecated 'Please use -[NSURLSession streamTaskWithHostName:port:] or other NSURLSession methods to create instances';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionWebSocketMessageType = NSInteger;
  NSURLSessionWebSocketMessageTypePtr = ^NSURLSessionWebSocketMessageType;

const
  NSURLSessionWebSocketMessageTypeData = 0;
  NSURLSessionWebSocketMessageTypeString = 1;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionWebSocketMessage = objcclass external (NSObject)
  public
    function initWithData (data: NSData): id; message 'initWithData:'; { NS_DESIGNATED_INITIALIZER }
    function initWithString (string_: NSString): id; message 'initWithString:'; { NS_DESIGNATED_INITIALIZER }
    function type_: NSURLSessionWebSocketMessageType; message 'type';
    function data: NSData; message 'data';
    function string_: NSString; message 'string';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionWebSocketCloseCode = NSInteger;
  NSURLSessionWebSocketCloseCodePtr = ^NSURLSessionWebSocketCloseCode;

const
  NSURLSessionWebSocketCloseCodeInvalid = 0;
  NSURLSessionWebSocketCloseCodeNormalClosure = 1000;
  NSURLSessionWebSocketCloseCodeGoingAway = 1001;
  NSURLSessionWebSocketCloseCodeProtocolError = 1002;
  NSURLSessionWebSocketCloseCodeUnsupportedData = 1003;
  NSURLSessionWebSocketCloseCodeNoStatusReceived = 1005;
  NSURLSessionWebSocketCloseCodeAbnormalClosure = 1006;
  NSURLSessionWebSocketCloseCodeInvalidFramePayloadData = 1007;
  NSURLSessionWebSocketCloseCodePolicyViolation = 1008;
  NSURLSessionWebSocketCloseCodeMessageTooBig = 1009;
  NSURLSessionWebSocketCloseCodeMandatoryExtensionMissing = 1010;
  NSURLSessionWebSocketCloseCodeInternalServerError = 1011;
  NSURLSessionWebSocketCloseCodeTLSHandshakeFailure = 1015;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionWebSocketTask = objcclass external (NSURLSessionTask)
  public
    procedure sendMessage_completionHandler (message_: NSURLSessionWebSocketMessage; completionHandler: NSURLSessionSendMessageCallback); message 'sendMessage:completionHandler:';
    procedure receiveMessageWithCompletionHandler (completionHandler: NSURLSessionReceiveMessageWithCompletionHandlerCallback); message 'receiveMessageWithCompletionHandler:';
    procedure sendPingWithPongReceiveHandler (pongReceiveHandler: NSURLSessionSendPingWithPongReceiveHandlerCallback); message 'sendPingWithPongReceiveHandler:';
    procedure cancelWithCloseCode_reason (closeCode: NSURLSessionWebSocketCloseCode; reason: NSData); message 'cancelWithCloseCode:reason:';
    procedure setMaximumMessageSize(newValue: NSInteger); message 'setMaximumMessageSize:';
    function maximumMessageSize: NSInteger; message 'maximumMessageSize';
    function closeCode: NSURLSessionWebSocketCloseCode; message 'closeCode';
    function closeReason: NSData; message 'closeReason';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionMultipathServiceType = NSInteger;
  NSURLSessionMultipathServiceTypePtr = ^NSURLSessionMultipathServiceType;

const
  NSURLSessionMultipathServiceTypeNone = 0;
  NSURLSessionMultipathServiceTypeHandover = 1;
  NSURLSessionMultipathServiceTypeInteractive = 2;
  NSURLSessionMultipathServiceTypeAggregate = 3;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function defaultSessionConfiguration: NSURLSessionConfiguration; message 'defaultSessionConfiguration';
    class function ephemeralSessionConfiguration: NSURLSessionConfiguration; message 'ephemeralSessionConfiguration';
    class function backgroundSessionConfigurationWithIdentifier (identifier: NSString): NSURLSessionConfiguration; message 'backgroundSessionConfigurationWithIdentifier:'; { available in macos , ios , watchos , tvos  }
    function identifier: NSString; message 'identifier';
    procedure setRequestCachePolicy(newValue: NSURLRequestCachePolicy); message 'setRequestCachePolicy:';
    function requestCachePolicy: NSURLRequestCachePolicy; message 'requestCachePolicy';
    procedure setTimeoutIntervalForRequest(newValue: NSTimeInterval); message 'setTimeoutIntervalForRequest:';
    function timeoutIntervalForRequest: NSTimeInterval; message 'timeoutIntervalForRequest';
    procedure setTimeoutIntervalForResource(newValue: NSTimeInterval); message 'setTimeoutIntervalForResource:';
    function timeoutIntervalForResource: NSTimeInterval; message 'timeoutIntervalForResource';
    procedure setNetworkServiceType(newValue: NSURLRequestNetworkServiceType); message 'setNetworkServiceType:';
    function networkServiceType: NSURLRequestNetworkServiceType; message 'networkServiceType';
    procedure setAllowsCellularAccess(newValue: objcbool); message 'setAllowsCellularAccess:';
    function allowsCellularAccess: objcbool; message 'allowsCellularAccess';
    procedure setAllowsExpensiveNetworkAccess(newValue: objcbool); message 'setAllowsExpensiveNetworkAccess:'; { available in macos , ios , watchos , tvos  }
    function allowsExpensiveNetworkAccess: objcbool; message 'allowsExpensiveNetworkAccess'; { available in macos , ios , watchos , tvos  }
    procedure setAllowsConstrainedNetworkAccess(newValue: objcbool); message 'setAllowsConstrainedNetworkAccess:'; { available in macos , ios , watchos , tvos  }
    function allowsConstrainedNetworkAccess: objcbool; message 'allowsConstrainedNetworkAccess'; { available in macos , ios , watchos , tvos  }
    procedure setWaitsForConnectivity(newValue: objcbool); message 'setWaitsForConnectivity:'; { available in macos , ios , watchos , tvos  }
    function waitsForConnectivity: objcbool; message 'waitsForConnectivity'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure setDiscretionary(newValue: objcbool); message 'setDiscretionary:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isDiscretionary: objcbool; message 'isDiscretionary'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure setSharedContainerIdentifier(newValue: NSString); message 'setSharedContainerIdentifier:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function sharedContainerIdentifier: NSString; message 'sharedContainerIdentifier'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setSessionSendsLaunchEvents(newValue: objcbool); message 'setSessionSendsLaunchEvents:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function sessionSendsLaunchEvents: objcbool; message 'sessionSendsLaunchEvents'; { available in macos 10.10, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setConnectionProxyDictionary(newValue: NSDictionary); message 'setConnectionProxyDictionary:';
    function connectionProxyDictionary: NSDictionary; message 'connectionProxyDictionary';
    procedure setTLSMinimumSupportedProtocol(newValue: SSLProtocol); message 'setTLSMinimumSupportedProtocol:'; deprecated 'replace with TLSMinimumSupportedProtocolVersion';
    function TLSMinimumSupportedProtocol: SSLProtocol; message 'TLSMinimumSupportedProtocol'; deprecated 'replace with TLSMinimumSupportedProtocolVersion';
    procedure setTLSMaximumSupportedProtocol(newValue: SSLProtocol); message 'setTLSMaximumSupportedProtocol:'; deprecated 'replace with TLSMaximumSupportedProtocolVersion';
    function TLSMaximumSupportedProtocol: SSLProtocol; message 'TLSMaximumSupportedProtocol'; deprecated 'replace with TLSMaximumSupportedProtocolVersion';
    procedure setTLSMinimumSupportedProtocolVersion(newValue: tls_protocol_version_t); message 'setTLSMinimumSupportedProtocolVersion:'; { available in macos , ios , watchos , tvos  }
    function TLSMinimumSupportedProtocolVersion: tls_protocol_version_t; message 'TLSMinimumSupportedProtocolVersion'; { available in macos , ios , watchos , tvos  }
    procedure setTLSMaximumSupportedProtocolVersion(newValue: tls_protocol_version_t); message 'setTLSMaximumSupportedProtocolVersion:'; { available in macos , ios , watchos , tvos  }
    function TLSMaximumSupportedProtocolVersion: tls_protocol_version_t; message 'TLSMaximumSupportedProtocolVersion'; { available in macos , ios , watchos , tvos  }
    procedure setHTTPShouldUsePipelining(newValue: objcbool); message 'setHTTPShouldUsePipelining:';
    function HTTPShouldUsePipelining: objcbool; message 'HTTPShouldUsePipelining';
    procedure setHTTPShouldSetCookies(newValue: objcbool); message 'setHTTPShouldSetCookies:';
    function HTTPShouldSetCookies: objcbool; message 'HTTPShouldSetCookies';
    procedure setHTTPCookieAcceptPolicy(newValue: NSHTTPCookieAcceptPolicy); message 'setHTTPCookieAcceptPolicy:';
    function HTTPCookieAcceptPolicy: NSHTTPCookieAcceptPolicy; message 'HTTPCookieAcceptPolicy';
    procedure setHTTPAdditionalHeaders(newValue: NSDictionary); message 'setHTTPAdditionalHeaders:';
    function HTTPAdditionalHeaders: NSDictionary; message 'HTTPAdditionalHeaders';
    procedure setHTTPMaximumConnectionsPerHost(newValue: NSInteger); message 'setHTTPMaximumConnectionsPerHost:';
    function HTTPMaximumConnectionsPerHost: NSInteger; message 'HTTPMaximumConnectionsPerHost';
    procedure setHTTPCookieStorage(newValue: NSHTTPCookieStorage); message 'setHTTPCookieStorage:';
    function HTTPCookieStorage: NSHTTPCookieStorage; message 'HTTPCookieStorage';
    procedure setURLCredentialStorage(newValue: NSURLCredentialStorage); message 'setURLCredentialStorage:';
    function URLCredentialStorage: NSURLCredentialStorage; message 'URLCredentialStorage';
    procedure setURLCache(newValue: NSURLCache); message 'setURLCache:';
    function URLCache: NSURLCache; message 'URLCache';
    procedure setShouldUseExtendedBackgroundIdleMode(newValue: objcbool); message 'setShouldUseExtendedBackgroundIdleMode:'; { available in macos , ios , watchos , tvos  }
    function shouldUseExtendedBackgroundIdleMode: objcbool; message 'shouldUseExtendedBackgroundIdleMode'; { available in macos , ios , watchos , tvos  }
    procedure setProtocolClasses(newValue: NSArray); message 'setProtocolClasses:';
    function protocolClasses: NSArray; message 'protocolClasses';
    procedure setMultipathServiceType(newValue: NSURLSessionMultipathServiceType); message 'setMultipathServiceType:'; { unavailable in macos, watchos, tvos }
    function multipathServiceType: NSURLSessionMultipathServiceType; message 'multipathServiceType'; { unavailable in macos, watchos, tvos }
    function init: id; message 'init'; deprecated 'Please use NSURLSessionConfiguration.defaultSessionConfiguration or other class methods to create instances';
    class function new_: id; message 'new'; deprecated 'Please use NSURLSessionConfiguration.defaultSessionConfiguration or other class methods to create instances';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionDelayedRequestDisposition = NSInteger;
  NSURLSessionDelayedRequestDispositionPtr = ^NSURLSessionDelayedRequestDisposition;

const
  NSURLSessionDelayedRequestContinueLoading = 0;
  NSURLSessionDelayedRequestUseNewRequest = 1;
  NSURLSessionDelayedRequestCancel = 2;

type
  NSURLSessionAuthChallengeDisposition = NSInteger;
  NSURLSessionAuthChallengeDispositionPtr = ^NSURLSessionAuthChallengeDisposition;

const
  NSURLSessionAuthChallengeUseCredential = 0;
  NSURLSessionAuthChallengePerformDefaultHandling = 1;
  NSURLSessionAuthChallengeCancelAuthenticationChallenge = 2;
  NSURLSessionAuthChallengeRejectProtectionSpace = 3;

type
  NSURLSessionResponseDisposition = NSInteger;
  NSURLSessionResponseDispositionPtr = ^NSURLSessionResponseDisposition;

const
  NSURLSessionResponseCancel = 0;
  NSURLSessionResponseAllow = 1;
  NSURLSessionResponseBecomeDownload = 2;
  NSURLSessionResponseBecomeStream = 3 { available in macos , ios , watchos , tvos  };
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLSessionDelegateProtocol = objcprotocol external name 'NSURLSessionDelegate' (NSObjectProtocol)
  optional
    procedure URLSession_didBecomeInvalidWithError (session: NSURLSession; error: NSError); message 'URLSession:didBecomeInvalidWithError:';
    procedure URLSession_didReceiveChallenge_completionHandler (session: NSURLSession; challenge: NSURLAuthenticationChallenge; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:didReceiveChallenge:completionHandler:';
    procedure URLSessionDidFinishEventsForBackgroundURLSession (session: NSURLSession); message 'URLSessionDidFinishEventsForBackgroundURLSession:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSURLSessionTaskDelegateProtocol = objcprotocol external name 'NSURLSessionTaskDelegate' (NSURLSessionDelegateProtocol)
  optional
    procedure URLSession_task_willBeginDelayedRequest_completionHandler (session: NSURLSession; task: NSURLSessionTask; request: NSURLRequest; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:task:willBeginDelayedRequest:completionHandler:'; { available in macos , ios , watchos , tvos  }
    procedure URLSession_taskIsWaitingForConnectivity (session: NSURLSession; task: NSURLSessionTask); message 'URLSession:taskIsWaitingForConnectivity:'; { available in macos , ios , watchos , tvos  }
    procedure URLSession_task_willPerformHTTPRedirection_newRequest_completionHandler (session: NSURLSession; task: NSURLSessionTask; response: NSHTTPURLResponse; request: NSURLRequest; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:';
    procedure URLSession_task_didReceiveChallenge_completionHandler (session: NSURLSession; task: NSURLSessionTask; challenge: NSURLAuthenticationChallenge; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:task:didReceiveChallenge:completionHandler:';
    procedure URLSession_task_needNewBodyStream (session: NSURLSession; task: NSURLSessionTask; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:task:needNewBodyStream:';
    procedure URLSession_task_didSendBodyData_totalBytesSent_totalBytesExpectedToSend (session: NSURLSession; task: NSURLSessionTask; bytesSent: cint64; totalBytesSent: cint64; totalBytesExpectedToSend: cint64); message 'URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:';
    procedure URLSession_task_didFinishCollectingMetrics (session: NSURLSession; task: NSURLSessionTask; metrics: NSURLSessionTaskMetrics); message 'URLSession:task:didFinishCollectingMetrics:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure URLSession_task_didCompleteWithError (session: NSURLSession; task: NSURLSessionTask; error: NSError); message 'URLSession:task:didCompleteWithError:';
  end;

type
  NSURLSessionDataDelegateProtocol = objcprotocol external name 'NSURLSessionDataDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_dataTask_didReceiveResponse_completionHandler (session: NSURLSession; dataTask: NSURLSessionDataTask; response: NSURLResponse; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:dataTask:didReceiveResponse:completionHandler:';
    procedure URLSession_dataTask_didBecomeDownloadTask (session: NSURLSession; dataTask: NSURLSessionDataTask; downloadTask: NSURLSessionDownloadTask); message 'URLSession:dataTask:didBecomeDownloadTask:';
    procedure URLSession_dataTask_didBecomeStreamTask (session: NSURLSession; dataTask: NSURLSessionDataTask; streamTask: NSURLSessionStreamTask); message 'URLSession:dataTask:didBecomeStreamTask:'; { available in macos , ios , watchos , tvos  }
    procedure URLSession_dataTask_didReceiveData (session: NSURLSession; dataTask: NSURLSessionDataTask; data: NSData); message 'URLSession:dataTask:didReceiveData:';
    procedure URLSession_dataTask_willCacheResponse_completionHandler (session: NSURLSession; dataTask: NSURLSessionDataTask; proposedResponse: NSCachedURLResponse; completionHandler: NSURLSessionURLSessionCallback); message 'URLSession:dataTask:willCacheResponse:completionHandler:';
  end;

type
  NSURLSessionDownloadDelegateProtocol = objcprotocol external name 'NSURLSessionDownloadDelegate' (NSURLSessionTaskDelegateProtocol)
    procedure URLSession_downloadTask_didFinishDownloadingToURL (session: NSURLSession; downloadTask: NSURLSessionDownloadTask; location: NSURL); message 'URLSession:downloadTask:didFinishDownloadingToURL:';
  optional
    procedure URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite (session: NSURLSession; downloadTask: NSURLSessionDownloadTask; bytesWritten: cint64; totalBytesWritten: cint64; totalBytesExpectedToWrite: cint64); message 'URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:';
    procedure URLSession_downloadTask_didResumeAtOffset_expectedTotalBytes (session: NSURLSession; downloadTask: NSURLSessionDownloadTask; fileOffset: cint64; expectedTotalBytes: cint64); message 'URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:';
  end;

type
  NSURLSessionStreamDelegateProtocol = objcprotocol external name 'NSURLSessionStreamDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_readClosedForStreamTask (session: NSURLSession; streamTask: NSURLSessionStreamTask); message 'URLSession:readClosedForStreamTask:';
    procedure URLSession_writeClosedForStreamTask (session: NSURLSession; streamTask: NSURLSessionStreamTask); message 'URLSession:writeClosedForStreamTask:';
    procedure URLSession_betterRouteDiscoveredForStreamTask (session: NSURLSession; streamTask: NSURLSessionStreamTask); message 'URLSession:betterRouteDiscoveredForStreamTask:';
    procedure URLSession_streamTask_didBecomeInputStream_outputStream (session: NSURLSession; streamTask: NSURLSessionStreamTask; inputStream: NSInputStream; outputStream: NSOutputStream); message 'URLSession:streamTask:didBecomeInputStream:outputStream:';
  end;

type
  NSURLSessionWebSocketDelegateProtocol = objcprotocol external name 'NSURLSessionWebSocketDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_webSocketTask_didOpenWithProtocol (session: NSURLSession; webSocketTask: NSURLSessionWebSocketTask; protocol: NSString); message 'URLSession:webSocketTask:didOpenWithProtocol:';
    procedure URLSession_webSocketTask_didCloseWithCode_reason (session: NSURLSession; webSocketTask: NSURLSessionWebSocketTask; closeCode: NSURLSessionWebSocketCloseCode; reason: NSData); message 'URLSession:webSocketTask:didCloseWithCode:reason:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLSessionDownloadTaskResumeData: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionDeprecated = objccategory external (NSURLSessionConfiguration)
    class function backgroundSessionConfiguration (identifier_: NSString): NSURLSessionConfiguration; message 'backgroundSessionConfiguration:'; deprecated 'replace with -backgroundSessionConfigurationWithIdentifier:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionTaskMetricsResourceFetchType = NSInteger;
  NSURLSessionTaskMetricsResourceFetchTypePtr = ^NSURLSessionTaskMetricsResourceFetchType;

const
  NSURLSessionTaskMetricsResourceFetchTypeUnknown = 0;
  NSURLSessionTaskMetricsResourceFetchTypeNetworkLoad = 1;
  NSURLSessionTaskMetricsResourceFetchTypeServerPush = 2;
  NSURLSessionTaskMetricsResourceFetchTypeLocalCache = 3;

type
  NSURLSessionTaskMetricsDomainResolutionProtocol = NSInteger;
  NSURLSessionTaskMetricsDomainResolutionProtocolPtr = ^NSURLSessionTaskMetricsDomainResolutionProtocol;

const
  NSURLSessionTaskMetricsDomainResolutionProtocolUnknown = 0;
  NSURLSessionTaskMetricsDomainResolutionProtocolUDP = 1;
  NSURLSessionTaskMetricsDomainResolutionProtocolTCP = 2;
  NSURLSessionTaskMetricsDomainResolutionProtocolTLS = 3;
  NSURLSessionTaskMetricsDomainResolutionProtocolHTTPS = 4;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionTaskTransactionMetrics = objcclass external (NSObject)
  public
    function request: NSURLRequest; message 'request';
    function response: NSURLResponse; message 'response';
    function fetchStartDate: NSDate; message 'fetchStartDate';
    function domainLookupStartDate: NSDate; message 'domainLookupStartDate';
    function domainLookupEndDate: NSDate; message 'domainLookupEndDate';
    function connectStartDate: NSDate; message 'connectStartDate';
    function secureConnectionStartDate: NSDate; message 'secureConnectionStartDate';
    function secureConnectionEndDate: NSDate; message 'secureConnectionEndDate';
    function connectEndDate: NSDate; message 'connectEndDate';
    function requestStartDate: NSDate; message 'requestStartDate';
    function requestEndDate: NSDate; message 'requestEndDate';
    function responseStartDate: NSDate; message 'responseStartDate';
    function responseEndDate: NSDate; message 'responseEndDate';
    function networkProtocolName: NSString; message 'networkProtocolName';
    function isProxyConnection: objcbool; message 'isProxyConnection';
    function isReusedConnection: objcbool; message 'isReusedConnection';
    function resourceFetchType: NSURLSessionTaskMetricsResourceFetchType; message 'resourceFetchType';
    function countOfRequestHeaderBytesSent: cint64; message 'countOfRequestHeaderBytesSent'; { available in macos , ios , watchos , tvos  }
    function countOfRequestBodyBytesSent: cint64; message 'countOfRequestBodyBytesSent'; { available in macos , ios , watchos , tvos  }
    function countOfRequestBodyBytesBeforeEncoding: cint64; message 'countOfRequestBodyBytesBeforeEncoding'; { available in macos , ios , watchos , tvos  }
    function countOfResponseHeaderBytesReceived: cint64; message 'countOfResponseHeaderBytesReceived'; { available in macos , ios , watchos , tvos  }
    function countOfResponseBodyBytesReceived: cint64; message 'countOfResponseBodyBytesReceived'; { available in macos , ios , watchos , tvos  }
    function countOfResponseBodyBytesAfterDecoding: cint64; message 'countOfResponseBodyBytesAfterDecoding'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function localAddress: NSString; message 'localAddress'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function localPort: NSNumber; message 'localPort'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function remoteAddress: NSString; message 'remoteAddress'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function remotePort: NSNumber; message 'remotePort'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function negotiatedTLSProtocolVersion: NSNumber; message 'negotiatedTLSProtocolVersion'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function negotiatedTLSCipherSuite: NSNumber; message 'negotiatedTLSCipherSuite'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isCellular: objcbool; message 'isCellular'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isExpensive: objcbool; message 'isExpensive'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isConstrained: objcbool; message 'isConstrained'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isMultipath: objcbool; message 'isMultipath'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function domainResolutionProtocol: NSURLSessionTaskMetricsDomainResolutionProtocol; message 'domainResolutionProtocol'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function init: id; message 'init'; deprecated 'Not supported';
    class function new_: id; message 'new'; deprecated 'Not supported';
  end;

type
  NSURLSessionTaskMetrics = objcclass external (NSObject)
  public
    function transactionMetrics: NSArray; message 'transactionMetrics';
    function taskInterval: NSDateInterval; message 'taskInterval';
    function redirectCount: NSUInteger; message 'redirectCount';
    function init: id; message 'init'; deprecated 'Not supported';
    class function new_: id; message 'new'; deprecated 'Not supported';
  end;
{$endif}

