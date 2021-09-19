{ Parsed from MapKit.framework MKPolylineRenderer.h }

{$ifdef TYPES}
type
  MKPolylineRendererPtr = ^MKPolylineRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKPolylineRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithPolyline (polyline: MKPolyline): id; message 'initWithPolyline:';
    function polyline: MKPolyline; message 'polyline';
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    function strokeStart: CGFloat; message 'strokeStart'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    function strokeEnd: CGFloat; message 'strokeEnd'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
  end;
{$endif}

