{ Parsed from CoreLocation.framework CLRegion.h }

{$ifdef TYPES}
type
  CLRegionPtr = ^CLRegion;
{$endif}

{$ifdef TYPES}
type
  CLRegionState = NSInteger;
  CLRegionStatePtr = ^CLRegionState;

const
  CLRegionStateUnknown = 0;
  CLRegionStateInside = 1;
  CLRegionStateOutside = 2;

type
  CLProximity = NSInteger;
  CLProximityPtr = ^CLProximity;

const
  CLProximityUnknown = 0;
  CLProximityImmediate = 1;
  CLProximityNear = 2;
  CLProximityFar = 3;
{$endif}

{$ifdef CLASSES}

type
  CLRegion = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: CLRegionInternal;
  public
    function initCircularRegionWithCenter_radius_identifier (center: CLLocationCoordinate2D; radius: CLLocationDistance; identifier: NSString): id; message 'initCircularRegionWithCenter:radius:identifier:'; { unavailable in tvos }
    function center: CLLocationCoordinate2D; message 'center'; { unavailable in tvos }
    function radius: CLLocationDistance; message 'radius'; { unavailable in tvos }
    function identifier: NSString; message 'identifier'; { available in ios 4.0, macos 10.7 }
    procedure setNotifyOnEntry(newValue: objcbool); message 'setNotifyOnEntry:'; { available in ios 7.0, macos 10.10 }
    function notifyOnEntry: objcbool; message 'notifyOnEntry'; { available in ios 7.0, macos 10.10 }
    procedure setNotifyOnExit(newValue: objcbool); message 'setNotifyOnExit:'; { available in ios 7.0, macos 10.10 }
    function notifyOnExit: objcbool; message 'notifyOnExit'; { available in ios 7.0, macos 10.10 }
    function containsCoordinate (coordinate: CLLocationCoordinate2D): objcbool; message 'containsCoordinate:'; { unavailable in tvos }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

