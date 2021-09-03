{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMultiPolyline.h }

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
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
  end;
{$endif}

