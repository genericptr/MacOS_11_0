{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVOpenGLBuffer.h }

{$if  not (defined(__COREVIDEO_CVOPENGLBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVOPENGLBUFFER_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVOpenGLBufferWidth: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLBufferHeight: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLBufferTarget: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLBufferInternalFormat: CFStringRef { unavailable in macCatalyst }; cvar; external;
  kCVOpenGLBufferMaximumMipmapLevel: CFStringRef { unavailable in macCatalyst }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLBufferRef = CVImageBufferRef;
  CVOpenGLBufferRefPtr = ^CVOpenGLBufferRef;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLBufferGetTypeID: CFTypeID; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferRetain(buffer: CVOpenGLBufferRef): CVOpenGLBufferRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferRelease(buffer: CVOpenGLBufferRef): pointer; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferCreate(allocator: CFAllocatorRef; width: size_t; height: size_t; attributes: CFDictionaryRef; var bufferOut: CVOpenGLBufferRef): CVReturn; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferGetAttributes(openGLBuffer: CVOpenGLBufferRef): CFDictionaryRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLBufferAttach(openGLBuffer: CVOpenGLBufferRef; cglContext: CGLContextObj; face: GLenum; level: GLint; screen: GLint): CVReturn; cdecl; external; { unavailable in macCatalyst }
{$endif}

{$endif}
