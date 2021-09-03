{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKPaymentQueue.h }

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
    procedure setDelegate(newValue: id); message 'setDelegate:'; { available in ios , macos , watchos  }
    function delegate: id; message 'delegate'; { available in ios , macos , watchos  }
    function storefront: SKStorefront; message 'storefront'; { available in ios , macos , watchos  }
    class function defaultQueue: id; message 'defaultQueue'; { available in ios , macos , watchos  }
    class function canMakePayments: objcbool; message 'canMakePayments'; { available in ios , macos , watchos  }
    procedure addPayment (payment: SKPayment); message 'addPayment:'; { available in ios , macos , watchos  }
    procedure restoreCompletedTransactions; message 'restoreCompletedTransactions'; { available in ios , macos , watchos  }
    procedure restoreCompletedTransactionsWithApplicationUsername (username: NSString); message 'restoreCompletedTransactionsWithApplicationUsername:'; { available in ios , macos , watchos  }
    procedure finishTransaction (transaction: SKPaymentTransaction); message 'finishTransaction:'; { available in ios , macos , watchos  }
    procedure startDownloads (downloads: NSArray); message 'startDownloads:'; { available in ios , macos , watchos  }
    procedure pauseDownloads (downloads: NSArray); message 'pauseDownloads:'; { available in ios , macos , watchos  }
    procedure resumeDownloads (downloads: NSArray); message 'resumeDownloads:'; { available in ios , macos , watchos  }
    procedure cancelDownloads (downloads: NSArray); message 'cancelDownloads:'; { available in ios , macos , watchos  }
    procedure addTransactionObserver (observer: id); message 'addTransactionObserver:'; { available in ios , macos , watchos  }
    procedure removeTransactionObserver (observer: id); message 'removeTransactionObserver:'; { available in ios , macos , watchos  }
    function transactionObservers: NSArray; message 'transactionObservers'; { available in ios , macos , tvos , watchos  }
    function transactions: NSArray; message 'transactions'; { available in ios , macos , watchos  }
    procedure showPriceConsentIfNeeded; message 'showPriceConsentIfNeeded'; { unavailable in tvos, macos, watchos }
    procedure presentCodeRedemptionSheet; message 'presentCodeRedemptionSheet'; { unavailable in tvos, macos, watchos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKPaymentQueueDelegateProtocol = objcprotocol external name 'SKPaymentQueueDelegate' (NSObjectProtocol)
  optional
    function paymentQueue_shouldContinueTransaction_inStorefront (paymentQueue: SKPaymentQueue; transaction: SKPaymentTransaction; newStorefront: SKStorefront): objcbool; message 'paymentQueue:shouldContinueTransaction:inStorefront:'; { available in ios , macos , watchos  }
    function paymentQueueShouldShowPriceConsent (paymentQueue: SKPaymentQueue): objcbool; message 'paymentQueueShouldShowPriceConsent:'; { unavailable in tvos, macos, watchos }
  end;

type
  SKPaymentTransactionObserverProtocol = objcprotocol external name 'SKPaymentTransactionObserver' (NSObjectProtocol)
  required
    procedure paymentQueue_updatedTransactions (queue: SKPaymentQueue; transactions: NSArray); message 'paymentQueue:updatedTransactions:'; { available in ios , macos , watchos  }
  optional
    procedure paymentQueue_removedTransactions (queue: SKPaymentQueue; transactions: NSArray); message 'paymentQueue:removedTransactions:'; { available in ios , macos , watchos  }
    procedure paymentQueue_restoreCompletedTransactionsFailedWithError (queue: SKPaymentQueue; error: NSError); message 'paymentQueue:restoreCompletedTransactionsFailedWithError:'; { available in ios , macos , watchos  }
    procedure paymentQueueRestoreCompletedTransactionsFinished (queue: SKPaymentQueue); message 'paymentQueueRestoreCompletedTransactionsFinished:'; { available in ios , macos , watchos  }
    procedure paymentQueue_updatedDownloads (queue: SKPaymentQueue; downloads: NSArray); message 'paymentQueue:updatedDownloads:'; { available in ios , macos , watchos  }
    function paymentQueue_shouldAddStorePayment_forProduct (queue: SKPaymentQueue; payment: SKPayment; product: SKProduct): objcbool; message 'paymentQueue:shouldAddStorePayment:forProduct:';
    procedure paymentQueueDidChangeStorefront (queue: SKPaymentQueue); message 'paymentQueueDidChangeStorefront:'; { available in ios , macos , watchos  }
    procedure paymentQueue_didRevokeEntitlementsForProductIdentifiers (queue: SKPaymentQueue; productIdentifiers: NSArray); message 'paymentQueue:didRevokeEntitlementsForProductIdentifiers:';
  end;
{$endif}

