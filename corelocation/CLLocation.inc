{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLLocation.h }

{$ifdef TYPES}
type
  CLFloorPtr = ^CLFloor;
  CLLocationPtr = ^CLLocation;
{$endif}

{$ifdef TYPES}
type
  CLLocationDegrees = double;
  CLLocationDegreesPtr = ^CLLocationDegrees;
  CLLocationAccuracy = double;
  CLLocationAccuracyPtr = ^CLLocationAccuracy;
  CLLocationSpeed = double;
  CLLocationSpeedPtr = ^CLLocationSpeed;
  CLLocationSpeedAccuracy = double;
  CLLocationSpeedAccuracyPtr = ^CLLocationSpeedAccuracy;
  CLLocationDirection = double;
  CLLocationDirectionPtr = ^CLLocationDirection;
  CLLocationDirectionAccuracy = double;
  CLLocationDirectionAccuracyPtr = ^CLLocationDirectionAccuracy;

type
  CLLocationCoordinate2D = record
    latitude: CLLocationDegrees;
    longitude: CLLocationDegrees;
  end;
type
  CLLocationCoordinate2DPtr = ^CLLocationCoordinate2D;

type
  CLLocationDistance = double;
  CLLocationDistancePtr = ^CLLocationDistance;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCLDistanceFilterNone: CLLocationDistance; cvar; external;
  kCLLocationAccuracyBestForNavigation: CLLocationAccuracy { available in ios , macos  }; cvar; external;
  kCLLocationAccuracyBest: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyNearestTenMeters: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyHundredMeters: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyKilometer: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyThreeKilometers: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyReduced: CLLocationAccuracy { available in ios , macos , watchos , tvos  }; cvar; external;
  CLLocationDistanceMax: CLLocationDistance { available in ios , macos  }; cvar; external;
  CLTimeIntervalMax: NSTimeInterval { available in ios , macos  }; cvar; external;
  kCLLocationCoordinate2DInvalid: CLLocationCoordinate2D { available in ios , macos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CLLocationCoordinate2DIsValid(coord: CLLocationCoordinate2D): objcbool; cdecl; external; { available in ios , macos  }
function CLLocationCoordinate2DMake(latitude: CLLocationDegrees; longitude: CLLocationDegrees): CLLocationCoordinate2D; cdecl; external; { available in ios , macos  }
{$endif}

{$ifdef CLASSES}

type
  CLFloor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function level: NSInteger; message 'level';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  CLLocation = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: id;
  public
    function initWithLatitude_longitude (latitude: CLLocationDegrees; longitude: CLLocationDegrees): id; message 'initWithLatitude:longitude:';
    function initWithCoordinate_altitude_horizontalAccuracy_verticalAccuracy_timestamp (coordinate: CLLocationCoordinate2D; altitude: CLLocationDistance; hAccuracy: CLLocationAccuracy; vAccuracy: CLLocationAccuracy; timestamp: NSDate): id; message 'initWithCoordinate:altitude:horizontalAccuracy:verticalAccuracy:timestamp:';
    function initWithCoordinate_altitude_horizontalAccuracy_verticalAccuracy_course_speed_timestamp (coordinate: CLLocationCoordinate2D; altitude: CLLocationDistance; hAccuracy: CLLocationAccuracy; vAccuracy: CLLocationAccuracy; course: CLLocationDirection; speed: CLLocationSpeed; timestamp: NSDate): id; message 'initWithCoordinate:altitude:horizontalAccuracy:verticalAccuracy:course:speed:timestamp:'; { available in ios , macos  }
    function initWithCoordinate_altitude_horizontalAccuracy_verticalAccuracy_course_courseAccuracy_speed_speedAccuracy_timestamp (coordinate: CLLocationCoordinate2D; altitude: CLLocationDistance; hAccuracy: CLLocationAccuracy; vAccuracy: CLLocationAccuracy; course: CLLocationDirection; courseAccuracy: CLLocationDirectionAccuracy; speed: CLLocationSpeed; speedAccuracy: CLLocationSpeedAccuracy; timestamp: NSDate): id; message 'initWithCoordinate:altitude:horizontalAccuracy:verticalAccuracy:course:courseAccuracy:speed:speedAccuracy:timestamp:'; { available in ios , macos , watchos , tvos  }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function altitude: CLLocationDistance; message 'altitude';
    function horizontalAccuracy: CLLocationAccuracy; message 'horizontalAccuracy';
    function verticalAccuracy: CLLocationAccuracy; message 'verticalAccuracy';
    function course: CLLocationDirection; message 'course'; { available in ios , macos  }
    function courseAccuracy: CLLocationDirectionAccuracy; message 'courseAccuracy'; { available in ios , macos , watchos , tvos  }
    function speed: CLLocationSpeed; message 'speed'; { available in ios , macos  }
    function speedAccuracy: CLLocationSpeedAccuracy; message 'speedAccuracy'; { available in macos , ios , watchos , tvos  }
    function timestamp: NSDate; message 'timestamp';
    function floor: CLFloor; message 'floor'; { available in ios , macos  }
    function getDistanceFrom (location: CLLocation): CLLocationDistance; message 'getDistanceFrom:'; { unavailable in watchos, tvos }
    function distanceFromLocation (location: CLLocation): CLLocationDistance; message 'distanceFromLocation:'; { available in ios , macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

