{ Parsed from StoreKit.framework SKAdImpression.h }

{$ifdef TYPES}
type
  SKAdImpressionPtr = ^SKAdImpression;
{$endif}

{$ifdef CLASSES}

type
  SKAdImpression = objcclass external (NSObject)
  public
    procedure setSourceAppStoreItemIdentifier(newValue: NSNumber); message 'setSourceAppStoreItemIdentifier:';
    function sourceAppStoreItemIdentifier: NSNumber; message 'sourceAppStoreItemIdentifier';
    procedure setAdvertisedAppStoreItemIdentifier(newValue: NSNumber); message 'setAdvertisedAppStoreItemIdentifier:';
    function advertisedAppStoreItemIdentifier: NSNumber; message 'advertisedAppStoreItemIdentifier';
    procedure setAdNetworkIdentifier(newValue: NSString); message 'setAdNetworkIdentifier:';
    function adNetworkIdentifier: NSString; message 'adNetworkIdentifier';
    procedure setAdCampaignIdentifier(newValue: NSNumber); message 'setAdCampaignIdentifier:';
    function adCampaignIdentifier: NSNumber; message 'adCampaignIdentifier';
    procedure setAdImpressionIdentifier(newValue: NSString); message 'setAdImpressionIdentifier:';
    function adImpressionIdentifier: NSString; message 'adImpressionIdentifier';
    procedure setAdType(newValue: NSString); message 'setAdType:';
    function adType: NSString; message 'adType';
    procedure setAdDescription(newValue: NSString); message 'setAdDescription:';
    function adDescription: NSString; message 'adDescription';
    procedure setAdPurchaserName(newValue: NSString); message 'setAdPurchaserName:';
    function adPurchaserName: NSString; message 'adPurchaserName';
    procedure setTimestamp(newValue: NSNumber); message 'setTimestamp:';
    function timestamp: NSNumber; message 'timestamp';
    procedure setSignature(newValue: NSString); message 'setSignature:';
    function signature: NSString; message 'signature';
    procedure setVersion(newValue: NSString); message 'setVersion:';
    function version: NSString; message 'version';
  end;
{$endif}

