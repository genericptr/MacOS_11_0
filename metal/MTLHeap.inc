{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLHeap.h }

{$ifdef TYPES}
type
  MTLHeapDescriptorPtr = ^MTLHeapDescriptor;
  MTLHeapProtocolPtr = ^MTLHeapProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLHeapType = NSInteger;
  MTLHeapTypePtr = ^MTLHeapType;

const
  MTLHeapTypeAutomatic = 0;
  MTLHeapTypePlacement = 1;
  MTLHeapTypeSparse = 2 { available in macos , macCatalyst  };
{$endif}

{$ifdef CLASSES}

type
  MTLHeapDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setSize(newValue: NSUInteger); message 'setSize:';
    function size: NSUInteger; message 'size';
    procedure setStorageMode(newValue: MTLStorageMode); message 'setStorageMode:';
    function storageMode: MTLStorageMode; message 'storageMode';
    procedure setCpuCacheMode(newValue: MTLCPUCacheMode); message 'setCpuCacheMode:';
    function cpuCacheMode: MTLCPUCacheMode; message 'cpuCacheMode';
    procedure setHazardTrackingMode(newValue: MTLHazardTrackingMode); message 'setHazardTrackingMode:'; { available in macos , ios  }
    function hazardTrackingMode: MTLHazardTrackingMode; message 'hazardTrackingMode'; { available in macos , ios  }
    procedure setResourceOptions(newValue: MTLResourceOptions); message 'setResourceOptions:'; { available in macos , ios  }
    function resourceOptions: MTLResourceOptions; message 'resourceOptions'; { available in macos , ios  }
    procedure setType(newValue: MTLHeapType); message 'setType:'; { available in macos , ios  }
    function type_: MTLHeapType; message 'type'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLHeapProtocol = objcprotocol external name 'MTLHeap' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function storageMode: MTLStorageMode; message 'storageMode';
    function cpuCacheMode: MTLCPUCacheMode; message 'cpuCacheMode';
    function hazardTrackingMode: MTLHazardTrackingMode; message 'hazardTrackingMode'; { available in macos , ios  }
    function resourceOptions: MTLResourceOptions; message 'resourceOptions'; { available in macos , ios  }
    function size: NSUInteger; message 'size';
    function usedSize: NSUInteger; message 'usedSize';
    function currentAllocatedSize: NSUInteger; message 'currentAllocatedSize'; { available in macos , ios  }
    function maxAvailableSizeWithAlignment (alignment: NSUInteger): NSUInteger; message 'maxAvailableSizeWithAlignment:';
    function newBufferWithLength_options (length: NSUInteger; options: MTLResourceOptions): id; message 'newBufferWithLength:options:';
    function newTextureWithDescriptor (desc: MTLTextureDescriptor): id; message 'newTextureWithDescriptor:';
    function setPurgeableState (state: MTLPurgeableState): MTLPurgeableState; message 'setPurgeableState:';
    function type_: MTLHeapType; message 'type'; { available in macos , ios  }
    function newBufferWithLength_options_offset (length: NSUInteger; options: MTLResourceOptions; offset: NSUInteger): id; message 'newBufferWithLength:options:offset:'; { available in macos , ios  }
    function newTextureWithDescriptor_offset (descriptor: MTLTextureDescriptor; offset: NSUInteger): id; message 'newTextureWithDescriptor:offset:'; { available in macos , ios  }
  end;
{$endif}

