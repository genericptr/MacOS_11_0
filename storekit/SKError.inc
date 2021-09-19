{ Parsed from StoreKit.framework SKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  SKErrorDomain: NSString { available in ios 3.0, tvos 9.0, macos 10.7, watchos 6.2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SKErrorCode = NSInteger;
  SKErrorCodePtr = ^SKErrorCode;

const
  SKErrorUnknown = 0;
  SKErrorClientInvalid = 1;
  SKErrorPaymentCancelled = 2;
  SKErrorPaymentInvalid = 3;
  SKErrorPaymentNotAllowed = 4;
  SKErrorStoreProductNotAvailable = 5 { available in ios 3.0, macos 10.15, watchos 6.2 };
  SKErrorCloudServicePermissionDenied = 6 { available in ios 9.3, tvos 9.3, watchos 6.2, macos 11.0 };
  SKErrorCloudServiceNetworkConnectionFailed = 7 { available in ios 9.3, tvos 9.3, watchos 6.2, macos 11.0 };
  SKErrorCloudServiceRevoked = 8 { available in ios 10.3, tvos 10.3, watchos 6.2, macos 11.0 };
  SKErrorPrivacyAcknowledgementRequired = 9 { available in ios 12.2, tvos 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorUnauthorizedRequestData = 10 { available in ios 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorInvalidOfferIdentifier = 11 { available in ios 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorInvalidSignature = 12 { available in ios 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorMissingOfferParams = 13 { available in ios 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorInvalidOfferPrice = 14 { available in ios 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorOverlayCancelled = 15 { available in ios 12.2, macos 10.14.4, watchos 6.2 };
  SKErrorOverlayInvalidConfiguration = 16 { unavailable in macos, watchos } { available in ios 14.0 };
  SKErrorOverlayTimeout = 17 { unavailable in macos, watchos } { available in ios 14.0 };
  SKErrorIneligibleForOffer = 18 { available in ios 14.0, macos 11.0, watchos 7.0 };
  SKErrorUnsupportedPlatform = 19 { available in ios 14.0, macos 11.0, watchos 7.0 };
  SKErrorOverlayPresentedInBackgroundScene = 20 { unavailable in macos, watchos } { available in ios 14.5 };
{$endif}

