{ Parsed from CoreImage.framework CIDetector.h }

{$ifdef TYPES}
type
  CIDetectorPtr = ^CIDetector;
{$endif}

{$ifdef CLASSES}

type
  CIDetector = objcclass external (NSObject)
  private
  public
    class function detectorOfType_context_options (type_: NSString; context: CIContext; options: NSDictionary): CIDetector; message 'detectorOfType:context:options:'; { available in 10_7, 5_0 }
    function featuresInImage (image: CIImage): NSArray; message 'featuresInImage:'; { available in 10_7, 5_0 }
    function featuresInImage_options (image: CIImage; options: NSDictionary): NSArray; message 'featuresInImage:options:'; { available in 10_8, 5_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorTypeFace: NSString { available in 10_7, 5_0 }; cvar; external;
  CIDetectorTypeRectangle: NSString { available in 10_10, 8_0 }; cvar; external;
  CIDetectorTypeQRCode: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorTypeText: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorAccuracy: NSString { available in 10_7, 5_0 }; cvar; external;
  CIDetectorAccuracyLow: NSString { available in 10_7, 5_0 }; cvar; external;
  CIDetectorAccuracyHigh: NSString { available in 10_7, 5_0 }; cvar; external;
  CIDetectorTracking: NSString { available in 10_8, 6_0 }; cvar; external;
  CIDetectorMinFeatureSize: NSString { available in 10_8, 6_0 }; cvar; external;
  CIDetectorMaxFeatureCount: NSString { available in 10_12, 10_0 }; cvar; external;
  CIDetectorNumberOfAngles: NSString { available in 10_11, 9_0 }; cvar; external;
  CIDetectorImageOrientation: NSString { available in 10_8, 5_0 }; cvar; external;
  CIDetectorEyeBlink: NSString { available in 10_9, 7_0 }; cvar; external;
  CIDetectorSmile: NSString { available in 10_9, 7_0 }; cvar; external;
  CIDetectorFocalLength: NSString { available in 10_10, 8_0 }; cvar; external;
  CIDetectorAspectRatio: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorReturnSubFeatures: NSString { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
{$endif}

{$endif}
