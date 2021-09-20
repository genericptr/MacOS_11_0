{ Parsed from CoreVideo.framework CVPixelBufferPool.h }

{$if  not (defined(__COREVIDEO__CVPIXELBUFFERPOOL_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVPIXELBUFFERPOOL_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferPoolRef = OpaqueType;
  CVPixelBufferPoolRefPtr = ^CVPixelBufferPoolRef;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferPoolMinimumBufferCountKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVPixelBufferPoolMaximumBufferAgeKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferPoolGetTypeID: CFTypeID; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolRetain(pixelBufferPool: CVPixelBufferPoolRef): CVPixelBufferPoolRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolRelease(pixelBufferPool: CVPixelBufferPoolRef): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolCreate(allocator: CFAllocatorRef; poolAttributes: CFDictionaryRef; pixelBufferAttributes: CFDictionaryRef; var poolOut: CVPixelBufferPoolRef): CVReturn; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolGetAttributes(pool: CVPixelBufferPoolRef): CFDictionaryRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolGetPixelBufferAttributes(pool: CVPixelBufferPoolRef): CFDictionaryRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolCreatePixelBuffer(allocator: CFAllocatorRef; pixelBufferPool: CVPixelBufferPoolRef; var pixelBufferOut: CVPixelBufferRef): CVReturn; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVPixelBufferPoolCreatePixelBufferWithAuxAttributes(allocator: CFAllocatorRef; pixelBufferPool: CVPixelBufferPoolRef; auxAttributes: CFDictionaryRef; pixelBufferOut: CVPixelBufferRefPtr): CVReturn; cdecl; external; { available starting in macos 10.7, ios 4.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferPoolAllocationThresholdKey: CFStringRef { available starting in macos 10.7, ios 4.0 }; cvar; external;
  kCVPixelBufferPoolFreeBufferNotification: CFStringRef { available starting in macos 10.7, ios 4.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferPoolFlushFlags = CVOptionFlags;
  CVPixelBufferPoolFlushFlagsPtr = ^CVPixelBufferPoolFlushFlags;

const
  kCVPixelBufferPoolFlushExcessBuffers = 1;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferPoolFlush(pool: CVPixelBufferPoolRef; options: CVPixelBufferPoolFlushFlags): pointer; cdecl; external;
{$endif}

{$endif}
