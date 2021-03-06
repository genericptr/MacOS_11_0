{ Parsed from Metal.framework MTLResourceStateCommandEncoder.h }

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
    procedure updateTextureMappings_mode_regions_mipLevels_slices_numRegions (texture: MTLTextureProtocol; mode: MTLSparseTextureMappingMode; regions: MTLRegionPtr { variable size array of MTLRegion }; mipLevels: NSUIntegerPtr { variable size array of NSUInteger }; slices: NSUIntegerPtr { variable size array of NSUInteger }; numRegions: NSUInteger); message 'updateTextureMappings:mode:regions:mipLevels:slices:numRegions:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    procedure updateTextureMapping_mode_region_mipLevel_slice (texture: MTLTextureProtocol; mode: MTLSparseTextureMappingMode; region: MTLRegion; mipLevel: NSUInteger; slice: NSUInteger); message 'updateTextureMapping:mode:region:mipLevel:slice:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    procedure updateTextureMapping_mode_indirectBuffer_indirectBufferOffset (texture: MTLTextureProtocol; mode: MTLSparseTextureMappingMode; indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'updateTextureMapping:mode:indirectBuffer:indirectBufferOffset:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    procedure updateFence (fence: MTLFenceProtocol); message 'updateFence:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    procedure waitForFence (fence: MTLFenceProtocol); message 'waitForFence:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
  required
  end;
{$endif}

