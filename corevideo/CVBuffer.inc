{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVBuffer.h }

{$if  not (defined(__COREVIDEO_CVBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVBUFFER_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVBufferPropagatedAttachmentsKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferNonPropagatedAttachmentsKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferMovieTimeKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferTimeValueKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVBufferTimeScaleKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
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
function CVBufferRetain(buffer: CVBufferRef): CVBufferRef; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferRelease(buffer: CVBufferRef): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferSetAttachment(buffer: CVBufferRef; key: CFStringRef; value: CFTypeRef; attachmentMode: CVAttachmentMode): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferGetAttachment(buffer: CVBufferRef; key: CFStringRef; var attachmentMode: CVAttachmentMode): CFTypeRef; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferRemoveAttachment(buffer: CVBufferRef; key: CFStringRef): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferRemoveAllAttachments(buffer: CVBufferRef): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferGetAttachments(buffer: CVBufferRef; attachmentMode: CVAttachmentMode): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferSetAttachments(buffer: CVBufferRef; theAttachments: CFDictionaryRef; attachmentMode: CVAttachmentMode): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVBufferPropagateAttachments(sourceBuffer: CVBufferRef; destinationBuffer: CVBufferRef): pointer; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$endif}
