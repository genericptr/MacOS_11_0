{ Parsed from StoreKit.framework SKProductDiscount.h }

{$ifdef TYPES}
type
  SKProductDiscountPtr = ^SKProductDiscount;
{$endif}

{$ifdef TYPES}
type
  SKProductDiscountPaymentMode = NSUInteger;
  SKProductDiscountPaymentModePtr = ^SKProductDiscountPaymentMode;

const
  SKProductDiscountPaymentModePayAsYouGo = 0;
  SKProductDiscountPaymentModePayUpFront = 1;
  SKProductDiscountPaymentModeFreeTrial = 2;

type
  SKProductDiscountType = NSUInteger;
  SKProductDiscountTypePtr = ^SKProductDiscountType;

const
  SKProductDiscountTypeIntroductory = 0;
  SKProductDiscountTypeSubscription = 1;
{$endif}

{$ifdef CLASSES}

type
  SKProductDiscount = objcclass external (NSObject)
  private
    _internal: id;
  public
    function price: NSDecimalNumber; message 'price'; { available in ios , macos , watchos  }
    function priceLocale: NSLocale; message 'priceLocale'; { available in ios , macos , watchos  }
    function identifier: NSString; message 'identifier'; { available in ios , macos , watchos  }
    function subscriptionPeriod: SKProductSubscriptionPeriod; message 'subscriptionPeriod'; { available in ios , macos , watchos  }
    function numberOfPeriods: NSUInteger; message 'numberOfPeriods'; { available in ios , macos , watchos  }
    function paymentMode: SKProductDiscountPaymentMode; message 'paymentMode'; { available in ios , macos , watchos  }
    function type_: SKProductDiscountType; message 'type'; { available in ios , macos , watchos  }
  end;
{$endif}

