{ Parsed from MapKit.framework MKMultiPolyline.h }

{$ifdef TYPES}
type
  MKMultiPolylinePtr = ^MKMultiPolyline;
{$endif}

{$ifdef CLASSES}

type
  MKMultiPolyline = objcclass external (MKShape, MKOverlayProtocol)
  public
    function initWithPolylines (polylines: NSArray): id; message 'initWithPolylines:'; { NS_DESIGNATED_INITIALIZER }
    function polylines: NSArray; message 'polylines';

    { Adopted protocols }
    function boundingMapRect: MKMapRect; message 'boundingMapRect';
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in macos 10.9, ios 7.0 }
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
  end;
{$endif}

