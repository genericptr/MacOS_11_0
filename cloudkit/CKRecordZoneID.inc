{ Parsed from CloudKit.framework CKRecordZoneID.h }

{$ifdef TYPES}
type
  CKRecordZoneIDPtr = ^CKRecordZoneID;
{$endif}

{$ifdef CLASSES}

type
  CKRecordZoneID = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithZoneName_ownerName (zoneName: NSString; ownerName: NSString): id; message 'initWithZoneName:ownerName:'; { NS_DESIGNATED_INITIALIZER }
    function zoneName: NSString; message 'zoneName';
    function ownerName: NSString; message 'ownerName';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

