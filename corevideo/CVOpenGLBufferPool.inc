{ Parsed from CoreVideo.framework CVOpenGLBufferPool.h }

{$if  not (defined(__COREVIDEO__CVOPENGLBUFFERPOOL_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVOPENGLBUFFERPOOL_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLBufferPoolRef = OpaqueType;
  CVOpenGLBufferPoolRefPtr = ^CVOpenGLBufferPoolRef;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVOpenGLBufferPoolMinimumBufferCountKey: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLBufferPoolMaximumBufferAgeKey: CFStringRef { unavailable in macCatalyst }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLBufferPoolGetTypeID: CFTypeID; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferPoolRetain(openGLBufferPool: CVOpenGLBufferPoolRef): CVOpenGLBufferPoolRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferPoolRelease(openGLBufferPool: CVOpenGLBufferPoolRef): pointer; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferPoolCreate(allocator: CFAllocatorRef; poolAttributes: CFDictionaryRef; openGLBufferAttributes: CFDictionaryRef; var poolOut: CVOpenGLBufferPoolRef): CVReturn; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferPoolGetAttributes(pool: CVOpenGLBufferPoolRef): CFDictionaryRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferPoolGetOpenGLBufferAttributes(pool: CVOpenGLBufferPoolRef): CFDictionaryRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferPoolCreateOpenGLBuffer(allocator: CFAllocatorRef; openGLBufferPool: CVOpenGLBufferPoolRef; var openGLBufferOut: CVOpenGLBufferRef): CVReturn; cdecl; external; { unavailable in macCatalyst }
{$endif}

{$endif}
