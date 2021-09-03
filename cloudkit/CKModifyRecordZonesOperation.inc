{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKModifyRecordZonesOperation.h }

{$ifdef CALLBACKS}
type
  CKModifyRecordZonesOperationModifyRecordZonesCompletionBlockCallback = reference to function (savedRecordZones: NSArray; deletedRecordZoneIDs: NSArray; operationError: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKModifyRecordZonesOperationPtr = ^CKModifyRecordZonesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifyRecordZonesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZonesToSave_recordZoneIDsToDelete (recordZonesToSave: NSArray; recordZoneIDsToDelete: NSArray): id; message 'initWithRecordZonesToSave:recordZoneIDsToDelete:';
    procedure setRecordZonesToSave(newValue: NSArray); message 'setRecordZonesToSave:';
    function recordZonesToSave: NSArray; message 'recordZonesToSave';
    procedure setRecordZoneIDsToDelete(newValue: NSArray); message 'setRecordZoneIDsToDelete:';
    function recordZoneIDsToDelete: NSArray; message 'recordZoneIDsToDelete';
    procedure setModifyRecordZonesCompletionBlock(newValue: CKModifyRecordZonesOperationModifyRecordZonesCompletionBlockCallback); message 'setModifyRecordZonesCompletionBlock:';
    function modifyRecordZonesCompletionBlock: CKModifyRecordZonesOperationModifyRecordZonesCompletionBlockCallback; message 'modifyRecordZonesCompletionBlock';
  end;
{$endif}

