{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKModifySubscriptionsOperation.h }

{$ifdef CALLBACKS}
type
  CKModifySubscriptionsOperationModifySubscriptionsCompletionBlockCallback = reference to procedure (savedSubscriptions: NSArray; deletedSubscriptionIDs: NSArray; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKModifySubscriptionsOperationPtr = ^CKModifySubscriptionsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifySubscriptionsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithSubscriptionsToSave_subscriptionIDsToDelete (subscriptionsToSave: NSArray; subscriptionIDsToDelete: NSArray): id; message 'initWithSubscriptionsToSave:subscriptionIDsToDelete:';
    procedure setSubscriptionsToSave(newValue: NSArray); message 'setSubscriptionsToSave:';
    function subscriptionsToSave: NSArray; message 'subscriptionsToSave';
    procedure setSubscriptionIDsToDelete(newValue: NSArray); message 'setSubscriptionIDsToDelete:';
    function subscriptionIDsToDelete: NSArray; message 'subscriptionIDsToDelete';
    procedure setModifySubscriptionsCompletionBlock(newValue: CKModifySubscriptionsOperationModifySubscriptionsCompletionBlockCallback); message 'setModifySubscriptionsCompletionBlock:';
    function modifySubscriptionsCompletionBlock: CKModifySubscriptionsOperationModifySubscriptionsCompletionBlockCallback; message 'modifySubscriptionsCompletionBlock';
  end;
{$endif}

