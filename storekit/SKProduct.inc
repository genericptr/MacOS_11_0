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
    function numberOfUnits: NSUInteger; message 'numberOfUnits'; { available in ios , macos , watchos  }
    function unit_: SKProductPeriodUnit; message 'unit'; { available in ios , macos , watchos  }
  end;

type
  SKProduct = objcclass external (NSObject)
  private
    _internal: id;
  public
    function localizedDescription: NSString; message 'localizedDescription'; { available in ios , macos , watchos  }
    function localizedTitle: NSString; message 'localizedTitle'; { available in ios , macos , watchos  }
    function price: NSDecimalNumber; message 'price'; { available in ios , macos , watchos  }
    function priceLocale: NSLocale; message 'priceLocale'; { available in ios , macos , watchos  }
    function productIdentifier: NSString; message 'productIdentifier'; { available in ios , macos , watchos  }
    function isDownloadable: objcbool; message 'isDownloadable'; { available in ios , macos , watchos  }
    function downloadable: objcbool; message 'downloadable'; { unavailable in ios, watchos }
    function isFamilyShareable: objcbool; message 'isFamilyShareable'; { available in ios , macos , watchos  }
    function contentLengths: NSArray; message 'contentLengths'; { unavailable in ios, tvos, watchos }
    function downloadContentLengths: NSArray; message 'downloadContentLengths'; { available in ios , macos , watchos  }
    function contentVersion: NSString; message 'contentVersion'; deprecated 'replace with -[SKProduct downloadContentVersion]';
    function downloadContentVersion: NSString; message 'downloadContentVersion'; { available in ios , macos , watchos  }
    function subscriptionPeriod: SKProductSubscriptionPeriod; message 'subscriptionPeriod'; { available in ios , macos , watchos  }
    function introductoryPrice: SKProductDiscount; message 'introductoryPrice'; { available in ios , macos , watchos  }
    function subscriptionGroupIdentifier: NSString; message 'subscriptionGroupIdentifier'; { available in ios , macos , watchos  }
    function discounts: NSArray; message 'discounts'; { available in ios , macos , watchos  }
  end;
{$endif}

