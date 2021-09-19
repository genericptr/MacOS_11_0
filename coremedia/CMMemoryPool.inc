{ Parsed from CoreMedia.framework CMMemoryPool.h }

{$ifndef CMMEMORYPOOL_H}

{$ifdef TYPES}
type
  CMMemoryPoolRef = OpaqueType { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
  CMMemoryPoolRefPtr = ^CMMemoryPoolRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolGetTypeID: CFTypeID; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMemoryPoolOption_AgeOutPeriod: CFStringRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolCreate(options: CFDictionaryRef): CMMemoryPoolRef; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMMemoryPoolGetAllocator(pool: CMMemoryPoolRef): CFAllocatorRef; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMMemoryPoolFlush(pool: CMMemoryPoolRef): pointer; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMMemoryPoolInvalidate(pool: CMMemoryPoolRef): pointer; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
{$endif}

{$endif}
