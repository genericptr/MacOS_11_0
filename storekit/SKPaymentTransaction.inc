{ Parsed from StoreKit.framework SKPaymentTransaction.h }

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
  SKPaymentTransactionStateDeferred = 4 { available in ios 8.0, macos 10.10, watchos 6.2 };
{$endif}

{$ifdef CLASSES}

type
  SKPaymentTransaction = objcclass external (NSObject)
  private
    _internal: id;
  public
    function error: NSError; message 'error'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function originalTransaction: SKPaymentTransaction; message 'originalTransaction'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function payment: SKPayment; message 'payment'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function downloads: NSArray; message 'downloads'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function transactionDate: NSDate; message 'transactionDate'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function transactionIdentifier: NSString; message 'transactionIdentifier'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function transactionReceipt: NSData; message 'transactionReceipt'; { unavailable in macos, watchos }
    function transactionState: SKPaymentTransactionState; message 'transactionState'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  end;
{$endif}

