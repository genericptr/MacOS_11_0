{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVMetalTextureCache.h }

{$if  not (defined(__COREVIDEO__CVMETALTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVMETALTEXTURECACHE_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVMetalTextureCacheMaximumTextureAgeKey: CFStringRef { available in macosx , ios , tvos  }; cvar; external;
{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_SUPPORTS_METAL)}
{$ifdef TYPES}
type
  CVMetalTextureCacheRef = OpaqueType;
  CVMetalTextureCacheRefPtr = ^CVMetalTextureCacheRef;
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureCacheGetTypeID: CFTypeID; cdecl; external; { available in macosx , ios , tvos  }
function CVMetalTextureCacheCreate(allocator: CFAllocatorRef; cacheAttributes: CFDictionaryRef; metalDevice: id; textureAttributes: CFDictionaryRef; cacheOut: CVMetalTextureCacheRefPtr): CVReturn; cdecl; external; { available in macosx , ios , tvos  }
function CVMetalTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef; textureCache: CVMetalTextureCacheRef; sourceImage: CVImageBufferRef; textureAttributes: CFDictionaryRef; pixelFormat: MTLPixelFormat; width: size_t; height: size_t; planeIndex: size_t; textureOut: CVMetalTextureRefPtr): CVReturn; cdecl; external; { available in macosx , ios , tvos  }
function CVMetalTextureCacheFlush(textureCache: CVMetalTextureCacheRef; options: CVOptionFlags): pointer; cdecl; external; { available in macosx , ios , tvos  }
{$endif}

{$endif}

{$endif}
