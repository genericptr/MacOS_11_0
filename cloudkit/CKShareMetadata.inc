{ Parsed from CloudKit.framework CKShareMetadata.h }

{$ifdef TYPES}
type
  CKShareMetadataPtr = ^CKShareMetadata;
{$endif}

{$ifdef CLASSES}

type
  CKShareMetadata = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function containerIdentifier: NSString; message 'containerIdentifier';
    function share: CKShare; message 'share';
    function rootRecordID: CKRecordID; message 'rootRecordID';
    function participantRole: CKShareParticipantRole; message 'participantRole'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    function participantType: CKShareParticipantType; message 'participantType'; deprecated 'replace with participantRole';
    function participantStatus: CKShareParticipantAcceptanceStatus; message 'participantStatus';
    function participantPermission: CKShareParticipantPermission; message 'participantPermission';
    function ownerIdentity: CKUserIdentity; message 'ownerIdentity';
    function rootRecord: CKRecord; message 'rootRecord';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

