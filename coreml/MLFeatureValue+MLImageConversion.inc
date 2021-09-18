{ Parsed from CoreML.framework MLFeatureValue+MLImageConversion.h }
{$ifdef TYPES}
type
  MLFeatureValueImageOption = NSString;
  MLFeatureValueImageOptionPtr = ^MLFeatureValueImageOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MLFeatureValueImageOptionCropRect: MLFeatureValueImageOption { available in macos , ios , tvos  }; cvar; external;
  MLFeatureValueImageOptionCropAndScale: MLFeatureValueImageOption { available in macos , ios ,tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MLImageConversion = objccategory external (MLFeatureValue)
    class function featureValueWithImageAtURL_pixelsWide_pixelsHigh_pixelFormatType_options_error (url: NSURL; pixelsWide: NSInteger; pixelsHigh: NSInteger; pixelFormatType: OSType; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithImageAtURL:pixelsWide:pixelsHigh:pixelFormatType:options:error:';
    class function featureValueWithImageAtURL_constraint_options_error (url: NSURL; constraint: MLImageConstraint; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithImageAtURL:constraint:options:error:';
    class function featureValueWithCGImage_pixelsWide_pixelsHigh_pixelFormatType_options_error (cgImage: CGImageRef; pixelsWide: NSInteger; pixelsHigh: NSInteger; pixelFormatType: OSType; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithCGImage:pixelsWide:pixelsHigh:pixelFormatType:options:error:';
    class function featureValueWithCGImage_constraint_options_error (cgImage: CGImageRef; constraint: MLImageConstraint; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithCGImage:constraint:options:error:';
    class function featureValueWithImageAtURL_orientation_pixelsWide_pixelsHigh_pixelFormatType_options_error (url: NSURL; orientation: CGImagePropertyOrientation; pixelsWide: NSInteger; pixelsHigh: NSInteger; pixelFormatType: OSType; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithImageAtURL:orientation:pixelsWide:pixelsHigh:pixelFormatType:options:error:';
    class function featureValueWithImageAtURL_orientation_constraint_options_error (url: NSURL; orientation: CGImagePropertyOrientation; constraint: MLImageConstraint; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithImageAtURL:orientation:constraint:options:error:';
    class function featureValueWithCGImage_orientation_pixelsWide_pixelsHigh_pixelFormatType_options_error (cgImage: CGImageRef; orientation: CGImagePropertyOrientation; pixelsWide: NSInteger; pixelsHigh: NSInteger; pixelFormatType: OSType; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithCGImage:orientation:pixelsWide:pixelsHigh:pixelFormatType:options:error:';
    class function featureValueWithCGImage_orientation_constraint_options_error (cgImage: CGImageRef; orientation: CGImagePropertyOrientation; constraint: MLImageConstraint; options: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithCGImage:orientation:constraint:options:error:';
  end;
{$endif}

