{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMultiPolylineRenderer.h }

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

