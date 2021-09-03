{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKFetchDatabaseChangesOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchDatabaseChangesOperationRecordZoneWithIDChangedBlockCallback = reference to function (zoneID: CKRecordZoneID): pointer; cblock; cdecl;
  CKFetchDatabaseChangesOperationRecordZoneWithIDWasDeletedBlockCallback = reference to function (zoneID: CKRecordZoneID): pointer; cblock; cdecl;
  CKFetchDatabaseChangesOperationRecordZoneWithIDWasPurgedBlockCallback = reference to function (zoneID: CKRecordZoneID): pointer; cblock; cdecl;
  CKFetchDatabaseChangesOperationChangeTokenUpdatedBlockCallback = reference to function (serverChangeToken: CKServerChangeToken): pointer; cblock; cdecl;
  CKFetchDatabaseChangesOperationFetchDatabaseChangesCompletionBlockCallback = reference to function (serverChangeToken: CKServerChangeToken; moreComing: objcbool; operationError: NSError): pointer; cblock; cdecl;
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
    procedure setRecordZoneWithIDWasPurgedBlock(newValue: CKFetchDatabaseChangesOperationRecordZoneWithIDWasPurgedBlockCallback); message 'setRecordZoneWithIDWasPurgedBlock:'; { available in macos , ios , tvos , watchos  }
    function recordZoneWithIDWasPurgedBlock: CKFetchDatabaseChangesOperationRecordZoneWithIDWasPurgedBlockCallback; message 'recordZoneWithIDWasPurgedBlock'; { available in macos , ios , tvos , watchos  }
    procedure setChangeTokenUpdatedBlock(newValue: CKFetchDatabaseChangesOperationChangeTokenUpdatedBlockCallback); message 'setChangeTokenUpdatedBlock:';
    function changeTokenUpdatedBlock: CKFetchDatabaseChangesOperationChangeTokenUpdatedBlockCallback; message 'changeTokenUpdatedBlock';
    procedure setFetchDatabaseChangesCompletionBlock(newValue: CKFetchDatabaseChangesOperationFetchDatabaseChangesCompletionBlockCallback); message 'setFetchDatabaseChangesCompletionBlock:';
    function fetchDatabaseChangesCompletionBlock: CKFetchDatabaseChangesOperationFetchDatabaseChangesCompletionBlockCallback; message 'fetchDatabaseChangesCompletionBlock';
  end;
{$endif}

