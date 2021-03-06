{ Parsed from CloudKit.framework CKFetchRecordZonesOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchRecordZonesOperationFetchRecordZonesCompletionBlockCallback = reference to procedure (recordZonesByZoneID: NSDictionary; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchRecordZonesOperationPtr = ^CKFetchRecordZonesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordZonesOperation = objcclass external (CKDatabaseOperation)
  public
    class function fetchAllRecordZonesOperation: id; message 'fetchAllRecordZonesOperation';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneIDs (zoneIDs: NSArray): id; message 'initWithRecordZoneIDs:';
    procedure setRecordZoneIDs(newValue: NSArray); message 'setRecordZoneIDs:';
    function recordZoneIDs: NSArray; message 'recordZoneIDs';
    procedure setFetchRecordZonesCompletionBlock(newValue: CKFetchRecordZonesOperationFetchRecordZonesCompletionBlockCallback); message 'setFetchRecordZonesCompletionBlock:';
    function fetchRecordZonesCompletionBlock: CKFetchRecordZonesOperationFetchRecordZonesCompletionBlockCallback; message 'fetchRecordZonesCompletionBlock';
  end;
{$endif}

