{ Parsed from CloudKit.framework CKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CKErrorDomain: NSString { available in macos , ios , watchos  }; cvar; external;
  CKPartialErrorsByItemIDKey: NSString { available in macos , ios , watchos  }; cvar; external;
  CKRecordChangedErrorAncestorRecordKey: NSString { available in macos , ios , watchos  }; cvar; external;
  CKRecordChangedErrorServerRecordKey: NSString { available in macos , ios , watchos  }; cvar; external;
  CKRecordChangedErrorClientRecordKey: NSString { available in macos , ios , watchos  }; cvar; external;
  CKErrorRetryAfterKey: NSString { available in macos , ios , watchos  }; cvar; external;
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
  CKErrorTooManyParticipants = 29 { available in macos , ios , tvos  };
  CKErrorAlreadyShared = 30 { available in macos , ios , tvos  };
  CKErrorReferenceViolation = 31 { available in macos , ios , tvos  };
  CKErrorManagedAccountRestricted = 32 { available in macos , ios , tvos  };
  CKErrorParticipantMayNeedVerification = 33 { available in macos , ios , tvos  };
  CKErrorServerResponseLost = 34 { available in macos , ios , tvos , watchos  };
  CKErrorAssetNotAvailable = 35 { available in macos , ios , tvos , watchos  };
{$endif}

