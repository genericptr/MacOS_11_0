{ Parsed from MapKit.framework MKCircle.h }

{$ifdef TYPES}
type
  MKCirclePtr = ^MKCircle;
{$endif}

{$ifdef CLASSES}

type
  MKCircle = objcclass external (MKShape, MKOverlayProtocol)
  public
    class function circleWithCenterCoordinate_radius (coord: CLLocationCoordinate2D; radius: CLLocationDistance): id; message 'circleWithCenterCoordinate:radius:';
    class function circleWithMapRect (mapRect: MKMapRect): id; message 'circleWithMapRect:';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function radius: CLLocationDistance; message 'radius';
    function boundingMapRect: MKMapRect; message 'boundingMapRect';

    { Adopted protocols }
    function boundingMapRect_: MKMapRect; message 'boundingMapRect';
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
    function coordinate_: CLLocationCoordinate2D; message 'coordinate';
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
  end;
{$endif}

