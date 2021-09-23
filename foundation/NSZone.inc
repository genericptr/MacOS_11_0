{ Parsed from Foundation.framework NSZone.h }
{$ifdef TYPES}
//type
//  NSZone = OpaqueType;
//  NSZonePtr = ^NSZone;

const
  NSScannedOption = 1 shl 0;
  NSCollectorDisabledOption = 1 shl 1;

{$endif}

{$ifdef FUNCTIONS}
function NSDefaultMallocZone: NSZonePtr; cdecl; external;
function NSCreateZone(startSize: NSUInteger; granularity: NSUInteger; canFree: objcbool): NSZonePtr; cdecl; external;
function NSRecycleZone(zone: NSZonePtr): pointer; cdecl; external;
function NSSetZoneName(zone: NSZonePtr; name: NSString): pointer; cdecl; external;
function NSZoneName(zone: NSZonePtr): NSString; cdecl; external;
function NSZoneFromPointer(ptr: pointer): NSZonePtr; cdecl; external;
function NSZoneMalloc(zone: NSZonePtr; size: NSUInteger): pointer; cdecl; external;
function NSZoneCalloc(zone: NSZonePtr; numElems: NSUInteger; byteSize: NSUInteger): pointer; cdecl; external;
function NSZoneRealloc(zone: NSZonePtr; ptr: pointer; size: NSUInteger): pointer; cdecl; external;
function NSZoneFree(zone: NSZonePtr; ptr: pointer): pointer; cdecl; external;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef FUNCTIONS}
function NSAllocateCollectable(size: NSUInteger; options: NSUInteger): pointer; cdecl; external;
function NSReallocateCollectable(ptr: pointer; size: NSUInteger; options: NSUInteger): pointer; cdecl; external;
{$endif}

{$endif}

{$ifdef FUNCTIONS}
function NSPageSize: NSUInteger; cdecl; external;
function NSLogPageSize: NSUInteger; cdecl; external;
function NSRoundUpToMultipleOfPageSize(bytes: NSUInteger): NSUInteger; cdecl; external;
function NSRoundDownToMultipleOfPageSize(bytes: NSUInteger): NSUInteger; cdecl; external;
function NSAllocateMemoryPages(bytes: NSUInteger): pointer; cdecl; external;
function NSDeallocateMemoryPages(ptr: pointer; bytes: NSUInteger): pointer; cdecl; external;
function NSCopyMemoryPages(source: pointer; dest: pointer; bytes: NSUInteger): pointer; cdecl; external;
function NSRealMemoryAvailable: NSUInteger; cdecl; external; deprecated 'Use NSProcessInfo instead';
{$endif}

