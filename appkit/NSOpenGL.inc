{ Parsed from AppKit.framework NSOpenGL.h }

{$ifdef TYPES}
type
  NSOpenGLPixelFormatPtr = ^NSOpenGLPixelFormat;
  NSOpenGLPixelBufferPtr = ^NSOpenGLPixelBuffer;
  NSOpenGLContextPtr = ^NSOpenGLContext;
{$endif}

{$ifdef TYPES}
type
  NSOpenGLGlobalOption = cuint32;
  NSOpenGLGlobalOptionPtr = ^NSOpenGLGlobalOption;

const
  NSOpenGLGOFormatCacheSize = 501 deprecated 'in 10.0, 10.14';
  NSOpenGLGOClearFormatCache = 502 deprecated 'in 10.0, 10.14';
  NSOpenGLGORetainRenderers = 503 deprecated 'in 10.0, 10.14';
  NSOpenGLGOUseBuildCache = 506 deprecated 'in 10.0, 10.14';
  NSOpenGLGOResetLibrary = 504 deprecated;
{$endif}

{$ifdef FUNCTIONS}
function NSOpenGLSetOption(pname: NSOpenGLGlobalOption; param: GLint): pointer; cdecl; external; deprecated 'in 10.0, 10.14';
function NSOpenGLGetOption(pname: NSOpenGLGlobalOption; param: GLintPtr): pointer; cdecl; external; deprecated 'in 10.0, 10.14';
function NSOpenGLGetVersion(major: GLintPtr; minor: GLintPtr): pointer; cdecl; external; deprecated 'in 10.0, 10.14';
{$endif}

{$ifdef TYPES}
const
  NSOpenGLPFAAllRenderers = 1 deprecated 'in 10.0, 10.14';
  NSOpenGLPFATripleBuffer = 3 deprecated 'in 10.0, 10.14';
  NSOpenGLPFADoubleBuffer = 5 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAAuxBuffers = 7 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAColorSize = 8 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAAlphaSize = 11 deprecated 'in 10.0, 10.14';
  NSOpenGLPFADepthSize = 12 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAStencilSize = 13 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAAccumSize = 14 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAMinimumPolicy = 51 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAMaximumPolicy = 52 deprecated 'in 10.0, 10.14';
  NSOpenGLPFASampleBuffers = 55 deprecated 'in 10.0, 10.14';
  NSOpenGLPFASamples = 56 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAAuxDepthStencil = 57 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAColorFloat = 58 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAMultisample = 59 deprecated 'in 10.0, 10.14';
  NSOpenGLPFASupersample = 60 deprecated 'in 10.0, 10.14';
  NSOpenGLPFASampleAlpha = 61 deprecated 'in 10.0, 10.14';
  NSOpenGLPFARendererID = 70 deprecated 'in 10.0, 10.14';
  NSOpenGLPFANoRecovery = 72 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAAccelerated = 73 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAClosestPolicy = 74 deprecated 'in 10.0, 10.14';
  NSOpenGLPFABackingStore = 76 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAScreenMask = 84 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAAllowOfflineRenderers = 96 deprecated 'in 10.5, 10.14';
  NSOpenGLPFAAcceleratedCompute = 97 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAOpenGLProfile = 99 deprecated 'in 10.7, 10.14';
  NSOpenGLPFAVirtualScreenCount = 128 deprecated 'in 10.0, 10.14';
  NSOpenGLPFAStereo = 6 deprecated;
  NSOpenGLPFAOffScreen = 53 deprecated;
  NSOpenGLPFAFullScreen = 54 deprecated;
  NSOpenGLPFASingleRenderer = 71 deprecated;
  NSOpenGLPFARobust = 75 deprecated;
  NSOpenGLPFAMPSafe = 78 deprecated;
  NSOpenGLPFAWindow = 80 deprecated;
  NSOpenGLPFAMultiScreen = 81 deprecated;
  NSOpenGLPFACompliant = 83 deprecated;
  NSOpenGLPFAPixelBuffer = 90 deprecated;
  NSOpenGLPFARemotePixelBuffer = 91 deprecated;

type
  NSOpenGLPixelFormatAttribute = cuint32 deprecated 'in 10.0, 10.14';
  NSOpenGLPixelFormatAttributePtr = ^NSOpenGLPixelFormatAttribute deprecated 'in 10.0, 10.14';

const
  NSOpenGLProfileVersionLegacy = $1000 deprecated 'in 10.7, 10.14';
  NSOpenGLProfileVersion3_2Core = $3200 deprecated 'in 10.7, 10.14';
  NSOpenGLProfileVersion4_1Core = $4100 deprecated 'in 10.10, 10.14';
{$endif}

