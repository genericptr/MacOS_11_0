{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKPolylineRenderer.h }

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
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:'; { unavailable in watchos }
    function strokeStart: CGFloat; message 'strokeStart'; { unavailable in watchos }
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:'; { unavailable in watchos }
    function strokeEnd: CGFloat; message 'strokeEnd'; { unavailable in watchos }
  end;
{$endif}

