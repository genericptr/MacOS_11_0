{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  SKErrorDomain: NSString { available in ios , tvos , macos , watchos  }; cvar; external;
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
  SKErrorStoreProductNotAvailable = 5 { available in ios , macos , watchos  };
  SKErrorCloudServicePermissionDenied = 6 { available in ios , tvos , watchos , macos  };
  SKErrorCloudServiceNetworkConnectionFailed = 7 { available in ios , tvos , watchos , macos  };
  SKErrorCloudServiceRevoked = 8 { available in ios , tvos , watchos , macos  };
  SKErrorPrivacyAcknowledgementRequired = 9 { available in ios , tvos , macos , watchos  };
  SKErrorUnauthorizedRequestData = 10 { available in ios , macos , watchos  };
  SKErrorInvalidOfferIdentifier = 11 { available in ios , macos , watchos  };
  SKErrorInvalidSignature = 12 { available in ios , macos , watchos  };
  SKErrorMissingOfferParams = 13 { available in ios , macos , watchos  };
  SKErrorInvalidOfferPrice = 14 { available in ios , macos , watchos  };
  SKErrorOverlayCancelled = 15 { available in ios , macos , watchos  };
  SKErrorOverlayInvalidConfiguration = 16 { unavailable in macos, watchos };
  SKErrorOverlayTimeout = 17 { unavailable in macos, watchos };
  SKErrorIneligibleForOffer = 18 { available in ios , macos , watchos  };
  SKErrorUnsupportedPlatform = 19 { available in ios , macos , watchos  };
  SKErrorOverlayPresentedInBackgroundScene = 20 { unavailable in macos, watchos };
{$endif}

