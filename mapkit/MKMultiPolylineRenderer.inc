{ Parsed from MapKit.framework MKMultiPolylineRenderer.h }

{$ifdef TYPES}
type
  MKMultiPolylineRendererPtr = ^MKMultiPolylineRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKMultiPolylineRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithMultiPolyline (multiPolyline: MKMultiPolyline): id; message 'initWithMultiPolyline:';
    function multiPolyline: MKMultiPolyline; message 'multiPolyline';
  end;
{$endif}

