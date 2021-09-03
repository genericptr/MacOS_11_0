{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CNErrorDomain: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CNErrorCode = NSInteger;
  CNErrorCodePtr = ^CNErrorCode;

const
  CNErrorCodeCommunicationError = 1;
  CNErrorCodeDataAccessError = 2;
  CNErrorCodeAuthorizationDenied = 100;
  CNErrorCodeNoAccessableWritableContainers = 101 { available in 10_13_3, 11_3 };
  CNErrorCodeUnauthorizedKeys = 102 { available in macos , ios , watchos  };
  CNErrorCodeFeatureDisabledByUser = 103 { available in macos , ios , watchos  };
  CNErrorCodeRecordDoesNotExist = 200;
  CNErrorCodeInsertedRecordAlreadyExists = 201;
  CNErrorCodeContainmentCycle = 202;
  CNErrorCodeContainmentScope = 203;
  CNErrorCodeParentRecordDoesNotExist = 204;
  CNErrorCodeRecordIdentifierInvalid = 205;
  CNErrorCodeRecordNotWritable = 206 { available in macos , ios , watchos  };
  CNErrorCodeParentContainerNotWritable = 207 { available in macos , ios , watchos  };
  CNErrorCodeValidationMultipleErrors = 300;
  CNErrorCodeValidationTypeMismatch = 301;
  CNErrorCodeValidationConfigurationError = 302;
  CNErrorCodePredicateInvalid = 400;
  CNErrorCodePolicyViolation = 500;
  CNErrorCodeClientIdentifierInvalid = 600;
  CNErrorCodeClientIdentifierDoesNotExist = 601;
  CNErrorCodeClientIdentifierCollision = 602;
  CNErrorCodeChangeHistoryExpired = 603;
  CNErrorCodeChangeHistoryInvalidAnchor = 604;
  CNErrorCodeVCardMalformed = 700 { available in 10_13, 11_0 };
  CNErrorCodeVCardSummarizationError = 701 { available in 10_14, 12_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNErrorUserInfoAffectedRecordsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNErrorUserInfoAffectedRecordIdentifiersKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNErrorUserInfoValidationErrorsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNErrorUserInfoKeyPathsKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

