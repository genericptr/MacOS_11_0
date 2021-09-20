{ Parsed from MapKit.framework MKOverlay.h }

{$ifdef TYPES}
type
  MKOverlayProtocolPtr = ^MKOverlayProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MKOverlayProtocol = objcprotocol external name 'MKOverlay' (MKAnnotationProtocol)
  required
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function boundingMapRect: MKMapRect; message 'boundingMapRect';
  optional
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in macos 10.9, ios 7.0 }
  end;
{$endif}

