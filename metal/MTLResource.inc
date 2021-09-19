{ Parsed from Metal.framework MTLResource.h }

{$ifdef TYPES}
type
  MTLResourceProtocolPtr = ^MTLResourceProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLPurgeableState = NSUInteger;
  MTLPurgeableStatePtr = ^MTLPurgeableState;

const
  MTLPurgeableStateKeepCurrent = 1;
  MTLPurgeableStateNonVolatile = 2;
  MTLPurgeableStateVolatile = 3;
  MTLPurgeableStateEmpty = 4;

type
  MTLCPUCacheMode = NSUInteger;
  MTLCPUCacheModePtr = ^MTLCPUCacheMode;

const
  MTLCPUCacheModeDefaultCache = 0;
  MTLCPUCacheModeWriteCombined = 1;

type
  MTLStorageMode = NSUInteger;
  MTLStorageModePtr = ^MTLStorageMode;

const
  MTLStorageModeShared = 0;
  MTLStorageModeManaged = 1 { unavailable in ios } { available in macos 10.11, macCatalyst 13.0 };
  MTLStorageModePrivate = 2;
  MTLStorageModeMemoryless = 3 { available in macos 11.0, macCatalyst 14.0, ios 10.0 };

type
  MTLHazardTrackingMode = NSUInteger;
  MTLHazardTrackingModePtr = ^MTLHazardTrackingMode;

const
  MTLHazardTrackingModeDefault = 0;
  MTLHazardTrackingModeUntracked = 1;
  MTLHazardTrackingModeTracked = 2;

const
  MTLResourceCPUCacheModeShift = 0;
  MTLResourceStorageModeShift = 4;
  MTLResourceHazardTrackingModeShift = 8;

type
  MTLResourceOptions = NSUInteger;
  MTLResourceOptionsPtr = ^MTLResourceOptions;

const
  MTLResourceCPUCacheModeDefaultCache = MTLCPUCacheModeDefaultCache shl MTLResourceCPUCacheModeShift;
  MTLResourceCPUCacheModeWriteCombined = MTLCPUCacheModeWriteCombined shl MTLResourceCPUCacheModeShift;
  MTLResourceStorageModeShared = MTLStorageModeShared shl MTLResourceStorageModeShift { available in macos 10.11, ios 9.0 };
  MTLResourceStorageModeManaged = MTLStorageModeManaged shl MTLResourceStorageModeShift { unavailable in ios } { available in macos 10.11, macCatalyst 13.0 };
  MTLResourceStorageModePrivate = MTLStorageModePrivate shl MTLResourceStorageModeShift { available in macos 10.11, ios 9.0 };
  MTLResourceStorageModeMemoryless = MTLStorageModeMemoryless shl MTLResourceStorageModeShift { available in macos 11.0, macCatalyst 14.0, ios 10.0 };
  MTLResourceHazardTrackingModeDefault = MTLHazardTrackingModeDefault shl MTLResourceHazardTrackingModeShift { available in macos 10.13, ios 10.0 };
  MTLResourceHazardTrackingModeUntracked = MTLHazardTrackingModeUntracked shl MTLResourceHazardTrackingModeShift { available in macos 10.13, ios 10.0 };
  MTLResourceHazardTrackingModeTracked = MTLHazardTrackingModeTracked shl MTLResourceHazardTrackingModeShift { available in macos 10.15, ios 13.0 };
  MTLResourceOptionCPUCacheModeDefault = MTLResourceCPUCacheModeDefaultCache;
  MTLResourceOptionCPUCacheModeWriteCombined = MTLResourceCPUCacheModeWriteCombined;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLResourceProtocol = objcprotocol external name 'MTLResource' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function cpuCacheMode: MTLCPUCacheMode; message 'cpuCacheMode';
    function storageMode: MTLStorageMode; message 'storageMode'; { available in macos 10.11, ios 9.0 }
    function hazardTrackingMode: MTLHazardTrackingMode; message 'hazardTrackingMode'; { available in macos 10.15, ios 13.0 }
    function resourceOptions: MTLResourceOptions; message 'resourceOptions'; { available in macos 10.15, ios 13.0 }
    function setPurgeableState (state: MTLPurgeableState): MTLPurgeableState; message 'setPurgeableState:';
    function heap: MTLHeapProtocol; message 'heap'; { available in macos 10.13, ios 10.0 }
    function heapOffset: NSUInteger; message 'heapOffset'; { available in macos 10.15, ios 13.0 }
    function allocatedSize: NSUInteger; message 'allocatedSize'; { available in macos 10.13, ios 11.0 }
    procedure makeAliasable; message 'makeAliasable'; { available in macos 10.13, ios 10.0 }
    function isAliasable: objcbool; message 'isAliasable'; { available in macos 10.13, ios 10.0 }
  end;
{$endif}

