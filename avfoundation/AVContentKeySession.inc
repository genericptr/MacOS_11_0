{ Parsed from AVFoundation.framework AVContentKeySession.h }

{ Types from AVContentKeySession }
{$ifdef TYPES}

type
  AVContentKeySessionServerPlaybackContextOption = NSString;
type
  AVContentKeySessionServerPlaybackContextOptionPtr = ^AVContentKeySessionServerPlaybackContextOption;
{$endif}


{$ifdef CALLBACKS}
type
  AVContentKeySessionMakeSecureTokenForExpirationDateOfPersistableContentKeyCallback = reference to procedure (secureTokenData: NSData; error: NSError); cblock; cdecl;
  AVContentKeySessionInvalidatePersistableContentKeyCallback = reference to procedure (secureTokenData: NSData; error: NSError); cblock; cdecl;
  AVContentKeySessionInvalidateAllPersistableContentKeysForAppCallback = reference to procedure (secureTokenData: NSData; error: NSError); cblock; cdecl;
  AVContentKeySessionMakeStreamingContentKeyRequestDataForAppCallback = reference to procedure (contentKeyRequestData: NSData; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVContentKeySessionPtr = ^AVContentKeySession;
  AVContentKeyRequestPtr = ^AVContentKeyRequest;
  AVPersistableContentKeyRequestPtr = ^AVPersistableContentKeyRequest;
  AVContentKeyResponsePtr = ^AVContentKeyResponse;
  AVContentKeySpecifierPtr = ^AVContentKeySpecifier;
  AVContentKeyPtr = ^AVContentKey;
  AVContentKeySessionDelegateProtocolPtr = ^AVContentKeySessionDelegateProtocol;
  AVContentKeyRecipientProtocolPtr = ^AVContentKeyRecipientProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVContentKeySystem = NSString { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 };
  AVContentKeySystemPtr = ^AVContentKeySystem { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVContentKeySystemFairPlayStreaming: AVContentKeySystem { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 }; cvar; external;
  AVContentKeySystemClearKey: AVContentKeySystem { available in macos 10.13, ios 11.0, tvos 11.0, watchos 7.0 }; cvar; external;
  AVContentKeySystemAuthorizationToken: AVContentKeySystem { available in macos 10.15, ios 13.0, tvos 13.0, watchos 7.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVContentKeySession = objcclass external (NSObject)
  private
    _session: AVContentKeySessionInternal;
  public
    class function contentKeySessionWithKeySystem (keySystem: AVContentKeySystem): id; message 'contentKeySessionWithKeySystem:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 7.0 }
    class function contentKeySessionWithKeySystem_storageDirectoryAtURL (keySystem: AVContentKeySystem; storageURL: NSURL): id; message 'contentKeySessionWithKeySystem:storageDirectoryAtURL:';
    procedure setDelegate_queue (delegate: AVContentKeySessionDelegateProtocol; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: AVContentKeySessionDelegateProtocol; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
    function storageURL: NSURL; message 'storageURL';
    function keySystem: AVContentKeySystem; message 'keySystem';
    procedure expire; message 'expire';
    function contentProtectionSessionIdentifier: NSData; message 'contentProtectionSessionIdentifier';
    procedure processContentKeyRequestWithIdentifier_initializationData_options (identifier: id; initializationData: NSData; options: NSDictionary); message 'processContentKeyRequestWithIdentifier:initializationData:options:';
    procedure renewExpiringResponseDataForContentKeyRequest (contentKeyRequest: AVContentKeyRequest); message 'renewExpiringResponseDataForContentKeyRequest:';
    procedure makeSecureTokenForExpirationDateOfPersistableContentKey_completionHandler (persistableContentKeyData: NSData; handler: AVContentKeySessionMakeSecureTokenForExpirationDateOfPersistableContentKeyCallback); message 'makeSecureTokenForExpirationDateOfPersistableContentKey:completionHandler:'; { unavailable in tvos } { available in macos 10.15, ios 11.0, watchos 7.0 }
    procedure invalidatePersistableContentKey_options_completionHandler (persistableContentKeyData: NSData; options: NSDictionary; handler: AVContentKeySessionInvalidatePersistableContentKeyCallback); message 'invalidatePersistableContentKey:options:completionHandler:'; { unavailable in tvos } { available in macos 10.15, ios 12.2, watchos 7.0 }
    procedure invalidateAllPersistableContentKeysForApp_options_completionHandler (appIdentifier: NSData; options: NSDictionary; handler: AVContentKeySessionInvalidateAllPersistableContentKeysForAppCallback); message 'invalidateAllPersistableContentKeysForApp:options:completionHandler:'; { unavailable in tvos } { available in macos 10.15, ios 12.2, watchos 7.0 }
  end;


type
  AVContentKeyRecipients = objccategory external (AVContentKeySession)
    procedure addContentKeyRecipient (recipient: AVContentKeyRecipientProtocol); message 'addContentKeyRecipient:';
    procedure removeContentKeyRecipient (recipient: AVContentKeyRecipientProtocol); message 'removeContentKeyRecipient:';
    function contentKeyRecipients: NSArray; message 'contentKeyRecipients';
  end;

type
  AVContentKeySessionPendingExpiredSessionReports = objccategory external (AVContentKeySession)
    class function pendingExpiredSessionReportsWithAppIdentifier_storageDirectoryAtURL (appIdentifier: NSData; storageURL_: NSURL): NSArray; message 'pendingExpiredSessionReportsWithAppIdentifier:storageDirectoryAtURL:';
    class procedure removePendingExpiredSessionReports_withAppIdentifier_storageDirectoryAtURL (expiredSessionReports: NSArray; appIdentifier: NSData; storageURL_: NSURL); message 'removePendingExpiredSessionReports:withAppIdentifier:storageDirectoryAtURL:';
  end;
{$endif}

{$ifdef TYPES}
type
  AVContentKeyRequestRetryReason = NSString { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 };
  AVContentKeyRequestRetryReasonPtr = ^AVContentKeyRequestRetryReason { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVContentKeyRequestRetryReasonTimedOut: AVContentKeyRequestRetryReason { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 }; cvar; external;
  AVContentKeyRequestRetryReasonReceivedResponseWithExpiredLease: AVContentKeyRequestRetryReason { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 }; cvar; external;
  AVContentKeyRequestRetryReasonReceivedObsoleteContentKey: AVContentKeyRequestRetryReason { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  AVContentKeySessionDelegateProtocol = objcprotocol external name 'AVContentKeySessionDelegate' (NSObjectProtocol)
  required
    procedure contentKeySession_didProvideContentKeyRequest (session: AVContentKeySession; keyRequest: AVContentKeyRequest); message 'contentKeySession:didProvideContentKeyRequest:';
  optional
    procedure contentKeySession_didProvideRenewingContentKeyRequest (session: AVContentKeySession; keyRequest: AVContentKeyRequest); message 'contentKeySession:didProvideRenewingContentKeyRequest:';
  optional
    procedure contentKeySession_didProvidePersistableContentKeyRequest (session: AVContentKeySession; keyRequest: AVPersistableContentKeyRequest); message 'contentKeySession:didProvidePersistableContentKeyRequest:';
  optional
    procedure contentKeySession_didUpdatePersistableContentKey_forContentKeyIdentifier (session: AVContentKeySession; persistableContentKey: NSData; keyIdentifier: id); message 'contentKeySession:didUpdatePersistableContentKey:forContentKeyIdentifier:'; { unavailable in tvos } { available in macos 10.15, ios 11.0, watchos 7.0 }
  optional
    procedure contentKeySession_contentKeyRequest_didFailWithError (session: AVContentKeySession; keyRequest: AVContentKeyRequest; err: NSError); message 'contentKeySession:contentKeyRequest:didFailWithError:';
  optional
    function contentKeySession_shouldRetryContentKeyRequest_reason (session: AVContentKeySession; keyRequest: AVContentKeyRequest; retryReason: AVContentKeyRequestRetryReason): objcbool; message 'contentKeySession:shouldRetryContentKeyRequest:reason:';
  optional
    procedure contentKeySession_contentKeyRequestDidSucceed (session: AVContentKeySession; keyRequest: AVContentKeyRequest); message 'contentKeySession:contentKeyRequestDidSucceed:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 7.0 }
  optional
    procedure contentKeySessionContentProtectionSessionIdentifierDidChange (session: AVContentKeySession); message 'contentKeySessionContentProtectionSessionIdentifierDidChange:';
  optional
    procedure contentKeySessionDidGenerateExpiredSessionReport (session: AVContentKeySession); message 'contentKeySessionDidGenerateExpiredSessionReport:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 7.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVContentKeyRequestStatus = NSInteger;
  AVContentKeyRequestStatusPtr = ^AVContentKeyRequestStatus;

const
  AVContentKeyRequestStatusRequestingResponse = 0;
  AVContentKeyRequestStatusReceivedResponse = 1;
  AVContentKeyRequestStatusRenewed = 2;
  AVContentKeyRequestStatusRetried = 3;
  AVContentKeyRequestStatusCancelled = 4;
  AVContentKeyRequestStatusFailed = 5;
{$endif}

{$ifdef CLASSES}

type
  AVContentKeyRequest = objcclass external (NSObject)
  private
    _contentKeyRequest: AVContentKeyRequestInternal;
  public
    function status: AVContentKeyRequestStatus; message 'status';
    function error: NSError; message 'error';
    function identifier: id; message 'identifier';
    function initializationData: NSData; message 'initializationData';
    function options: NSDictionary; message 'options'; { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 7.0 }
    function canProvidePersistableContentKey: objcbool; message 'canProvidePersistableContentKey';
    function contentKeySpecifier: AVContentKeySpecifier; message 'contentKeySpecifier'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
    function contentKey: AVContentKey; message 'contentKey'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
    procedure makeStreamingContentKeyRequestDataForApp_contentIdentifier_options_completionHandler (appIdentifier: NSData; contentIdentifier: NSData; options_: NSDictionary; handler: AVContentKeySessionMakeStreamingContentKeyRequestDataForAppCallback); message 'makeStreamingContentKeyRequestDataForApp:contentIdentifier:options:completionHandler:';
    procedure processContentKeyResponse (keyResponse: AVContentKeyResponse); message 'processContentKeyResponse:';
    procedure processContentKeyResponseError (error_: NSError); message 'processContentKeyResponseError:';
    procedure respondByRequestingPersistableContentKeyRequest; message 'respondByRequestingPersistableContentKeyRequest'; { unavailable in macos, tvos, watchos }
    function respondByRequestingPersistableContentKeyRequestAndReturnError (outError: NSErrorPtr): objcbool; message 'respondByRequestingPersistableContentKeyRequestAndReturnError:'; { unavailable in tvos } { available in macos 10.15, ios 11.2, watchos 7.0 }
  end;

type
  AVPersistableContentKeyRequest = objcclass external (AVContentKeyRequest)
  public
    function persistableContentKeyFromKeyVendorResponse_options_error (keyVendorResponse: NSData; options_: NSDictionary; outError: NSErrorPtr): NSData; message 'persistableContentKeyFromKeyVendorResponse:options:error:';
  end;


type
  AVContentKeyRequestRenewal = objccategory external (AVContentKeyRequest)
    function renewsExpiringResponseData: objcbool; message 'renewsExpiringResponseData';
  end;


type
  AVContentKeyResponse = objcclass external (NSObject)
  private
    _keyResponse: AVContentKeyResponseInternal;
  public
    class function contentKeyResponseWithFairPlayStreamingKeyResponseData (keyResponseData: NSData): id; message 'contentKeyResponseWithFairPlayStreamingKeyResponseData:';
    class function contentKeyResponseWithClearKeyData_initializationVector (keyData: NSData; initializationVector: NSData): id; message 'contentKeyResponseWithClearKeyData:initializationVector:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 7.0 }
    class function contentKeyResponseWithAuthorizationTokenData (authorizationTokenData: NSData): id; message 'contentKeyResponseWithAuthorizationTokenData:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 7.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVContentKeyRequestProtocolVersionsKey: NSString { available in macos 10.12.4, ios 10.3, tvos 10.2, watchos 7.0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  AVContentKeyRecipientProtocol = objcprotocol external name 'AVContentKeyRecipient'
  optional
    procedure contentKeySession_didProvideContentKey (contentKeySession: AVContentKeySession; contentKey: AVContentKey); message 'contentKeySession:didProvideContentKey:'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
  required
    function mayRequireContentKeysForMediaDataProcessing: objcbool; message 'mayRequireContentKeysForMediaDataProcessing';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVContentKeySpecifier = objcclass external (NSObject)
  public
    class function contentKeySpecifierForKeySystem_identifier_options (keySystem: AVContentKeySystem; contentKeyIdentifier: id; options: NSDictionary): id; message 'contentKeySpecifierForKeySystem:identifier:options:';
    function initForKeySystem_identifier_options (keySystem: AVContentKeySystem; contentKeyIdentifier: id; options: NSDictionary): id; message 'initForKeySystem:identifier:options:';
    function keySystem: AVContentKeySystem; message 'keySystem';
    function identifier: id; message 'identifier';
    function options: NSDictionary; message 'options';
  end;

type
  AVContentKey = objcclass external (NSObject)
  public
    function contentKeySpecifier: AVContentKeySpecifier; message 'contentKeySpecifier';
  end;
{$endif}

{$ifdef FUNCTIONS}
function AVSampleBufferAttachContentKey(sbuf: CMSampleBufferRef; contentKey: AVContentKey; outError: NSErrorPtr): objcbool; cdecl; external; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
{$endif}

{$else}
{$endif}
