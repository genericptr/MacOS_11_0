{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKCircleRenderer.h }

{$ifdef TYPES}
type
  MKCircleRendererPtr = ^MKCircleRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKCircleRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithCircle (circle: MKCircle): id; message 'initWithCircle:';
    function circle: MKCircle; message 'circle';
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:'; { unavailable in watchos }
    function strokeStart: CGFloat; message 'strokeStart'; { unavailable in watchos }
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:'; { unavailable in watchos }
    function strokeEnd: CGFloat; message 'strokeEnd'; { unavailable in watchos }
  end;
{$endif}