{$ifdef CLASSES}

type
  NSOpenGLPixelFormat = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithCGLPixelFormatObj (format: CGLPixelFormatObj): NSOpenGLPixelFormat; message 'initWithCGLPixelFormatObj:'; { available in macos 10.6 }
    function initWithAttributes (attribs: NSOpenGLPixelFormatAttributePtr): id; message 'initWithAttributes:';
    function initWithData (attribs: NSData): id; message 'initWithData:'; deprecated 'Use -initWithAttributes: instead';
    function attributes: NSData; message 'attributes'; deprecated;
    procedure setAttributes (attribs: NSData); message 'setAttributes:'; deprecated;
    procedure getValues_forAttribute_forVirtualScreen (vals: GLintPtr; attrib: NSOpenGLPixelFormatAttribute; screen: GLint); message 'getValues:forAttribute:forVirtualScreen:';
    function numberOfVirtualScreens: GLint; message 'numberOfVirtualScreens';
    function CGLPixelFormatObj: CGLPixelFormatObj; message 'CGLPixelFormatObj';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;

type
  NSOpenGLPixelBuffer = objcclass external (NSObject)
  public
    function initWithTextureTarget_textureInternalFormat_textureMaxMipMapLevel_pixelsWide_pixelsHigh (target: GLenum; format: GLenum; maxLevel: GLint; pixelsWide: GLsizei; pixelsHigh: GLsizei): id; message 'initWithTextureTarget:textureInternalFormat:textureMaxMipMapLevel:pixelsWide:pixelsHigh:'; deprecated;
    function initWithCGLPBufferObj (pbuffer: CGLPBufferObj): NSOpenGLPixelBuffer; message 'initWithCGLPBufferObj:'; deprecated;
    function CGLPBufferObj: CGLPBufferObj; message 'CGLPBufferObj'; { available in macos 10.6 }
    function pixelsWide: GLsizei; message 'pixelsWide'; deprecated;
    function pixelsHigh: GLsizei; message 'pixelsHigh'; deprecated;
    function textureTarget: GLenum; message 'textureTarget'; deprecated;
    function textureInternalFormat: GLenum; message 'textureInternalFormat'; deprecated;
    function textureMaxMipMapLevel: GLint; message 'textureMaxMipMapLevel'; deprecated;
  end;
{$endif}

{$ifdef TYPES}
type
  NSOpenGLContextParameter = NSInteger;
  NSOpenGLContextParameterPtr = ^NSOpenGLContextParameter;

const
  NSOpenGLContextParameterSwapInterval = 222 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterSurfaceOrder = 235 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterSurfaceOpacity = 236 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterSurfaceBackingSize = 304 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterReclaimResources = 308 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterCurrentRendererID = 309 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterGPUVertexProcessing = 310 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterGPUFragmentProcessing = 311 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterHasDrawable = 314 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterMPSwapsInFlight = 315 deprecated 'in 10.0, 10.14';
  NSOpenGLContextParameterSwapRectangle = 200 deprecated;
  NSOpenGLContextParameterSwapRectangleEnable = 201 deprecated;
  NSOpenGLContextParameterRasterizationEnable = 221 deprecated;
  NSOpenGLContextParameterStateValidation = 301 deprecated;
  NSOpenGLContextParameterSurfaceSurfaceVolatile = 306 deprecated;
{$endif}

{$ifdef CLASSES}

type
  NSOpenGLContext = objcclass external (NSObject, NSLockingProtocol)
  public
    function initWithFormat_shareContext (format: NSOpenGLPixelFormat; share: NSOpenGLContext): id; message 'initWithFormat:shareContext:';
    function initWithCGLContextObj (context: CGLContextObj): NSOpenGLContext; message 'initWithCGLContextObj:'; { available in macos 10.6 }
    function pixelFormat: NSOpenGLPixelFormat; message 'pixelFormat'; { available in macos 10.10 }
    procedure setView(newValue: NSView); message 'setView:'; deprecated;
    function view: NSView; message 'view'; deprecated;
    procedure setFullScreen; message 'setFullScreen'; deprecated 'Use a fullscreen NSOpenGLView instead';
    procedure setOffScreen_width_height_rowbytes (baseaddr: pointer; width: GLsizei; height: GLsizei; rowbytes: GLint); message 'setOffScreen:width:height:rowbytes:'; deprecated;
    procedure clearDrawable; message 'clearDrawable';
    procedure update; message 'update';
    procedure flushBuffer; message 'flushBuffer';
    procedure makeCurrentContext; message 'makeCurrentContext';
    class procedure clearCurrentContext; message 'clearCurrentContext';
    class function currentContext: NSOpenGLContext; message 'currentContext';
    procedure copyAttributesFromContext_withMask (context: NSOpenGLContext; mask: GLbitfield); message 'copyAttributesFromContext:withMask:'; deprecated;
    procedure setValues_forParameter (vals: GLintPtr; param: NSOpenGLContextParameter); message 'setValues:forParameter:';
    procedure getValues_forParameter (vals: GLintPtr; param: NSOpenGLContextParameter); message 'getValues:forParameter:';
    procedure setCurrentVirtualScreen(newValue: GLint); message 'setCurrentVirtualScreen:';
    function currentVirtualScreen: GLint; message 'currentVirtualScreen';
    procedure createTexture_fromView_internalFormat (target: GLenum; view_: NSView; format: GLenum); message 'createTexture:fromView:internalFormat:'; deprecated;
    function CGLContextObj: CGLContextObj; message 'CGLContextObj';

    { Adopted protocols }
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;


