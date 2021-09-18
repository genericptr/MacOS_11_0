{ Parsed from Metal.framework MTLBlitCommandEncoder.h }

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
    procedure synchronizeResource (resource: MTLResourceProtocol); message 'synchronizeResource:'; { unavailable in ios }
    procedure synchronizeTexture_slice_level (texture: MTLTextureProtocol; slice: NSUInteger; level: NSUInteger); message 'synchronizeTexture:slice:level:'; { unavailable in ios }
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toTexture_destinationSlice_destinationLevel_destinationOrigin (sourceTexture: MTLTextureProtocol; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationTexture: MTLTextureProtocol; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:';
    procedure copyFromBuffer_sourceOffset_sourceBytesPerRow_sourceBytesPerImage_sourceSize_toTexture_destinationSlice_destinationLevel_origin (sourceBuffer: MTLBufferProtocol; sourceOffset: NSUInteger; sourceBytesPerRow: NSUInteger; sourceBytesPerImage: NSUInteger; sourceSize: MTLSize; destinationTexture: MTLTextureProtocol; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin); message 'copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:';
    procedure copyFromBuffer_sourceOffset_sourceBytesPerRow_sourceBytesPerImage_sourceSize_toTexture_slice_level_origin_options (sourceBuffer: MTLBufferProtocol; sourceOffset: NSUInteger; sourceBytesPerRow: NSUInteger; sourceBytesPerImage: NSUInteger; sourceSize: MTLSize; destinationTexture: MTLTextureProtocol; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin; options: MTLBlitOption); message 'copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:options:'; { available in macos , ios  }
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toBuffer_destinationOffset_destinationBytesPerRow_destinationBytesPerImage (sourceTexture: MTLTextureProtocol; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationBuffer: MTLBufferProtocol; destinationOffset: NSUInteger; destinationBytesPerRow: NSUInteger; destinationBytesPerImage: NSUInteger); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage:';
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toBuffer_destinationOffset_bytesPerRow_bytesPerImage_options (sourceTexture: MTLTextureProtocol; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationBuffer: MTLBufferProtocol; destinationOffset: NSUInteger; destinationBytesPerRow: NSUInteger; destinationBytesPerImage: NSUInteger; options: MTLBlitOption); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage:options:'; { available in macos , ios  }
    procedure generateMipmapsForTexture (texture: MTLTextureProtocol); message 'generateMipmapsForTexture:';
    procedure fillBuffer_range_value (buffer: MTLBufferProtocol; range: NSRange; value: cuint8); message 'fillBuffer:range:value:';
    procedure copyFromTexture_sourceSlice_sourceLevel_toTexture_destinationSlice_destinationLevel_sliceCount_levelCount (sourceTexture: MTLTextureProtocol; sourceSlice: NSUInteger; sourceLevel: NSUInteger; destinationTexture: MTLTextureProtocol; destinationSlice: NSUInteger; destinationLevel: NSUInteger; sliceCount: NSUInteger; levelCount: NSUInteger); message 'copyFromTexture:sourceSlice:sourceLevel:toTexture:destinationSlice:destinationLevel:sliceCount:levelCount:'; { available in macos , ios  }
    procedure copyFromTexture_toTexture (sourceTexture: MTLTextureProtocol; destinationTexture: MTLTextureProtocol); message 'copyFromTexture:toTexture:'; { available in macos , ios  }
    procedure copyFromBuffer_sourceOffset_toBuffer_destinationOffset_size (sourceBuffer: MTLBufferProtocol; sourceOffset: NSUInteger; destinationBuffer: MTLBufferProtocol; destinationOffset: NSUInteger; size: NSUInteger); message 'copyFromBuffer:sourceOffset:toBuffer:destinationOffset:size:';
    procedure updateFence (fence: MTLFenceProtocol); message 'updateFence:'; { available in macos , ios  }
    procedure waitForFence (fence: MTLFenceProtocol); message 'waitForFence:'; { available in macos , ios  }
  optional
    procedure getTextureAccessCounters_region_mipLevel_slice_resetCounters_countersBuffer_countersBufferOffset (texture: MTLTextureProtocol; region: MTLRegion; mipLevel: NSUInteger; slice: NSUInteger; resetCounters: objcbool; countersBuffer: MTLBufferProtocol; countersBufferOffset: NSUInteger); message 'getTextureAccessCounters:region:mipLevel:slice:resetCounters:countersBuffer:countersBufferOffset:'; { available in macos , macCatalyst , ios  }
    procedure resetTextureAccessCounters_region_mipLevel_slice (texture: MTLTextureProtocol; region: MTLRegion; mipLevel: NSUInteger; slice: NSUInteger); message 'resetTextureAccessCounters:region:mipLevel:slice:'; { available in macos , macCatalyst , ios  }
  required
    procedure optimizeContentsForGPUAccess (texture: MTLTextureProtocol); message 'optimizeContentsForGPUAccess:'; { available in macos , ios  }
    procedure optimizeContentsForGPUAccess_slice_level (texture: MTLTextureProtocol; slice: NSUInteger; level: NSUInteger); message 'optimizeContentsForGPUAccess:slice:level:'; { available in macos , ios  }
    procedure optimizeContentsForCPUAccess (texture: MTLTextureProtocol); message 'optimizeContentsForCPUAccess:'; { available in macos , ios  }
    procedure optimizeContentsForCPUAccess_slice_level (texture: MTLTextureProtocol; slice: NSUInteger; level: NSUInteger); message 'optimizeContentsForCPUAccess:slice:level:'; { available in macos , ios  }
    procedure resetCommandsInBuffer_withRange (buffer: MTLIndirectCommandBufferProtocol; range: NSRange); message 'resetCommandsInBuffer:withRange:'; { available in macos , ios  }
    procedure copyIndirectCommandBuffer_sourceRange_destination_destinationIndex (source: MTLIndirectCommandBufferProtocol; sourceRange: NSRange; destination: MTLIndirectCommandBufferProtocol; destinationIndex: NSUInteger); message 'copyIndirectCommandBuffer:sourceRange:destination:destinationIndex:'; { available in macos , ios  }
    procedure optimizeIndirectCommandBuffer_withRange (indirectCommandBuffer: MTLIndirectCommandBufferProtocol; range: NSRange); message 'optimizeIndirectCommandBuffer:withRange:'; { available in macos , ios  }
    procedure sampleCountersInBuffer_atSampleIndex_withBarrier (sampleBuffer: MTLCounterSampleBufferProtocol; sampleIndex: NSUInteger; barrier: objcbool); message 'sampleCountersInBuffer:atSampleIndex:withBarrier:'; { available in macos , ios  }
    procedure resolveCounters_inRange_destinationBuffer_destinationOffset (sampleBuffer: MTLCounterSampleBufferProtocol; range: NSRange; destinationBuffer: MTLBufferProtocol; destinationOffset: NSUInteger); message 'resolveCounters:inRange:destinationBuffer:destinationOffset:'; { available in macos , ios  }
  end;
{$endif}

