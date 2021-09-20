{ Parsed from Contacts.framework CNError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CNErrorDomain: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
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
  CNErrorCodeUnauthorizedKeys = 102 { available in macos 10.14, ios 13.0, watchos 6.0 };
  CNErrorCodeFeatureDisabledByUser = 103 { available in macos 10.15, ios 13.0, watchos 6.0 };
  CNErrorCodeRecordDoesNotExist = 200;
  CNErrorCodeInsertedRecordAlreadyExists = 201;
  CNErrorCodeContainmentCycle = 202;
  CNErrorCodeContainmentScope = 203;
  CNErrorCodeParentRecordDoesNotExist = 204;
  CNErrorCodeRecordIdentifierInvalid = 205;
  CNErrorCodeRecordNotWritable = 206 { available in macos 10.14, ios 13.0, watchos 6.0 };
  CNErrorCodeParentContainerNotWritable = 207 { available in macos 10.14, ios 13.0, watchos 6.0 };
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
  CNErrorCodeVCardMalformed = 700 { available in macos 10.13, ios 11.0 };
  CNErrorCodeVCardSummarizationError = 701 { available in macos 10.14, ios 12.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNErrorUserInfoAffectedRecordsKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNErrorUserInfoAffectedRecordIdentifiersKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNErrorUserInfoValidationErrorsKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNErrorUserInfoKeyPathsKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

