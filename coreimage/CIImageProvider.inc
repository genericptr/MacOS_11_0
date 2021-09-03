{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIImageProvider.h }
{$ifdef CLASSES}

type
  CIImage_CIImageProvider = objccategory external name 'CIImageProvider' (CIImage)
    class function imageWithImageProvider_size_format_colorSpace_options (p: id; width: size_t; f: CIFormat; cs: CGColorSpaceRef; options: NSDictionary): CIImage; message 'imageWithImageProvider:size:format:colorSpace:options:'; { available in 10_4, 9_0 }
    function initWithImageProvider_size_format_colorSpace_options (p: id; width: size_t; f: CIFormat; cs: CGColorSpaceRef; options: NSDictionary): id; message 'initWithImageProvider:size:format:colorSpace:options:'; { available in 10_4, 9_0 }
  end;

type
  CIImageProvider = objccategory external (NSObject)
    procedure provideImageData_bytesPerRow_origin_size_userInfo (data: pointer; rowbytes: size_t; x: size_t; width: size_t; info: id); message 'provideImageData:bytesPerRow:origin:size:userInfo:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCIImageProviderTileSize: CIImageOption { available in 10_4, 9_0 }; cvar; external;
  kCIImageProviderUserInfo: CIImageOption { available in 10_4, 9_0 }; cvar; external;
{$endif}

