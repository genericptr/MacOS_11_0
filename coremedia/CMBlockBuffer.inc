{ Parsed from CoreMedia.framework CMBlockBuffer.h }

{$ifndef CMBLOCKBUFFER_H}

{$ifdef TYPES}
type
  CMBlockBufferFlags = cuint32 { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBlockBufferFlagsPtr = ^CMBlockBufferFlags { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMBlockBufferRef = OpaqueType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBlockBufferRefPtr = ^CMBlockBufferRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };

type
  CMBlockBufferCustomBlockSource = record
    version: cuint32;
    AllocateBlock: function (refcon: pointer; sizeInBytes: size_t): pointer; cdecl;
    FreeBlock: function (refcon: pointer; doomedMemoryBlock: pointer; sizeInBytes: size_t): pointer; cdecl;
    refCon: pointer;
  end;
type
  CMBlockBufferCustomBlockSourcePtr = ^CMBlockBufferCustomBlockSource;
{$endif}

{$ifdef FUNCTIONS}
function CMBlockBufferCreateEmpty(structureAllocator: CFAllocatorRef; subBlockCapacity: cuint32; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferCreateWithMemoryBlock(structureAllocator: CFAllocatorRef; memoryBlock: pointer; blockLength: size_t; blockAllocator: CFAllocatorRef; customBlockSource: CMBlockBufferCustomBlockSourcePtr; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferCreateWithBufferReference(structureAllocator: CFAllocatorRef; bufferReference: CMBlockBufferRef; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferCreateContiguous(structureAllocator: CFAllocatorRef; sourceBuffer: CMBlockBufferRef; blockAllocator: CFAllocatorRef; customBlockSource: CMBlockBufferCustomBlockSourcePtr; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferGetTypeID: CFTypeID; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferAppendMemoryBlock(theBuffer: CMBlockBufferRef; memoryBlock: pointer; blockLength: size_t; blockAllocator: CFAllocatorRef; customBlockSource: CMBlockBufferCustomBlockSourcePtr; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferAppendBufferReference(theBuffer: CMBlockBufferRef; targetBBuf: CMBlockBufferRef; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferAssureBlockMemory(theBuffer: CMBlockBufferRef): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferAccessDataBytes(theBuffer: CMBlockBufferRef; offset: size_t; length: size_t; temporaryBlock: pointer; returnedPointerOut: PChar): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferCopyDataBytes(theSourceBuffer: CMBlockBufferRef; offsetToData: size_t; dataLength: size_t; destination: pointer): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferReplaceDataBytes(sourceBytes: pointer; destinationBuffer: CMBlockBufferRef; offsetIntoDestination: size_t; dataLength: size_t): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferFillDataBytes(fillByte: char; destinationBuffer: CMBlockBufferRef; offsetIntoDestination: size_t; dataLength: size_t): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferGetDataPointer(theBuffer: CMBlockBufferRef; offset: size_t; lengthAtOffsetOut: size_tPtr; totalLengthOut: size_tPtr; dataPointerOut: PChar): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferGetDataLength(theBuffer: CMBlockBufferRef): size_t; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferIsRangeContiguous(theBuffer: CMBlockBufferRef; offset: size_t; length: size_t): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBlockBufferIsEmpty(theBuffer: CMBlockBufferRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$endif}
