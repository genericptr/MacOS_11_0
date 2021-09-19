{ Parsed from AVFoundation.framework AVAssetResourceLoader.h }

{$ifdef TYPES}
type
  AVAssetResourceLoaderPtr = ^AVAssetResourceLoader;
  AVAssetResourceLoadingRequestorPtr = ^AVAssetResourceLoadingRequestor;
  AVAssetResourceLoadingRequestPtr = ^AVAssetResourceLoadingRequest;
  AVAssetResourceRenewalRequestPtr = ^AVAssetResourceRenewalRequest;
  AVAssetResourceLoadingContentInformationRequestPtr = ^AVAssetResourceLoadingContentInformationRequest;
  AVAssetResourceLoadingDataRequestPtr = ^AVAssetResourceLoadingDataRequest;
  AVAssetResourceLoaderDelegateProtocolPtr = ^AVAssetResourceLoaderDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetResourceLoader = objcclass external (NSObject)
  private
    _resourceLoader: AVAssetResourceLoaderInternal;
  public
    procedure setDelegate_queue (delegate: AVAssetResourceLoaderDelegateProtocol; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: AVAssetResourceLoaderDelegateProtocol; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAssetResourceLoaderDelegateProtocol = objcprotocol external name 'AVAssetResourceLoaderDelegate' (NSObjectProtocol)
  optional
    function resourceLoader_shouldWaitForLoadingOfRequestedResource (resourceLoader: AVAssetResourceLoader; loadingRequest: AVAssetResourceLoadingRequest): objcbool; message 'resourceLoader:shouldWaitForLoadingOfRequestedResource:'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    function resourceLoader_shouldWaitForRenewalOfRequestedResource (resourceLoader: AVAssetResourceLoader; renewalRequest: AVAssetResourceRenewalRequest): objcbool; message 'resourceLoader:shouldWaitForRenewalOfRequestedResource:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure resourceLoader_didCancelLoadingRequest (resourceLoader: AVAssetResourceLoader; loadingRequest: AVAssetResourceLoadingRequest); message 'resourceLoader:didCancelLoadingRequest:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function resourceLoader_shouldWaitForResponseToAuthenticationChallenge (resourceLoader: AVAssetResourceLoader; authenticationChallenge: NSURLAuthenticationChallenge): objcbool; message 'resourceLoader:shouldWaitForResponseToAuthenticationChallenge:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure resourceLoader_didCancelAuthenticationChallenge (resourceLoader: AVAssetResourceLoader; authenticationChallenge: NSURLAuthenticationChallenge); message 'resourceLoader:didCancelAuthenticationChallenge:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAssetResourceLoadingRequestor = objcclass external (NSObject)
  private
    _requestor: AVAssetResourceLoadingRequestorInternal;
  public
    function providesExpiredSessionReports: objcbool; message 'providesExpiredSessionReports';
  end;

type
  AVAssetResourceLoadingRequest = objcclass external (NSObject)
  private
    _loadingRequest: AVAssetResourceLoadingRequestInternal;
  public
    function request: NSURLRequest; message 'request';
    function isFinished: objcbool; message 'isFinished';
    function isCancelled: objcbool; message 'isCancelled'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function contentInformationRequest: AVAssetResourceLoadingContentInformationRequest; message 'contentInformationRequest'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function dataRequest: AVAssetResourceLoadingDataRequest; message 'dataRequest'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setResponse(newValue: NSURLResponse); message 'setResponse:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function response: NSURLResponse; message 'response'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setRedirect(newValue: NSURLRequest); message 'setRedirect:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function redirect: NSURLRequest; message 'redirect'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function requestor: AVAssetResourceLoadingRequestor; message 'requestor'; { unavailable in watchos } { available in macos 10.14, ios 12.0, tvos 12.0 }
    procedure finishLoading; message 'finishLoading'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure finishLoadingWithError (error: NSError); message 'finishLoadingWithError:';
  end;

type
  AVAssetResourceRenewalRequest = objcclass external (AVAssetResourceLoadingRequest)
  end;

type
  AVAssetResourceLoadingContentInformationRequest = objcclass external (NSObject)
  private
    _contentInformationRequest: AVAssetResourceLoadingContentInformationRequestInternal;
  public
    procedure setContentType(newValue: NSString); message 'setContentType:';
    function contentType: NSString; message 'contentType';
    function allowedContentTypes: NSArray; message 'allowedContentTypes'; { unavailable in watchos } { available in macos 10.13.2, ios 11.2, tvos 11.2 }
    procedure setContentLength(newValue: clonglong); message 'setContentLength:';
    function contentLength: clonglong; message 'contentLength';
    procedure setByteRangeAccessSupported(newValue: objcbool); message 'setByteRangeAccessSupported:';
    function isByteRangeAccessSupported: objcbool; message 'isByteRangeAccessSupported';
    procedure setRenewalDate(newValue: NSDate); message 'setRenewalDate:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function renewalDate: NSDate; message 'renewalDate'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
  end;

type
  AVAssetResourceLoadingDataRequest = objcclass external (NSObject)
  private
    _dataRequest: AVAssetResourceLoadingDataRequestInternal;
  public
    function requestedOffset: clonglong; message 'requestedOffset';
    function requestedLength: NSInteger; message 'requestedLength';
    function requestsAllDataToEndOfResource: objcbool; message 'requestsAllDataToEndOfResource'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function currentOffset: clonglong; message 'currentOffset';
    procedure respondWithData (data: NSData); message 'respondWithData:';
  end;


type
  AVAssetResourceLoaderContentKeySupport = objccategory external (AVAssetResourceLoader)
    procedure setPreloadsEligibleContentKeys(newValue: objcbool); message 'setPreloadsEligibleContentKeys:'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function preloadsEligibleContentKeys: objcbool; message 'preloadsEligibleContentKeys'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
  end;

type
  AVAssetResourceLoadingRequestContentKeyRequestSupport = objccategory external (AVAssetResourceLoadingRequest)
    function streamingContentKeyRequestDataForApp_contentIdentifier_options_error (appIdentifier: NSData; contentIdentifier: NSData; options: NSDictionary; outError: NSErrorPtr): NSData; message 'streamingContentKeyRequestDataForApp:contentIdentifier:options:error:';
    function persistentContentKeyFromKeyVendorResponse_options_error (keyVendorResponse: NSData; options: NSDictionary; outError: NSErrorPtr): NSData; message 'persistentContentKeyFromKeyVendorResponse:options:error:'; { unavailable in watchos } { available in macos 10.15, ios 9.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetResourceLoadingRequestStreamingContentKeyRequestRequiresPersistentKey: NSString { unavailable in watchos } { available in macos 10.14, ios 9.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAssetResourceLoadingRequestDeprecated = objccategory external (AVAssetResourceLoadingRequest)
    procedure finishLoadingWithResponse_data_redirect (response_: NSURLResponse; data: NSData; redirect_: NSURLRequest); message 'finishLoadingWithResponse:data:redirect:'; { unavailable in watchos }
  end;
{$endif}

{$else}
{$endif}
