{ Parsed from StoreKit.framework SKPayment.h }

{$ifdef TYPES}
type
  SKPaymentPtr = ^SKPayment;
  SKMutablePaymentPtr = ^SKMutablePayment;
{$endif}

{$ifdef CLASSES}

type
  SKPayment = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _internal: id;
  public
    class function paymentWithProduct (product: SKProduct): id; message 'paymentWithProduct:'; { available in ios , macos , watchos  }
    class function paymentWithProductIdentifier (identifier: NSString): id; message 'paymentWithProductIdentifier:'; { unavailable in tvos, macos, watchos }
    function productIdentifier: NSString; message 'productIdentifier'; { available in ios , macos , watchos  }
    function requestData: NSData; message 'requestData'; { available in ios , macos , watchos  }
    function quantity: NSInteger; message 'quantity'; { available in ios , macos , watchos  }
    function applicationUsername: NSString; message 'applicationUsername'; { available in ios , macos , watchos  }
    function simulatesAskToBuyInSandbox: objcbool; message 'simulatesAskToBuyInSandbox'; { available in ios , macos , watchos  }
    function paymentDiscount: SKPaymentDiscount; message 'paymentDiscount'; { available in ios , macos , watchos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  SKMutablePayment = objcclass external (SKPayment)
  public
    procedure setApplicationUsername(newValue: NSString); message 'setApplicationUsername:'; { available in ios , macos , watchos  }
    function applicationUsername: NSString; message 'applicationUsername'; { available in ios , macos , watchos  }
    procedure setPaymentDiscount(newValue: SKPaymentDiscount); message 'setPaymentDiscount:'; { available in ios , macos , watchos  }
    function paymentDiscount: SKPaymentDiscount; message 'paymentDiscount'; { available in ios , macos , watchos  }
    procedure setProductIdentifier(newValue: NSString); message 'setProductIdentifier:'; { available in ios , macos , watchos  }
    function productIdentifier: NSString; message 'productIdentifier'; { available in ios , macos , watchos  }
    procedure setQuantity(newValue: NSInteger); message 'setQuantity:'; { available in ios , macos , watchos  }
    function quantity: NSInteger; message 'quantity'; { available in ios , macos , watchos  }
    procedure setRequestData(newValue: NSData); message 'setRequestData:'; { available in ios , macos , watchos  }
    function requestData: NSData; message 'requestData'; { available in ios , macos , watchos  }
    procedure setSimulatesAskToBuyInSandbox(newValue: objcbool); message 'setSimulatesAskToBuyInSandbox:'; { available in ios , macos , watchos  }
    function simulatesAskToBuyInSandbox: objcbool; message 'simulatesAskToBuyInSandbox'; { available in ios , macos , watchos  }
  end;
{$endif}

