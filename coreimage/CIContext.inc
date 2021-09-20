{ Parsed from CoreImage.framework CIContext.h }

{ Types from CIContext }
{$ifdef TYPES}

type
  CIContextOption = NSString;
  CIContextOptionPtr = ^CIContextOption;

var
  kCIContextOutputColorSpace: CIContextOption; cvar; external;
  kCIContextWorkingColorSpace: CIContextOption; cvar; external;
  kCIContextWorkingFormat: CIContextOption { available in 10_4,8_0 }; cvar; external;
  kCIContextHighQualityDownsample: CIContextOption { available in 10_11,9_0 }; cvar; external;
  kCIContextOutputPremultiplied: CIContextOption { available in 10_4,7_0 }; cvar; external;
  kCIContextCacheIntermediates: CIContextOption { available in 10_12,10_0 }; cvar; external;
  kCIContextUseSoftwareRenderer: CIContextOption; cvar; external;
  kCIContextPriorityRequestLow: CIContextOption { available in macos 10.12, ios 8.0 }; cvar; external;
  kCIContextAllowLowPower: CIContextOption { available in macos 10.12, ios 13.0 }; cvar; external;
  kCIContextName: CIContextOption { available in 10_14,12_0 }; cvar; external;
{$endif}


{ Types from OfflineGPUSupport }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CIContextPtr = ^CIContext;
{$endif}

{$ifdef CLASSES}

type
  CIContext = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    {$if defined(TARGET_OS_OSX)}
    class function contextWithCGLContext_pixelFormat_colorSpace_options (cglctx: CGLContextObj; pixelFormat: CGLPixelFormatObj; colorSpace: CGColorSpaceRef; options: NSDictionary): CIContext; message 'contextWithCGLContext:pixelFormat:colorSpace:options:'; deprecated 'in 10_6,10_14';
    {$endif}
    {$if defined(TARGET_OS_OSX)}
    class function contextWithCGLContext_pixelFormat_options (cglctx: CGLContextObj; pixelFormat: CGLPixelFormatObj; options: NSDictionary): CIContext; message 'contextWithCGLContext:pixelFormat:options:'; deprecated 'in 10_4,10_6';
    {$endif}
    class function contextWithCGContext_options (cgctx: CGContextRef; options: NSDictionary): CIContext; message 'contextWithCGContext:options:'; { available in 10_4,9_0 }
    class function contextWithOptions (options: NSDictionary): CIContext; message 'contextWithOptions:'; { available in 10_4,5_0 }
    class function context: CIContext; message 'context'; { available in 10_4,5_0 }
    function initWithOptions (options: NSDictionary): id; message 'initWithOptions:'; { available in 10_4,5_0 }
    function init: id; message 'init'; { available in 10_4,5_0 }
    {$if defined(TARGET_OS_IPHONE) and (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_SIMULATOR) or not defined(TARGET_OS_MACCATALYST))}
    class function contextWithEAGLContext (eaglContext: EAGLContextPtr): CIContext; message 'contextWithEAGLContext:'; deprecated 'in 5_0,12_0';
    class function contextWithEAGLContext_options (eaglContext: EAGLContextPtr; options: NSDictionary): CIContext; message 'contextWithEAGLContext:options:'; deprecated 'in 5_0,12_0';
    {$endif}
    class function contextWithMTLDevice (device: MTLDeviceProtocol): CIContext; message 'contextWithMTLDevice:'; { available in 10_11,9_0 }
    class function contextWithMTLDevice_options (device: MTLDeviceProtocol; options: NSDictionary): CIContext; message 'contextWithMTLDevice:options:'; { available in 10_11,9_0 }
    class function contextWithMTLCommandQueue (commandQueue: MTLCommandQueueProtocol): CIContext; message 'contextWithMTLCommandQueue:'; { available in 10_15,13_0 }
    class function contextWithMTLCommandQueue_options (commandQueue: MTLCommandQueueProtocol; options: NSDictionary): CIContext; message 'contextWithMTLCommandQueue:options:'; { available in 10_15,13_0 }
    function workingColorSpace: CGColorSpaceRef; message 'workingColorSpace'; { available in 10_11,9_0 }
    function workingFormat: CIFormat; message 'workingFormat'; { available in 10_11,9_0 }
    procedure drawImage_atPoint_fromRect (image: CIImage; atPoint: CGPoint; fromRect: CGRect); message 'drawImage:atPoint:fromRect:'; deprecated 'in 10_4,10_8, 5_0,6_0';
    procedure drawImage_inRect_fromRect (image: CIImage; inRect: CGRect; fromRect: CGRect); message 'drawImage:inRect:fromRect:';
    function createCGLayerWithSize_info (size: CGSize; info: CFDictionaryRef): CGLayerRef; message 'createCGLayerWithSize:info:'; deprecated 'in 10_4,10_11';
    procedure render_toBitmap_rowBytes_bounds_format_colorSpace (image: CIImage; data: pointer; rowBytes: ptrdiff_t; bounds: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef); message 'render:toBitmap:rowBytes:bounds:format:colorSpace:';
    {$if defined(COREIMAGE_SUPPORTS_IOSURFACE)}
    procedure render_toIOSurface_bounds_colorSpace (image: CIImage; surface: IOSurfaceRef; bounds: CGRect; colorSpace: CGColorSpaceRef); message 'render:toIOSurface:bounds:colorSpace:'; { available in 10_6,5_0 }
    {$endif}
    procedure render_toCVPixelBuffer (image: CIImage; buffer: CVPixelBufferRef); message 'render:toCVPixelBuffer:'; { available in 10_11,5_0 }
    procedure render_toCVPixelBuffer_bounds_colorSpace (image: CIImage; buffer: CVPixelBufferRef; bounds: CGRect; colorSpace: CGColorSpaceRef); message 'render:toCVPixelBuffer:bounds:colorSpace:'; { available in 10_11,5_0 }
    procedure render_toMTLTexture_commandBuffer_bounds_colorSpace (image: CIImage; texture: MTLTextureProtocol; commandBuffer: MTLCommandBufferProtocol; bounds: CGRect; colorSpace: CGColorSpaceRef); message 'render:toMTLTexture:commandBuffer:bounds:colorSpace:'; { available in 10_11,9_0 }
    procedure reclaimResources; message 'reclaimResources'; { available in 10_4 }
    procedure clearCaches; message 'clearCaches'; { available in 10_4,10_0 }
    function inputImageMaximumSize: CGSize; message 'inputImageMaximumSize'; { available in 5_0 }
    function outputImageMaximumSize: CGSize; message 'outputImageMaximumSize'; { available in 5_0 }
  end;


