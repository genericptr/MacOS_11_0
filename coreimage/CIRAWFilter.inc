{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIRAWFilter.h }
{$ifdef TYPES}
type
  CIRAWFilterOption = NSString;
  CIRAWFilterOptionPtr = ^CIRAWFilterOption;
{$endif}

{$ifdef CLASSES}

type
  CIRAWFilter = objccategory external (CIFilter)
    class function filterWithImageURL_options (url: NSURL; options: NSDictionary): CIFilter; message 'filterWithImageURL:options:'; { available in 10_5, 10_0 }
    class function filterWithImageData_options (data: NSData; options: NSDictionary): CIFilter; message 'filterWithImageData:options:'; { available in 10_5, 10_0 }
    class function filterWithCVPixelBuffer_properties_options (pixelBuffer: CVPixelBufferRef; properties: NSDictionary; options: NSDictionary): CIFilter; message 'filterWithCVPixelBuffer:properties:options:'; { available in 10_12, 10_0 }
    class function supportedRawCameraModels: NSArray; message 'supportedRawCameraModels'; { available in 10_15,13_0 }
  end;
{$endif}

