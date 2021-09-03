{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLFeatureType.h }
{$ifdef TYPES}
type
  MLFeatureType = NSInteger;
  MLFeatureTypePtr = ^MLFeatureType;

const
  MLFeatureTypeInvalid = 0;
  MLFeatureTypeInt64 = 1;
  MLFeatureTypeDouble = 2;
  MLFeatureTypeString = 3;
  MLFeatureTypeImage = 4;
  MLFeatureTypeMultiArray = 5;
  MLFeatureTypeDictionary = 6;
  MLFeatureTypeSequence = 7 { available in macos , ios , watchos , tvos  };
{$endif}

