{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKFetchRecordsOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchRecordsOperationPerRecordProgressBlockCallback = reference to function (recordID: CKRecordID; progress: double): pointer; cblock; cdecl;
  CKFetchRecordsOperationPerRecordCompletionBlockCallback = reference to function (record_: CKRecord; recordID: CKRecordID; error: NSError): pointer; cblock; cdecl;
  CKFetchRecordsOperationFetchRecordsCompletionBlockCallback = reference to function (recordsByRecordID: NSDictionary; operationError: NSError): pointer; cblock; cdecl;
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

