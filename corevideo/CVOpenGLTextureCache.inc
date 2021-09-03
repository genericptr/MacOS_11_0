{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVOpenGLTextureCache.h }

{$if  not (defined(__COREVIDEO__CVOPENGLTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVOPENGLTEXTURECACHE_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLTextureCacheRef = OpaqueType;
  CVOpenGLTextureCacheRefPtr = ^CVOpenGLTextureCacheRef;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVOpenGLTextureCacheChromaSamplingModeKey: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLTextureCacheChromaSamplingModeAutomatic: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLTextureCacheChromaSamplingModeHighestQuality: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLTextureCacheChromaSamplingModeBestPerformance: CFStringRef { unavailable in macCatalyst }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLTextureCacheGetTypeID: CFTypeID; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureCacheRetain(textureCache: CVOpenGLTextureCacheRef): CVOpenGLTextureCacheRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureCacheRelease(textureCache: CVOpenGLTextureCacheRef): pointer; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureCacheCreate(allocator: CFAllocatorRef; cacheAttributes: CFDictionaryRef; cglContext: CGLContextObj; cglPixelFormat: CGLPixelFormatObj; textureAttributes: CFDictionaryRef; var cacheOut: CVOpenGLTextureCacheRef): CVReturn; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef; textureCache: CVOpenGLTextureCacheRef; sourceImage: CVImageBufferRef; attributes: CFDictionaryRef; var textureOut: CVOpenGLTextureRef): CVReturn; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureCacheFlush(textureCache: CVOpenGLTextureCacheRef; options: CVOptionFlags): pointer; cdecl; external; { unavailable in macCatalyst }
{$endif}

{$endif}
