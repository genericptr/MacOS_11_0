{ Parsed from CoreLocation.framework CLBeaconRegion.h }

{$ifdef TYPES}
type
  CLBeaconRegionPtr = ^CLBeaconRegion;
  CLBeaconPtr = ^CLBeacon;
{$endif}

{$ifdef CLASSES}

type
  CLBeaconRegion = objcclass external (CLRegion)
  public
    function initWithUUID_identifier (uuid: NSUUID; identifier_: NSString): id; message 'initWithUUID:identifier:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function initWithProximityUUID_identifier (proximityUUID: NSUUID; identifier_: NSString): id; message 'initWithProximityUUID:identifier:'; deprecated 'replace with -initWithUUID:identifier:';
    function initWithUUID_major_identifier (uuid: NSUUID; major: CLBeaconMajorValue; identifier_: NSString): id; message 'initWithUUID:major:identifier:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function initWithProximityUUID_major_identifier (proximityUUID: NSUUID; major: CLBeaconMajorValue; identifier_: NSString): id; message 'initWithProximityUUID:major:identifier:'; deprecated 'replace with -initWithUUID:major:identifier:';
    function initWithUUID_major_minor_identifier (uuid: NSUUID; major: CLBeaconMajorValue; minor: CLBeaconMinorValue; identifier_: NSString): id; message 'initWithUUID:major:minor:identifier:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function initWithProximityUUID_major_minor_identifier (proximityUUID: NSUUID; major: CLBeaconMajorValue; minor: CLBeaconMinorValue; identifier_: NSString): id; message 'initWithProximityUUID:major:minor:identifier:'; deprecated 'replace with -initWithUUID:major:identifier:';
    function initWithBeaconIdentityConstraint_identifier (beaconIdentityConstraint: CLBeaconIdentityConstraint; identifier_: NSString): id; message 'initWithBeaconIdentityConstraint:identifier:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function peripheralDataWithMeasuredPower (measuredPower: NSNumber): NSMutableDictionary; message 'peripheralDataWithMeasuredPower:';
    function beaconIdentityConstraint: CLBeaconIdentityConstraint; message 'beaconIdentityConstraint'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function UUID: NSUUID; message 'UUID'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function proximityUUID: NSUUID; message 'proximityUUID'; deprecated 'replace with -UUID';
    function major: NSNumber; message 'major';
    function minor: NSNumber; message 'minor';
    procedure setNotifyEntryStateOnDisplay(newValue: objcbool); message 'setNotifyEntryStateOnDisplay:';
    function notifyEntryStateOnDisplay: objcbool; message 'notifyEntryStateOnDisplay';
  end;

type
  CLBeacon = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: CLBeaconInternal;
  public
    function timestamp: NSDate; message 'timestamp'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function UUID: NSUUID; message 'UUID'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    function proximityUUID: NSUUID; message 'proximityUUID'; deprecated 'replace with -UUID';
    function major: NSNumber; message 'major';
    function minor: NSNumber; message 'minor';
    function proximity: CLProximity; message 'proximity';
    function accuracy: CLLocationAccuracy; message 'accuracy';
    function rssi: NSInteger; message 'rssi';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

