{ Parsed from StoreKit.framework SKAdNetwork.h }

{$ifdef CALLBACKS}
type
  SKAdNetworkStartImpressionCallback = reference to procedure (error: NSError); cblock; cdecl;
  SKAdNetworkEndImpressionCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKAdNetworkPtr = ^SKAdNetwork;
{$endif}

{$ifdef CLASSES}

type
  SKAdNetwork = objcclass external (NSObject)
  public
    class procedure startImpression_completionHandler (impression: SKAdImpression; completion: SKAdNetworkStartImpressionCallback); message 'startImpression:completionHandler:';
    class procedure endImpression_completionHandler (impression: SKAdImpression; completion: SKAdNetworkEndImpressionCallback); message 'endImpression:completionHandler:';
    class procedure registerAppForAdNetworkAttribution; message 'registerAppForAdNetworkAttribution'; { unavailable in macos, watchos } { available in ios 11.3 }
    class procedure updateConversionValue (conversionValue: NSInteger); message 'updateConversionValue:'; { unavailable in macos, watchos } { available in ios 14.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKStoreProductParameterAdNetworkAttributionSignature: NSString { unavailable in macos, watchos } { available in ios 11.3 }; cvar; external;
  SKStoreProductParameterAdNetworkCampaignIdentifier: NSString { unavailable in macos, watchos } { available in ios 11.3 }; cvar; external;
  SKStoreProductParameterAdNetworkIdentifier: NSString { unavailable in macos, watchos } { available in ios 11.3 }; cvar; external;
  SKStoreProductParameterAdNetworkNonce: NSString { unavailable in macos, watchos } { available in ios 11.3 }; cvar; external;
  SKStoreProductParameterAdNetworkTimestamp: NSString { unavailable in macos, watchos } { available in ios 11.3 }; cvar; external;
  SKStoreProductParameterAdNetworkSourceAppStoreIdentifier: NSString { unavailable in macos, watchos } { available in ios 14.0 }; cvar; external;
  SKStoreProductParameterAdNetworkVersion: NSString { unavailable in macos, watchos } { available in ios 14.0 }; cvar; external;
{$endif}

