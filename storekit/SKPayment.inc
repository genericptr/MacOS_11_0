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
    class function paymentWithProduct (product: SKProduct): id; message 'paymentWithProduct:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    class function paymentWithProductIdentifier (identifier: NSString): id; message 'paymentWithProductIdentifier:'; { unavailable in tvos, macos, watchos }
    function productIdentifier: NSString; message 'productIdentifier'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function requestData: NSData; message 'requestData'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function quantity: NSInteger; message 'quantity'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function applicationUsername: NSString; message 'applicationUsername'; { available in ios 7.0, macos 10.9, watchos 6.2 }
    function simulatesAskToBuyInSandbox: objcbool; message 'simulatesAskToBuyInSandbox'; { available in ios 8.3, macos 10.14, watchos 6.2 }
    function paymentDiscount: SKPaymentDiscount; message 'paymentDiscount'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  SKMutablePayment = objcclass external (SKPayment)
  public
    procedure setApplicationUsername(newValue: NSString); message 'setApplicationUsername:'; { available in ios 7.0, macos 10.9, watchos 6.2 }
    function applicationUsername: NSString; message 'applicationUsername'; { available in ios 7.0, macos 10.9, watchos 6.2 }
    procedure setPaymentDiscount(newValue: SKPaymentDiscount); message 'setPaymentDiscount:'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function paymentDiscount: SKPaymentDiscount; message 'paymentDiscount'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    procedure setProductIdentifier(newValue: NSString); message 'setProductIdentifier:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function productIdentifier: NSString; message 'productIdentifier'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure setQuantity(newValue: NSInteger); message 'setQuantity:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function quantity: NSInteger; message 'quantity'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure setRequestData(newValue: NSData); message 'setRequestData:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function requestData: NSData; message 'requestData'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure setSimulatesAskToBuyInSandbox(newValue: objcbool); message 'setSimulatesAskToBuyInSandbox:'; { available in ios 8.3, macos 10.14, watchos 6.2 }
    function simulatesAskToBuyInSandbox: objcbool; message 'simulatesAskToBuyInSandbox'; { available in ios 8.3, macos 10.14, watchos 6.2 }
  end;
{$endif}

