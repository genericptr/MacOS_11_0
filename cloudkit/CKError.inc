{ Parsed from CloudKit.framework CKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CKErrorDomain: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
  CKPartialErrorsByItemIDKey: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
  CKRecordChangedErrorAncestorRecordKey: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
  CKRecordChangedErrorServerRecordKey: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
  CKRecordChangedErrorClientRecordKey: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
  CKErrorRetryAfterKey: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CKErrorCode = NSInteger;
  CKErrorCodePtr = ^CKErrorCode;

const
  CKErrorInternalError = 1;
  CKErrorPartialFailure = 2;
  CKErrorNetworkUnavailable = 3;
  CKErrorNetworkFailure = 4;
  CKErrorBadContainer = 5;
  CKErrorServiceUnavailable = 6;
  CKErrorRequestRateLimited = 7;
  CKErrorMissingEntitlement = 8;
  CKErrorNotAuthenticated = 9;
  CKErrorPermissionFailure = 10;
  CKErrorUnknownItem = 11;
  CKErrorInvalidArguments = 12;
  CKErrorResultsTruncated = 13 deprecated 'Will not be returned';
  CKErrorServerRecordChanged = 14;
  CKErrorServerRejectedRequest = 15;
  CKErrorAssetFileNotFound = 16;
  CKErrorAssetFileModified = 17;
  CKErrorIncompatibleVersion = 18;
  CKErrorConstraintViolation = 19;
  CKErrorOperationCancelled = 20;
  CKErrorChangeTokenExpired = 21;
  CKErrorBatchRequestFailed = 22;
  CKErrorZoneBusy = 23;
  CKErrorBadDatabase = 24;
  CKErrorQuotaExceeded = 25;
  CKErrorZoneNotFound = 26;
  CKErrorLimitExceeded = 27;
  CKErrorUserDeletedZone = 28;
  CKErrorTooManyParticipants = 29 { available in macos 10.12, ios 10.0, tvos 10.0 };
  CKErrorAlreadyShared = 30 { available in macos 10.12, ios 10.0, tvos 10.0 };
  CKErrorReferenceViolation = 31 { available in macos 10.12, ios 10.0, tvos 10.0 };
  CKErrorManagedAccountRestricted = 32 { available in macos 10.12, ios 10.0, tvos 10.0 };
  CKErrorParticipantMayNeedVerification = 33 { available in macos 10.12, ios 10.0, tvos 10.0 };
  CKErrorServerResponseLost = 34 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  CKErrorAssetNotAvailable = 35 { available in macos 10.13, ios 11.3, tvos 11.3, watchos 4.3 };
{$endif}

