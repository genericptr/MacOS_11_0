{ Parsed from MapKit.framework MKPolyline.h }

{$ifdef TYPES}
type
  MKPolylinePtr = ^MKPolyline;
{$endif}

{$ifdef CLASSES}

type
  MKPolyline = objcclass external (MKMultiPoint, MKOverlayProtocol)
  public
    class function polylineWithPoints_count (points_: MKMapPointPtr; count: NSUInteger): id; message 'polylineWithPoints:count:';
    class function polylineWithCoordinates_count (coords: CLLocationCoordinate2DPtr; count: NSUInteger): id; message 'polylineWithCoordinates:count:';

    { Adopted protocols }
    function boundingMapRect: MKMapRect; message 'boundingMapRect';
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in macos 10.9, ios 7.0 }
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
  end;
{$endif}