type
  createCGImage = objccategory external (CIContext)
    function createCGImage_fromRect (image: CIImage; fromRect: CGRect): CGImageRef; message 'createCGImage:fromRect:'; { CF_RETURNS_RETAINED }
    function createCGImage_fromRect_format_colorSpace (image: CIImage; fromRect: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): CGImageRef; message 'createCGImage:fromRect:format:colorSpace:'; { CF_RETURNS_RETAINED }
    function createCGImage_fromRect_format_colorSpace_deferred (image: CIImage; fromRect: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef; deferred: objcbool): CGImageRef; message 'createCGImage:fromRect:format:colorSpace:deferred:'; { available in 10_12,10_0 }
  end;

type
  OfflineGPUSupport = objccategory external (CIContext)
    class function offlineGPUCount: cuint; message 'offlineGPUCount'; { available in 10_10 }
    {$if defined(TARGET_OS_OSX)}
    class function contextForOfflineGPUAtIndex (index: cuint): CIContext; message 'contextForOfflineGPUAtIndex:'; deprecated 'in 10_10,10_14';
    class function contextForOfflineGPUAtIndex_colorSpace_options_sharedContext (index: cuint; colorSpace: CGColorSpaceRef; options: NSDictionary; sharedContext: CGLContextObj): CIContext; message 'contextForOfflineGPUAtIndex:colorSpace:options:sharedContext:'; deprecated 'in 10_10,10_14';
    {$endif}
  end;
{$endif}

{$ifdef TYPES}
type
  CIImageRepresentationOption = NSString;
  CIImageRepresentationOptionPtr = ^CIImageRepresentationOption;
{$endif}

{$ifdef CLASSES}

