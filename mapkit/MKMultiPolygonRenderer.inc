{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMultiPolygonRenderer.h }

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

