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
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:'; { unavailable in watchos }
    function strokeStart: CGFloat; message 'strokeStart'; { unavailable in watchos }
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:'; { unavailable in watchos }
    function strokeEnd: CGFloat; message 'strokeEnd'; { unavailable in watchos }
  end;
{$endif}

