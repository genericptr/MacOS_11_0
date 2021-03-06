{ Parsed from MapKit.framework MKGeometry.h }
{$ifdef TYPES}
type
  MKCoordinateSpan = record
    latitudeDelta: CLLocationDegrees;
    longitudeDelta: CLLocationDegrees;
  end;
type
  MKCoordinateSpanPtr = ^MKCoordinateSpan;
type
  MKCoordinateRegion = record
    center: CLLocationCoordinate2D;
    span: MKCoordinateSpan;
  end;
type
  MKCoordinateRegionPtr = ^MKCoordinateRegion;
{$endif}

{$ifdef FUNCTIONS}
function MKCoordinateRegionMakeWithDistance(centerCoordinate: CLLocationCoordinate2D; latitudinalMeters: CLLocationDistance; longitudinalMeters: CLLocationDistance): MKCoordinateRegion; cdecl; external; { available in 9_2 }
{$endif}

{$if ((__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED) or (__MAC_10_9 <= __MAC_OS_X_VERSION_MAX_ALLOWED))}
{$ifdef TYPES}
type
  MKMapPoint = record
    x: double;
    y: double;
  end;
type
  MKMapPointPtr = ^MKMapPoint;
type
  MKMapSize = record
    width: double;
    height: double;
  end;
type
  MKMapSizePtr = ^MKMapSize;
type
  MKMapRect = record
    origin: MKMapPoint;
    size: MKMapSize;
  end;
type
  MKMapRectPtr = ^MKMapRect;

type
  MKZoomScale = CGFloat;
  MKZoomScalePtr = ^MKZoomScale;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  MKMapSizeWorld: MKMapSize { available in macos 10.9, ios 4.0 } { available in 9_2 }; cvar; external;
  MKMapRectWorld: MKMapRect { available in macos 10.9, ios 4.0 } { available in 9_2 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function MKMapPointForCoordinate(coordinate: CLLocationCoordinate2D): MKMapPoint; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKCoordinateForMapPoint(mapPoint: MKMapPoint): CLLocationCoordinate2D; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMetersPerMapPointAtLatitude(latitude: CLLocationDegrees): CLLocationDistance; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapPointsPerMeterAtLatitude(latitude: CLLocationDegrees): double; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMetersBetweenMapPoints(a: MKMapPoint; b: MKMapPoint): CLLocationDistance; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKMapRectNull: MKMapRect { available in macos 10.9, ios 4.0 } { available in 9_2 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function MKMapRectUnion(rect1: MKMapRect; rect2: MKMapRect): MKMapRect; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectIntersection(rect1: MKMapRect; rect2: MKMapRect): MKMapRect; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectInset(rect: MKMapRect; dx: double; dy: double): MKMapRect; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectOffset(rect: MKMapRect; dx: double; dy: double): MKMapRect; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectDivide(rect: MKMapRect; slice: MKMapRectPtr; remainder: MKMapRectPtr; amount: double; edge: CGRectEdge): pointer; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectContainsPoint(rect: MKMapRect; point: MKMapPoint): objcbool; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectContainsRect(rect1: MKMapRect; rect2: MKMapRect): objcbool; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectIntersectsRect(rect1: MKMapRect; rect2: MKMapRect): objcbool; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKCoordinateRegionForMapRect(rect: MKMapRect): MKCoordinateRegion; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectSpans180thMeridian(rect: MKMapRect): objcbool; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
function MKMapRectRemainder(rect: MKMapRect): MKMapRect; cdecl; external; { available in macos 10.9, ios 4.0 } { available in 9_2 }
{$endif}

{$ifdef CLASSES}

type
  NSValueMapKitGeometryExtensions = objccategory external (NSValue)
    class function valueWithMKCoordinate (coordinate: CLLocationCoordinate2D): NSValue; message 'valueWithMKCoordinate:'; { available in 9_2 }
    class function valueWithMKCoordinateSpan (span: MKCoordinateSpan): NSValue; message 'valueWithMKCoordinateSpan:'; { available in 9_2 }
    function MKCoordinateValue: CLLocationCoordinate2D; message 'MKCoordinateValue'; { available in 9_2 }
    function MKCoordinateSpanValue: MKCoordinateSpan; message 'MKCoordinateSpanValue'; { available in 9_2 }
  end;
{$endif}

