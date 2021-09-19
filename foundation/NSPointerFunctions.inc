{ Parsed from Foundation.framework NSPointerFunctions.h }

{$ifdef CALLBACKS}
type
  NSPointerFunctionsSizeCallback = function (item: pointer): NSUInteger; cdecl;
  NSPointerFunctionsHashFunctionCallback = function (item: pointer; size: NSPointerFunctionsSizeCallback): NSUInteger; cdecl;
  NSPointerFunctionsIsEqualFunctionCallback = function (item1: pointer; item2: pointer; size: NSPointerFunctionsSizeCallback): objcbool; cdecl;
  NSPointerFunctionsSizeFunctionCallback = function (item: pointer): NSUInteger; cdecl;
  NSPointerFunctionsDescriptionFunctionCallback = function (item: pointer): NSString; cdecl;
  NSPointerFunctionsRelinquishFunctionCallback = procedure (item: pointer; size: NSPointerFunctionsSizeCallback); cdecl;
  NSPointerFunctionsAcquireFunctionCallback = procedure (size: NSPointerFunctionsSizeCallback; shouldCopy: objcbool); cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPointerFunctionsPtr = ^NSPointerFunctions;
{$endif}

{$if  not (defined(__FOUNDATION_NSPOINTERFUNCTIONS__))}
{$ifdef TYPES}
const
  __FOUNDATION_NSPOINTERFUNCTIONS__ = 1;

type
  NSPointerFunctionsOptions = NSUInteger;
  NSPointerFunctionsOptionsPtr = ^NSPointerFunctionsOptions;

const
  NSPointerFunctionsStrongMemory = 0 shl 0 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsZeroingWeakMemory = 1 shl 0 { unavailable in ios, watchos, tvos };
  NSPointerFunctionsOpaqueMemory = 2 shl 0 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsMallocMemory = 3 shl 0 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsMachVirtualMemory = 4 shl 0 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsWeakMemory = 5 shl 0 { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsObjectPersonality = 0 shl 8 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsOpaquePersonality = 1 shl 8 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsObjectPointerPersonality = 2 shl 8 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsCStringPersonality = 3 shl 8 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsStructPersonality = 4 shl 8 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsIntegerPersonality = 5 shl 8 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSPointerFunctionsCopyIn = 1 shl 16 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
{$endif}

{$ifdef CLASSES}

type
  NSPointerFunctions = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithOptions (options: NSPointerFunctionsOptions): id; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    class function pointerFunctionsWithOptions (options: NSPointerFunctionsOptions): NSPointerFunctions; message 'pointerFunctionsWithOptions:';
    procedure setHashFunction(newValue: NSPointerFunctionsHashFunctionCallback); message 'setHashFunction:';
    function hashFunction: NSPointerFunctionsHashFunctionCallback; message 'hashFunction';
    procedure setIsEqualFunction(newValue: NSPointerFunctionsIsEqualFunctionCallback); message 'setIsEqualFunction:';
    function isEqualFunction: NSPointerFunctionsIsEqualFunctionCallback; message 'isEqualFunction';
    procedure setSizeFunction(newValue: NSPointerFunctionsSizeFunctionCallback); message 'setSizeFunction:';
    function sizeFunction: NSPointerFunctionsSizeFunctionCallback; message 'sizeFunction';
    procedure setDescriptionFunction(newValue: NSPointerFunctionsDescriptionFunctionCallback); message 'setDescriptionFunction:';
    function descriptionFunction: NSPointerFunctionsDescriptionFunctionCallback; message 'descriptionFunction';
    procedure setRelinquishFunction(newValue: NSPointerFunctionsRelinquishFunctionCallback); message 'setRelinquishFunction:';
    function relinquishFunction: NSPointerFunctionsRelinquishFunctionCallback; message 'relinquishFunction';
    procedure setAcquireFunction(newValue: NSPointerFunctionsAcquireFunctionCallback); message 'setAcquireFunction:';
    function acquireFunction: NSPointerFunctionsAcquireFunctionCallback; message 'acquireFunction';
    procedure setUsesStrongWriteBarrier(newValue: objcbool); message 'setUsesStrongWriteBarrier:'; deprecated 'Garbage collection no longer supported';
    function usesStrongWriteBarrier: objcbool; message 'usesStrongWriteBarrier'; deprecated 'Garbage collection no longer supported';
    procedure setUsesWeakReadAndWriteBarriers(newValue: objcbool); message 'setUsesWeakReadAndWriteBarriers:'; deprecated 'Garbage collection no longer supported';
    function usesWeakReadAndWriteBarriers: objcbool; message 'usesWeakReadAndWriteBarriers'; deprecated 'Garbage collection no longer supported';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
