{ Parsed from StoreKit.framework SKPaymentQueue.h }

{$ifdef TYPES}
type
  SKPaymentQueuePtr = ^SKPaymentQueue;
  SKPaymentQueueDelegateProtocolPtr = ^SKPaymentQueueDelegateProtocol;
  SKPaymentTransactionObserverProtocolPtr = ^SKPaymentTransactionObserverProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKPaymentQueue = objcclass external (NSObject)
  private
    _internal: id;
  public
    procedure setDelegate(newValue: SKPaymentQueueDelegateProtocol); message 'setDelegate:'; { available in ios 13.0, macos 10.15, watchos 6.2 }
    function delegate: SKPaymentQueueDelegateProtocol; message 'delegate'; { available in ios 13.0, macos 10.15, watchos 6.2 }
    function storefront: SKStorefront; message 'storefront'; { available in ios 13.0, macos 10.15, watchos 6.2 }
    class function defaultQueue: id; message 'defaultQueue'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    class function canMakePayments: objcbool; message 'canMakePayments'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure addPayment (payment: SKPayment); message 'addPayment:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure restoreCompletedTransactions; message 'restoreCompletedTransactions'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure restoreCompletedTransactionsWithApplicationUsername (username: NSString); message 'restoreCompletedTransactionsWithApplicationUsername:'; { available in ios 7.0, macos 10.9, watchos 6.2 }
    procedure finishTransaction (transaction: SKPaymentTransaction); message 'finishTransaction:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure startDownloads (downloads: NSArray); message 'startDownloads:'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    procedure pauseDownloads (downloads: NSArray); message 'pauseDownloads:'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    procedure resumeDownloads (downloads: NSArray); message 'resumeDownloads:'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    procedure cancelDownloads (downloads: NSArray); message 'cancelDownloads:'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    procedure addTransactionObserver (observer: SKPaymentTransactionObserverProtocol); message 'addTransactionObserver:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure removeTransactionObserver (observer: SKPaymentTransactionObserverProtocol); message 'removeTransactionObserver:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function transactionObservers: NSArray; message 'transactionObservers'; { available in ios 14.0, macos 11.0, tvos 14.0, watchos 7.0 }
    function transactions: NSArray; message 'transactions'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure showPriceConsentIfNeeded; message 'showPriceConsentIfNeeded'; { unavailable in tvos, macos, watchos } { available in ios 13.4 }
    procedure presentCodeRedemptionSheet; message 'presentCodeRedemptionSheet'; { unavailable in tvos, macos, watchos } { available in ios 14.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKPaymentQueueDelegateProtocol = objcprotocol external name 'SKPaymentQueueDelegate' (NSObjectProtocol)
  optional
    function paymentQueue_shouldContinueTransaction_inStorefront (paymentQueue: SKPaymentQueue; transaction: SKPaymentTransaction; newStorefront: SKStorefront): objcbool; message 'paymentQueue:shouldContinueTransaction:inStorefront:'; { available in ios 13.0, macos 10.15, watchos 6.2 }
    function paymentQueueShouldShowPriceConsent (paymentQueue: SKPaymentQueue): objcbool; message 'paymentQueueShouldShowPriceConsent:'; { unavailable in tvos, macos, watchos } { available in ios 13.4 }
  end;

type
  SKPaymentTransactionObserverProtocol = objcprotocol external name 'SKPaymentTransactionObserver' (NSObjectProtocol)
  required
    procedure paymentQueue_updatedTransactions (queue: SKPaymentQueue; transactions: NSArray); message 'paymentQueue:updatedTransactions:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  optional
    procedure paymentQueue_removedTransactions (queue: SKPaymentQueue; transactions: NSArray); message 'paymentQueue:removedTransactions:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure paymentQueue_restoreCompletedTransactionsFailedWithError (queue: SKPaymentQueue; error: NSError); message 'paymentQueue:restoreCompletedTransactionsFailedWithError:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure paymentQueueRestoreCompletedTransactionsFinished (queue: SKPaymentQueue); message 'paymentQueueRestoreCompletedTransactionsFinished:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure paymentQueue_updatedDownloads (queue: SKPaymentQueue; downloads: NSArray); message 'paymentQueue:updatedDownloads:'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function paymentQueue_shouldAddStorePayment_forProduct (queue: SKPaymentQueue; payment: SKPayment; product: SKProduct): objcbool; message 'paymentQueue:shouldAddStorePayment:forProduct:';
    procedure paymentQueueDidChangeStorefront (queue: SKPaymentQueue); message 'paymentQueueDidChangeStorefront:'; { available in ios 13.0, macos 10.15, watchos 6.2 }
    procedure paymentQueue_didRevokeEntitlementsForProductIdentifiers (queue: SKPaymentQueue; productIdentifiers: NSArray); message 'paymentQueue:didRevokeEntitlementsForProductIdentifiers:';
  end;
{$endif}

