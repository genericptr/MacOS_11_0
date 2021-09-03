{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKOverlayPathRenderer.h }

{ Types from MKOverlayPathRenderer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKOverlayPathRendererPtr = ^MKOverlayPathRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKOverlayPathRenderer = objcclass external (MKOverlayRenderer)
  public
    {$if defined(TARGET_OS_IPHONE)}
    procedure setFillColor(newValue: UIColorPtr); message 'setFillColor:';
    function fillColor: UIColorPtr; message 'fillColor';
    procedure setStrokeColor(newValue: UIColorPtr); message 'setStrokeColor:';
    function strokeColor: UIColorPtr; message 'strokeColor';
    {$else}
    procedure setFillColor_(newValue: NSColorPtr); message 'setFillColor:';
    function fillColor_: NSColorPtr; message 'fillColor';
    procedure setStrokeColor_(newValue: NSColorPtr); message 'setStrokeColor:';
    function strokeColor_: NSColorPtr; message 'strokeColor';
    {$endif}
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setLineJoin(newValue: CGLineJoin); message 'setLineJoin:';
    function lineJoin: CGLineJoin; message 'lineJoin';
    procedure setLineCap(newValue: CGLineCap); message 'setLineCap:';
    function lineCap: CGLineCap; message 'lineCap';
    procedure setMiterLimit(newValue: CGFloat); message 'setMiterLimit:';
    function miterLimit: CGFloat; message 'miterLimit';
    procedure setLineDashPhase(newValue: CGFloat); message 'setLineDashPhase:';
    function lineDashPhase: CGFloat; message 'lineDashPhase';
    procedure setLineDashPattern(newValue: NSArray); message 'setLineDashPattern:';
    function lineDashPattern: NSArray; message 'lineDashPattern';
    procedure setShouldRasterize(newValue: objcbool); message 'setShouldRasterize:'; { unavailable in watchos }
    function shouldRasterize: objcbool; message 'shouldRasterize'; { unavailable in watchos }
    procedure createPath; message 'createPath';
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure invalidatePath; message 'invalidatePath';
    procedure applyStrokePropertiesToContext_atZoomScale (context: CGContextRef; zoomScale: MKZoomScale); message 'applyStrokePropertiesToContext:atZoomScale:';
    procedure applyFillPropertiesToContext_atZoomScale (context: CGContextRef; zoomScale: MKZoomScale); message 'applyFillPropertiesToContext:atZoomScale:';
    procedure strokePath_inContext (path_: CGPathRef; context: CGContextRef); message 'strokePath:inContext:';
    procedure fillPath_inContext (path_: CGPathRef; context: CGContextRef); message 'fillPath:inContext:';
  end;
{$endif}

