{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLResourceStateCommandEncoder.h }

{$ifdef TYPES}
type
  MTLResourceStateCommandEncoderProtocolPtr = ^MTLResourceStateCommandEncoderProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLSparseTextureMappingMode = NSUInteger;
  MTLSparseTextureMappingModePtr = ^MTLSparseTextureMappingMode;

const
  MTLSparseTextureMappingModeMap = 0;
  MTLSparseTextureMappingModeUnmap = 1;

type
  MTLMapIndirectArguments = record
    regionOriginX: cuint32;
    regionOriginY: cuint32;
    regionOriginZ: cuint32;
    regionSizeWidth: cuint32;
    regionSizeHeight: cuint32;
    regionSizeDepth: cuint32;
    mipMapLevel: cuint32;
    sliceId: cuint32;
  end;
type
  MTLMapIndirectArgumentsPtr = ^MTLMapIndirectArguments;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLResourceStateCommandEncoderProtocol = objcprotocol external name 'MTLResourceStateCommandEncoder' (MTLCommandEncoderProtocol)
  optional
    procedure updateTextureMappings_mode_regions_mipLevels_slices_numRegions (texture: id; mode: MTLSparseTextureMappingMode; regions: MTLRegionPtr { variable size array of MTLRegion }; mipLevels: NSUIntegerPtr { variable size array of NSUInteger }; slices: NSUIntegerPtr { variable size array of NSUInteger }; numRegions: NSUInteger); message 'updateTextureMappings:mode:regions:mipLevels:slices:numRegions:'; { available in macos , macCatalyst , ios  }
    procedure updateTextureMapping_mode_region_mipLevel_slice (texture: id; mode: MTLSparseTextureMappingMode; region: MTLRegion; mipLevel: NSUInteger; slice: NSUInteger); message 'updateTextureMapping:mode:region:mipLevel:slice:'; { available in macos , macCatalyst , ios  }
    procedure updateTextureMapping_mode_indirectBuffer_indirectBufferOffset (texture: id; mode: MTLSparseTextureMappingMode; indirectBuffer: id; indirectBufferOffset: NSUInteger); message 'updateTextureMapping:mode:indirectBuffer:indirectBufferOffset:'; { available in macos , macCatalyst , ios  }
    procedure updateFence (fence: id); message 'updateFence:'; { available in macos , macCatalyst , ios  }
    procedure waitForFence (fence: id); message 'waitForFence:'; { available in macos , macCatalyst , ios  }
  required
  end;
{$endif}

