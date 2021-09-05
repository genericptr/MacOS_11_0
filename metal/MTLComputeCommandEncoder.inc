{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLComputeCommandEncoder.h }

{$ifdef TYPES}
type
  MTLComputeCommandEncoderProtocolPtr = ^MTLComputeCommandEncoderProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLDispatchThreadgroupsIndirectArguments = record
    threadgroupsPerGrid:array[0..2] of cuint32;
  end;
type
  MTLDispatchThreadgroupsIndirectArgumentsPtr = ^MTLDispatchThreadgroupsIndirectArguments;
type
  MTLStageInRegionIndirectArguments = record
    stageInOrigin:array[0..2] of cuint32;
    stageInSize:array[0..2] of cuint32;
  end;
type
  MTLStageInRegionIndirectArgumentsPtr = ^MTLStageInRegionIndirectArguments;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLComputeCommandEncoderProtocol = objcprotocol external name 'MTLComputeCommandEncoder' (MTLCommandEncoderProtocol)
    function dispatchType: MTLDispatchType; message 'dispatchType'; { available in macos , ios  }
    procedure setComputePipelineState (state: MTLComputePipelineStateProtocol); message 'setComputePipelineState:';
    procedure setBytes_length_atIndex (bytes: pointer; length: NSUInteger; index: NSUInteger); message 'setBytes:length:atIndex:'; { available in macos , ios  }
    procedure setBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setBuffer:offset:atIndex:';
    procedure setBufferOffset_atIndex (offset: NSUInteger; index: NSUInteger); message 'setBufferOffset:atIndex:'; { available in macos , ios  }
    procedure setBuffers_offsets_withRange (buffers: MTLBufferProtocolPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setBuffers:offsets:withRange:';
    procedure setVisibleFunctionTable_atBufferIndex (visibleFunctionTable: MTLVisibleFunctionTableProtocol; bufferIndex: NSUInteger); message 'setVisibleFunctionTable:atBufferIndex:'; { available in macos , ios  }
    procedure setVisibleFunctionTables_withBufferRange (visibleFunctionTables: MTLVisibleFunctionTableProtocolPtr { variable size array of id }; range: NSRange); message 'setVisibleFunctionTables:withBufferRange:'; { available in macos , ios  }
    procedure setIntersectionFunctionTable_atBufferIndex (intersectionFunctionTable: MTLIntersectionFunctionTableProtocol; bufferIndex: NSUInteger); message 'setIntersectionFunctionTable:atBufferIndex:'; { available in macos , ios  }
    procedure setIntersectionFunctionTables_withBufferRange (intersectionFunctionTables: MTLIntersectionFunctionTableProtocolPtr { variable size array of id }; range: NSRange); message 'setIntersectionFunctionTables:withBufferRange:'; { available in macos , ios  }
    procedure setAccelerationStructure_atBufferIndex (accelerationStructure: MTLAccelerationStructureProtocol; bufferIndex: NSUInteger); message 'setAccelerationStructure:atBufferIndex:'; { available in macos , ios  }
    procedure setTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setTexture:atIndex:';
    procedure setTextures_withRange (textures: MTLTextureProtocolPtr { variable size array of id }; range: NSRange); message 'setTextures:withRange:';
    procedure setSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setSamplerState:atIndex:';
    procedure setSamplerStates_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; range: NSRange); message 'setSamplerStates:withRange:';
    procedure setSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setSamplerState:lodMinClamp:lodMaxClamp:atIndex:';
    procedure setSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setSamplerStates:lodMinClamps:lodMaxClamps:withRange:';
    procedure setThreadgroupMemoryLength_atIndex (length: NSUInteger; index: NSUInteger); message 'setThreadgroupMemoryLength:atIndex:';
    procedure setImageblockWidth_height (width: NSUInteger; height: NSUInteger); message 'setImageblockWidth:height:'; { unavailable in tvos }
    procedure setStageInRegion (region: MTLRegion); message 'setStageInRegion:'; { available in macos , ios  }
    procedure setStageInRegionWithIndirectBuffer_indirectBufferOffset (indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'setStageInRegionWithIndirectBuffer:indirectBufferOffset:'; { available in macos , ios  }
    procedure dispatchThreadgroups_threadsPerThreadgroup (threadgroupsPerGrid: MTLSize; threadsPerThreadgroup: MTLSize); message 'dispatchThreadgroups:threadsPerThreadgroup:';
    procedure dispatchThreadgroupsWithIndirectBuffer_indirectBufferOffset_threadsPerThreadgroup (indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger; threadsPerThreadgroup: MTLSize); message 'dispatchThreadgroupsWithIndirectBuffer:indirectBufferOffset:threadsPerThreadgroup:'; { available in macos , ios  }
    procedure dispatchThreads_threadsPerThreadgroup (threadsPerGrid: MTLSize; threadsPerThreadgroup: MTLSize); message 'dispatchThreads:threadsPerThreadgroup:'; { unavailable in tvos }
    procedure updateFence (fence: MTLFenceProtocol); message 'updateFence:'; { available in macos , ios  }
    procedure waitForFence (fence: MTLFenceProtocol); message 'waitForFence:'; { available in macos , ios  }
    procedure useResource_usage (resource: MTLResourceProtocol; usage: MTLResourceUsage); message 'useResource:usage:'; { available in macos , ios  }
    procedure useResources_count_usage (resources: MTLResourceProtocolPtr { variable size array of id }; count: NSUInteger; usage: MTLResourceUsage); message 'useResources:count:usage:'; { available in macos , ios  }
    procedure useHeap (heap: MTLHeapProtocol); message 'useHeap:'; { available in macos , ios  }
    procedure useHeaps_count (heaps: MTLHeapProtocolPtr { variable size array of id }; count: NSUInteger); message 'useHeaps:count:'; { available in macos , ios  }
    procedure executeCommandsInBuffer_withRange (indirectCommandBuffer: MTLIndirectCommandBufferProtocol; executionRange: NSRange); message 'executeCommandsInBuffer:withRange:'; { available in ios ,macos  }
    procedure executeCommandsInBuffer_indirectBuffer_indirectBufferOffset (indirectCommandbuffer: MTLIndirectCommandBufferProtocol; indirectRangeBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'executeCommandsInBuffer:indirectBuffer:indirectBufferOffset:'; { available in ios ,macos  }
    procedure memoryBarrierWithScope (scope: MTLBarrierScope); message 'memoryBarrierWithScope:'; { available in macos , ios  }
    procedure memoryBarrierWithResources_count (resources: MTLResourceProtocolPtr { variable size array of id }; count: NSUInteger); message 'memoryBarrierWithResources:count:'; { available in macos , ios  }
    procedure sampleCountersInBuffer_atSampleIndex_withBarrier (sampleBuffer: MTLCounterSampleBufferProtocol; sampleIndex: NSUInteger; barrier: objcbool); message 'sampleCountersInBuffer:atSampleIndex:withBarrier:'; { available in macos , ios  }
  end;
{$endif}

