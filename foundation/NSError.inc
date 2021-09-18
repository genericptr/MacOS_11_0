{ Parsed from Foundation.framework NSError.h }

{$ifdef CALLBACKS}
type
  NSErrorSetUserInfoValueProviderForDomainCallback = reference to function (err: NSError; userInfoKey: NSErrorUserInfoKey): id; cblock; cdecl;
  NSErrorUserInfoValueProviderForDomainCallback = reference to function (err: NSError; userInfoKey: NSErrorUserInfoKey): id; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSErrorPtr = ^NSError;
{$endif}

{$ifdef TYPES}
type
  NSErrorDomain = NSString;
  NSErrorDomainPtr = ^NSErrorDomain;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCocoaErrorDomain: NSErrorDomain; cvar; external;
  NSPOSIXErrorDomain: NSErrorDomain; cvar; external;
  NSOSStatusErrorDomain: NSErrorDomain; cvar; external;
  NSMachErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSErrorUserInfoKey = NSString;
  NSErrorUserInfoKeyPtr = ^NSErrorUserInfoKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUnderlyingErrorKey: NSErrorUserInfoKey; cvar; external;
  NSMultipleUnderlyingErrorsKey: NSErrorUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocalizedDescriptionKey: NSErrorUserInfoKey; cvar; external;
  NSLocalizedFailureReasonErrorKey: NSErrorUserInfoKey; cvar; external;
  NSLocalizedRecoverySuggestionErrorKey: NSErrorUserInfoKey; cvar; external;
  NSLocalizedRecoveryOptionsErrorKey: NSErrorUserInfoKey; cvar; external;
  NSRecoveryAttempterErrorKey: NSErrorUserInfoKey; cvar; external;
  NSHelpAnchorErrorKey: NSErrorUserInfoKey; cvar; external;
  NSDebugDescriptionErrorKey: NSErrorUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocalizedFailureErrorKey: NSErrorUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSStringEncodingErrorKey: NSErrorUserInfoKey; cvar; external;
  NSURLErrorKey: NSErrorUserInfoKey; cvar; external;
  NSFilePathErrorKey: NSErrorUserInfoKey; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSError = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _reserved: pointer;
    _code: NSInteger;
    _domain: NSString;
    _userInfo: NSDictionary;
  public
    function initWithDomain_code_userInfo (domain: NSErrorDomain; code: NSInteger; dict: NSDictionary): id; message 'initWithDomain:code:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    class function errorWithDomain_code_userInfo (domain: NSErrorDomain; code: NSInteger; dict: NSDictionary): id; message 'errorWithDomain:code:userInfo:';
    function domain: NSErrorDomain; message 'domain';
    function code: NSInteger; message 'code';
    function userInfo: NSDictionary; message 'userInfo';
    function localizedDescription: NSString; message 'localizedDescription';
    function localizedFailureReason: NSString; message 'localizedFailureReason';
    function localizedRecoverySuggestion: NSString; message 'localizedRecoverySuggestion';
    function localizedRecoveryOptions: NSArray; message 'localizedRecoveryOptions';
    function recoveryAttempter: id; message 'recoveryAttempter';
    function helpAnchor: NSString; message 'helpAnchor';
    function underlyingErrors: NSArray; message 'underlyingErrors'; { available in macos , ios , watchos , tvos  }
    class procedure setUserInfoValueProviderForDomain_provider (errorDomain: NSErrorDomain; provider: NSErrorSetUserInfoValueProviderForDomainCallback); message 'setUserInfoValueProviderForDomain:provider:'; { available in macos , ios , watchos , tvos  }
    class function userInfoValueProviderForDomain (errorDomain: NSErrorDomain): NSErrorUserInfoValueProviderForDomainCallback; message 'userInfoValueProviderForDomain:'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSErrorRecoveryAttempting = objccategory external (NSObject)
    procedure attemptRecoveryFromError_optionIndex_delegate_didRecoverSelector_contextInfo (error: NSError; recoveryOptionIndex: NSUInteger; delegate: id; didRecoverSelector: SEL; contextInfo: pointer); message 'attemptRecoveryFromError:optionIndex:delegate:didRecoverSelector:contextInfo:';
    function attemptRecoveryFromError_optionIndex (error: NSError; recoveryOptionIndex: NSUInteger): objcbool; message 'attemptRecoveryFromError:optionIndex:';
  end;
{$endif}

