{ Parsed from MapKit.framework MKMultiPolygonRenderer.h }

{$ifdef TYPES}
type
  MKMultiPolygonRendererPtr = ^MKMultiPolygonRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKMultiPolygonRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithMultiPolygon (multiPolygon: MKMultiPolygon): id; message 'initWithMultiPolygon:';
    function multiPolygon: MKMultiPolygon; message 'multiPolygon';
  end;
{$endif}

