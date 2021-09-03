{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSPointerFunctions.h }

{$ifdef CALLBACKS}
type
  NSPointerFunctionsSizeCallback = function (item: pointer): NSUInteger; cdecl;
  NSPointerFunctionsHashFunctionCallback = function (item: pointer; size: NSPointerFunctionsSizeCallback): NSUInteger; cdecl;
  NSPointerFunctionsIsEqualFunctionCallback = function (item1: pointer; item2: pointer; size: NSPointerFunctionsSizeCallback): objcbool; cdecl;
  NSPointerFunctionsSizeFunctionCallback = function (item: pointer): NSUInteger; cdecl;
  NSPointerFunctionsDescriptionFunctionCallback = function (item: pointer): NSString; cdecl;
  NSPointerFunctionsRelinquishFunctionCallback = function (item: pointer; size: NSPointerFunctionsSizeCallback): pointer; cdecl;
  NSPointerFunctionsAcquireFunctionCallback = function (size: NSPointerFunctionsSizeCallback; shouldCopy: objcbool): pointer; cdecl;
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
  NSPointerFunctionsStrongMemory = 0 shl 0 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsZeroingWeakMemory = 1 shl 0 { unavailable in ios, watchos, tvos };
  NSPointerFunctionsOpaqueMemory = 2 shl 0 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsMallocMemory = 3 shl 0 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsMachVirtualMemory = 4 shl 0 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsWeakMemory = 5 shl 0 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsObjectPersonality = 0 shl 8 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsOpaquePersonality = 1 shl 8 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsObjectPointerPersonality = 2 shl 8 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsCStringPersonality = 3 shl 8 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsStructPersonality = 4 shl 8 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsIntegerPersonality = 5 shl 8 { available in macos , ios , watchos , tvos  };
  NSPointerFunctionsCopyIn = 1 shl 16 { available in macos , ios , watchos , tvos  };
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
