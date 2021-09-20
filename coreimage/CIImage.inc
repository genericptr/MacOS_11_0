{ Parsed from CoreImage.framework CIImage.h }

{ Types from CIImage }
{$ifdef TYPES}

type
  CIFormat = cint;
  CIFormatPtr = ^CIFormat;

type
  CIImageOption = NSString;
  CIImageOptionPtr = ^CIImageOption;

var
  kCIFormatARGB8: CIFormat { available in macos 10.4, ios 6.0 }; cvar; external;
  kCIFormatBGRA8: CIFormat; cvar; external;
  kCIFormatRGBA8: CIFormat; cvar; external;
  kCIFormatABGR8: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRGBAh: CIFormat { available in macos 10.4, ios 6.0 }; cvar; external;
  kCIFormatRGBA16: CIFormat { available in macos 10.4, ios 10.0 }; cvar; external;
  kCIFormatRGBAf: CIFormat { available in macos 10.4, ios 7.0 }; cvar; external;
  kCIFormatA8: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatA16: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatAh: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatAf: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatR8: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatR16: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRh: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRf: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRG8: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRG16: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRGh: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatRGf: CIFormat { available in macos 10.11, ios 9.0 }; cvar; external;
  kCIFormatL8: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatL16: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatLh: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatLf: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatLA8: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatLA16: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatLAh: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIFormatLAf: CIFormat { available in macos 10.12, ios 10.0 }; cvar; external;
  kCIImageColorSpace: CIImageOption; cvar; external;
  kCIImageToneMapHDRtoSDR: CIImageOption { available in macos 11.0, ios 14.1 }; cvar; external;
  kCIImageNearestSampling: CIImageOption { available in macos 10.13, ios 11.0 }; cvar; external;
  kCIImageProperties: CIImageOption { available in macos 10.8, ios 5.0 }; cvar; external;
  kCIImageApplyOrientationProperty: CIImageOption { available in macos 10.13, ios 11.0 }; cvar; external;
  kCIImageTextureTarget: CIImageOption deprecated 'in 10_9,10_14'; cvar; external;
  kCIImageTextureFormat: CIImageOption deprecated 'in 10_9,10_14'; cvar; external;
  kCIImageAuxiliaryDepth: CIImageOption { available in macos 10.13, ios 11.0 }; cvar; external;
  kCIImageAuxiliaryDisparity: CIImageOption { available in macos 10.13, ios 11.0 }; cvar; external;
  kCIImageAuxiliaryPortraitEffectsMatte: CIImageOption { available in macos 10.14, ios 12.0 }; cvar; external;
  kCIImageAuxiliarySemanticSegmentationSkinMatte: CIImageOption { available in macos 10.15, ios 13.0 }; cvar; external;
  kCIImageAuxiliarySemanticSegmentationHairMatte: CIImageOption { available in macos 10.15, ios 13.0 }; cvar; external;
  kCIImageAuxiliarySemanticSegmentationTeethMatte: CIImageOption { available in macos 10.15, ios 13.0 }; cvar; external;
  kCIImageAuxiliarySemanticSegmentationGlassesMatte: CIImageOption { available in macos 11.0, ios 14.1 }; cvar; external;
  kCIImageAuxiliarySemanticSegmentationSkyMatte: CIImageOption { available in macos 11.1, ios 14.3 }; cvar; external;


{$endif}


{ Types from AutoAdjustment }
{$ifdef TYPES}

type
  CIImageAutoAdjustmentOption = NSString;
type
  CIImageAutoAdjustmentOptionPtr = ^CIImageAutoAdjustmentOption;
{$endif}


{$ifdef TYPES}
type
  CIImagePtr = ^CIImage;
{$endif}

{$ifdef CLASSES}

