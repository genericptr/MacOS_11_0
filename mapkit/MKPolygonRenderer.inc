{ Parsed from MapKit.framework MKPolygonRenderer.h }

{$ifdef TYPES}
type
  MKPolygonRendererPtr = ^MKPolygonRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKPolygonRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithPolygon (polygon: MKPolygon): id; message 'initWithPolygon:';
    function polygon: MKPolygon; message 'polygon';
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    function strokeStart: CGFloat; message 'strokeStart'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    function strokeEnd: CGFloat; message 'strokeEnd'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
  end;
{$endif}

