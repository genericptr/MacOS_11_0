{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CARenderer.h }

{ Types from CARenderer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CARendererPtr = ^CARenderer;
{$endif}

{$ifdef CLASSES}

type
  CARenderer = objcclass external (NSObject)
  private
    _priv: CARendererPrivPtr;
  public
    {$ifndef GL_SILENCE_DEPRECATION}
    {$else}
    {$endif}
    class function rendererWithMTLTexture_options (tex: id; dict: NSDictionary): CARenderer; message 'rendererWithMTLTexture:options:'; { unavailable in ios, watchos, tvos }
    procedure setLayer(newValue: CALayer); message 'setLayer:';
    function layer: CALayer; message 'layer';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure beginFrameAtTime_timeStamp (t: CFTimeInterval; ts: CVTimeStampPtr); message 'beginFrameAtTime:timeStamp:';
    function updateBounds: CGRect; message 'updateBounds';
    procedure addUpdateRect (r: CGRect); message 'addUpdateRect:';
    procedure render; message 'render';
    function nextFrameTime: CFTimeInterval; message 'nextFrameTime';
    procedure endFrame; message 'endFrame';
    procedure setDestination (tex: id); message 'setDestination:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCARendererColorSpace: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  kCARendererMetalCommandQueue: NSString { unavailable in ios, watchos, tvos }; cvar; external;
{$endif}

