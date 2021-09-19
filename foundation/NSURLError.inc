{ Parsed from Foundation.framework NSURLError.h }

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLErrorDomain: NSErrorDomain; cvar; external;
  NSURLErrorFailingURLErrorKey: NSString { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSURLErrorFailingURLStringErrorKey: NSString { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSErrorFailingURLStringKey: NSString deprecated 'Use NSURLErrorFailingURLStringErrorKey instead'; cvar; external;
  NSURLErrorFailingURLPeerTrustErrorKey: NSString { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSURLErrorBackgroundTaskCancelledReasonKey: NSString { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSURLErrorNetworkUnavailableReasonKey: NSErrorUserInfoKey { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSURLErrorNetworkUnavailableReason = NSInteger;
  NSURLErrorNetworkUnavailableReasonPtr = ^NSURLErrorNetworkUnavailableReason;

const
  NSURLErrorNetworkUnavailableReasonCellular = 0;
  NSURLErrorNetworkUnavailableReasonExpensive = 1;
  NSURLErrorNetworkUnavailableReasonConstrained = 2;
const
  NSURLErrorUnknown = -1;
  NSURLErrorCancelled = -999;
  NSURLErrorBadURL = -1000;
  NSURLErrorTimedOut = -1001;
  NSURLErrorUnsupportedURL = -1002;
  NSURLErrorCannotFindHost = -1003;
  NSURLErrorCannotConnectToHost = -1004;
  NSURLErrorNetworkConnectionLost = -1005;
  NSURLErrorDNSLookupFailed = -1006;
  NSURLErrorHTTPTooManyRedirects = -1007;
  NSURLErrorResourceUnavailable = -1008;
  NSURLErrorNotConnectedToInternet = -1009;
  NSURLErrorRedirectToNonExistentLocation = -1010;
  NSURLErrorBadServerResponse = -1011;
  NSURLErrorUserCancelledAuthentication = -1012;
  NSURLErrorUserAuthenticationRequired = -1013;
  NSURLErrorZeroByteResource = -1014;
  NSURLErrorCannotDecodeRawData = -1015;
  NSURLErrorCannotDecodeContentData = -1016;
  NSURLErrorCannotParseResponse = -1017;
  NSURLErrorAppTransportSecurityRequiresSecureConnection = -1022 { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 };
  NSURLErrorFileDoesNotExist = -1100;
  NSURLErrorFileIsDirectory = -1101;
  NSURLErrorNoPermissionsToReadFile = -1102;
  NSURLErrorDataLengthExceedsMaximum = -1103 { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 };
  NSURLErrorFileOutsideSafeArea = -1104 { available in macos 10.12.4, ios 10.3, watchos 3.2, tvos 10.2 };
  NSURLErrorSecureConnectionFailed = -1200;
  NSURLErrorServerCertificateHasBadDate = -1201;
  NSURLErrorServerCertificateUntrusted = -1202;
  NSURLErrorServerCertificateHasUnknownRoot = -1203;
  NSURLErrorServerCertificateNotYetValid = -1204;
  NSURLErrorClientCertificateRejected = -1205;
  NSURLErrorClientCertificateRequired = -1206;
  NSURLErrorCannotLoadFromNetwork = -2000;
  NSURLErrorCannotCreateFile = -3000;
  NSURLErrorCannotOpenFile = -3001;
  NSURLErrorCannotCloseFile = -3002;
  NSURLErrorCannotWriteToFile = -3003;
  NSURLErrorCannotRemoveFile = -3004;
  NSURLErrorCannotMoveFile = -3005;
  NSURLErrorDownloadDecodingFailedMidStream = -3006;
  NSURLErrorDownloadDecodingFailedToComplete = -3007;
  NSURLErrorInternationalRoamingOff = -1018 { available in macos 10.7, ios 3.0, watchos 2.0, tvos 9.0 };
  NSURLErrorCallIsActive = -1019 { available in macos 10.7, ios 3.0, watchos 2.0, tvos 9.0 };
  NSURLErrorDataNotAllowed = -1020 { available in macos 10.7, ios 3.0, watchos 2.0, tvos 9.0 };
  NSURLErrorRequestBodyStreamExhausted = -1021 { available in macos 10.7, ios 3.0, watchos 2.0, tvos 9.0 };
  NSURLErrorBackgroundSessionRequiresSharedContainer = -995 { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 };
  NSURLErrorBackgroundSessionInUseByAnotherProcess = -996 { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 };
  NSURLErrorBackgroundSessionWasDisconnected = -997 { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 };
{$endif}

