{ Parsed from CoreBluetooth.framework CBError.h }

{$ifdef EXTERNAL_SYMBOLS}
var
  CBErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CBError = NSInteger;
  CBErrorPtr = ^CBError;

const
  CBErrorUnknown = 0;
  CBErrorInvalidParameters = 1 { available in macos 10.9, ios 6.0 };
  CBErrorInvalidHandle = 2 { available in macos 10.9, ios 6.0 };
  CBErrorNotConnected = 3 { available in macos 10.9, ios 6.0 };
  CBErrorOutOfSpace = 4 { available in macos 10.9, ios 6.0 };
  CBErrorOperationCancelled = 5 { available in macos 10.9, ios 6.0 };
  CBErrorConnectionTimeout = 6 { available in macos 10.9, ios 6.0 };
  CBErrorPeripheralDisconnected = 7 { available in macos 10.9, ios 6.0 };
  CBErrorUUIDNotAllowed = 8 { available in macos 10.9, ios 6.0 };
  CBErrorAlreadyAdvertising = 9 { available in macos 10.9, ios 6.0 };
  CBErrorConnectionFailed = 10 { available in macos 10.13, ios 7.1 };
  CBErrorConnectionLimitReached = 11 { available in macos 10.13, ios 9.0 };
  CBErrorUnkownDevice = 12 deprecated 'in 10_13, 10_15, 9_0, 13_0, "Use CBErrorUnknownDevice instead"';
  CBErrorUnknownDevice = 12 { available in macos 10.14, ios 12.0 };
  CBErrorOperationNotSupported = 13 { available in macos 10.14, ios 12.0 };
  CBErrorPeerRemovedPairingInformation = 14 { available in macos 10.15, ios 13.4 };
  CBErrorEncryptionTimedOut = 15 { available in macos 10.15, ios 13.3 };
  CBErrorTooManyLEPairedDevices = 16 { available in macos 11.0, ios 14.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CBATTErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CBATTError = NSInteger;
  CBATTErrorPtr = ^CBATTError;

const
  CBATTErrorSuccess = $00 { available in macos 10.9, ios 6.0 };
  CBATTErrorInvalidHandle = $01;
  CBATTErrorReadNotPermitted = $02;
  CBATTErrorWriteNotPermitted = $03;
  CBATTErrorInvalidPdu = $04;
  CBATTErrorInsufficientAuthentication = $05;
  CBATTErrorRequestNotSupported = $06;
  CBATTErrorInvalidOffset = $07;
  CBATTErrorInsufficientAuthorization = $08;
  CBATTErrorPrepareQueueFull = $09;
  CBATTErrorAttributeNotFound = $0A;
  CBATTErrorAttributeNotLong = $0B;
  CBATTErrorInsufficientEncryptionKeySize = $0C;
  CBATTErrorInvalidAttributeValueLength = $0D;
  CBATTErrorUnlikelyError = $0E;
  CBATTErrorInsufficientEncryption = $0F;
  CBATTErrorUnsupportedGroupType = $10;
  CBATTErrorInsufficientResources = $11;
{$endif}

