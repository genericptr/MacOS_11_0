{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVContentKeySession.h }

{ Types from AVContentKeySession }
{$ifdef TYPES}

type
  AVContentKeySessionServerPlaybackContextOption = NSString;
type
  AVContentKeySessionServerPlaybackContextOptionPtr = ^AVContentKeySessionServerPlaybackContextOption;
{$endif}


{$ifdef CALLBACKS}
type
  AVContentKeySessionMakeSecureTokenForExpirationDateOfPersistableContentKeyCallback = reference to function (secureTokenData: NSData; error: NSError): pointer; cblock; cdecl;
  AVContentKeySessionInvalidatePersistableContentKeyCallback = reference to function (secureTokenData: NSData; error: NSError): pointer; cblock; cdecl;
  AVContentKeySessionInvalidateAllPersistableContentKeysForAppCallback = reference to function (secureTokenData: NSData; error: NSError): pointer; cblock; cdecl;
  AVContentKeySessionMakeStreamingContentKeyRequestDataForAppCallback = reference to function (contentKeyRequestData: NSData; error: NSError): pointer; cblock; cdecl;
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
  AVContentKeySystem = NSString { available in macos , ios , tvos , watchos  };
  AVContentKeySystemPtr = ^AVContentKeySystem { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVContentKeySystemFairPlayStreaming: AVContentKeySystem { available in macos , ios , tvos , watchos  }; cvar; external;
  AVContentKeySystemClearKey: AVContentKeySystem { available in macos , ios , tvos , watchos  }; cvar; external;
  AVContentKeySystemAuthorizationToken: AVContentKeySystem { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVContentKeySession = objcclass external (NSObject)
  private
    _session: AVContentKeySessionInternal;
  public
    class function contentKeySessionWithKeySystem (keySystem: AVContentKeySystem): id; message 'contentKeySessionWithKeySystem:'; { available in macos , ios , tvos , watchos  }
    class function contentKeySessionWithKeySystem_storageDirectoryAtURL (keySystem: AVContentKeySystem; storageURL: NSURL): id; message 'contentKeySessionWithKeySystem:storageDirectoryAtURL:';
    procedure setDelegate_queue (delegate: id; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: id; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
    function storageURL: NSURL; message 'storageURL';
    function keySystem: AVContentKeySystem; message 'keySystem';
    procedure expire; message 'expire';
    function contentProtectionSessionIdentifier: NSData; message 'contentProtectionSessionIdentifier';
    procedure processContentKeyRequestWithIdentifier_initializationData_options (identifier: id; initializationData: NSData; options: NSDictionary); message 'processContentKeyRequestWithIdentifier:initializationData:options:';
    procedure renewExpiringResponseDataForContentKeyRequest (contentKeyRequest: AVContentKeyRequest); message 'renewExpiringResponseDataForContentKeyRequest:';
    procedure makeSecureTokenForExpirationDateOfPersistableContentKey_completionHandler (persistableContentKeyData: NSData; handler: AVContentKeySessionMakeSecureTokenForExpirationDateOfPersistableContentKeyCallback); message 'makeSecureTokenForExpirationDateOfPersistableContentKey:completionHandler:'; { unavailable in tvos }
    procedure invalidatePersistableContentKey_options_completionHandler (persistableContentKeyData: NSData; options: NSDictionary; handler: AVContentKeySessionInvalidatePersistableContentKeyCallback); message 'invalidatePersistableContentKey:options:completionHandler:'; { unavailable in tvos }
    procedure invalidateAllPersistableContentKeysForApp_options_completionHandler (appIdentifier: NSData; options: NSDictionary; handler: AVContentKeySessionInvalidateAllPersistableContentKeysForAppCallback); message 'invalidateAllPersistableContentKeysForApp:options:completionHandler:'; { unavailable in tvos }
  end;


type
  AVContentKeyRecipients = objccategory external (AVContentKeySession)
    procedure addContentKeyRecipient (recipient: id); message 'addContentKeyRecipient:';
    procedure removeContentKeyRecipient (recipient: id); message 'removeContentKeyRecipient:';
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
  AVContentKeyRequestRetryReason = NSString { available in macos , ios , tvos , watchos  };
  AVContentKeyRequestRetryReasonPtr = ^AVContentKeyRequestRetryReason { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVContentKeyRequestRetryReasonTimedOut: AVContentKeyRequestRetryReason { available in macos , ios , tvos , watchos  }; cvar; external;
  AVContentKeyRequestRetryReasonReceivedResponseWithExpiredLease: AVContentKeyRequestRetryReason { available in macos , ios , tvos , watchos  }; cvar; external;
  AVContentKeyRequestRetryReasonReceivedObsoleteContentKey: AVContentKeyRequestRetryReason { available in macos , ios , tvos , watchos  }; cvar; external;
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
    procedure contentKeySession_didUpdatePersistableContentKey_forContentKeyIdentifier (session: AVContentKeySession; persistableContentKey: NSData; keyIdentifier: id); message 'contentKeySession:didUpdatePersistableContentKey:forContentKeyIdentifier:'; { unavailable in tvos }
  optional
    procedure contentKeySession_contentKeyRequest_didFailWithError (session: AVContentKeySession; keyRequest: AVContentKeyRequest; err: NSError); message 'contentKeySession:contentKeyRequest:didFailWithError:';
  optional
    function contentKeySession_shouldRetryContentKeyRequest_reason (session: AVContentKeySession; keyRequest: AVContentKeyRequest; retryReason: AVContentKeyRequestRetryReason): objcbool; message 'contentKeySession:shouldRetryContentKeyRequest:reason:';
  optional
    procedure contentKeySession_contentKeyRequestDidSucceed (session: AVContentKeySession; keyRequest: AVContentKeyRequest); message 'contentKeySession:contentKeyRequestDidSucceed:'; { available in macos , ios , tvos , watchos  }
  optional
    procedure contentKeySessionContentProtectionSessionIdentifierDidChange (session: AVContentKeySession); message 'contentKeySessionContentProtectionSessionIdentifierDidChange:';
  optional
    procedure contentKeySessionDidGenerateExpiredSessionReport (session: AVContentKeySession); message 'contentKeySessionDidGenerateExpiredSessionReport:'; { available in macos , ios , tvos , watchos  }
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
    function options: NSDictionary; message 'options'; { available in macos , ios , tvos , watchos  }
    function canProvidePersistableContentKey: objcbool; message 'canProvidePersistableContentKey';
    function contentKeySpecifier: AVContentKeySpecifier; message 'contentKeySpecifier'; { available in macos , ios , tvos , watchos  }
    function contentKey: AVContentKey; message 'contentKey'; { available in macos , ios , tvos , watchos  }
    procedure makeStreamingContentKeyRequestDataForApp_contentIdentifier_options_completionHandler (appIdentifier: NSData; contentIdentifier: NSData; options_: NSDictionary; handler: AVContentKeySessionMakeStreamingContentKeyRequestDataForAppCallback); message 'makeStreamingContentKeyRequestDataForApp:contentIdentifier:options:completionHandler:';
    procedure processContentKeyResponse (keyResponse: AVContentKeyResponse); message 'processContentKeyResponse:';
    procedure processContentKeyResponseError (error_: NSError); message 'processContentKeyResponseError:';
    procedure respondByRequestingPersistableContentKeyRequest; message 'respondByRequestingPersistableContentKeyRequest'; { unavailable in macos, tvos, watchos }
    function respondByRequestingPersistableContentKeyRequestAndReturnError (outError: NSErrorPtr): objcbool; message 'respondByRequestingPersistableContentKeyRequestAndReturnError:'; { unavailable in tvos }
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
    class function contentKeyResponseWithClearKeyData_initializationVector (keyData: NSData; initializationVector: NSData): id; message 'contentKeyResponseWithClearKeyData:initializationVector:'; { available in macos , ios , tvos , watchos  }
    class function contentKeyResponseWithAuthorizationTokenData (authorizationTokenData: NSData): id; message 'contentKeyResponseWithAuthorizationTokenData:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVContentKeyRequestProtocolVersionsKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  AVContentKeyRecipientProtocol = objcprotocol external name 'AVContentKeyRecipient'
  optional
    procedure contentKeySession_didProvideContentKey (contentKeySession: AVContentKeySession; contentKey: AVContentKey); message 'contentKeySession:didProvideContentKey:'; { available in macos , ios , tvos , watchos  }
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
function AVSampleBufferAttachContentKey(sbuf: CMSampleBufferRef; contentKey: AVContentKey; outError: NSErrorPtr): objcbool; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}
