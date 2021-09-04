{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLConnection.h }

{$ifdef CALLBACKS}
type
  NSURLConnectionSendAsynchronousRequestCallback = reference to procedure (response: NSURLResponse; data: NSData; connectionError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSURLConnectionPtr = ^NSURLConnection;
  NSURLConnectionDelegateProtocolPtr = ^NSURLConnectionDelegateProtocol;
  NSURLConnectionDataDelegateProtocolPtr = ^NSURLConnectionDataDelegateProtocol;
  NSURLConnectionDownloadDelegateProtocolPtr = ^NSURLConnectionDownloadDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSURLConnection = objcclass external (NSObject)
  private
    _internal: NSURLConnectionInternal;
  public
    function initWithRequest_delegate_startImmediately (request: NSURLRequest; delegate: id; startImmediately: objcbool): id; message 'initWithRequest:delegate:startImmediately:'; { unavailable in watchos }
    function initWithRequest_delegate (request: NSURLRequest; delegate: id): id; message 'initWithRequest:delegate:'; { unavailable in watchos }
    class function connectionWithRequest_delegate (request: NSURLRequest; delegate: id): NSURLConnection; message 'connectionWithRequest:delegate:'; { unavailable in watchos }
    function originalRequest: NSURLRequest; message 'originalRequest'; { available in macos , ios , watchos , tvos  }
    function currentRequest: NSURLRequest; message 'currentRequest'; { available in macos , ios , watchos , tvos  }
    procedure start; message 'start'; { available in macos , ios , watchos , tvos  }
    procedure cancel; message 'cancel';
    procedure scheduleInRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:'; { available in macos , ios , watchos , tvos  }
    procedure unscheduleFromRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'unscheduleFromRunLoop:forMode:'; { available in macos , ios , watchos , tvos  }
    procedure setDelegateQueue (queue: NSOperationQueue); message 'setDelegateQueue:'; { available in macos , ios , watchos , tvos  }
    class function canHandleRequest (request: NSURLRequest): objcbool; message 'canHandleRequest:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLConnectionDelegateProtocol = objcprotocol external name 'NSURLConnectionDelegate' (NSObjectProtocol)
  optional
    procedure connection_didFailWithError (connection: NSURLConnection; error: NSError); message 'connection:didFailWithError:';
    function connectionShouldUseCredentialStorage (connection: NSURLConnection): objcbool; message 'connectionShouldUseCredentialStorage:';
    procedure connection_willSendRequestForAuthenticationChallenge (connection: NSURLConnection; challenge: NSURLAuthenticationChallenge); message 'connection:willSendRequestForAuthenticationChallenge:';
    function connection_canAuthenticateAgainstProtectionSpace (connection: NSURLConnection; protectionSpace: NSURLProtectionSpace): objcbool; message 'connection:canAuthenticateAgainstProtectionSpace:'; deprecated 'Use -connection:willSendRequestForAuthenticationChallenge: instead.';
    procedure connection_didReceiveAuthenticationChallenge (connection: NSURLConnection; challenge: NSURLAuthenticationChallenge); message 'connection:didReceiveAuthenticationChallenge:'; deprecated 'Use -connection:willSendRequestForAuthenticationChallenge: instead.';
    procedure connection_didCancelAuthenticationChallenge (connection: NSURLConnection; challenge: NSURLAuthenticationChallenge); message 'connection:didCancelAuthenticationChallenge:'; deprecated 'Use -connection:willSendRequestForAuthenticationChallenge: instead.';
  end;

type
  NSURLConnectionDataDelegateProtocol = objcprotocol external name 'NSURLConnectionDataDelegate' (NSURLConnectionDelegateProtocol)
  optional
    function connection_willSendRequest_redirectResponse (connection: NSURLConnection; request: NSURLRequest; response: NSURLResponse): NSURLRequest; message 'connection:willSendRequest:redirectResponse:';
    procedure connection_didReceiveResponse (connection: NSURLConnection; response: NSURLResponse); message 'connection:didReceiveResponse:';
    procedure connection_didReceiveData (connection: NSURLConnection; data: NSData); message 'connection:didReceiveData:';
    function connection_needNewBodyStream (connection: NSURLConnection; request: NSURLRequest): NSInputStream; message 'connection:needNewBodyStream:';
    procedure connection_didSendBodyData_totalBytesWritten_totalBytesExpectedToWrite (connection: NSURLConnection; bytesWritten: NSInteger; totalBytesWritten: NSInteger; totalBytesExpectedToWrite: NSInteger); message 'connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:';
    function connection_willCacheResponse (connection: NSURLConnection; cachedResponse: NSCachedURLResponse): NSCachedURLResponse; message 'connection:willCacheResponse:';
    procedure connectionDidFinishLoading (connection: NSURLConnection); message 'connectionDidFinishLoading:';
  end;

type
  NSURLConnectionDownloadDelegateProtocol = objcprotocol external name 'NSURLConnectionDownloadDelegate' (NSURLConnectionDelegateProtocol)
  optional
    procedure connection_didWriteData_totalBytesWritten_expectedTotalBytes (connection: NSURLConnection; bytesWritten: clonglong; totalBytesWritten: clonglong; expectedTotalBytes: clonglong); message 'connection:didWriteData:totalBytesWritten:expectedTotalBytes:';
    procedure connectionDidResumeDownloading_totalBytesWritten_expectedTotalBytes (connection: NSURLConnection; totalBytesWritten: clonglong; expectedTotalBytes: clonglong); message 'connectionDidResumeDownloading:totalBytesWritten:expectedTotalBytes:';
  required
    procedure connectionDidFinishDownloading_destinationURL (connection: NSURLConnection; destinationURL: NSURL); message 'connectionDidFinishDownloading:destinationURL:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSURLConnectionSynchronousLoading = objccategory external (NSURLConnection)
    class function sendSynchronousRequest_returningResponse_error (request: NSURLRequest; response: NSURLResponsePtr; error: NSErrorPtr): NSData; message 'sendSynchronousRequest:returningResponse:error:'; { unavailable in watchos }
  end;

type
  NSURLConnectionQueuedLoading = objccategory external (NSURLConnection)
    class procedure sendAsynchronousRequest_queue_completionHandler (request: NSURLRequest; queue: NSOperationQueue; handler: NSURLConnectionSendAsynchronousRequestCallback); message 'sendAsynchronousRequest:queue:completionHandler:'; { unavailable in watchos }
  end;
{$endif}

