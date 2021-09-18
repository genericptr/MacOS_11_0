{ Parsed from CoreMedia.framework CMAttachment.h }

{$ifndef CMATTACHMENT_H}

{$ifdef TYPES}
type
  CMAttachmentBearerRef = CFTypeRef { available in macos , ios , tvos , watchos  };
  CMAttachmentBearerRefPtr = ^CMAttachmentBearerRef { available in macos , ios , tvos , watchos  };
  CMAttachmentMode = cuint32 { available in macos , ios , tvos , watchos  };
  CMAttachmentModePtr = ^CMAttachmentMode { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMSetAttachment(target: CMAttachmentBearerRef; key: CFStringRef; value: CFTypeRef; attachmentMode: CMAttachmentMode): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMGetAttachment(target: CMAttachmentBearerRef; key: CFStringRef; attachmentModeOut: CMAttachmentModePtr): CFTypeRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMRemoveAttachment(target: CMAttachmentBearerRef; key: CFStringRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMRemoveAllAttachments(target: CMAttachmentBearerRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMCopyDictionaryOfAttachments(allocator: CFAllocatorRef; target: CMAttachmentBearerRef; attachmentMode: CMAttachmentMode): CFDictionaryRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSetAttachments(target: CMAttachmentBearerRef; theAttachments: CFDictionaryRef; attachmentMode: CMAttachmentMode): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMPropagateAttachments(source: CMAttachmentBearerRef; destination: CMAttachmentBearerRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
