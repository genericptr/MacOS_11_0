{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKCloudServiceController.h }

{$ifdef CALLBACKS}
type
  SKCloudServiceControllerRequestAuthorizationCallback = reference to procedure (authorizationStatus: SKCloudServiceAuthorizationStatus); cblock; cdecl;
  SKCloudServiceControllerRequestCapabilitiesWithCompletionHandlerCallback = reference to procedure (capabilities: SKCloudServiceCapability; error: NSError); cblock; cdecl;
  SKCloudServiceControllerRequestStorefrontCountryCodeWithCompletionHandlerCallback = reference to procedure (storefrontCountryCode: NSString; error: NSError); cblock; cdecl;
  SKCloudServiceControllerRequestStorefrontIdentifierWithCompletionHandlerCallback = reference to procedure (storefrontIdentifier: NSString; error: NSError); cblock; cdecl;
  SKCloudServiceControllerRequestUserTokenForDeveloperTokenCallback = reference to procedure (userToken: NSString; error: NSError); cblock; cdecl;
  SKCloudServiceControllerRequestPersonalizationTokenForClientTokenCallback = reference to procedure (personalizationToken: NSString; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKCloudServiceControllerPtr = ^SKCloudServiceController;
{$endif}

{$ifdef TYPES}
type
  SKCloudServiceAuthorizationStatus = NSInteger;
  SKCloudServiceAuthorizationStatusPtr = ^SKCloudServiceAuthorizationStatus;

const
  SKCloudServiceAuthorizationStatusNotDetermined = 0;
  SKCloudServiceAuthorizationStatusDenied = 1;
  SKCloudServiceAuthorizationStatusRestricted = 2;
  SKCloudServiceAuthorizationStatusAuthorized = 3;

type
  SKCloudServiceCapability = NSUInteger;
  SKCloudServiceCapabilityPtr = ^SKCloudServiceCapability;

const
  SKCloudServiceCapabilityNone = 0;
  SKCloudServiceCapabilityMusicCatalogPlayback = 1 shl 0;
  SKCloudServiceCapabilityMusicCatalogSubscriptionEligible = 1 shl 1 { available in ios , tvos , watchos , macos , macCatalyst  };
  SKCloudServiceCapabilityAddToCloudMusicLibrary = 1 shl 8;
{$endif}

{$ifdef CLASSES}

type
  SKCloudServiceController = objcclass external (NSObject)
  public
    class function authorizationStatus: SKCloudServiceAuthorizationStatus; message 'authorizationStatus'; { available in ios , tvos , watchos , macos , macCatalyst  }
    class procedure requestAuthorization (handler: SKCloudServiceControllerRequestAuthorizationCallback); message 'requestAuthorization:'; { available in ios , tvos , watchos , macos , macCatalyst  }
    procedure requestCapabilitiesWithCompletionHandler (completionHandler: SKCloudServiceControllerRequestCapabilitiesWithCompletionHandlerCallback); message 'requestCapabilitiesWithCompletionHandler:'; { available in ios , tvos , watchos , macos , macCatalyst  }
    procedure requestStorefrontCountryCodeWithCompletionHandler (completionHandler: SKCloudServiceControllerRequestStorefrontCountryCodeWithCompletionHandlerCallback); message 'requestStorefrontCountryCodeWithCompletionHandler:'; { available in ios  }
    procedure requestStorefrontIdentifierWithCompletionHandler (completionHandler: SKCloudServiceControllerRequestStorefrontIdentifierWithCompletionHandlerCallback); message 'requestStorefrontIdentifierWithCompletionHandler:'; { available in ios , tvos , watchos , macos , macCatalyst  }
    procedure requestUserTokenForDeveloperToken_completionHandler (developerToken: NSString; completionHandler: SKCloudServiceControllerRequestUserTokenForDeveloperTokenCallback); message 'requestUserTokenForDeveloperToken:completionHandler:'; { available in ios , tvos , watchos , macos , macCatalyst  }
    procedure requestPersonalizationTokenForClientToken_withCompletionHandler (clientToken: NSString; completionHandler: SKCloudServiceControllerRequestPersonalizationTokenForClientTokenCallback); message 'requestPersonalizationTokenForClientToken:withCompletionHandler:'; { unavailable in watchos, macos, macCatalyst }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKCloudServiceCapabilitiesDidChangeNotification: NSNotificationName { available in ios , tvos , watchos , macos , macCatalyst  }; cvar; external;
  SKStorefrontCountryCodeDidChangeNotification: NSNotificationName { available in ios , tvos , watchos , macos , macCatalyst  }; cvar; external;
  SKStorefrontIdentifierDidChangeNotification: NSNotificationName { available in ios , tvos , watchos , macos , macCatalyst  }; cvar; external;
{$endif}

