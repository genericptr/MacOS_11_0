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
    class function detectorOfType_context_options (type_: NSString; context: CIContext; options: NSDictionary): CIDetector; message 'detectorOfType:context:options:'; { available in macos 10.7, ios 5.0 }
    function featuresInImage (image: CIImage): NSArray; message 'featuresInImage:'; { available in macos 10.7, ios 5.0 }
    function featuresInImage_options (image: CIImage; options: NSDictionary): NSArray; message 'featuresInImage:options:'; { available in macos 10.8, ios 5.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorTypeFace: NSString { available in macos 10.7, ios 5.0 }; cvar; external;
  CIDetectorTypeRectangle: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
  CIDetectorTypeQRCode: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorTypeText: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorAccuracy: NSString { available in macos 10.7, ios 5.0 }; cvar; external;
  CIDetectorAccuracyLow: NSString { available in macos 10.7, ios 5.0 }; cvar; external;
  CIDetectorAccuracyHigh: NSString { available in macos 10.7, ios 5.0 }; cvar; external;
  CIDetectorTracking: NSString { available in macos 10.8, ios 6.0 }; cvar; external;
  CIDetectorMinFeatureSize: NSString { available in macos 10.8, ios 6.0 }; cvar; external;
  CIDetectorMaxFeatureCount: NSString { available in macos 10.12, ios 10.0 }; cvar; external;
  CIDetectorNumberOfAngles: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CIDetectorImageOrientation: NSString { available in macos 10.8, ios 5.0 }; cvar; external;
  CIDetectorEyeBlink: NSString { available in macos 10.9, ios 7.0 }; cvar; external;
  CIDetectorSmile: NSString { available in macos 10.9, ios 7.0 }; cvar; external;
  CIDetectorFocalLength: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
  CIDetectorAspectRatio: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorReturnSubFeatures: NSString { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
{$endif}

{$endif}
