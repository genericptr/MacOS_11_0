{ Parsed from CloudKit.framework CKShare.h }

{$ifdef TYPES}
type
  CKSharePtr = ^CKShare;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKRecordTypeShare: CKRecordType { available in macos , ios , tvos , watchos  }; cvar; external;
  CKShareTitleKey: CKRecordFieldKey { available in macos , ios , tvos , watchos  }; cvar; external;
  CKShareThumbnailImageDataKey: CKRecordFieldKey { available in macos , ios , tvos , watchos  }; cvar; external;
  CKShareTypeKey: CKRecordFieldKey { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKShare = objcclass external (CKRecord, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithRootRecord (rootRecord: CKRecord): id; message 'initWithRootRecord:';
    function initWithRootRecord_shareID (rootRecord: CKRecord; shareID: CKRecordID): id; message 'initWithRootRecord:shareID:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPublicPermission(newValue: CKShareParticipantPermission); message 'setPublicPermission:';
    function publicPermission: CKShareParticipantPermission; message 'publicPermission';
    function URL: NSURL; message 'URL';
    function participants: NSArray; message 'participants';
    function owner: CKShareParticipant; message 'owner';
    function currentUserParticipant: CKShareParticipant; message 'currentUserParticipant';
    procedure addParticipant (participant: CKShareParticipant); message 'addParticipant:';
    procedure removeParticipant (participant: CKShareParticipant); message 'removeParticipant:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithRecordType (recordType_: CKRecordType): id; message 'initWithRecordType:';
    function initWithRecordType_recordID (recordType_: CKRecordType; recordID_: CKRecordID): id; message 'initWithRecordType:recordID:';
    function initWithRecordType_zoneID (recordType_: CKRecordType; zoneID: CKRecordZoneID): id; message 'initWithRecordType:zoneID:';
  end;
{$endif}

