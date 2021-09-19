{ Parsed from CoreVideo.framework CVMetalTexture.h }

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
function CVMetalTextureGetTypeID: CFTypeID; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
function CVMetalTextureGetTexture(image: CVMetalTextureRef): id; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
function CVMetalTextureIsFlipped(image: CVMetalTextureRef): Boolean; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
function CVMetalTextureGetCleanTexCoords(image: CVMetalTextureRef; lowerLeft: psingle { 2 element array of single }; lowerRight: psingle { 2 element array of single }; upperRight: psingle { 2 element array of single }; upperLeft: psingle { 2 element array of single }): pointer; cdecl; external; { available in macosx 10.11, ios 8.0, tvos 9.0 }
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCVMetalTextureUsage: CFStringRef { available in macosx 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  kCVMetalTextureStorageMode: CFStringRef { available in macosx 10.15, ios 13.0, tvos 13.0 }; cvar; external;
{$endif}

{$endif}

{$endif}