type
  CIImage = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    {$if defined(TARGET_OS_OSX) or defined(TARGET_OS_MACCATALYST)}
    _state: pointer;
    {$endif}
    _priv: pointer;
  public
    class function imageWithCGImage (image: CGImageRef): CIImage; message 'imageWithCGImage:';
    class function imageWithCGImage_options (image: CGImageRef; options: NSDictionary): CIImage; message 'imageWithCGImage:options:';
    class function imageWithCGImageSource_index_options (source: CGImageSourceRef; index: size_t; dict: NSDictionary): CIImage; message 'imageWithCGImageSource:index:options:'; { available in macos 10.15, ios 13.0 }
    class function imageWithCGLayer (layer: CGLayerRef): CIImage; message 'imageWithCGLayer:'; deprecated 'in 10_4,10_11';
    class function imageWithCGLayer_options (layer: CGLayerRef; options: NSDictionary): CIImage; message 'imageWithCGLayer:options:'; deprecated 'in 10_4,10_11';
    class function imageWithBitmapData_bytesPerRow_size_format_colorSpace (data: NSData; bytesPerRow: size_t; size: CGSize; format: CIFormat; colorSpace: CGColorSpaceRef): CIImage; message 'imageWithBitmapData:bytesPerRow:size:format:colorSpace:';
    class function imageWithTexture_size_flipped_colorSpace (name: cuint; size: CGSize; flipped: objcbool; colorSpace: CGColorSpaceRef): CIImage; message 'imageWithTexture:size:flipped:colorSpace:'; deprecated 'in 10_4,10_14, 6_0,12_0';
    class function imageWithTexture_size_flipped_options (name: cuint; size: CGSize; flipped: objcbool; options: NSDictionary): CIImage; message 'imageWithTexture:size:flipped:options:'; deprecated 'in 10_9,10_14';
    class function imageWithMTLTexture_options (texture: MTLTextureProtocol; options: NSDictionary): CIImage; message 'imageWithMTLTexture:options:'; { available in macos 10.11, ios 9.0 }
    class function imageWithContentsOfURL (url: NSURL): CIImage; message 'imageWithContentsOfURL:';
    class function imageWithContentsOfURL_options (url: NSURL; options: NSDictionary): CIImage; message 'imageWithContentsOfURL:options:';
    class function imageWithData (data: NSData): CIImage; message 'imageWithData:';
    class function imageWithData_options (data: NSData; options: NSDictionary): CIImage; message 'imageWithData:options:';
    class function imageWithCVImageBuffer (imageBuffer: CVImageBufferRef): CIImage; message 'imageWithCVImageBuffer:'; { available in macos 10.4, ios 9.0 }
    class function imageWithCVImageBuffer_options (imageBuffer: CVImageBufferRef; options: NSDictionary): CIImage; message 'imageWithCVImageBuffer:options:'; { available in macos 10.4, ios 9.0 }
    class function imageWithCVPixelBuffer (pixelBuffer: CVPixelBufferRef): CIImage; message 'imageWithCVPixelBuffer:'; { available in macos 10.11, ios 5.0 }
    class function imageWithCVPixelBuffer_options (pixelBuffer: CVPixelBufferRef; options: NSDictionary): CIImage; message 'imageWithCVPixelBuffer:options:'; { available in macos 10.11, ios 5.0 }
    {$if defined(COREIMAGE_SUPPORTS_IOSURFACE)}
    class function imageWithIOSurface (surface: IOSurfaceRef): CIImage; message 'imageWithIOSurface:'; { available in macos 10.6, ios 5.0 }
    class function imageWithIOSurface_options (surface: IOSurfaceRef; options: NSDictionary): CIImage; message 'imageWithIOSurface:options:'; { available in macos 10.6, ios 5.0 }
    {$endif}
    class function imageWithColor (color: CIColor): CIImage; message 'imageWithColor:';
    class function emptyImage: CIImage; message 'emptyImage';
    class function blackImage: CIImage; message 'blackImage'; { available in macos 10.15, ios 13.0 }
    class function whiteImage: CIImage; message 'whiteImage'; { available in macos 10.15, ios 13.0 }
    class function grayImage: CIImage; message 'grayImage'; { available in macos 10.15, ios 13.0 }
    class function redImage: CIImage; message 'redImage'; { available in macos 10.15, ios 13.0 }
    class function greenImage: CIImage; message 'greenImage'; { available in macos 10.15, ios 13.0 }
    class function blueImage: CIImage; message 'blueImage'; { available in macos 10.15, ios 13.0 }
    class function cyanImage: CIImage; message 'cyanImage'; { available in macos 10.15, ios 13.0 }
    class function magentaImage: CIImage; message 'magentaImage'; { available in macos 10.15, ios 13.0 }
    class function yellowImage: CIImage; message 'yellowImage'; { available in macos 10.15, ios 13.0 }
    class function clearImage: CIImage; message 'clearImage'; { available in macos 10.15, ios 13.0 }
    function initWithCGImage (image: CGImageRef): id; message 'initWithCGImage:';
    function initWithCGImage_options (image: CGImageRef; options: NSDictionary): id; message 'initWithCGImage:options:';
    function initWithCGImageSource_index_options (source: CGImageSourceRef; index: size_t; dict: NSDictionary): id; message 'initWithCGImageSource:index:options:'; { available in macos 10.15, ios 13.0 }
    function initWithCGLayer (layer: CGLayerRef): id; message 'initWithCGLayer:'; deprecated 'in 10_4,10_11,"Use initWithCGImage: instead."';
    function initWithCGLayer_options (layer: CGLayerRef; options: NSDictionary): id; message 'initWithCGLayer:options:'; deprecated 'in 10_4,10_11,"Use initWithCGImage:options instead."';
    function initWithData (data: NSData): id; message 'initWithData:';
    function initWithData_options (data: NSData; options: NSDictionary): id; message 'initWithData:options:';
    function initWithBitmapData_bytesPerRow_size_format_colorSpace (data: NSData; bytesPerRow: size_t; size: CGSize; format: CIFormat; colorSpace: CGColorSpaceRef): id; message 'initWithBitmapData:bytesPerRow:size:format:colorSpace:';
    function initWithTexture_size_flipped_colorSpace (name: cuint; size: CGSize; flipped: objcbool; colorSpace: CGColorSpaceRef): id; message 'initWithTexture:size:flipped:colorSpace:'; deprecated 'in 10_4,10_14, 6_0,12_0';
    function initWithTexture_size_flipped_options (name: cuint; size: CGSize; flipped: objcbool; options: NSDictionary): id; message 'initWithTexture:size:flipped:options:'; deprecated 'in 10_9,10_14';
    function initWithMTLTexture_options (texture: MTLTextureProtocol; options: NSDictionary): id; message 'initWithMTLTexture:options:'; { available in macos 10.11, ios 9.0 }
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:';
    function initWithContentsOfURL_options (url: NSURL; options: NSDictionary): id; message 'initWithContentsOfURL:options:';
    {$if defined(COREIMAGE_SUPPORTS_IOSURFACE)}
    function initWithIOSurface (surface: IOSurfaceRef): id; message 'initWithIOSurface:'; { available in macos 10.6, ios 5.0 }
    function initWithIOSurface_options (surface: IOSurfaceRef; options: NSDictionary): id; message 'initWithIOSurface:options:'; { available in macos 10.6, ios 5.0 }
    {$endif}
    {$if defined(TARGET_OS_OSX)}
    function initWithIOSurface_plane_format_options (surface: IOSurfaceRef; plane: size_t; format: CIFormat; options: NSDictionary): id; message 'initWithIOSurface:plane:format:options:'; deprecated 'in 10_9,10_11';
    {$endif}
    function initWithCVImageBuffer (imageBuffer: CVImageBufferRef): id; message 'initWithCVImageBuffer:'; { available in macos 10.4, ios 9.0 }
    function initWithCVImageBuffer_options (imageBuffer: CVImageBufferRef; options: NSDictionary): id; message 'initWithCVImageBuffer:options:'; { available in macos 10.4, ios 9.0 }
    function initWithCVPixelBuffer (pixelBuffer: CVPixelBufferRef): id; message 'initWithCVPixelBuffer:'; { available in macos 10.11, ios 5.0 }
    function initWithCVPixelBuffer_options (pixelBuffer: CVPixelBufferRef; options: NSDictionary): id; message 'initWithCVPixelBuffer:options:'; { available in macos 10.11, ios 5.0 }
    function initWithColor (color: CIColor): id; message 'initWithColor:';
    function imageByApplyingTransform (matrix: CGAffineTransform): CIImage; message 'imageByApplyingTransform:';
    function imageByApplyingTransform_highQualityDownsample (matrix: CGAffineTransform; highQualityDownsample: objcbool): CIImage; message 'imageByApplyingTransform:highQualityDownsample:'; { available in macos 10.12, ios 10.0 }
    function imageByApplyingOrientation (orientation: cint): CIImage; message 'imageByApplyingOrientation:'; { available in macos 10.10, ios 8.0 }
    function imageTransformForOrientation (orientation: cint): CGAffineTransform; message 'imageTransformForOrientation:'; { available in macos 10.10, ios 8.0 }
    function imageByApplyingCGOrientation (orientation: CGImagePropertyOrientation): CIImage; message 'imageByApplyingCGOrientation:'; { available in macos 10.13, ios 11.0 }
    function imageTransformForCGOrientation (orientation: CGImagePropertyOrientation): CGAffineTransform; message 'imageTransformForCGOrientation:'; { available in macos 10.13, ios 11.0 }
    function imageByCompositingOverImage (dest: CIImage): CIImage; message 'imageByCompositingOverImage:'; { available in macos 10.4, ios 8.0 }
    function imageByCroppingToRect (rect: CGRect): CIImage; message 'imageByCroppingToRect:';
    function imageByClampingToExtent: CIImage; message 'imageByClampingToExtent'; { available in macos 10.10, ios 8.0 }
    function imageByClampingToRect (rect: CGRect): CIImage; message 'imageByClampingToRect:'; { available in macos 10.12, ios 10.0 }
    function imageByApplyingFilter_withInputParameters (filterName: NSString; params: NSDictionary): CIImage; message 'imageByApplyingFilter:withInputParameters:'; { available in macos 10.10, ios 8.0 }
    function imageByApplyingFilter (filterName: NSString): CIImage; message 'imageByApplyingFilter:'; { available in macos 10.13, ios 11.0 }
    function imageByColorMatchingColorSpaceToWorkingSpace (colorSpace: CGColorSpaceRef): CIImage; message 'imageByColorMatchingColorSpaceToWorkingSpace:'; { available in macos 10.12, ios 10.0 }
    function imageByColorMatchingWorkingSpaceToColorSpace (colorSpace: CGColorSpaceRef): CIImage; message 'imageByColorMatchingWorkingSpaceToColorSpace:'; { available in macos 10.12, ios 10.0 }
    function imageByPremultiplyingAlpha: CIImage; message 'imageByPremultiplyingAlpha'; { available in macos 10.12, ios 10.0 }
    function imageByUnpremultiplyingAlpha: CIImage; message 'imageByUnpremultiplyingAlpha'; { available in macos 10.12, ios 10.0 }
    function imageBySettingAlphaOneInExtent (extent: CGRect): CIImage; message 'imageBySettingAlphaOneInExtent:'; { available in macos 10.12, ios 10.0 }
    function imageByApplyingGaussianBlurWithSigma (sigma: double): CIImage; message 'imageByApplyingGaussianBlurWithSigma:'; { available in macos 10.12, ios 10.0 }
    function imageBySettingProperties (properties: NSDictionary): CIImage; message 'imageBySettingProperties:'; { available in macos 10.12, ios 10.0 }
    function imageBySamplingLinear: CIImage; message 'imageBySamplingLinear'; { available in macos 10.13, ios 11.0 }
    function imageBySamplingNearest: CIImage; message 'imageBySamplingNearest'; { available in macos 10.13, ios 11.0 }
    function imageByInsertingIntermediate: CIImage; message 'imageByInsertingIntermediate'; { available in macos 10.14, ios 12.0 }
    function imageByInsertingIntermediate_ (cache: objcbool): CIImage; message 'imageByInsertingIntermediate:'; { available in macos 10.14, ios 12.0 }
    function extent: CGRect; message 'extent';
    function properties: NSDictionary; message 'properties'; { available in macos 10.8, ios 5.0 }
    function definition: CIFilterShape; message 'definition'; { available in 10_4 }
    function url: NSURL; message 'url'; { available in macos 10.4, ios 9.0 }
    function colorSpace: CGColorSpaceRef; message 'colorSpace'; { available in macos 10.4, ios 9.0 }
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer'; { available in macos 10.12, ios 10.0 }
    function CGImage: CGImageRef; message 'CGImage'; { available in 10_12,10_0 }
    function regionOfInterestForImage_inRect (image: CIImage; rect: CGRect): CGRect; message 'regionOfInterestForImage:inRect:'; { available in macos 10.11, ios 6.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  AutoAdjustment = objccategory external (CIImage)
    function autoAdjustmentFilters: NSArray; message 'autoAdjustmentFilters'; { available in macos 10.8, ios 5.0 }
    function autoAdjustmentFiltersWithOptions (options: NSDictionary): NSArray; message 'autoAdjustmentFiltersWithOptions:'; { available in macos 10.8, ios 5.0 }
  end;

type
  CIImage_AVDepthData = objccategory external name 'AVDepthData' (CIImage)
    function depthData: AVDepthData; message 'depthData'; { available in 10_13,11_0 }
    function initWithDepthData_options (data: AVDepthData; options: NSDictionary): id; message 'initWithDepthData:options:'; { available in macos 10.13, ios 11.0 }
    function initWithDepthData (data: AVDepthData): id; message 'initWithDepthData:'; { available in macos 10.13, ios 11.0 }
    class function imageWithDepthData_options (data: AVDepthData; options: NSDictionary): id; message 'imageWithDepthData:options:'; { available in macos 10.13, ios 11.0 }
    class function imageWithDepthData (data: AVDepthData): id; message 'imageWithDepthData:'; { available in macos 10.13, ios 11.0 }
  end;

type
  CIImage_AVPortraitEffectsMatte = objccategory external name 'AVPortraitEffectsMatte' (CIImage)
    function portraitEffectsMatte: AVPortraitEffectsMatte; message 'portraitEffectsMatte'; { available in 10_14,12_0 }
    function initWithPortaitEffectsMatte_options (matte: AVPortraitEffectsMatte; options: NSDictionary): id; message 'initWithPortaitEffectsMatte:options:'; { available in macos 10.14, ios 12.0 }
    function initWithPortaitEffectsMatte (matte: AVPortraitEffectsMatte): id; message 'initWithPortaitEffectsMatte:'; { available in macos 10.13, ios 11.0 }
    class function imageWithPortaitEffectsMatte_options (matte: AVPortraitEffectsMatte; options: NSDictionary): id; message 'imageWithPortaitEffectsMatte:options:'; { available in macos 10.14, ios 12.0 }
    class function imageWithPortaitEffectsMatte (matte: AVPortraitEffectsMatte): id; message 'imageWithPortaitEffectsMatte:'; { available in macos 10.14, ios 12.0 }
  end;

type
  CIImage_AVSemanticSegmentationMatte = objccategory external name 'AVSemanticSegmentationMatte' (CIImage)
    function semanticSegmentationMatte: AVSemanticSegmentationMatte; message 'semanticSegmentationMatte'; { available in macos 10.15, ios 13.0 }
    function initWithSemanticSegmentationMatte_options (matte: AVSemanticSegmentationMatte; options: NSDictionary): id; message 'initWithSemanticSegmentationMatte:options:'; { available in macos 10.15, ios 13.0 }
    function initWithSemanticSegmentationMatte (matte: AVSemanticSegmentationMatte): id; message 'initWithSemanticSegmentationMatte:'; { available in macos 10.15, ios 13.0 }
    class function imageWithSemanticSegmentationMatte_options (matte: AVSemanticSegmentationMatte; options: NSDictionary): id; message 'imageWithSemanticSegmentationMatte:options:'; { available in macos 10.15, ios 13.0 }
    class function imageWithSemanticSegmentationMatte (matte: AVSemanticSegmentationMatte): id; message 'imageWithSemanticSegmentationMatte:'; { available in macos 10.15, ios 13.0 }
  end;
{$endif}

