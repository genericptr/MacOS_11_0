{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKOverlay.h }

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
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
  end;
{$endif}

