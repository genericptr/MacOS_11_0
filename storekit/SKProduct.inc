{ Parsed from StoreKit.framework SKProduct.h }

{$ifdef TYPES}
type
  SKProductSubscriptionPeriodPtr = ^SKProductSubscriptionPeriod;
  SKProductPtr = ^SKProduct;
{$endif}

{$ifdef TYPES}
type
  SKProductPeriodUnit = NSUInteger;
  SKProductPeriodUnitPtr = ^SKProductPeriodUnit;

const
  SKProductPeriodUnitDay = 0;
  SKProductPeriodUnitWeek = 1;
  SKProductPeriodUnitMonth = 2;
  SKProductPeriodUnitYear = 3;
{$endif}

{$ifdef CLASSES}

type
  SKProductSubscriptionPeriod = objcclass external (NSObject)
  private
    _internal: id;
  public
    function numberOfUnits: NSUInteger; message 'numberOfUnits'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function unit_: SKProductPeriodUnit; message 'unit'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
  end;

type
  SKProduct = objcclass external (NSObject)
  private
    _internal: id;
  public
    function localizedDescription: NSString; message 'localizedDescription'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function localizedTitle: NSString; message 'localizedTitle'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function price: NSDecimalNumber; message 'price'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function priceLocale: NSLocale; message 'priceLocale'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function productIdentifier: NSString; message 'productIdentifier'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function isDownloadable: objcbool; message 'isDownloadable'; { available in ios 6.0, macos 10.15, watchos 6.2 }
    function downloadable: objcbool; message 'downloadable'; { unavailable in ios, watchos }
    function isFamilyShareable: objcbool; message 'isFamilyShareable'; { available in ios 14.0, macos 11.0, watchos 7.0 }
    function contentLengths: NSArray; message 'contentLengths'; { unavailable in ios, tvos, watchos }
    function downloadContentLengths: NSArray; message 'downloadContentLengths'; { available in ios 6.0, macos 10.14, watchos 6.2 }
    function contentVersion: NSString; message 'contentVersion'; deprecated 'replace with -[SKProduct downloadContentVersion]';
    function downloadContentVersion: NSString; message 'downloadContentVersion'; { available in ios 6.0, macos 10.14, watchos 6.2 }
    function subscriptionPeriod: SKProductSubscriptionPeriod; message 'subscriptionPeriod'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function introductoryPrice: SKProductDiscount; message 'introductoryPrice'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function subscriptionGroupIdentifier: NSString; message 'subscriptionGroupIdentifier'; { available in ios 12.0, macos 10.14, watchos 6.2 }
    function discounts: NSArray; message 'discounts'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
  end;
{$endif}

