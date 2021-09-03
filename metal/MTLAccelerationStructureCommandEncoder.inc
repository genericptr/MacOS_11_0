{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLAccelerationStructureCommandEncoder.h }

{$ifdef TYPES}
type
  MTLAccelerationStructureCommandEncoderProtocolPtr = ^MTLAccelerationStructureCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLAccelerationStructureCommandEncoderProtocol = objcprotocol external name 'MTLAccelerationStructureCommandEncoder' (MTLCommandEncoderProtocol)
    procedure buildAccelerationStructure_descriptor_scratchBuffer_scratchBufferOffset (accelerationStructure: id; descriptor: MTLAccelerationStructureDescriptor; scratchBuffer: id; scratchBufferOffset: NSUInteger); message 'buildAccelerationStructure:descriptor:scratchBuffer:scratchBufferOffset:';
    procedure refitAccelerationStructure_descriptor_destination_scratchBuffer_scratchBufferOffset (sourceAccelerationStructure: id; descriptor: MTLAccelerationStructureDescriptor; destinationAccelerationStructure: id; scratchBuffer: id; scratchBufferOffset: NSUInteger); message 'refitAccelerationStructure:descriptor:destination:scratchBuffer:scratchBufferOffset:';
    procedure copyAccelerationStructure_toAccelerationStructure (sourceAccelerationStructure: id; destinationAccelerationStructure: id); message 'copyAccelerationStructure:toAccelerationStructure:';
    procedure writeCompactedAccelerationStructureSize_toBuffer_offset (accelerationStructure: id; buffer: id; offset: NSUInteger); message 'writeCompactedAccelerationStructureSize:toBuffer:offset:';
    procedure copyAndCompactAccelerationStructure_toAccelerationStructure (sourceAccelerationStructure: id; destinationAccelerationStructure: id); message 'copyAndCompactAccelerationStructure:toAccelerationStructure:';
    procedure updateFence (fence: id); message 'updateFence:';
    procedure waitForFence (fence: id); message 'waitForFence:';
    procedure useResource_usage (resource: id; usage: MTLResourceUsage); message 'useResource:usage:';
    procedure useResources_count_usage (resources: idPtr { variable size array of id }; count: NSUInteger; usage: MTLResourceUsage); message 'useResources:count:usage:';
    procedure useHeap (heap: id); message 'useHeap:';
    procedure useHeaps_count (heaps: idPtr { variable size array of id }; count: NSUInteger); message 'useHeaps:count:';
    procedure sampleCountersInBuffer_atSampleIndex_withBarrier (sampleBuffer: id; sampleIndex: NSUInteger; barrier: objcbool); message 'sampleCountersInBuffer:atSampleIndex:withBarrier:'; { available in macos , ios  }
  end;
{$endif}

