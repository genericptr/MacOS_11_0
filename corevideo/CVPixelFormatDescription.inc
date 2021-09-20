{ Parsed from CoreVideo.framework CVPixelFormatDescription.h }

{$if  not (defined(__COREVIDEO_CVPIXELFORMATDESCRIPTION_H__))}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelFormatName: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatConstant: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatCodecType: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatFourCC: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatContainsAlpha: CFStringRef { available starting in macos 10.7, ios 4.3 }; cvar; external;
  kCVPixelFormatContainsYCbCr: CFStringRef { available starting in macos 10.10, ios 8.0 }; cvar; external;
  kCVPixelFormatContainsRGB: CFStringRef { available starting in macos 10.10, ios 8.0 }; cvar; external;
  kCVPixelFormatContainsGrayscale: CFStringRef { available starting in macos 10.14, ios 12.0 }; cvar; external;
  kCVPixelFormatComponentRange: CFStringRef { available starting in macos 10.10, ios 9.0 }; cvar; external;
  kCVPixelFormatComponentRange_VideoRange: CFStringRef { available starting in macos 10.10, ios 9.0 }; cvar; external;
  kCVPixelFormatComponentRange_FullRange: CFStringRef { available starting in macos 10.10, ios 9.0 }; cvar; external;
  kCVPixelFormatComponentRange_WideRange: CFStringRef { available starting in macos 10.10, ios 9.0 }; cvar; external;
  kCVPixelFormatPlanes: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatBlockWidth: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatBlockHeight: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatBitsPerBlock: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatBlockHorizontalAlignment: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatBlockVerticalAlignment: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatBlackBlock: CFStringRef { available starting in macos 10.6, ios 4.0 }; cvar; external;
  kCVPixelFormatHorizontalSubsampling: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatVerticalSubsampling: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatOpenGLFormat: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatOpenGLType: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatOpenGLInternalFormat: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatCGBitmapInfo: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelFormatQDCompatibility: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelFormatCGBitmapContextCompatibility: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelFormatCGImageCompatibility: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelFormatOpenGLCompatibility: CFStringRef { available in macosx 10.4, ios 4.0, tvos 9.0, watchos 4.0 }; cvar; external;
  kCVPixelFormatOpenGLESCompatibility: CFStringRef { unavailable in macosx } { unavailable in macCatalyst }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVFillExtendedPixelsCallBack = function (pixelBuffer: CVPixelBufferRef; refCon: pointer): Boolean; cdecl;

type
  CVFillExtendedPixelsCallBackData = record
    version: CFIndex;
    fillCallBack: CVFillExtendedPixelsCallBack;
    refCon: pointer;
  end;
type
  CVFillExtendedPixelsCallBackDataPtr = ^CVFillExtendedPixelsCallBackData;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelFormatFillExtendedPixelsCallback: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelFormatDescriptionCreateWithPixelFormatType(allocator: CFAllocatorRef; pixelFormat: OSType): CFDictionaryRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelFormatDescriptionArrayCreateWithAllPixelFormatTypes(allocator: CFAllocatorRef): CFArrayRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelFormatDescriptionRegisterDescriptionWithPixelFormatType(description: CFDictionaryRef; pixelFormat: OSType): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
{$endif}

{$if defined(CV_EXPORT)defined(const)defined(CFStringRef)defined(kCVPixelFormatDirect3DFormat)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelFormatDirect3DType: CFStringRef; cvar; external;
  kCVPixelFormatDirect3DInternalFormat: CFStringRef; cvar; external;
  kCVPixelFormatDirect3DCompatibility: CFStringRef; cvar; external;
  kCVPixelFormatDXGICompatibility: CFStringRef; cvar; external;
  kCVPixelFormatDXGIFormat: CFStringRef; cvar; external;
  kCVPixelFormatDXGIType: CFStringRef; cvar; external;
  kCVPixelFormatDXGIInternalFormat: CFStringRef; cvar; external;
{$endif}

{$endif}

{$endif}
