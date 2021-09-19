{ Parsed from CoreMedia.framework CMAttachment.h }

{$ifndef CMATTACHMENT_H}

{$ifdef TYPES}
type
  CMAttachmentBearerRef = CFTypeRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMAttachmentBearerRefPtr = ^CMAttachmentBearerRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMAttachmentMode = cuint32 { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMAttachmentModePtr = ^CMAttachmentMode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMSetAttachment(target: CMAttachmentBearerRef; key: CFStringRef; value: CFTypeRef; attachmentMode: CMAttachmentMode): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMGetAttachment(target: CMAttachmentBearerRef; key: CFStringRef; attachmentModeOut: CMAttachmentModePtr): CFTypeRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMRemoveAttachment(target: CMAttachmentBearerRef; key: CFStringRef): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMRemoveAllAttachments(target: CMAttachmentBearerRef): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMCopyDictionaryOfAttachments(allocator: CFAllocatorRef; target: CMAttachmentBearerRef; attachmentMode: CMAttachmentMode): CFDictionaryRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMSetAttachments(target: CMAttachmentBearerRef; theAttachments: CFDictionaryRef; attachmentMode: CMAttachmentMode): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMPropagateAttachments(source: CMAttachmentBearerRef; destination: CMAttachmentBearerRef): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$endif}
