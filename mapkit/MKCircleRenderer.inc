{ Parsed from MapKit.framework MKCircleRenderer.h }

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
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    function strokeStart: CGFloat; message 'strokeStart'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
    function strokeEnd: CGFloat; message 'strokeEnd'; { unavailable in watchos } { available in ios 14.0, tvos 14.0, macos 11.0 }
  end;
{$endif}

