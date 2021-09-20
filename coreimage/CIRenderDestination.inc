{ Parsed from CoreImage.framework CIRenderDestination.h }

{ Types from CIRenderDestination }
{$ifdef TYPES}


type
  CIRenderDestinationAlphaMode = NSUInteger;
type
  CIRenderDestinationAlphaModePtr = ^CIRenderDestinationAlphaMode;

const
  CIRenderDestinationAlphaNone = 0;
  CIRenderDestinationAlphaPremultiplied = 1;
  CIRenderDestinationAlphaUnpremultiplied = 2;
{$endif}


{$ifdef CALLBACKS}
type
  CIRenderDestinationInitWithWidthCallback = reference to function : id; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CIRenderDestinationPtr = ^CIRenderDestination;
  CIRenderInfoPtr = ^CIRenderInfo;
  CIRenderTaskPtr = ^CIRenderTask;
{$endif}

{$ifdef CLASSES}

type
  CIRenderDestination = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    function initWithPixelBuffer (pixelBuffer: CVPixelBufferRef): id; message 'initWithPixelBuffer:';
    {$if defined(COREIMAGE_SUPPORTS_IOSURFACE)}
    function initWithIOSurface (surface: IOSurfacePtr): id; message 'initWithIOSurface:';
    {$endif}
    function initWithMTLTexture_commandBuffer (texture: MTLTextureProtocol; commandBuffer: MTLCommandBufferProtocol): id; message 'initWithMTLTexture:commandBuffer:';
    function initWithWidth_height_pixelFormat_commandBuffer_mtlTextureProvider (width: NSUInteger; height: NSUInteger; pixelFormat: MTLPixelFormat; commandBuffer: MTLCommandBufferProtocol; block: CIRenderDestinationInitWithWidthCallback): id; message 'initWithWidth:height:pixelFormat:commandBuffer:mtlTextureProvider:';
    function initWithGLTexture_target_width_height (texture: cuint; target: cuint; width: NSUInteger; height: NSUInteger): id; message 'initWithGLTexture:target:width:height:';
    function initWithBitmapData_width_height_bytesPerRow_format (data: pointer; width: NSUInteger; height: NSUInteger; bytesPerRow: NSUInteger; format: CIFormat): id; message 'initWithBitmapData:width:height:bytesPerRow:format:';
    function width: NSUInteger; message 'width';
    function height: NSUInteger; message 'height';
    procedure setAlphaMode(newValue: CIRenderDestinationAlphaMode); message 'setAlphaMode:';
    function alphaMode: CIRenderDestinationAlphaMode; message 'alphaMode';
    procedure setFlipped(newValue: objcbool); message 'setFlipped:';
    function isFlipped: objcbool; message 'isFlipped';
    procedure setDithered(newValue: objcbool); message 'setDithered:';
    function isDithered: objcbool; message 'isDithered';
    procedure setClamped(newValue: objcbool); message 'setClamped:';
    function isClamped: objcbool; message 'isClamped';
    procedure setColorSpace(newValue: CGColorSpaceRef); message 'setColorSpace:';
    function colorSpace: CGColorSpaceRef; message 'colorSpace';
    procedure setBlendKernel(newValue: CIBlendKernel); message 'setBlendKernel:';
    function blendKernel: CIBlendKernel; message 'blendKernel';
    procedure setBlendsInDestinationColorSpace(newValue: objcbool); message 'setBlendsInDestinationColorSpace:';
    function blendsInDestinationColorSpace: objcbool; message 'blendsInDestinationColorSpace';
  end;

type
  CIRenderInfo = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    function kernelExecutionTime: NSTimeInterval; message 'kernelExecutionTime';
    function passCount: NSInteger; message 'passCount';
    function pixelsProcessed: NSInteger; message 'pixelsProcessed';
  end;

type
  CIRenderTask = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    function waitUntilCompletedAndReturnError (error: NSErrorPtr): CIRenderInfo; message 'waitUntilCompletedAndReturnError:';
  end;


type
  CIContext_CIRenderDestination = objccategory external name 'CIRenderDestination' (CIContext)
    function startTaskToRender_fromRect_toDestination_atPoint_error (image: CIImage; fromRect: CGRect; destination: CIRenderDestination; atPoint: CGPoint; error: NSErrorPtr): CIRenderTask; message 'startTaskToRender:fromRect:toDestination:atPoint:error:'; { available in macos 10.13, ios 11.0 }
    function startTaskToRender_toDestination_error (image: CIImage; destination: CIRenderDestination; error: NSErrorPtr): CIRenderTask; message 'startTaskToRender:toDestination:error:'; { available in macos 10.13, ios 11.0 }
    function prepareRender_fromRect_toDestination_atPoint_error (image: CIImage; fromRect: CGRect; destination: CIRenderDestination; atPoint: CGPoint; error: NSErrorPtr): objcbool; message 'prepareRender:fromRect:toDestination:atPoint:error:'; { available in macos 10.13, ios 11.0 }
    function startTaskToClear_error (destination: CIRenderDestination; error: NSErrorPtr): CIRenderTask; message 'startTaskToClear:error:'; { available in macos 10.13, ios 11.0 }
  end;
{$endif}

