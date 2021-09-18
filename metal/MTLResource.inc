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
  MTLStorageModeManaged = 1 { unavailable in ios };
  MTLStorageModePrivate = 2;
  MTLStorageModeMemoryless = 3 { available in macos , macCatalyst , ios  };

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
  MTLResourceStorageModeShared = MTLStorageModeShared shl MTLResourceStorageModeShift { available in macos , ios  };
  MTLResourceStorageModeManaged = MTLStorageModeManaged shl MTLResourceStorageModeShift { unavailable in ios };
  MTLResourceStorageModePrivate = MTLStorageModePrivate shl MTLResourceStorageModeShift { available in macos , ios  };
  MTLResourceStorageModeMemoryless = MTLStorageModeMemoryless shl MTLResourceStorageModeShift { available in macos , macCatalyst , ios  };
  MTLResourceHazardTrackingModeDefault = MTLHazardTrackingModeDefault shl MTLResourceHazardTrackingModeShift { available in macos , ios  };
  MTLResourceHazardTrackingModeUntracked = MTLHazardTrackingModeUntracked shl MTLResourceHazardTrackingModeShift { available in macos , ios  };
  MTLResourceHazardTrackingModeTracked = MTLHazardTrackingModeTracked shl MTLResourceHazardTrackingModeShift { available in macos , ios  };
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
    function storageMode: MTLStorageMode; message 'storageMode'; { available in macos , ios  }
    function hazardTrackingMode: MTLHazardTrackingMode; message 'hazardTrackingMode'; { available in macos , ios  }
    function resourceOptions: MTLResourceOptions; message 'resourceOptions'; { available in macos , ios  }
    function setPurgeableState (state: MTLPurgeableState): MTLPurgeableState; message 'setPurgeableState:';
    function heap: MTLHeapProtocol; message 'heap'; { available in macos , ios  }
    function heapOffset: NSUInteger; message 'heapOffset'; { available in macos , ios  }
    function allocatedSize: NSUInteger; message 'allocatedSize'; { available in macos , ios  }
    procedure makeAliasable; message 'makeAliasable'; { available in macos , ios  }
    function isAliasable: objcbool; message 'isAliasable'; { available in macos , ios  }
  end;
{$endif}

