{ Parsed from Metal.framework MTLAccelerationStructureCommandEncoder.h }

{$ifdef TYPES}
type
  MTLAccelerationStructureCommandEncoderProtocolPtr = ^MTLAccelerationStructureCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLAccelerationStructureCommandEncoderProtocol = objcprotocol external name 'MTLAccelerationStructureCommandEncoder' (MTLCommandEncoderProtocol)
    procedure buildAccelerationStructure_descriptor_scratchBuffer_scratchBufferOffset (accelerationStructure: MTLAccelerationStructureProtocol; descriptor: MTLAccelerationStructureDescriptor; scratchBuffer: MTLBufferProtocol; scratchBufferOffset: NSUInteger); message 'buildAccelerationStructure:descriptor:scratchBuffer:scratchBufferOffset:';
    procedure refitAccelerationStructure_descriptor_destination_scratchBuffer_scratchBufferOffset (sourceAccelerationStructure: MTLAccelerationStructureProtocol; descriptor: MTLAccelerationStructureDescriptor; destinationAccelerationStructure: MTLAccelerationStructureProtocol; scratchBuffer: MTLBufferProtocol; scratchBufferOffset: NSUInteger); message 'refitAccelerationStructure:descriptor:destination:scratchBuffer:scratchBufferOffset:';
    procedure copyAccelerationStructure_toAccelerationStructure (sourceAccelerationStructure: MTLAccelerationStructureProtocol; destinationAccelerationStructure: MTLAccelerationStructureProtocol); message 'copyAccelerationStructure:toAccelerationStructure:';
    procedure writeCompactedAccelerationStructureSize_toBuffer_offset (accelerationStructure: MTLAccelerationStructureProtocol; buffer: MTLBufferProtocol; offset: NSUInteger); message 'writeCompactedAccelerationStructureSize:toBuffer:offset:';
    procedure copyAndCompactAccelerationStructure_toAccelerationStructure (sourceAccelerationStructure: MTLAccelerationStructureProtocol; destinationAccelerationStructure: MTLAccelerationStructureProtocol); message 'copyAndCompactAccelerationStructure:toAccelerationStructure:';
    procedure updateFence (fence: MTLFenceProtocol); message 'updateFence:';
    procedure waitForFence (fence: MTLFenceProtocol); message 'waitForFence:';
    procedure useResource_usage (resource: MTLResourceProtocol; usage: MTLResourceUsage); message 'useResource:usage:';
    procedure useResources_count_usage (resources: MTLResourceProtocolPtr { variable size array of id }; count: NSUInteger; usage: MTLResourceUsage); message 'useResources:count:usage:';
    procedure useHeap (heap: MTLHeapProtocol); message 'useHeap:';
    procedure useHeaps_count (heaps: MTLHeapProtocolPtr { variable size array of id }; count: NSUInteger); message 'useHeaps:count:';
    procedure sampleCountersInBuffer_atSampleIndex_withBarrier (sampleBuffer: MTLCounterSampleBufferProtocol; sampleIndex: NSUInteger; barrier: objcbool); message 'sampleCountersInBuffer:atSampleIndex:withBarrier:'; { available in macos , ios  }
  end;
{$endif}

