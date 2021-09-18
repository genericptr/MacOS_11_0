{ Parsed from CloudKit.framework CKFetchRecordsOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchRecordsOperationPerRecordProgressBlockCallback = reference to procedure (recordID: CKRecordID; progress: double); cblock; cdecl;
  CKFetchRecordsOperationPerRecordCompletionBlockCallback = reference to procedure (record_: CKRecord; recordID: CKRecordID; error: NSError); cblock; cdecl;
  CKFetchRecordsOperationFetchRecordsCompletionBlockCallback = reference to procedure (recordsByRecordID: NSDictionary; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchRecordsOperationPtr = ^CKFetchRecordsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordIDs (recordIDs: NSArray): id; message 'initWithRecordIDs:';
    class function fetchCurrentUserRecordOperation: id; message 'fetchCurrentUserRecordOperation';
    procedure setRecordIDs(newValue: NSArray); message 'setRecordIDs:';
    function recordIDs: NSArray; message 'recordIDs';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';
    procedure setPerRecordProgressBlock(newValue: CKFetchRecordsOperationPerRecordProgressBlockCallback); message 'setPerRecordProgressBlock:';
    function perRecordProgressBlock: CKFetchRecordsOperationPerRecordProgressBlockCallback; message 'perRecordProgressBlock';
    procedure setPerRecordCompletionBlock(newValue: CKFetchRecordsOperationPerRecordCompletionBlockCallback); message 'setPerRecordCompletionBlock:';
    function perRecordCompletionBlock: CKFetchRecordsOperationPerRecordCompletionBlockCallback; message 'perRecordCompletionBlock';
    procedure setFetchRecordsCompletionBlock(newValue: CKFetchRecordsOperationFetchRecordsCompletionBlockCallback); message 'setFetchRecordsCompletionBlock:';
    function fetchRecordsCompletionBlock: CKFetchRecordsOperationFetchRecordsCompletionBlockCallback; message 'fetchRecordsCompletionBlock';
  end;
{$endif}

