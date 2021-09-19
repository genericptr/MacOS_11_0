{ Parsed from CoreML.framework MLFeatureType.h }
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
  MLFeatureTypeSequence = 7 { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 };
{$endif}

