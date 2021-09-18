{ Parsed from CloudKit.framework CKFetchSubscriptionsOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchSubscriptionsOperationFetchSubscriptionCompletionBlockCallback = reference to procedure (subscriptionsBySubscriptionID: NSDictionary; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchSubscriptionsOperationPtr = ^CKFetchSubscriptionsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchSubscriptionsOperation = objcclass external (CKDatabaseOperation)
  public
    class function fetchAllSubscriptionsOperation: id; message 'fetchAllSubscriptionsOperation';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithSubscriptionIDs (subscriptionIDs: NSArray): id; message 'initWithSubscriptionIDs:';
    procedure setSubscriptionIDs(newValue: NSArray); message 'setSubscriptionIDs:';
    function subscriptionIDs: NSArray; message 'subscriptionIDs';
    procedure setFetchSubscriptionCompletionBlock(newValue: CKFetchSubscriptionsOperationFetchSubscriptionCompletionBlockCallback); message 'setFetchSubscriptionCompletionBlock:';
    function fetchSubscriptionCompletionBlock: CKFetchSubscriptionsOperationFetchSubscriptionCompletionBlockCallback; message 'fetchSubscriptionCompletionBlock';
  end;
{$endif}

