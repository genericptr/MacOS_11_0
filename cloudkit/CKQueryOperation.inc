{ Parsed from CloudKit.framework CKQueryOperation.h }

{$ifdef CALLBACKS}
type
  CKQueryOperationRecordFetchedBlockCallback = reference to procedure (record_: CKRecord); cblock; cdecl;
  CKQueryOperationQueryCompletionBlockCallback = reference to procedure (cursor: CKQueryCursor; operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKQueryCursorPtr = ^CKQueryCursor;
  CKQueryOperationPtr = ^CKQueryOperation;
{$endif}

{$ifdef CLASSES}

type
  CKQueryCursor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKQueryOperationMaximumResults: NSUInteger { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKQueryOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithQuery (query: CKQuery): id; message 'initWithQuery:';
    function initWithCursor (cursor: CKQueryCursor): id; message 'initWithCursor:';
    procedure setQuery(newValue: CKQuery); message 'setQuery:';
    function query: CKQuery; message 'query';
    procedure setCursor(newValue: CKQueryCursor); message 'setCursor:';
    function cursor: CKQueryCursor; message 'cursor';
    procedure setZoneID(newValue: CKRecordZoneID); message 'setZoneID:';
    function zoneID: CKRecordZoneID; message 'zoneID';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';
    procedure setRecordFetchedBlock(newValue: CKQueryOperationRecordFetchedBlockCallback); message 'setRecordFetchedBlock:';
    function recordFetchedBlock: CKQueryOperationRecordFetchedBlockCallback; message 'recordFetchedBlock';
    procedure setQueryCompletionBlock(newValue: CKQueryOperationQueryCompletionBlockCallback); message 'setQueryCompletionBlock:';
    function queryCompletionBlock: CKQueryOperationQueryCompletionBlockCallback; message 'queryCompletionBlock';
  end;
{$endif}

