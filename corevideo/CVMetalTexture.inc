{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVMetalTexture.h }

{$if  not (defined(__COREVIDEO_CVMETALTEXTURE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVMETALTEXTURE_H__ = 1;
{$endif}

{$if defined(COREVIDEO_SUPPORTS_METAL)}

{$if (defined(__OBJC__))}
{$ifdef TYPES}
type
  CVMetalTextureRef = CVImageBufferRef;
  CVMetalTextureRefPtr = ^CVMetalTextureRef;
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureGetTypeID: CFTypeID; cdecl; external; { available in macosx , ios , tvos  }
function CVMetalTextureGetTexture(image: CVMetalTextureRef): id; cdecl; external; { available in macosx , ios , tvos  }
function CVMetalTextureIsFlipped(image: CVMetalTextureRef): Boolean; cdecl; external; { available in macosx , ios , tvos  }
function CVMetalTextureGetCleanTexCoords(image: CVMetalTextureRef; lowerLeft: psingle { 2 element array of single }; lowerRight: psingle { 2 element array of single }; upperRight: psingle { 2 element array of single }; upperLeft: psingle { 2 element array of single }): pointer; cdecl; external; { available in macosx , ios , tvos  }
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCVMetalTextureUsage: CFStringRef { available in macosx , ios , tvos  }; cvar; external;
  kCVMetalTextureStorageMode: CFStringRef { available in macosx , ios , tvos  }; cvar; external;
{$endif}

{$endif}

{$endif}
