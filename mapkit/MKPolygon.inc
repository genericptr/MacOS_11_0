{ Parsed from MapKit.framework MKPolygon.h }

{$ifdef TYPES}
type
  MKPolygonPtr = ^MKPolygon;
{$endif}

{$ifdef CLASSES}

type
  MKPolygon = objcclass external (MKMultiPoint, MKOverlayProtocol)
  public
    class function polygonWithPoints_count (points_: MKMapPointPtr; count: NSUInteger): id; message 'polygonWithPoints:count:';
    class function polygonWithPoints_count_interiorPolygons (points_: MKMapPointPtr; count: NSUInteger; interiorPolygons: NSArray): id; message 'polygonWithPoints:count:interiorPolygons:';
    class function polygonWithCoordinates_count (coords: CLLocationCoordinate2DPtr; count: NSUInteger): id; message 'polygonWithCoordinates:count:';
    class function polygonWithCoordinates_count_interiorPolygons (coords: CLLocationCoordinate2DPtr; count: NSUInteger; interiorPolygons: NSArray): id; message 'polygonWithCoordinates:count:interiorPolygons:';
    function interiorPolygons: NSArray; message 'interiorPolygons';

    { Adopted protocols }
    function boundingMapRect: MKMapRect; message 'boundingMapRect';
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
  end;
{$endif}

