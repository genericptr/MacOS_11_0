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
    function price: NSDecimalNumber; message 'price'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function priceLocale: NSLocale; message 'priceLocale'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function identifier: NSString; message 'identifier'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function subscriptionPeriod: SKProductSubscriptionPeriod; message 'subscriptionPeriod'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function numberOfPeriods: NSUInteger; message 'numberOfPeriods'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function paymentMode: SKProductDiscountPaymentMode; message 'paymentMode'; { available in ios 11.2, macos 10.13.2, watchos 6.2 }
    function type_: SKProductDiscountType; message 'type'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
  end;
{$endif}

