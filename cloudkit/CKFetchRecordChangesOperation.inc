{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKFetchRecordChangesOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchRecordChangesOperationRecordChangedBlockCallback = reference to procedure (record_: CKRecord); cblock; cdecl;
  CKFetchRecordChangesOperationRecordWithIDWasDeletedBlockCallback = reference to procedure (recordID: CKRecordID); cblock; cdecl;
  CKFetchRecordChangesOperationFetchRecordChangesCompletionBlockCallback = reference to procedure (serverChangeToken: CKServerChangeToken; clientChangeTokenData: NSData; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchRecordChangesOperationPtr = ^CKFetchRecordChangesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordChangesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneID_previousServerChangeToken (recordZoneID: CKRecordZoneID; previousServerChangeToken: CKServerChangeToken): id; message 'initWithRecordZoneID:previousServerChangeToken:';
    procedure setRecordZoneID(newValue: CKRecordZoneID); message 'setRecordZoneID:';
    function recordZoneID: CKRecordZoneID; message 'recordZoneID';
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';
    procedure setRecordChangedBlock(newValue: CKFetchRecordChangesOperationRecordChangedBlockCallback); message 'setRecordChangedBlock:';
    function recordChangedBlock: CKFetchRecordChangesOperationRecordChangedBlockCallback; message 'recordChangedBlock';
    procedure setRecordWithIDWasDeletedBlock(newValue: CKFetchRecordChangesOperationRecordWithIDWasDeletedBlockCallback); message 'setRecordWithIDWasDeletedBlock:';
    function recordWithIDWasDeletedBlock: CKFetchRecordChangesOperationRecordWithIDWasDeletedBlockCallback; message 'recordWithIDWasDeletedBlock';
    function moreComing: objcbool; message 'moreComing';
    procedure setFetchRecordChangesCompletionBlock(newValue: CKFetchRecordChangesOperationFetchRecordChangesCompletionBlockCallback); message 'setFetchRecordChangesCompletionBlock:';
    function fetchRecordChangesCompletionBlock: CKFetchRecordChangesOperationFetchRecordChangesCompletionBlockCallback; message 'fetchRecordChangesCompletionBlock';
  end;
{$endif}