type
  NSOpenGLContext_NSOpenGLPixelBuffer = objccategory external name 'NSOpenGLPixelBuffer' (NSOpenGLContext)
    procedure setPixelBuffer_cubeMapFace_mipMapLevel_currentVirtualScreen (pixelBuffer: NSOpenGLPixelBuffer; face: GLenum; level: GLint; screen: GLint); message 'setPixelBuffer:cubeMapFace:mipMapLevel:currentVirtualScreen:'; deprecated;
    function pixelBuffer: NSOpenGLPixelBuffer; message 'pixelBuffer'; deprecated;
    function pixelBufferCubeMapFace: GLenum; message 'pixelBufferCubeMapFace'; deprecated;
    function pixelBufferMipMapLevel: GLint; message 'pixelBufferMipMapLevel'; deprecated;
    procedure setTextureImageToPixelBuffer_colorBuffer (pixelBuffer_: NSOpenGLPixelBuffer; source: GLenum); message 'setTextureImageToPixelBuffer:colorBuffer:'; deprecated;
  end;
{$endif}

{$ifdef TYPES}
const
  NSOpenGLCPSwapInterval = NSOpenGLContextParameterSwapInterval deprecated 'replace with NSOpenGLContextParameterSwapInterval';
  NSOpenGLCPSurfaceOrder = NSOpenGLContextParameterSurfaceOrder deprecated 'replace with NSOpenGLContextParameterSurfaceOrder';
  NSOpenGLCPSurfaceOpacity = NSOpenGLContextParameterSurfaceOpacity deprecated 'replace with NSOpenGLContextParameterSurfaceOpacity';
  NSOpenGLCPSurfaceBackingSize = NSOpenGLContextParameterSurfaceBackingSize deprecated 'replace with NSOpenGLContextParameterSurfaceBackingSize';
  NSOpenGLCPReclaimResources = NSOpenGLContextParameterReclaimResources deprecated 'replace with NSOpenGLContextParameterReclaimResources';
  NSOpenGLCPCurrentRendererID = NSOpenGLContextParameterCurrentRendererID deprecated 'replace with NSOpenGLContextParameterCurrentRendererID';
  NSOpenGLCPGPUVertexProcessing = NSOpenGLContextParameterGPUVertexProcessing deprecated 'replace with NSOpenGLContextParameterGPUVertexProcessing';
  NSOpenGLCPGPUFragmentProcessing = NSOpenGLContextParameterGPUFragmentProcessing deprecated 'replace with NSOpenGLContextParameterGPUFragmentProcessing';
  NSOpenGLCPHasDrawable = NSOpenGLContextParameterHasDrawable deprecated 'replace with NSOpenGLContextParameterHasDrawable';
  NSOpenGLCPMPSwapsInFlight = NSOpenGLContextParameterMPSwapsInFlight deprecated 'replace with NSOpenGLContextParameterMPSwapsInFlight';
  NSOpenGLCPSwapRectangle = NSOpenGLContextParameterSwapRectangle deprecated 'replace with NSOpenGLContextParameterSwapRectangle';
  NSOpenGLCPSwapRectangleEnable = NSOpenGLContextParameterSwapRectangleEnable deprecated 'replace with NSOpenGLContextParameterSwapRectangleEnable';
  NSOpenGLCPRasterizationEnable = NSOpenGLContextParameterRasterizationEnable deprecated 'replace with NSOpenGLContextParameterRasterizationEnable';
  NSOpenGLCPStateValidation = NSOpenGLContextParameterStateValidation deprecated 'replace with NSOpenGLContextParameterStateValidation';
  NSOpenGLCPSurfaceSurface = NSOpenGLContextParameterSurfaceSurfaceVolatile deprecated 'replace with NSOpenGLContextParameterSurfaceSurfaceVolatile';
{$endif}

