{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKRecord.h }

{$ifdef TYPES}
type
  CKRecordPtr = ^CKRecord;
  CKRecordValueProtocolPtr = ^CKRecordValueProtocol;
  CKRecordKeyValueSettingProtocolPtr = ^CKRecordKeyValueSettingProtocol;
{$endif}

{$ifdef TYPES}
type
  CKRecordType = NSString;
  CKRecordTypePtr = ^CKRecordType;
  CKRecordFieldKey = NSString;
  CKRecordFieldKeyPtr = ^CKRecordFieldKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKRecordTypeUserRecord: CKRecordType { available in macos , ios , watchos  }; cvar; external;
  CKRecordParentKey: CKRecordFieldKey { available in macos , ios , tvos , watchos  }; cvar; external;
  CKRecordShareKey: CKRecordFieldKey { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  CKRecordValueProtocol = objcprotocol external name 'CKRecordValue' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  CKRecord = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithRecordType (recordType: CKRecordType): id; message 'initWithRecordType:';
    function initWithRecordType_recordID (recordType: CKRecordType; recordID: CKRecordID): id; message 'initWithRecordType:recordID:';
    function initWithRecordType_zoneID (recordType: CKRecordType; zoneID: CKRecordZoneID): id; message 'initWithRecordType:zoneID:';
    function recordType: CKRecordType; message 'recordType';
    function recordID: CKRecordID; message 'recordID';
    function recordChangeTag: NSString; message 'recordChangeTag';
    function creatorUserRecordID: CKRecordID; message 'creatorUserRecordID';
    function creationDate: NSDate; message 'creationDate';
    function lastModifiedUserRecordID: CKRecordID; message 'lastModifiedUserRecordID';
    function modificationDate: NSDate; message 'modificationDate';
    function objectForKey (key: CKRecordFieldKey): id; message 'objectForKey:';
    procedure setObject_forKey (object_: CKRecordValueProtocol; key: CKRecordFieldKey); message 'setObject:forKey:';
    function allKeys: NSArray; message 'allKeys';
    function allTokens: NSArray; message 'allTokens';
    function objectForKeyedSubscript (key: CKRecordFieldKey): id; message 'objectForKeyedSubscript:';
    procedure setObject_forKeyedSubscript (object_: CKRecordValueProtocol; key: CKRecordFieldKey); message 'setObject:forKeyedSubscript:';
    function changedKeys: NSArray; message 'changedKeys';
    procedure encodeSystemFieldsWithCoder (coder: NSCoder); message 'encodeSystemFieldsWithCoder:';
    function share: CKReference; message 'share'; { available in macos , ios , tvos , watchos  }
    procedure setParent(newValue: CKReference); message 'setParent:'; { available in macos , ios , tvos , watchos  }
    function parent: CKReference; message 'parent'; { available in macos , ios , tvos , watchos  }
    procedure setParentReferenceFromRecord (parentRecord: CKRecord); message 'setParentReferenceFromRecord:'; { available in macos , ios , tvos , watchos  }
    procedure setParentReferenceFromRecordID (parentRecordID: CKRecordID); message 'setParentReferenceFromRecordID:'; { available in macos , ios , tvos , watchos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSString_CKRecordValue = objccategory external name 'CKRecordValue' (NSString)
  end;

type
  NSNumber_CKRecordValue = objccategory external name 'CKRecordValue' (NSNumber)
  end;

type
  NSArray_CKRecordValue = objccategory external name 'CKRecordValue' (NSArray)
  end;

type
  NSDate_CKRecordValue = objccategory external name 'CKRecordValue' (NSDate)
  end;

type
  NSData_CKRecordValue = objccategory external name 'CKRecordValue' (NSData)
  end;

type
  CKReference_CKRecordValue = objccategory external name 'CKRecordValue' (CKReference)
  end;

type
  CKAsset_CKRecordValue = objccategory external name 'CKRecordValue' (CKAsset)
  end;

type
  CKRecordValue = objccategory external (CLLocation)
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CKRecordKeyValueSettingProtocol = objcprotocol external name 'CKRecordKeyValueSetting' (NSObjectProtocol)
    function objectForKey (key: CKRecordFieldKey): id; message 'objectForKey:';
    procedure setObject_forKey (object_: id; key: CKRecordFieldKey); message 'setObject:forKey:';
    function objectForKeyedSubscript (key: CKRecordFieldKey): id; message 'objectForKeyedSubscript:';
    procedure setObject_forKeyedSubscript (object_: id; key: CKRecordFieldKey); message 'setObject:forKeyedSubscript:';
    function allKeys: NSArray; message 'allKeys';
    function changedKeys: NSArray; message 'changedKeys';
  end;
{$endif}

{$ifdef CLASSES}

type
  CKRecordKeyValueSettingConformance = objccategory external (CKRecord)
  end;
{$endif}

