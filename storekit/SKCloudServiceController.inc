{ Parsed from StoreKit.framework SKCloudServiceController.h }

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
  SKCloudServiceCapabilityMusicCatalogSubscriptionEligible = 1 shl 1 { available in ios 10.1, tvos 10.1, watchos 7.0, macos 11.0, macCatalyst 13.0 };
  SKCloudServiceCapabilityAddToCloudMusicLibrary = 1 shl 8;
{$endif}

{$ifdef CLASSES}

type
  SKCloudServiceController = objcclass external (NSObject)
  public
    class function authorizationStatus: SKCloudServiceAuthorizationStatus; message 'authorizationStatus'; { available in ios 9.3, tvos 9.3, watchos 7.0, macos 11.0, macCatalyst 13.0 }
    class procedure requestAuthorization (handler: SKCloudServiceControllerRequestAuthorizationCallback); message 'requestAuthorization:'; { available in ios 9.3, tvos 9.3, watchos 7.0, macos 11.0, macCatalyst 13.0 }
    procedure requestCapabilitiesWithCompletionHandler (completionHandler: SKCloudServiceControllerRequestCapabilitiesWithCompletionHandlerCallback); message 'requestCapabilitiesWithCompletionHandler:'; { available in ios 9.3, tvos 9.3, watchos 7.0, macos 11.0, macCatalyst 13.0 }
    procedure requestStorefrontCountryCodeWithCompletionHandler (completionHandler: SKCloudServiceControllerRequestStorefrontCountryCodeWithCompletionHandlerCallback); message 'requestStorefrontCountryCodeWithCompletionHandler:'; { available in ios 11.0 }
    procedure requestStorefrontIdentifierWithCompletionHandler (completionHandler: SKCloudServiceControllerRequestStorefrontIdentifierWithCompletionHandlerCallback); message 'requestStorefrontIdentifierWithCompletionHandler:'; { available in ios 9.3, tvos 9.3, watchos 7.0, macos 11.0, macCatalyst 13.0 }
    procedure requestUserTokenForDeveloperToken_completionHandler (developerToken: NSString; completionHandler: SKCloudServiceControllerRequestUserTokenForDeveloperTokenCallback); message 'requestUserTokenForDeveloperToken:completionHandler:'; { available in ios 11.0, tvos 11.0, watchos 7.0, macos 11.0, macCatalyst 13.0 }
    procedure requestPersonalizationTokenForClientToken_withCompletionHandler (clientToken: NSString; completionHandler: SKCloudServiceControllerRequestPersonalizationTokenForClientTokenCallback); message 'requestPersonalizationTokenForClientToken:withCompletionHandler:'; { unavailable in watchos, macos, macCatalyst }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKCloudServiceCapabilitiesDidChangeNotification: NSNotificationName { available in ios 9.3, tvos 9.3, watchos 7.0, macos 11.0, macCatalyst 13.0 }; cvar; external;
  SKStorefrontCountryCodeDidChangeNotification: NSNotificationName { available in ios 11.0, tvos 11.0, watchos 7.0, macos 11.0, macCatalyst 13.0 }; cvar; external;
  SKStorefrontIdentifierDidChangeNotification: NSNotificationName { available in ios 9.3, tvos 9.3, watchos 7.0, macos 11.0, macCatalyst 13.0 }; cvar; external;
{$endif}

