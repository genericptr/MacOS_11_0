{ Parsed from MetalKit.framework MTKView.h }

{$ifdef TYPES}
type
  MTKViewPtr = ^MTKView;
  MTKViewDelegateProtocolPtr = ^MTKViewDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTKView = objcclass external (NSView, NSCodingProtocol, CALayerDelegateProtocol)
  public
    function initWithFrame_device (frameRect: CGRect; device: MTLDeviceProtocol): id; message 'initWithFrame:device:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: MTKViewDelegateProtocol); message 'setDelegate:';
    function delegate: MTKViewDelegateProtocol; message 'delegate';
    procedure setDevice(newValue: MTLDeviceProtocol); message 'setDevice:';
    function device: MTLDeviceProtocol; message 'device';
    function currentDrawable: CAMetalDrawableProtocol; message 'currentDrawable';
    procedure setFramebufferOnly(newValue: objcbool); message 'setFramebufferOnly:';
    function framebufferOnly: objcbool; message 'framebufferOnly';
    procedure setDepthStencilAttachmentTextureUsage(newValue: MTLTextureUsage); message 'setDepthStencilAttachmentTextureUsage:'; { available in macos , ios  }
    function depthStencilAttachmentTextureUsage: MTLTextureUsage; message 'depthStencilAttachmentTextureUsage'; { available in macos , ios  }
    procedure setMultisampleColorAttachmentTextureUsage(newValue: MTLTextureUsage); message 'setMultisampleColorAttachmentTextureUsage:'; { available in macos , ios  }
    function multisampleColorAttachmentTextureUsage: MTLTextureUsage; message 'multisampleColorAttachmentTextureUsage'; { available in macos , ios  }
    procedure setPresentsWithTransaction(newValue: objcbool); message 'setPresentsWithTransaction:';
    function presentsWithTransaction: objcbool; message 'presentsWithTransaction';
    procedure setColorPixelFormat(newValue: MTLPixelFormat); message 'setColorPixelFormat:';
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat';
    procedure setDepthStencilPixelFormat(newValue: MTLPixelFormat); message 'setDepthStencilPixelFormat:';
    function depthStencilPixelFormat: MTLPixelFormat; message 'depthStencilPixelFormat';
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:';
    function sampleCount: NSUInteger; message 'sampleCount';
    procedure setClearColor(newValue: MTLClearColor); message 'setClearColor:';
    function clearColor: MTLClearColor; message 'clearColor';
    procedure setClearDepth(newValue: double); message 'setClearDepth:';
    function clearDepth: double; message 'clearDepth';
    procedure setClearStencil(newValue: cuint32); message 'setClearStencil:';
    function clearStencil: cuint32; message 'clearStencil';
    function depthStencilTexture: MTLTextureProtocol; message 'depthStencilTexture';
    function multisampleColorTexture: MTLTextureProtocol; message 'multisampleColorTexture';
    procedure releaseDrawables; message 'releaseDrawables';
    function currentRenderPassDescriptor: MTLRenderPassDescriptor; message 'currentRenderPassDescriptor';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:';
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond';
    procedure setEnableSetNeedsDisplay(newValue: objcbool); message 'setEnableSetNeedsDisplay:';
    function enableSetNeedsDisplay: objcbool; message 'enableSetNeedsDisplay';
    procedure setAutoResizeDrawable(newValue: objcbool); message 'setAutoResizeDrawable:';
    function autoResizeDrawable: objcbool; message 'autoResizeDrawable';
    procedure setDrawableSize(newValue: CGSize); message 'setDrawableSize:';
    function drawableSize: CGSize; message 'drawableSize';
    function preferredDrawableSize: CGSize; message 'preferredDrawableSize'; { available in macos  }
    function preferredDevice: MTLDeviceProtocol; message 'preferredDevice'; { available in macos , ios  }
    procedure setPaused(newValue: objcbool); message 'setPaused:';
    function isPaused: objcbool; message 'isPaused';
    procedure setColorspace(newValue: CGColorSpaceRef); message 'setColorspace:'; { available in 10_12 }
    function colorspace: CGColorSpaceRef; message 'colorspace'; { available in 10_12 }
    procedure draw; message 'draw';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTKViewDelegateProtocol = objcprotocol external name 'MTKViewDelegate' (NSObjectProtocol)
    procedure mtkView_drawableSizeWillChange (view: MTKView; size: CGSize); message 'mtkView:drawableSizeWillChange:';
    procedure drawInMTKView (view: MTKView); message 'drawInMTKView:';
  end;
{$endif}

