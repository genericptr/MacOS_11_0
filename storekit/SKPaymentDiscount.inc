{ Parsed from StoreKit.framework SKPaymentDiscount.h }

{$ifdef TYPES}
type
  SKPaymentDiscountPtr = ^SKPaymentDiscount;
{$endif}

{$ifdef CLASSES}

type
  SKPaymentDiscount = objcclass external (NSObject)
  private
    _internal: id;
  public
    function initWithIdentifier_keyIdentifier_nonce_signature_timestamp (identifier: NSString; keyIdentifier: NSString; nonce: NSUUID; signature: NSString; timestamp: NSNumber): id; message 'initWithIdentifier:keyIdentifier:nonce:signature:timestamp:'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function identifier: NSString; message 'identifier'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function keyIdentifier: NSString; message 'keyIdentifier'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function nonce: NSUUID; message 'nonce'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function signature: NSString; message 'signature'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
    function timestamp: NSNumber; message 'timestamp'; { available in ios 12.2, macos 10.14.4, watchos 6.2 }
  end;
{$endif}

