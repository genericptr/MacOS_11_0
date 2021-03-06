{ Parsed from Metal.framework MTLArgumentEncoder.h }

{$ifdef TYPES}
type
  MTLArgumentEncoderProtocolPtr = ^MTLArgumentEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLArgumentEncoderProtocol = objcprotocol external name 'MTLArgumentEncoder' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function encodedLength: NSUInteger; message 'encodedLength';
    function alignment: NSUInteger; message 'alignment';
    procedure setArgumentBuffer_offset (argumentBuffer: MTLBufferProtocol; offset: NSUInteger); message 'setArgumentBuffer:offset:';
    procedure setArgumentBuffer_startOffset_arrayElement (argumentBuffer: MTLBufferProtocol; startOffset: NSUInteger; arrayElement: NSUInteger); message 'setArgumentBuffer:startOffset:arrayElement:';
    procedure setBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setBuffer:offset:atIndex:';
    procedure setBuffers_offsets_withRange (buffers: MTLBufferProtocolPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setBuffers:offsets:withRange:';
    procedure setTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setTexture:atIndex:';
    procedure setTextures_withRange (textures: MTLTextureProtocolPtr { variable size array of id }; range: NSRange); message 'setTextures:withRange:';
    procedure setSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setSamplerState:atIndex:';
    procedure setSamplerStates_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; range: NSRange); message 'setSamplerStates:withRange:';
    function constantDataAtIndex (index: NSUInteger): pointer; message 'constantDataAtIndex:';
    procedure setRenderPipelineState_atIndex (pipeline: MTLRenderPipelineStateProtocol; index: NSUInteger); message 'setRenderPipelineState:atIndex:'; { available in macos 10.14, macCatalyst 13.0, ios 13.0 }
    procedure setRenderPipelineStates_withRange (pipelines: MTLRenderPipelineStateProtocolPtr { variable size array of id }; range: NSRange); message 'setRenderPipelineStates:withRange:'; { available in macos 10.14, macCatalyst 13.0, ios 13.0 }
    procedure setComputePipelineState_atIndex (pipeline: MTLComputePipelineStateProtocol; index: NSUInteger); message 'setComputePipelineState:atIndex:'; { available in ios 13.0,macos 11.0 }
    procedure setComputePipelineStates_withRange (pipelines: MTLComputePipelineStateProtocolPtr { variable size array of id }; range: NSRange); message 'setComputePipelineStates:withRange:'; { available in ios 13.0,macos 11.0 }
    procedure setIndirectCommandBuffer_atIndex (indirectCommandBuffer: MTLIndirectCommandBufferProtocol; index: NSUInteger); message 'setIndirectCommandBuffer:atIndex:'; { available in macos 10.14, ios 12.0 }
    procedure setIndirectCommandBuffers_withRange (buffers: MTLIndirectCommandBufferProtocolPtr { variable size array of id }; range: NSRange); message 'setIndirectCommandBuffers:withRange:'; { available in macos 10.14, ios 12.0 }
    procedure setAccelerationStructure_atIndex (accelerationStructure: MTLAccelerationStructureProtocol; index: NSUInteger); message 'setAccelerationStructure:atIndex:'; { available in macos 11.0, ios 14.0 }
    function newArgumentEncoderForBufferAtIndex (index: NSUInteger): id; message 'newArgumentEncoderForBufferAtIndex:'; { available in macos 10.13, ios 11.0 }
    procedure setVisibleFunctionTable_atIndex (visibleFunctionTable: MTLVisibleFunctionTableProtocol; index: NSUInteger); message 'setVisibleFunctionTable:atIndex:'; { available in macos 11.0, ios 14.0 }
    procedure setVisibleFunctionTables_withRange (visibleFunctionTables: MTLVisibleFunctionTableProtocolPtr { variable size array of id }; range: NSRange); message 'setVisibleFunctionTables:withRange:'; { available in macos 11.0, ios 14.0 }
    procedure setIntersectionFunctionTable_atIndex (intersectionFunctionTable: MTLIntersectionFunctionTableProtocol; index: NSUInteger); message 'setIntersectionFunctionTable:atIndex:'; { available in macos 11.0, ios 14.0 }
    procedure setIntersectionFunctionTables_withRange (intersectionFunctionTables: MTLIntersectionFunctionTableProtocolPtr { variable size array of id }; range: NSRange); message 'setIntersectionFunctionTables:withRange:'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

