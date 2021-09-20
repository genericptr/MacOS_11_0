{ Parsed from CoreVideo.framework CVBuffer.h }

{$if  not (defined(__COREVIDEO_CVBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVBUFFER_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVBufferPropagatedAttachmentsKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVBufferNonPropagatedAttachmentsKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVBufferMovieTimeKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVBufferTimeValueKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
  kCVBufferTimeScaleKey: CFStringRef { available starting in macos 10.4, ios 4.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVAttachmentMode = cuint32;
  CVAttachmentModePtr = ^CVAttachmentMode;

const
  kCVAttachmentMode_ShouldNotPropagate = 0;
  kCVAttachmentMode_ShouldPropagate = 1;

type
  CVBufferRef = OpaqueType;
  CVBufferRefPtr = ^CVBufferRef;
{$endif}

{$ifdef FUNCTIONS}
function CVBufferRetain(buffer: CVBufferRef): CVBufferRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferRelease(buffer: CVBufferRef): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferSetAttachment(buffer: CVBufferRef; key: CFStringRef; value: CFTypeRef; attachmentMode: CVAttachmentMode): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferGetAttachment(buffer: CVBufferRef; key: CFStringRef; var attachmentMode: CVAttachmentMode): CFTypeRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferRemoveAttachment(buffer: CVBufferRef; key: CFStringRef): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferRemoveAllAttachments(buffer: CVBufferRef): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferGetAttachments(buffer: CVBufferRef; attachmentMode: CVAttachmentMode): CFDictionaryRef; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferSetAttachments(buffer: CVBufferRef; theAttachments: CFDictionaryRef; attachmentMode: CVAttachmentMode): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVBufferPropagateAttachments(sourceBuffer: CVBufferRef; destinationBuffer: CVBufferRef): pointer; cdecl; external; { available starting in macos 10.4, ios 4.0 }
{$endif}

{$endif}
