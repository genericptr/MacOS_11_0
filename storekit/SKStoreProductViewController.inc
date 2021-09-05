{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKStoreProductViewController.h }

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
    procedure setDelegate(newValue: SKStoreProductViewControllerDelegateProtocol); message 'setDelegate:'; { available in ios , macCatalyst , macos  }
    function delegate: SKStoreProductViewControllerDelegateProtocol; message 'delegate'; { available in ios , macCatalyst , macos  }
    procedure loadProductWithParameters_completionBlock (parameters: NSDictionary; block: SKStoreProductViewControllerLoadProductWithParametersCallback); message 'loadProductWithParameters:completionBlock:'; { available in ios , macCatalyst , macos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKStoreProductViewControllerDelegateProtocol = objcprotocol external name 'SKStoreProductViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure productViewControllerDidFinish (viewController: SKStoreProductViewController); message 'productViewControllerDidFinish:'; { available in ios , macCatalyst , macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKStoreProductParameterITunesItemIdentifier: NSString { available in ios , macCatalyst , macos  }; cvar; external;
  SKStoreProductParameterProductIdentifier: NSString { available in ios , macCatalyst , macos  }; cvar; external;
  SKStoreProductParameterAffiliateToken: NSString { available in ios , macCatalyst , macos  }; cvar; external;
  SKStoreProductParameterCampaignToken: NSString { available in ios , macCatalyst , macos  }; cvar; external;
  SKStoreProductParameterProviderToken: NSString { available in ios , macCatalyst , macos  }; cvar; external;
  SKStoreProductParameterAdvertisingPartnerToken: NSString { available in ios , macCatalyst , macos  }; cvar; external;
{$endif}

