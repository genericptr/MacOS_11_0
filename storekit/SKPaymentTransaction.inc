{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKPaymentTransaction.h }

{$ifdef TYPES}
type
  SKPaymentTransactionPtr = ^SKPaymentTransaction;
{$endif}

{$ifdef TYPES}
type
  SKPaymentTransactionState = NSInteger;
  SKPaymentTransactionStatePtr = ^SKPaymentTransactionState;

const
  SKPaymentTransactionStatePurchasing = 0;
  SKPaymentTransactionStatePurchased = 1;
  SKPaymentTransactionStateFailed = 2;
  SKPaymentTransactionStateRestored = 3;
  SKPaymentTransactionStateDeferred = 4 { available in ios , macos , watchos  };
{$endif}

{$ifdef CLASSES}

type
  SKPaymentTransaction = objcclass external (NSObject)
  private
    _internal: id;
  public
    function error: NSError; message 'error'; { available in ios , macos , watchos  }
    function originalTransaction: SKPaymentTransaction; message 'originalTransaction'; { available in ios , macos , watchos  }
    function payment: SKPayment; message 'payment'; { available in ios , macos , watchos  }
    function downloads: NSArray; message 'downloads'; { available in ios , macos , watchos  }
    function transactionDate: NSDate; message 'transactionDate'; { available in ios , macos , watchos  }
    function transactionIdentifier: NSString; message 'transactionIdentifier'; { available in ios , macos , watchos  }
    function transactionReceipt: NSData; message 'transactionReceipt'; { unavailable in macos, watchos }
    function transactionState: SKPaymentTransactionState; message 'transactionState'; { available in ios , macos , watchos  }
  end;
{$endif}

