{ Parsed from AVFoundation.framework AVSemanticSegmentationMatte.h }

{$ifdef TYPES}
type
  AVSemanticSegmentationMattePtr = ^AVSemanticSegmentationMatte;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVSemanticSegmentationMatteType = NSString;
  AVSemanticSegmentationMatteTypePtr = ^AVSemanticSegmentationMatteType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVSemanticSegmentationMatteTypeSkin: AVSemanticSegmentationMatteType { available in macos , ios , macCatalyst , tvos , watchos  }; cvar; external;
  AVSemanticSegmentationMatteTypeHair: AVSemanticSegmentationMatteType { available in macos , ios , macCatalyst , tvos , watchos  }; cvar; external;
  AVSemanticSegmentationMatteTypeTeeth: AVSemanticSegmentationMatteType { available in macos , ios , macCatalyst , tvos , watchos  }; cvar; external;
  AVSemanticSegmentationMatteTypeGlasses: AVSemanticSegmentationMatteType { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVSemanticSegmentationMatte = objcclass external (NSObject)
  public
    class function semanticSegmentationMatteFromImageSourceAuxiliaryDataType_dictionaryRepresentation_error (imageSourceAuxiliaryDataType: CFStringRef; imageSourceAuxiliaryDataInfoDictionary: NSDictionary; outError: NSErrorPtr): id; message 'semanticSegmentationMatteFromImageSourceAuxiliaryDataType:dictionaryRepresentation:error:';
    function matteType: AVSemanticSegmentationMatteType; message 'matteType';
    function semanticSegmentationMatteByApplyingExifOrientation (exifOrientation: CGImagePropertyOrientation): id; message 'semanticSegmentationMatteByApplyingExifOrientation:';
    function semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer_error (pixelBuffer: CVPixelBufferRef; outError: NSErrorPtr): id; message 'semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:error:';
    function dictionaryRepresentationForAuxiliaryDataType (outAuxDataType: NSStringPtr): NSDictionary; message 'dictionaryRepresentationForAuxiliaryDataType:';
    function pixelFormatType: OSType; message 'pixelFormatType';
    function mattingImage: CVPixelBufferRef; message 'mattingImage';
  end;
{$endif}

{$else}
{$endif}
