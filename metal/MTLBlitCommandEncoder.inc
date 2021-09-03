{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLBlitCommandEncoder.h }

{$ifdef TYPES}
type
  MTLBlitCommandEncoderProtocolPtr = ^MTLBlitCommandEncoderProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLBlitOption = NSUInteger;
  MTLBlitOptionPtr = ^MTLBlitOption;

const
  MTLBlitOptionNone = 0;
  MTLBlitOptionDepthFromDepthStencil = 1 shl 0;
  MTLBlitOptionStencilFromDepthStencil = 1 shl 1;
  MTLBlitOptionRowLinearPVRTC = 1 shl 2 { available in ios , macos , macCatalyst  };
{$endif}

{$ifdef PROTOCOLS}

type
  MTLBlitCommandEncoderProtocol = objcprotocol external name 'MTLBlitCommandEncoder' (MTLCommandEncoderProtocol)
    procedure synchronizeResource (resource: id); message 'synchronizeResource:'; { unavailable in ios }
    procedure synchronizeTexture_slice_level (texture: id; slice: NSUInteger; level: NSUInteger); message 'synchronizeTexture:slice:level:'; { unavailable in ios }
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toTexture_destinationSlice_destinationLevel_destinationOrigin (sourceTexture: id; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationTexture: id; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:';
    procedure copyFromBuffer_sourceOffset_sourceBytesPerRow_sourceBytesPerImage_sourceSize_toTexture_destinationSlice_destinationLevel_origin (sourceBuffer: id; sourceOffset: NSUInteger; sourceBytesPerRow: NSUInteger; sourceBytesPerImage: NSUInteger; sourceSize: MTLSize; destinationTexture: id; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin); message 'copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:';
    procedure copyFromBuffer_sourceOffset_sourceBytesPerRow_sourceBytesPerImage_sourceSize_toTexture_slice_level_origin_options (sourceBuffer: id; sourceOffset: NSUInteger; sourceBytesPerRow: NSUInteger; sourceBytesPerImage: NSUInteger; sourceSize: MTLSize; destinationTexture: id; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin; options: MTLBlitOption); message 'copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:options:'; { available in macos , ios  }
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toBuffer_destinationOffset_destinationBytesPerRow_destinationBytesPerImage (sourceTexture: id; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationBuffer: id; destinationOffset: NSUInteger; destinationBytesPerRow: NSUInteger; destinationBytesPerImage: NSUInteger); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage:';
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toBuffer_destinationOffset_bytesPerRow_bytesPerImage_options (sourceTexture: id; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationBuffer: id; destinationOffset: NSUInteger; destinationBytesPerRow: NSUInteger; destinationBytesPerImage: NSUInteger; options: MTLBlitOption); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage:options:'; { available in macos , ios  }
    procedure generateMipmapsForTexture (texture: id); message 'generateMipmapsForTexture:';
    procedure fillBuffer_range_value (buffer: id; range: NSRange; value: cuint8); message 'fillBuffer:range:value:';
    procedure copyFromTexture_sourceSlice_sourceLevel_toTexture_destinationSlice_destinationLevel_sliceCount_levelCount (sourceTexture: id; sourceSlice: NSUInteger; sourceLevel: NSUInteger; destinationTexture: id; destinationSlice: NSUInteger; destinationLevel: NSUInteger; sliceCount: NSUInteger; levelCount: NSUInteger); message 'copyFromTexture:sourceSlice:sourceLevel:toTexture:destinationSlice:destinationLevel:sliceCount:levelCount:'; { available in macos , ios  }
    procedure copyFromTexture_toTexture (sourceTexture: id; destinationTexture: id); message 'copyFromTexture:toTexture:'; { available in macos , ios  }
    procedure copyFromBuffer_sourceOffset_toBuffer_destinationOffset_size (sourceBuffer: id; sourceOffset: NSUInteger; destinationBuffer: id; destinationOffset: NSUInteger; size: NSUInteger); message 'copyFromBuffer:sourceOffset:toBuffer:destinationOffset:size:';
    procedure updateFence (fence: id); message 'updateFence:'; { available in macos , ios  }
    procedure waitForFence (fence: id); message 'waitForFence:'; { available in macos , ios  }
  optional
    procedure getTextureAccessCounters_region_mipLevel_slice_resetCounters_countersBuffer_countersBufferOffset (texture: id; region: MTLRegion; mipLevel: NSUInteger; slice: NSUInteger; resetCounters: objcbool; countersBuffer: id; countersBufferOffset: NSUInteger); message 'getTextureAccessCounters:region:mipLevel:slice:resetCounters:countersBuffer:countersBufferOffset:'; { available in macos , macCatalyst , ios  }
    procedure resetTextureAccessCounters_region_mipLevel_slice (texture: id; region: MTLRegion; mipLevel: NSUInteger; slice: NSUInteger); message 'resetTextureAccessCounters:region:mipLevel:slice:'; { available in macos , macCatalyst , ios  }
  required
    procedure optimizeContentsForGPUAccess (texture: id); message 'optimizeContentsForGPUAccess:'; { available in macos , ios  }
    procedure optimizeContentsForGPUAccess_slice_level (texture: id; slice: NSUInteger; level: NSUInteger); message 'optimizeContentsForGPUAccess:slice:level:'; { available in macos , ios  }
    procedure optimizeContentsForCPUAccess (texture: id); message 'optimizeContentsForCPUAccess:'; { available in macos , ios  }
    procedure optimizeContentsForCPUAccess_slice_level (texture: id; slice: NSUInteger; level: NSUInteger); message 'optimizeContentsForCPUAccess:slice:level:'; { available in macos , ios  }
    procedure resetCommandsInBuffer_withRange (buffer: id; range: NSRange); message 'resetCommandsInBuffer:withRange:'; { available in macos , ios  }
    procedure copyIndirectCommandBuffer_sourceRange_destination_destinationIndex (source: id; sourceRange: NSRange; destination: id; destinationIndex: NSUInteger); message 'copyIndirectCommandBuffer:sourceRange:destination:destinationIndex:'; { available in macos , ios  }
    procedure optimizeIndirectCommandBuffer_withRange (indirectCommandBuffer: id; range: NSRange); message 'optimizeIndirectCommandBuffer:withRange:'; { available in macos , ios  }
    procedure sampleCountersInBuffer_atSampleIndex_withBarrier (sampleBuffer: id; sampleIndex: NSUInteger; barrier: objcbool); message 'sampleCountersInBuffer:atSampleIndex:withBarrier:'; { available in macos , ios  }
    procedure resolveCounters_inRange_destinationBuffer_destinationOffset (sampleBuffer: id; range: NSRange; destinationBuffer: id; destinationOffset: NSUInteger); message 'resolveCounters:inRange:destinationBuffer:destinationOffset:'; { available in macos , ios  }
  end;
{$endif}

