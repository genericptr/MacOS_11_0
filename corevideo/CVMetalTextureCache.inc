{ Parsed from CoreVideo.framework CVMetalTextureCache.h }

{$if  not (defined(__COREVIDEO__CVMETALTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVMETALTEXTURECACHE_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVMetalTextureCacheMaximumTextureAgeKey: CFStringRef { available in macosx 10.11, ios 8.0, tvos 9.0 }; cvar; external;
{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_SUPPORTS_METAL)}
{$ifdef TYPES}
type
  CVMetalTextureCacheRef = OpaqueType;
  CVMetalTextureCacheRefPtr = ^CVMetalTextureCacheRef;
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureCacheGetTypeID: CFTypeID; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
function CVMetalTextureCacheCreate(allocator: CFAllocatorRef; cacheAttributes: CFDictionaryRef; metalDevice: MTLDeviceProtocol; textureAttributes: CFDictionaryRef; cacheOut: CVMetalTextureCacheRefPtr): CVReturn; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
function CVMetalTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef; textureCache: CVMetalTextureCacheRef; sourceImage: CVImageBufferRef; textureAttributes: CFDictionaryRef; pixelFormat: MTLPixelFormat; width: size_t; height: size_t; planeIndex: size_t; textureOut: CVMetalTextureRefPtr): CVReturn; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
function CVMetalTextureCacheFlush(textureCache: CVMetalTextureCacheRef; options: CVOptionFlags): pointer; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
{$endif}

{$endif}

{$endif}
