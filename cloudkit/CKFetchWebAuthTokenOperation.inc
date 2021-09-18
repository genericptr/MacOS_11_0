{ Parsed from CloudKit.framework CKFetchWebAuthTokenOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchWebAuthTokenOperationFetchWebAuthTokenCompletionBlockCallback = reference to procedure (webAuthToken: NSString; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchWebAuthTokenOperationPtr = ^CKFetchWebAuthTokenOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchWebAuthTokenOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithAPIToken (APIToken: NSString): id; message 'initWithAPIToken:';
    procedure setAPIToken(newValue: NSString); message 'setAPIToken:';
    function APIToken: NSString; message 'APIToken';
    procedure setFetchWebAuthTokenCompletionBlock(newValue: CKFetchWebAuthTokenOperationFetchWebAuthTokenCompletionBlockCallback); message 'setFetchWebAuthTokenCompletionBlock:';
    function fetchWebAuthTokenCompletionBlock: CKFetchWebAuthTokenOperationFetchWebAuthTokenCompletionBlockCallback; message 'fetchWebAuthTokenCompletionBlock';
  end;
{$endif}

