{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKFetchRecordZoneChangesOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchRecordZoneChangesOperationRecordChangedBlockCallback = reference to procedure (record_: CKRecord); cblock; cdecl;
  CKFetchRecordZoneChangesOperationRecordWithIDWasDeletedBlockCallback = reference to procedure (recordID: CKRecordID; recordType: CKRecordType); cblock; cdecl;
  CKFetchRecordZoneChangesOperationRecordZoneChangeTokensUpdatedBlockCallback = reference to procedure (recordZoneID: CKRecordZoneID; serverChangeToken: CKServerChangeToken; clientChangeTokenData: NSData); cblock; cdecl;
  CKFetchRecordZoneChangesOperationRecordZoneFetchCompletionBlockCallback = reference to procedure (recordZoneID: CKRecordZoneID; serverChangeToken: CKServerChangeToken; clientChangeTokenData: NSData; moreComing: objcbool; recordZoneError: NSError); cblock; cdecl;
  CKFetchRecordZoneChangesOperationFetchRecordZoneChangesCompletionBlockCallback = reference to procedure (operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchRecordZoneChangesOperationPtr = ^CKFetchRecordZoneChangesOperation;
  CKFetchRecordZoneChangesConfigurationPtr = ^CKFetchRecordZoneChangesConfiguration;
  CKFetchRecordZoneChangesOptionsPtr = ^CKFetchRecordZoneChangesOptions;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordZoneChangesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneIDs_configurationsByRecordZoneID (recordZoneIDs: NSArray; configurationsByRecordZoneID: NSDictionary): id; message 'initWithRecordZoneIDs:configurationsByRecordZoneID:';
    procedure setRecordZoneIDs(newValue: NSArray); message 'setRecordZoneIDs:';
    function recordZoneIDs: NSArray; message 'recordZoneIDs';
    procedure setConfigurationsByRecordZoneID(newValue: NSDictionary); message 'setConfigurationsByRecordZoneID:';
    function configurationsByRecordZoneID: NSDictionary; message 'configurationsByRecordZoneID';
    procedure setFetchAllChanges(newValue: objcbool); message 'setFetchAllChanges:';
    function fetchAllChanges: objcbool; message 'fetchAllChanges';
    procedure setRecordChangedBlock(newValue: CKFetchRecordZoneChangesOperationRecordChangedBlockCallback); message 'setRecordChangedBlock:';
    function recordChangedBlock: CKFetchRecordZoneChangesOperationRecordChangedBlockCallback; message 'recordChangedBlock';
    procedure setRecordWithIDWasDeletedBlock(newValue: CKFetchRecordZoneChangesOperationRecordWithIDWasDeletedBlockCallback); message 'setRecordWithIDWasDeletedBlock:';
    function recordWithIDWasDeletedBlock: CKFetchRecordZoneChangesOperationRecordWithIDWasDeletedBlockCallback; message 'recordWithIDWasDeletedBlock';
    procedure setRecordZoneChangeTokensUpdatedBlock(newValue: CKFetchRecordZoneChangesOperationRecordZoneChangeTokensUpdatedBlockCallback); message 'setRecordZoneChangeTokensUpdatedBlock:';
    function recordZoneChangeTokensUpdatedBlock: CKFetchRecordZoneChangesOperationRecordZoneChangeTokensUpdatedBlockCallback; message 'recordZoneChangeTokensUpdatedBlock';
    procedure setRecordZoneFetchCompletionBlock(newValue: CKFetchRecordZoneChangesOperationRecordZoneFetchCompletionBlockCallback); message 'setRecordZoneFetchCompletionBlock:';
    function recordZoneFetchCompletionBlock: CKFetchRecordZoneChangesOperationRecordZoneFetchCompletionBlockCallback; message 'recordZoneFetchCompletionBlock';
    procedure setFetchRecordZoneChangesCompletionBlock(newValue: CKFetchRecordZoneChangesOperationFetchRecordZoneChangesCompletionBlockCallback); message 'setFetchRecordZoneChangesCompletionBlock:';
    function fetchRecordZoneChangesCompletionBlock: CKFetchRecordZoneChangesOperationFetchRecordZoneChangesCompletionBlockCallback; message 'fetchRecordZoneChangesCompletionBlock';
  end;


type
  Deprecated = objccategory external (CKFetchRecordZoneChangesOperation)
    function initWithRecordZoneIDs_optionsByRecordZoneID (recordZoneIDs_: NSArray; optionsByRecordZoneID: NSDictionary): id; message 'initWithRecordZoneIDs:optionsByRecordZoneID:'; deprecated 'replace with initWithRecordZoneIDs:configurationsByRecordZoneID:';
    procedure setOptionsByRecordZoneID(newValue: NSDictionary); message 'setOptionsByRecordZoneID:'; deprecated 'replace with configurationsByRecordZoneID';
    function optionsByRecordZoneID: NSDictionary; message 'optionsByRecordZoneID'; deprecated 'replace with configurationsByRecordZoneID';
  end;


type
  CKFetchRecordZoneChangesConfiguration = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  CKFetchRecordZoneChangesOptions = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

