{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSOpenGLLayer.h }

{$ifdef TYPES}
type
  NSOpenGLLayerPtr = ^NSOpenGLLayer;
{$endif}

{$ifdef CLASSES}

type
  NSOpenGLLayer = objcclass external (CAOpenGLLayer)
  public
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure setOpenGLPixelFormat(newValue: NSOpenGLPixelFormat); message 'setOpenGLPixelFormat:';
    function openGLPixelFormat: NSOpenGLPixelFormat; message 'openGLPixelFormat';
    procedure setOpenGLContext(newValue: NSOpenGLContext); message 'setOpenGLContext:';
    function openGLContext: NSOpenGLContext; message 'openGLContext';
    function openGLPixelFormatForDisplayMask (mask: cuint32): NSOpenGLPixelFormat; message 'openGLPixelFormatForDisplayMask:';
    function openGLContextForPixelFormat (pixelFormat: NSOpenGLPixelFormat): NSOpenGLContext; message 'openGLContextForPixelFormat:';
    function canDrawInOpenGLContext_pixelFormat_forLayerTime_displayTime (context: NSOpenGLContext; pixelFormat: NSOpenGLPixelFormat; t: CFTimeInterval; ts: CVTimeStampPtr): objcbool; message 'canDrawInOpenGLContext:pixelFormat:forLayerTime:displayTime:';
    procedure drawInOpenGLContext_pixelFormat_forLayerTime_displayTime (context: NSOpenGLContext; pixelFormat: NSOpenGLPixelFormat; t: CFTimeInterval; ts: CVTimeStampPtr); message 'drawInOpenGLContext:pixelFormat:forLayerTime:displayTime:';
  end;
{$endif}

