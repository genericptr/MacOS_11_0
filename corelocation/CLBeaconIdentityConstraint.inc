{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLBeaconIdentityConstraint.h }

{$ifdef TYPES}
type
  CLBeaconIdentityConstraintPtr = ^CLBeaconIdentityConstraint;
{$endif}

{$ifdef TYPES}
type
  CLBeaconMajorValue = cuint16;
  CLBeaconMajorValuePtr = ^CLBeaconMajorValue;
  CLBeaconMinorValue = cuint16;
  CLBeaconMinorValuePtr = ^CLBeaconMinorValue;
{$endif}

{$ifdef CLASSES}

type
  CLBeaconIdentityConstraint = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function UUID: NSUUID; message 'UUID';
    function major: NSNumber; message 'major';
    function minor: NSNumber; message 'minor';
    function initWithUUID (uuid_: NSUUID): id; message 'initWithUUID:';
    function initWithUUID_major (uuid_: NSUUID; major_: CLBeaconMajorValue): id; message 'initWithUUID:major:';
    function initWithUUID_major_minor (uuid_: NSUUID; major_: CLBeaconMajorValue; minor_: CLBeaconMinorValue): id; message 'initWithUUID:major:minor:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

