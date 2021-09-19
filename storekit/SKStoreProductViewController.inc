{ Parsed from StoreKit.framework SKStoreProductViewController.h }

{ Types from SKStoreProductViewController }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  SKStoreProductViewControllerLoadProductWithParametersCallback = reference to procedure (result_: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKStoreProductViewControllerPtr = ^SKStoreProductViewController;
  SKStoreProductViewControllerDelegateProtocolPtr = ^SKStoreProductViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKStoreProductViewController = objcclass external (NSViewController)
  public
    procedure setDelegate(newValue: SKStoreProductViewControllerDelegateProtocol); message 'setDelegate:'; { available in ios 6.0, macCatalyst 13.0, macos 11.0 }
    function delegate: SKStoreProductViewControllerDelegateProtocol; message 'delegate'; { available in ios 6.0, macCatalyst 13.0, macos 11.0 }
    procedure loadProductWithParameters_completionBlock (parameters: NSDictionary; block: SKStoreProductViewControllerLoadProductWithParametersCallback); message 'loadProductWithParameters:completionBlock:'; { available in ios 6.0, macCatalyst 13.0, macos 11.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKStoreProductViewControllerDelegateProtocol = objcprotocol external name 'SKStoreProductViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure productViewControllerDidFinish (viewController: SKStoreProductViewController); message 'productViewControllerDidFinish:'; { available in ios 6.0, macCatalyst 13.0, macos 11.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKStoreProductParameterITunesItemIdentifier: NSString { available in ios 6.0, macCatalyst 13.0, macos 11.0 }; cvar; external;
  SKStoreProductParameterProductIdentifier: NSString { available in ios 11.0, macCatalyst 13.0, macos 11.0 }; cvar; external;
  SKStoreProductParameterAffiliateToken: NSString { available in ios 8.0, macCatalyst 13.0, macos 11.0 }; cvar; external;
  SKStoreProductParameterCampaignToken: NSString { available in ios 8.0, macCatalyst 13.0, macos 11.0 }; cvar; external;
  SKStoreProductParameterProviderToken: NSString { available in ios 8.3, macCatalyst 13.0, macos 11.0 }; cvar; external;
  SKStoreProductParameterAdvertisingPartnerToken: NSString { available in ios 9.3, macCatalyst 13.0, macos 11.0 }; cvar; external;
{$endif}

