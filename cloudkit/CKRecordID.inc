{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKRecordID.h }

{$ifdef TYPES}
type
  CKRecordIDPtr = ^CKRecordID;
{$endif}

{$ifdef CLASSES}

type
  CKRecordID = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithRecordName (recordName: NSString): id; message 'initWithRecordName:';
    function initWithRecordName_zoneID (recordName: NSString; zoneID: CKRecordZoneID): id; message 'initWithRecordName:zoneID:'; { NS_DESIGNATED_INITIALIZER }
    function recordName: NSString; message 'recordName';
    function zoneID: CKRecordZoneID; message 'zoneID';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

