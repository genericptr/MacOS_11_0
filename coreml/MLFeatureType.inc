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
  MLFeatureTypeSequence = 7 { available in macos , ios , watchos , tvos  };
{$endif}

