{ Parsed from CoreMedia.framework CMBlockBuffer.h }

{$ifndef CMBLOCKBUFFER_H}

{$ifdef TYPES}
type
  CMBlockBufferFlags = cuint32 { available in macos , ios , tvos , watchos  };
  CMBlockBufferFlagsPtr = ^CMBlockBufferFlags { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef TYPES}
type
  CMBlockBufferRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMBlockBufferRefPtr = ^CMBlockBufferRef { available in macos , ios , tvos , watchos  };

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
function CMBlockBufferCreateEmpty(structureAllocator: CFAllocatorRef; subBlockCapacity: cuint32; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferCreateWithMemoryBlock(structureAllocator: CFAllocatorRef; memoryBlock: pointer; blockLength: size_t; blockAllocator: CFAllocatorRef; customBlockSource: CMBlockBufferCustomBlockSourcePtr; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferCreateWithBufferReference(structureAllocator: CFAllocatorRef; bufferReference: CMBlockBufferRef; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferCreateContiguous(structureAllocator: CFAllocatorRef; sourceBuffer: CMBlockBufferRef; blockAllocator: CFAllocatorRef; customBlockSource: CMBlockBufferCustomBlockSourcePtr; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferAppendMemoryBlock(theBuffer: CMBlockBufferRef; memoryBlock: pointer; blockLength: size_t; blockAllocator: CFAllocatorRef; customBlockSource: CMBlockBufferCustomBlockSourcePtr; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferAppendBufferReference(theBuffer: CMBlockBufferRef; targetBBuf: CMBlockBufferRef; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferAssureBlockMemory(theBuffer: CMBlockBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferAccessDataBytes(theBuffer: CMBlockBufferRef; offset: size_t; length: size_t; temporaryBlock: pointer; returnedPointerOut: PChar): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferCopyDataBytes(theSourceBuffer: CMBlockBufferRef; offsetToData: size_t; dataLength: size_t; destination: pointer): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferReplaceDataBytes(sourceBytes: pointer; destinationBuffer: CMBlockBufferRef; offsetIntoDestination: size_t; dataLength: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferFillDataBytes(fillByte: char; destinationBuffer: CMBlockBufferRef; offsetIntoDestination: size_t; dataLength: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferGetDataPointer(theBuffer: CMBlockBufferRef; offset: size_t; lengthAtOffsetOut: size_tPtr; totalLengthOut: size_tPtr; dataPointerOut: PChar): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferGetDataLength(theBuffer: CMBlockBufferRef): size_t; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferIsRangeContiguous(theBuffer: CMBlockBufferRef; offset: size_t; length: size_t): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBlockBufferIsEmpty(theBuffer: CMBlockBufferRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
