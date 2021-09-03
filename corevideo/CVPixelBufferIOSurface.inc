{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVPixelBufferIOSurface.h }

{$if  not (defined(__COREVIDEO_CVPIXELBUFFERIOSURFACE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVPIXELBUFFERIOSURFACE_H__ = 1;
{$endif}

{$if defined(COREVIDEO_SUPPORTS_IOSURFACE)}

{$if defined(COREVIDEO_USE_IOSURFACEREF)}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  COREVIDEO_INCLUDED_IOSURFACE_HEADER_FILE = 1;
{$endif}

{$endif}

{$else}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  COREVIDEO_INCLUDED_IOSURFACE_HEADER_FILE = 1;
{$endif}

{$endif}
{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferIOSurfaceOpenGLTextureCompatibilityKey: CFStringRef { available in macosx  }; cvar; external;
  kCVPixelBufferIOSurfaceOpenGLFBOCompatibilityKey: CFStringRef { available in macosx  }; cvar; external;
  kCVPixelBufferIOSurfaceCoreAnimationCompatibilityKey: CFStringRef; cvar; external;
  kCVPixelBufferIOSurfaceOpenGLESTextureCompatibilityKey: CFStringRef { unavailable in macosx }; cvar; external;
  kCVPixelBufferIOSurfaceOpenGLESFBOCompatibilityKey: CFStringRef { unavailable in macosx }; cvar; external;
{$endif}

{$if defined(COREVIDEO_SUPPORTS_IOSURFACE)}

{$if defined(COREVIDEO_INCLUDED_IOSURFACE_HEADER_FILE)}
{$ifdef FUNCTIONS}
function CVPixelBufferGetIOSurface(pixelBuffer: CVPixelBufferRef): IOSurfaceRef; cdecl; external; { available in macosx , ios , tvos , watchos  }
function CVPixelBufferCreateWithIOSurface(allocator: CFAllocatorRef; surface: IOSurfaceRef; pixelBufferAttributes: CFDictionaryRef; var pixelBufferOut: CVPixelBufferRef): CVReturn; cdecl; external; { available starting in __MAC_10_6,__IPHONE_4_0 }
{$endif}

{$endif}
{$endif}

{$endif}
