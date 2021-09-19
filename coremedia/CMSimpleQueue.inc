{ Parsed from CoreMedia.framework CMSimpleQueue.h }

{$ifndef CMSIMPLEQUEUE_H}

{$ifdef TYPES}
type
  CMSimpleQueueRef = OpaqueType { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 };
  CMSimpleQueueRefPtr = ^CMSimpleQueueRef { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMSimpleQueueGetTypeID: CFTypeID; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueCreate(allocator: CFAllocatorRef; capacity: cint32; queueOut: CMSimpleQueueRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueEnqueue(queue: CMSimpleQueueRef; element: pointer): OSStatus; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueDequeue(queue: CMSimpleQueueRef): pointer; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueGetHead(queue: CMSimpleQueueRef): pointer; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueReset(queue: CMSimpleQueueRef): OSStatus; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueGetCapacity(queue: CMSimpleQueueRef): cint32; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
function CMSimpleQueueGetCount(queue: CMSimpleQueueRef): cint32; cdecl; external; { available in macos 10.7, ios 5.0, tvos 9.0, watchos 6.0 }
{$endif}

{$endif}
