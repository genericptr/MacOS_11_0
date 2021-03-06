{ Parsed from CloudKit.framework CKFetchDatabaseChangesOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchDatabaseChangesOperationRecordZoneWithIDChangedBlockCallback = reference to procedure (zoneID: CKRecordZoneID); cblock; cdecl;
  CKFetchDatabaseChangesOperationRecordZoneWithIDWasDeletedBlockCallback = reference to procedure (zoneID: CKRecordZoneID); cblock; cdecl;
  CKFetchDatabaseChangesOperationRecordZoneWithIDWasPurgedBlockCallback = reference to procedure (zoneID: CKRecordZoneID); cblock; cdecl;
  CKFetchDatabaseChangesOperationChangeTokenUpdatedBlockCallback = reference to procedure (serverChangeToken: CKServerChangeToken); cblock; cdecl;
  CKFetchDatabaseChangesOperationFetchDatabaseChangesCompletionBlockCallback = reference to procedure (serverChangeToken: CKServerChangeToken; moreComing: objcbool; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchDatabaseChangesOperationPtr = ^CKFetchDatabaseChangesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchDatabaseChangesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithPreviousServerChangeToken (previousServerChangeToken: CKServerChangeToken): id; message 'initWithPreviousServerChangeToken:';
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setFetchAllChanges(newValue: objcbool); message 'setFetchAllChanges:';
    function fetchAllChanges: objcbool; message 'fetchAllChanges';
    procedure setRecordZoneWithIDChangedBlock(newValue: CKFetchDatabaseChangesOperationRecordZoneWithIDChangedBlockCallback); message 'setRecordZoneWithIDChangedBlock:';
    function recordZoneWithIDChangedBlock: CKFetchDatabaseChangesOperationRecordZoneWithIDChangedBlockCallback; message 'recordZoneWithIDChangedBlock';
    procedure setRecordZoneWithIDWasDeletedBlock(newValue: CKFetchDatabaseChangesOperationRecordZoneWithIDWasDeletedBlockCallback); message 'setRecordZoneWithIDWasDeletedBlock:';
    function recordZoneWithIDWasDeletedBlock: CKFetchDatabaseChangesOperationRecordZoneWithIDWasDeletedBlockCallback; message 'recordZoneWithIDWasDeletedBlock';
    procedure setRecordZoneWithIDWasPurgedBlock(newValue: CKFetchDatabaseChangesOperationRecordZoneWithIDWasPurgedBlockCallback); message 'setRecordZoneWithIDWasPurgedBlock:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function recordZoneWithIDWasPurgedBlock: CKFetchDatabaseChangesOperationRecordZoneWithIDWasPurgedBlockCallback; message 'recordZoneWithIDWasPurgedBlock'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setChangeTokenUpdatedBlock(newValue: CKFetchDatabaseChangesOperationChangeTokenUpdatedBlockCallback); message 'setChangeTokenUpdatedBlock:';
    function changeTokenUpdatedBlock: CKFetchDatabaseChangesOperationChangeTokenUpdatedBlockCallback; message 'changeTokenUpdatedBlock';
    procedure setFetchDatabaseChangesCompletionBlock(newValue: CKFetchDatabaseChangesOperationFetchDatabaseChangesCompletionBlockCallback); message 'setFetchDatabaseChangesCompletionBlock:';
    function fetchDatabaseChangesCompletionBlock: CKFetchDatabaseChangesOperationFetchDatabaseChangesCompletionBlockCallback; message 'fetchDatabaseChangesCompletionBlock';
  end;
{$endif}

