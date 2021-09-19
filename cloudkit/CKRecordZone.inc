{ Parsed from CloudKit.framework CKRecordZone.h }

{$ifdef TYPES}
type
  CKRecordZonePtr = ^CKRecordZone;
{$endif}

{$ifdef TYPES}
type
  CKRecordZoneCapabilities = NSUInteger;
  CKRecordZoneCapabilitiesPtr = ^CKRecordZoneCapabilities;

const
  CKRecordZoneCapabilityFetchChanges = 1 shl 0;
  CKRecordZoneCapabilityAtomic = 1 shl 1;
  CKRecordZoneCapabilitySharing = 1 shl 2 { available in macos 10.12, ios 10.0, tvos 10.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKRecordZoneDefaultName: NSString { available in macos 10.10, ios 8.0, watchos 3.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKRecordZone = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function defaultRecordZone: CKRecordZone; message 'defaultRecordZone';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithZoneName (zoneName: NSString): id; message 'initWithZoneName:';
    function initWithZoneID (zoneID: CKRecordZoneID): id; message 'initWithZoneID:';
    function zoneID: CKRecordZoneID; message 'zoneID';
    function capabilities: CKRecordZoneCapabilities; message 'capabilities';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

