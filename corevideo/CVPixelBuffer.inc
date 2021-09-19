{ Parsed from CoreVideo.framework CVPixelBuffer.h }

{$if  not (defined(__COREVIDEO_CVPIXELBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVPIXELBUFFER_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferLockFlags = CVOptionFlags;
  CVPixelBufferLockFlagsPtr = ^CVPixelBufferLockFlags;

const
  kCVPixelBufferLock_ReadOnly = $00000001;

type
  CVPlanarComponentInfo = record
    offset: cint32;
    rowBytes: cuint32;
  end;
type
  CVPlanarComponentInfoPtr = ^CVPlanarComponentInfo;
type
  CVPlanarPixelBufferInfo = record
    componentInfo:array[0..0] of CVPlanarComponentInfo;
  end;
type
  CVPlanarPixelBufferInfoPtr = ^CVPlanarPixelBufferInfo;
type
  CVPlanarPixelBufferInfo_YCbCrPlanar = record
    componentInfoY: CVPlanarComponentInfo;
    componentInfoCb: CVPlanarComponentInfo;
    componentInfoCr: CVPlanarComponentInfo;
  end;
type
  CVPlanarPixelBufferInfo_YCbCrPlanarPtr = ^CVPlanarPixelBufferInfo_YCbCrPlanar;
type
  CVPlanarPixelBufferInfo_YCbCrBiPlanar = record
    componentInfoY: CVPlanarComponentInfo;
    componentInfoCbCr: CVPlanarComponentInfo;
  end;
type
  CVPlanarPixelBufferInfo_YCbCrBiPlanarPtr = ^CVPlanarPixelBufferInfo_YCbCrBiPlanar;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferPixelFormatTypeKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferMemoryAllocatorKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferWidthKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferHeightKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferExtendedPixelsLeftKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferExtendedPixelsTopKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferExtendedPixelsRightKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferExtendedPixelsBottomKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferBytesPerRowAlignmentKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferCGBitmapContextCompatibilityKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferCGImageCompatibilityKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferOpenGLCompatibilityKey: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferPlaneAlignmentKey: CFStringRef { available in macosx 10.6, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferIOSurfacePropertiesKey: CFStringRef { available in macosx 10.6, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferOpenGLESCompatibilityKey: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferMetalCompatibilityKey: CFStringRef { available in macosx 10.11, ios 8.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelBufferOpenGLTextureCacheCompatibilityKey: CFStringRef { unavailable in ios, tvos, watchos } { available in macosx 10.11 }; cvar; external;
  kCVPixelBufferOpenGLESTextureCacheCompatibilityKey: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferVersatileBayerKey_BayerPattern: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCVVersatileBayer_BayerPattern_RGGB = 0;
  kCVVersatileBayer_BayerPattern_GRBG = 1;
  kCVVersatileBayer_BayerPattern_GBRG = 2;
  kCVVersatileBayer_BayerPattern_BGGR = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferProResRAWKey_SenselSitingOffsets: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_BlackLevel: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_WhiteLevel: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_WhiteBalanceCCT: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_WhiteBalanceRedFactor: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_WhiteBalanceBlueFactor: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_ColorMatrix: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_GainFactor: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
  kCVPixelBufferProResRAWKey_RecommendedCrop: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferRef = CVImageBufferRef;
  CVPixelBufferRefPtr = ^CVPixelBufferRef;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferRetain(texture: CVPixelBufferRef): CVPixelBufferRef; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferRelease(texture: CVPixelBufferRef): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferCreateResolvedAttributesDictionary(allocator: CFAllocatorRef; attributes: CFArrayRef; var resolvedDictionaryOut: CFDictionaryRef): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferCreate(allocator: CFAllocatorRef; width: size_t; height: size_t; pixelFormatType: OSType; pixelBufferAttributes: CFDictionaryRef; var pixelBufferOut: CVPixelBufferRef): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferReleaseBytesCallback = procedure (releaseRefCon: pointer; baseAddress: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferCreateWithBytes(allocator: CFAllocatorRef; width: size_t; height: size_t; pixelFormatType: OSType; baseAddress: pointer; bytesPerRow: size_t; releaseCallback: CVPixelBufferReleaseBytesCallback; releaseRefCon: pointer; pixelBufferAttributes: CFDictionaryRef; var pixelBufferOut: CVPixelBufferRef): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferReleasePlanarBytesCallback = procedure (releaseRefCon: pointer; dataPtr: pointer; dataSize: size_t; numberOfPlanes: size_t; planeAddresses: pointer { variable size array of pointer }); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferCreateWithPlanarBytes(allocator: CFAllocatorRef; width: size_t; height: size_t; pixelFormatType: OSType; dataPtr: pointer; dataSize: size_t; numberOfPlanes: size_t; planeBaseAddress: pointer { variable size array of pointer }; var planeWidth: size_tPtr { variable size array of size_t }; planeHeight: size_tPtr { variable size array of size_t }; planeBytesPerRow: size_tPtr { variable size array of size_t }; releaseCallback: CVPixelBufferReleasePlanarBytesCallback; releaseRefCon: pointer; pixelBufferAttributes: CFDictionaryRef; pixelBufferOut: CVPixelBufferRefPtr): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferLockBaseAddress(pixelBuffer: CVPixelBufferRef; lockFlags: CVPixelBufferLockFlags): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferUnlockBaseAddress(pixelBuffer: CVPixelBufferRef; unlockFlags: CVPixelBufferLockFlags): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetWidth(pixelBuffer: CVPixelBufferRef): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetHeight(pixelBuffer: CVPixelBufferRef): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetPixelFormatType(pixelBuffer: CVPixelBufferRef): OSType; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBaseAddress(pixelBuffer: CVPixelBufferRef): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBytesPerRow(pixelBuffer: CVPixelBufferRef): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetDataSize(pixelBuffer: CVPixelBufferRef): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferIsPlanar(pixelBuffer: CVPixelBufferRef): Boolean; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetPlaneCount(pixelBuffer: CVPixelBufferRef): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetWidthOfPlane(pixelBuffer: CVPixelBufferRef; planeIndex: size_t): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetHeightOfPlane(pixelBuffer: CVPixelBufferRef; planeIndex: size_t): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBaseAddressOfPlane(pixelBuffer: CVPixelBufferRef; planeIndex: size_t): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBytesPerRowOfPlane(pixelBuffer: CVPixelBufferRef; planeIndex: size_t): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetExtendedPixels(pixelBuffer: CVPixelBufferRef; var extraColumnsOnLeft: size_t; var extraColumnsOnRight: size_t; var extraRowsOnTop: size_t; var extraRowsOnBottom: size_t): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferFillExtendedPixels(pixelBuffer: CVPixelBufferRef): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$endif}
