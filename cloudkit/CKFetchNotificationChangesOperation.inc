{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKFetchNotificationChangesOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchNotificationChangesOperationNotificationChangedBlockCallback = reference to function (notification: CKNotification): pointer; cblock; cdecl;
  CKFetchNotificationChangesOperationFetchNotificationChangesCompletionBlockCallback = reference to function (serverChangeToken: CKServerChangeToken; operationError: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchNotificationChangesOperationPtr = ^CKFetchNotificationChangesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchNotificationChangesOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithPreviousServerChangeToken (previousServerChangeToken: CKServerChangeToken): id; message 'initWithPreviousServerChangeToken:';
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    function moreComing: objcbool; message 'moreComing';
    procedure setNotificationChangedBlock(newValue: CKFetchNotificationChangesOperationNotificationChangedBlockCallback); message 'setNotificationChangedBlock:';
    function notificationChangedBlock: CKFetchNotificationChangesOperationNotificationChangedBlockCallback; message 'notificationChangedBlock';
    procedure setFetchNotificationChangesCompletionBlock(newValue: CKFetchNotificationChangesOperationFetchNotificationChangesCompletionBlockCallback); message 'setFetchNotificationChangesCompletionBlock:';
    function fetchNotificationChangesCompletionBlock: CKFetchNotificationChangesOperationFetchNotificationChangesCompletionBlockCallback; message 'fetchNotificationChangesCompletionBlock';
  end;
{$endif}

