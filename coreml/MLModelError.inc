{ Parsed from CoreML.framework MLModelError.h }
{$ifdef TYPES}
type
  MLModelError = NSInteger;
  MLModelErrorPtr = ^MLModelError;

const
  MLModelErrorGeneric = 0;
  MLModelErrorFeatureType = 1;
  MLModelErrorIO = 3;
  MLModelErrorCustomLayer = 4 { available in macos 10.13.2, ios 11.2, watchos 4.2, tvos 11.2 };
  MLModelErrorCustomModel = 5 { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 };
  MLModelErrorUpdate = 6 { available in macos 10.15, ios 13.0, tvos 14.0 };
  MLModelErrorParameters = 7 { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 };
  MLModelErrorModelDecryptionKeyFetch = 8 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };
  MLModelErrorModelDecryption = 9 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };
  MLModelErrorModelCollection = 10 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };
{$endif}

