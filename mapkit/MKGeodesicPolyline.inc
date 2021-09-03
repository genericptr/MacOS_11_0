{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKGeodesicPolyline.h }

{$ifdef TYPES}
type
  MKGeodesicPolylinePtr = ^MKGeodesicPolyline;
{$endif}

{$ifdef CLASSES}

type
  MKGeodesicPolyline = objcclass external (MKPolyline)
  public
    class function polylineWithPoints_count (points_: MKMapPointPtr; count: NSUInteger): id; message 'polylineWithPoints:count:';
    class function polylineWithCoordinates_count (coords: CLLocationCoordinate2DPtr; count: NSUInteger): id; message 'polylineWithCoordinates:count:';
  end;
{$endif}
