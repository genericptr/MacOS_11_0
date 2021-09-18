{ Parsed from CoreMedia.framework CMMemoryPool.h }

{$ifndef CMMEMORYPOOL_H}

{$ifdef TYPES}
type
  CMMemoryPoolRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMMemoryPoolRefPtr = ^CMMemoryPoolRef { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMemoryPoolOption_AgeOutPeriod: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolCreate(options: CFDictionaryRef): CMMemoryPoolRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMemoryPoolGetAllocator(pool: CMMemoryPoolRef): CFAllocatorRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMemoryPoolFlush(pool: CMMemoryPoolRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMemoryPoolInvalidate(pool: CMMemoryPoolRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
