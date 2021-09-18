{ Parsed from AppKit.framework NSOpenGLView.h }

{$ifdef TYPES}
type
  NSOpenGLViewPtr = ^NSOpenGLView;
{$endif}

{$ifdef CLASSES}

type
  NSOpenGLView = objcclass external (NSView)
  public
    class function defaultPixelFormat: NSOpenGLPixelFormat; message 'defaultPixelFormat';
    function initWithFrame_pixelFormat (frameRect: NSRect; format: NSOpenGLPixelFormat): id; message 'initWithFrame:pixelFormat:';
    procedure setOpenGLContext(newValue: NSOpenGLContext); message 'setOpenGLContext:';
    function openGLContext: NSOpenGLContext; message 'openGLContext';
    procedure clearGLContext; message 'clearGLContext';
    procedure update; message 'update'; { NS_REQUIRES_SUPER }
    procedure reshape; message 'reshape'; { NS_REQUIRES_SUPER }
    procedure setPixelFormat(newValue: NSOpenGLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: NSOpenGLPixelFormat; message 'pixelFormat';
    procedure prepareOpenGL; message 'prepareOpenGL'; { NS_REQUIRES_SUPER }
    procedure setWantsBestResolutionOpenGLSurface(newValue: objcbool); message 'setWantsBestResolutionOpenGLSurface:'; deprecated 'in 10.7, 10.14';
    function wantsBestResolutionOpenGLSurface: objcbool; message 'wantsBestResolutionOpenGLSurface'; deprecated 'in 10.7, 10.14';
    procedure setWantsExtendedDynamicRangeOpenGLSurface(newValue: objcbool); message 'setWantsExtendedDynamicRangeOpenGLSurface:'; deprecated 'in 10.11, 10.14';
    function wantsExtendedDynamicRangeOpenGLSurface: objcbool; message 'wantsExtendedDynamicRangeOpenGLSurface'; deprecated 'in 10.11, 10.14';
  end;


type
  NSOpenGLSurfaceResolution = objccategory external (NSView)
    procedure setWantsBestResolutionOpenGLSurface(newValue: objcbool); message 'setWantsBestResolutionOpenGLSurface:'; deprecated 'Use NSOpenGLView instead.';
    function wantsBestResolutionOpenGLSurface: objcbool; message 'wantsBestResolutionOpenGLSurface'; deprecated 'Use NSOpenGLView instead.';
  end;

type
  NSExtendedDynamicRange = objccategory external (NSView)
    procedure setWantsExtendedDynamicRangeOpenGLSurface(newValue: objcbool); message 'setWantsExtendedDynamicRangeOpenGLSurface:'; deprecated 'Use NSOpenGLView instead.';
    function wantsExtendedDynamicRangeOpenGLSurface: objcbool; message 'wantsExtendedDynamicRangeOpenGLSurface'; deprecated 'Use NSOpenGLView instead.';
  end;
{$endif}

