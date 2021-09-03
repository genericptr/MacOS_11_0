{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLCircularRegion.h }

{$ifdef TYPES}
type
  CLCircularRegionPtr = ^CLCircularRegion;
{$endif}

{$ifdef CLASSES}

type
  CLCircularRegion = objcclass external (CLRegion)
  public
    function initWithCenter_radius_identifier (center_: CLLocationCoordinate2D; radius_: CLLocationDistance; identifier_: NSString): id; message 'initWithCenter:radius:identifier:';
    function center: CLLocationCoordinate2D; message 'center';
    function radius: CLLocationDistance; message 'radius';
    function containsCoordinate (coordinate: CLLocationCoordinate2D): objcbool; message 'containsCoordinate:';
  end;
{$endif}

