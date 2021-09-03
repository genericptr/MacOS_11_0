{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPortraitEffectsMatte.h }

{$ifdef TYPES}
type
  AVPortraitEffectsMattePtr = ^AVPortraitEffectsMatte;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVPortraitEffectsMatte = objcclass external (NSObject)
  private
    _internal: AVPortraitEffectsMatteInternal;
  public
    class function portraitEffectsMatteFromDictionaryRepresentation_error (imageSourceAuxDataInfoDictionary: NSDictionary; outError: NSErrorPtr): id; message 'portraitEffectsMatteFromDictionaryRepresentation:error:';
    function portraitEffectsMatteByApplyingExifOrientation (exifOrientation: CGImagePropertyOrientation): id; message 'portraitEffectsMatteByApplyingExifOrientation:';
    function portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer_error (pixelBuffer: CVPixelBufferRef; outError: NSErrorPtr): id; message 'portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:error:';
    function dictionaryRepresentationForAuxiliaryDataType (outAuxDataType: NSStringPtr): NSDictionary; message 'dictionaryRepresentationForAuxiliaryDataType:';
    function pixelFormatType: OSType; message 'pixelFormatType';
    function mattingImage: CVPixelBufferRef; message 'mattingImage';
  end;
{$endif}

{$else}
{$endif}
