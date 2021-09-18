{ Parsed from CoreVideo.framework CVOpenGLTexture.h }

{$if  not (defined(__COREVIDEO_CVOPENGLTEXTURE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVOPENGLTEXTURE_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLTextureRef = CVImageBufferRef;
  CVOpenGLTextureRefPtr = ^CVOpenGLTextureRef;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLTextureGetTypeID: CFTypeID; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureRetain(texture: CVOpenGLTextureRef): CVOpenGLTextureRef; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureRelease(texture: CVOpenGLTextureRef): pointer; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureGetTarget(image: CVOpenGLTextureRef): GLenum; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureGetName(image: CVOpenGLTextureRef): GLuint; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureIsFlipped(image: CVOpenGLTextureRef): Boolean; cdecl; external; { unavailable in macCatalyst }
function CVOpenGLTextureGetCleanTexCoords(image: CVOpenGLTextureRef; lowerLeft: GLfloatPtr { 2 element array of GLfloat }; lowerRight: GLfloatPtr { 2 element array of GLfloat }; upperRight: GLfloatPtr { 2 element array of GLfloat }; upperLeft: GLfloatPtr { 2 element array of GLfloat }): pointer; cdecl; external; { unavailable in macCatalyst }
{$endif}

{$endif}
