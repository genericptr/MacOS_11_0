{ Parsed from CoreMedia.framework CMSimpleQueue.h }

{$ifndef CMSIMPLEQUEUE_H}

{$ifdef TYPES}
type
  CMSimpleQueueRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMSimpleQueueRefPtr = ^CMSimpleQueueRef { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMSimpleQueueGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueCreate(allocator: CFAllocatorRef; capacity: cint32; queueOut: CMSimpleQueueRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueEnqueue(queue: CMSimpleQueueRef; element: pointer): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueDequeue(queue: CMSimpleQueueRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueGetHead(queue: CMSimpleQueueRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueReset(queue: CMSimpleQueueRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueGetCapacity(queue: CMSimpleQueueRef): cint32; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSimpleQueueGetCount(queue: CMSimpleQueueRef): cint32; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