type
  ImageRepresentation = objccategory external (CIContext)
    function TIFFRepresentationOfImage_format_colorSpace_options (image: CIImage; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary): NSData; message 'TIFFRepresentationOfImage:format:colorSpace:options:'; { available in 10_12,10_0 }
    function JPEGRepresentationOfImage_colorSpace_options (image: CIImage; colorSpace: CGColorSpaceRef; options: NSDictionary): NSData; message 'JPEGRepresentationOfImage:colorSpace:options:'; { available in 10_12,10_0 }
    function HEIFRepresentationOfImage_format_colorSpace_options (image: CIImage; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary): NSData; message 'HEIFRepresentationOfImage:format:colorSpace:options:'; { available in 10_13_4,11_0 }
    function PNGRepresentationOfImage_format_colorSpace_options (image: CIImage; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary): NSData; message 'PNGRepresentationOfImage:format:colorSpace:options:'; { available in 10_13,11_0 }
    function writeTIFFRepresentationOfImage_toURL_format_colorSpace_options_error (image: CIImage; url: NSURL; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary; errorPtr: NSErrorPtr): objcbool; message 'writeTIFFRepresentationOfImage:toURL:format:colorSpace:options:error:'; { available in 10_12,10_0 }
    function writePNGRepresentationOfImage_toURL_format_colorSpace_options_error (image: CIImage; url: NSURL; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary; errorPtr: NSErrorPtr): objcbool; message 'writePNGRepresentationOfImage:toURL:format:colorSpace:options:error:'; { available in 10_13,11_0 }
    function writeJPEGRepresentationOfImage_toURL_colorSpace_options_error (image: CIImage; url: NSURL; colorSpace: CGColorSpaceRef; options: NSDictionary; errorPtr: NSErrorPtr): objcbool; message 'writeJPEGRepresentationOfImage:toURL:colorSpace:options:error:'; { available in 10_12,10_0 }
    function writeHEIFRepresentationOfImage_toURL_format_colorSpace_options_error (image: CIImage; url: NSURL; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary; errorPtr: NSErrorPtr): objcbool; message 'writeHEIFRepresentationOfImage:toURL:format:colorSpace:options:error:'; { available in 10_13_4,11_0 }
  end;

type
  CIDepthBlurEffect = objccategory external (CIContext)
    function depthBlurEffectFilterForImageURL_options (url: NSURL; options: NSDictionary): CIFilter; message 'depthBlurEffectFilterForImageURL:options:'; { available in 10_14,12_0 }
    function depthBlurEffectFilterForImageData_options (data: NSData; options: NSDictionary): CIFilter; message 'depthBlurEffectFilterForImageData:options:'; { available in 10_14,12_0 }
    function depthBlurEffectFilterForImage_disparityImage_portraitEffectsMatte_orientation_options (image: CIImage; disparityImage: CIImage; portraitEffectsMatte: CIImage; orientation: CGImagePropertyOrientation; options: NSDictionary): CIFilter; message 'depthBlurEffectFilterForImage:disparityImage:portraitEffectsMatte:orientation:options:'; { available in 10_14,12_0 }
    function depthBlurEffectFilterForImage_disparityImage_portraitEffectsMatte_hairSemanticSegmentation_orientation_options (image: CIImage; disparityImage: CIImage; portraitEffectsMatte: CIImage; hairSemanticSegmentation: CIImage; orientation: CGImagePropertyOrientation; options: NSDictionary): CIFilter; message 'depthBlurEffectFilterForImage:disparityImage:portraitEffectsMatte:hairSemanticSegmentation:orientation:options:'; { available in 10_15,13_0 }
    function depthBlurEffectFilterForImage_disparityImage_portraitEffectsMatte_hairSemanticSegmentation_glassesMatte_gainMap_orientation_options (image: CIImage; disparityImage: CIImage; portraitEffectsMatte: CIImage; hairSemanticSegmentation: CIImage; glassesMatte: CIImage; gainMap: CIImage; orientation: CGImagePropertyOrientation; options: NSDictionary): CIFilter; message 'depthBlurEffectFilterForImage:disparityImage:portraitEffectsMatte:hairSemanticSegmentation:glassesMatte:gainMap:orientation:options:'; { available in 11_0,14_1 }
  end;
{$endif}

