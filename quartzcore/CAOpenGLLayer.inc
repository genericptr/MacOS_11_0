{ Parsed from QuartzCore.framework CAOpenGLLayer.h }

{$ifdef TYPES}
type
  CAOpenGLLayerPtr = ^CAOpenGLLayer;
{$endif}

{$ifdef CLASSES}

type
  CAOpenGLLayer = objcclass external (CALayer)
  private
    _glPriv: CAOpenGLLayerPrivatePtr;
  public
    procedure setAsynchronous(newValue: objcbool); message 'setAsynchronous:';
    function isAsynchronous: objcbool; message 'isAsynchronous';
    function canDrawInCGLContext_pixelFormat_forLayerTime_displayTime (ctx: CGLContextObj; pf: CGLPixelFormatObj; t: CFTimeInterval; ts: CVTimeStampPtr): objcbool; message 'canDrawInCGLContext:pixelFormat:forLayerTime:displayTime:';
    procedure drawInCGLContext_pixelFormat_forLayerTime_displayTime (ctx: CGLContextObj; pf: CGLPixelFormatObj; t: CFTimeInterval; ts: CVTimeStampPtr); message 'drawInCGLContext:pixelFormat:forLayerTime:displayTime:';
    function copyCGLPixelFormatForDisplayMask (mask_: cuint32): CGLPixelFormatObj; message 'copyCGLPixelFormatForDisplayMask:';
    procedure releaseCGLPixelFormat (pf: CGLPixelFormatObj); message 'releaseCGLPixelFormat:';
    function copyCGLContextForPixelFormat (pf: CGLPixelFormatObj): CGLContextObj; message 'copyCGLContextForPixelFormat:';
    procedure releaseCGLContext (ctx: CGLContextObj); message 'releaseCGLContext:';
    procedure setColorspace(newValue: CGColorSpaceRef); message 'setColorspace:';
    function colorspace: CGColorSpaceRef; message 'colorspace';
    procedure setWantsExtendedDynamicRangeContent(newValue: objcbool); message 'setWantsExtendedDynamicRangeContent:';
    function wantsExtendedDynamicRangeContent: objcbool; message 'wantsExtendedDynamicRangeContent';
  end;
{$endif}

