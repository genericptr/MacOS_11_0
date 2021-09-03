{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKPaymentDiscount.h }

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
    function initWithIdentifier_keyIdentifier_nonce_signature_timestamp (identifier: NSString; keyIdentifier: NSString; nonce: NSUUID; signature: NSString; timestamp: NSNumber): id; message 'initWithIdentifier:keyIdentifier:nonce:signature:timestamp:'; { available in ios , macos , watchos  }
    function identifier: NSString; message 'identifier'; { available in ios , macos , watchos  }
    function keyIdentifier: NSString; message 'keyIdentifier'; { available in ios , macos , watchos  }
    function nonce: NSUUID; message 'nonce'; { available in ios , macos , watchos  }
    function signature: NSString; message 'signature'; { available in ios , macos , watchos  }
    function timestamp: NSNumber; message 'timestamp'; { available in ios , macos , watchos  }
  end;
{$endif}

