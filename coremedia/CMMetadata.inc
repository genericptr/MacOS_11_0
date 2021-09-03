{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMMetadata.h }

{$ifndef CMMETADATA_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMetadataKeySpace_QuickTimeUserData: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataKeySpace_ISOUserData: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataKeySpace_QuickTimeMetadata: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataKeySpace_iTunes: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataKeySpace_ID3: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataKeySpace_Icy: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataKeySpace_HLSDateRange: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataLocation_ISO6709: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataDirection_Facing: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataPreferredAffineTransform: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataVideoOrientation: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataLivePhotoStillImageTransform: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataIdentifier_QuickTimeMetadataLivePhotoStillImageTransformReferenceDimensions: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataCreateIdentifierForKeyAndKeySpace(allocator: CFAllocatorRef; key: CFTypeRef; keySpace: CFStringRef; identifierOut: CFStringRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataCreateKeyFromIdentifier(allocator: CFAllocatorRef; identifier: CFStringRef; keyOut: CFTypeRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataCreateKeyFromIdentifierAsCFData(allocator: CFAllocatorRef; identifier: CFStringRef; keyOut: CFDataRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataCreateKeySpaceFromIdentifier(allocator: CFAllocatorRef; identifier: CFStringRef; keySpaceOut: CFStringRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMetadataBaseDataType_RawData: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_UTF8: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_UTF16: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_GIF: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_JPEG: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_PNG: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_BMP: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_Float32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_Float64: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_SInt8: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_SInt16: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_SInt32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_SInt64: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_UInt8: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_UInt16: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_UInt32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_UInt64: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_PointF32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_DimensionsF32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_RectF32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_AffineTransformF64: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_PolygonF32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_PolylineF32: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_JSON: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataBaseDataType_PerspectiveTransformF64: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataDataType_QuickTimeMetadataLocation_ISO6709: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMMetadataDataType_QuickTimeMetadataDirection: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataDataTypeRegistryRegisterDataType(dataType: CFStringRef; description: CFStringRef; conformingDataTypes: CFArrayRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryDataTypeIsRegistered(dataType: CFStringRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryGetDataTypeDescription(dataType: CFStringRef): CFStringRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryGetConformingDataTypes(dataType: CFStringRef): CFArrayRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryDataTypeConformsToDataType(dataType: CFStringRef; conformsToDataType: CFStringRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryGetBaseDataTypes: CFArrayRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryDataTypeIsBaseDataType(dataType: CFStringRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataDataTypeRegistryGetBaseDataTypeForConformingDataType(dataType: CFStringRef): CFStringRef; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
