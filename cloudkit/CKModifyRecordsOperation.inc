{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKModifyRecordsOperation.h }

{$ifdef CALLBACKS}
type
  CKModifyRecordsOperationPerRecordProgressBlockCallback = reference to procedure (record_: CKRecord; progress: double); cblock; cdecl;
  CKModifyRecordsOperationPerRecordCompletionBlockCallback = reference to procedure (record_: CKRecord; error: NSError); cblock; cdecl;
  CKModifyRecordsOperationModifyRecordsCompletionBlockCallback = reference to procedure (savedRecords: NSArray; deletedRecordIDs: NSArray; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKModifyRecordsOperationPtr = ^CKModifyRecordsOperation;
{$endif}

{$ifdef TYPES}
type
  CKRecordSavePolicy = NSInteger;
  CKRecordSavePolicyPtr = ^CKRecordSavePolicy;

const
  CKRecordSaveIfServerRecordUnchanged = 0;
  CKRecordSaveChangedKeys = 1;
  CKRecordSaveAllKeys = 2;
{$endif}

{$ifdef CLASSES}

type
  CKModifyRecordsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordsToSave_recordIDsToDelete (records: NSArray; recordIDs: NSArray): id; message 'initWithRecordsToSave:recordIDsToDelete:';
    procedure setRecordsToSave(newValue: NSArray); message 'setRecordsToSave:';
    function recordsToSave: NSArray; message 'recordsToSave';
    procedure setRecordIDsToDelete(newValue: NSArray); message 'setRecordIDsToDelete:';
    function recordIDsToDelete: NSArray; message 'recordIDsToDelete';
    procedure setSavePolicy(newValue: CKRecordSavePolicy); message 'setSavePolicy:';
    function savePolicy: CKRecordSavePolicy; message 'savePolicy';
    procedure setClientChangeTokenData(newValue: NSData); message 'setClientChangeTokenData:';
    function clientChangeTokenData: NSData; message 'clientChangeTokenData';
    procedure setAtomic(newValue: objcbool); message 'setAtomic:';
    function atomic: objcbool; message 'atomic';
    procedure setPerRecordProgressBlock(newValue: CKModifyRecordsOperationPerRecordProgressBlockCallback); message 'setPerRecordProgressBlock:';
    function perRecordProgressBlock: CKModifyRecordsOperationPerRecordProgressBlockCallback; message 'perRecordProgressBlock';
    procedure setPerRecordCompletionBlock(newValue: CKModifyRecordsOperationPerRecordCompletionBlockCallback); message 'setPerRecordCompletionBlock:';
    function perRecordCompletionBlock: CKModifyRecordsOperationPerRecordCompletionBlockCallback; message 'perRecordCompletionBlock';
    procedure setModifyRecordsCompletionBlock(newValue: CKModifyRecordsOperationModifyRecordsCompletionBlockCallback); message 'setModifyRecordsCompletionBlock:';
    function modifyRecordsCompletionBlock: CKModifyRecordsOperationModifyRecordsCompletionBlockCallback; message 'modifyRecordsCompletionBlock';
  end;
{$endif}

