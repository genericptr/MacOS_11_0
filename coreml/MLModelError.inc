{ Parsed from CoreML.framework MLModelError.h }
{$ifdef TYPES}
type
  MLModelError = NSInteger;
  MLModelErrorPtr = ^MLModelError;

const
  MLModelErrorGeneric = 0;
  MLModelErrorFeatureType = 1;
  MLModelErrorIO = 3;
  MLModelErrorCustomLayer = 4 { available in macos , ios , watchos , tvos  };
  MLModelErrorCustomModel = 5 { available in macos , ios , watchos , tvos  };
  MLModelErrorUpdate = 6 { available in macos , ios , tvos  };
  MLModelErrorParameters = 7 { available in macos , ios , watchos , tvos  };
  MLModelErrorModelDecryptionKeyFetch = 8 { available in macos , ios , watchos , tvos  };
  MLModelErrorModelDecryption = 9 { available in macos , ios , watchos , tvos  };
  MLModelErrorModelCollection = 10 { available in macos , ios , watchos , tvos  };
{$endif}

