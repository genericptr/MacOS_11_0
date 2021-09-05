{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetResourceLoader.h }

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
    function resourceLoader_shouldWaitForLoadingOfRequestedResource (resourceLoader: AVAssetResourceLoader; loadingRequest: AVAssetResourceLoadingRequest): objcbool; message 'resourceLoader:shouldWaitForLoadingOfRequestedResource:'; { unavailable in watchos }
    function resourceLoader_shouldWaitForRenewalOfRequestedResource (resourceLoader: AVAssetResourceLoader; renewalRequest: AVAssetResourceRenewalRequest): objcbool; message 'resourceLoader:shouldWaitForRenewalOfRequestedResource:'; { unavailable in watchos }
    procedure resourceLoader_didCancelLoadingRequest (resourceLoader: AVAssetResourceLoader; loadingRequest: AVAssetResourceLoadingRequest); message 'resourceLoader:didCancelLoadingRequest:'; { unavailable in watchos }
    function resourceLoader_shouldWaitForResponseToAuthenticationChallenge (resourceLoader: AVAssetResourceLoader; authenticationChallenge: NSURLAuthenticationChallenge): objcbool; message 'resourceLoader:shouldWaitForResponseToAuthenticationChallenge:'; { unavailable in watchos }
    procedure resourceLoader_didCancelAuthenticationChallenge (resourceLoader: AVAssetResourceLoader; authenticationChallenge: NSURLAuthenticationChallenge); message 'resourceLoader:didCancelAuthenticationChallenge:'; { unavailable in watchos }
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
    function isCancelled: objcbool; message 'isCancelled'; { unavailable in watchos }
    function contentInformationRequest: AVAssetResourceLoadingContentInformationRequest; message 'contentInformationRequest'; { unavailable in watchos }
    function dataRequest: AVAssetResourceLoadingDataRequest; message 'dataRequest'; { unavailable in watchos }
    procedure setResponse(newValue: NSURLResponse); message 'setResponse:'; { unavailable in watchos }
    function response: NSURLResponse; message 'response'; { unavailable in watchos }
    procedure setRedirect(newValue: NSURLRequest); message 'setRedirect:'; { unavailable in watchos }
    function redirect: NSURLRequest; message 'redirect'; { unavailable in watchos }
    function requestor: AVAssetResourceLoadingRequestor; message 'requestor'; { unavailable in watchos }
    procedure finishLoading; message 'finishLoading'; { unavailable in watchos }
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
    function allowedContentTypes: NSArray; message 'allowedContentTypes'; { unavailable in watchos }
    procedure setContentLength(newValue: clonglong); message 'setContentLength:';
    function contentLength: clonglong; message 'contentLength';
    procedure setByteRangeAccessSupported(newValue: objcbool); message 'setByteRangeAccessSupported:';
    function isByteRangeAccessSupported: objcbool; message 'isByteRangeAccessSupported';
    procedure setRenewalDate(newValue: NSDate); message 'setRenewalDate:'; { unavailable in watchos }
    function renewalDate: NSDate; message 'renewalDate'; { unavailable in watchos }
  end;

type
  AVAssetResourceLoadingDataRequest = objcclass external (NSObject)
  private
    _dataRequest: AVAssetResourceLoadingDataRequestInternal;
  public
    function requestedOffset: clonglong; message 'requestedOffset';
    function requestedLength: NSInteger; message 'requestedLength';
    function requestsAllDataToEndOfResource: objcbool; message 'requestsAllDataToEndOfResource'; { unavailable in watchos }
    function currentOffset: clonglong; message 'currentOffset';
    procedure respondWithData (data: NSData); message 'respondWithData:';
  end;


type
  AVAssetResourceLoaderContentKeySupport = objccategory external (AVAssetResourceLoader)
    procedure setPreloadsEligibleContentKeys(newValue: objcbool); message 'setPreloadsEligibleContentKeys:'; { unavailable in watchos }
    function preloadsEligibleContentKeys: objcbool; message 'preloadsEligibleContentKeys'; { unavailable in watchos }
  end;

type
  AVAssetResourceLoadingRequestContentKeyRequestSupport = objccategory external (AVAssetResourceLoadingRequest)
    function streamingContentKeyRequestDataForApp_contentIdentifier_options_error (appIdentifier: NSData; contentIdentifier: NSData; options: NSDictionary; outError: NSErrorPtr): NSData; message 'streamingContentKeyRequestDataForApp:contentIdentifier:options:error:';
    function persistentContentKeyFromKeyVendorResponse_options_error (keyVendorResponse: NSData; options: NSDictionary; outError: NSErrorPtr): NSData; message 'persistentContentKeyFromKeyVendorResponse:options:error:'; { unavailable in watchos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetResourceLoadingRequestStreamingContentKeyRequestRequiresPersistentKey: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAssetResourceLoadingRequestDeprecated = objccategory external (AVAssetResourceLoadingRequest)
    procedure finishLoadingWithResponse_data_redirect (response_: NSURLResponse; data: NSData; redirect_: NSURLRequest); message 'finishLoadingWithResponse:data:redirect:'; { unavailable in watchos }
  end;
{$endif}

{$else}
{$endif}
