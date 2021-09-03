{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLArgumentEncoder.h }

{$ifdef TYPES}
type
  MTLArgumentEncoderProtocolPtr = ^MTLArgumentEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLArgumentEncoderProtocol = objcprotocol external name 'MTLArgumentEncoder' (NSObjectProtocol)
    function device: id; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function encodedLength: NSUInteger; message 'encodedLength';
    function alignment: NSUInteger; message 'alignment';
    procedure setArgumentBuffer_offset (argumentBuffer: id; offset: NSUInteger); message 'setArgumentBuffer:offset:';
    procedure setArgumentBuffer_startOffset_arrayElement (argumentBuffer: id; startOffset: NSUInteger; arrayElement: NSUInteger); message 'setArgumentBuffer:startOffset:arrayElement:';
    procedure setBuffer_offset_atIndex (buffer: id; offset: NSUInteger; index: NSUInteger); message 'setBuffer:offset:atIndex:';
    procedure setBuffers_offsets_withRange (buffers: idPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setBuffers:offsets:withRange:';
    procedure setTexture_atIndex (texture: id; index: NSUInteger); message 'setTexture:atIndex:';
    procedure setTextures_withRange (textures: idPtr { variable size array of id }; range: NSRange); message 'setTextures:withRange:';
    procedure setSamplerState_atIndex (sampler: id; index: NSUInteger); message 'setSamplerState:atIndex:';
    procedure setSamplerStates_withRange (samplers: idPtr { variable size array of id }; range: NSRange); message 'setSamplerStates:withRange:';
    function constantDataAtIndex (index: NSUInteger): pointer; message 'constantDataAtIndex:';
    procedure setRenderPipelineState_atIndex (pipeline: id; index: NSUInteger); message 'setRenderPipelineState:atIndex:'; { available in macos , macCatalyst , ios  }
    procedure setRenderPipelineStates_withRange (pipelines: idPtr { variable size array of id }; range: NSRange); message 'setRenderPipelineStates:withRange:'; { available in macos , macCatalyst , ios  }
    procedure setComputePipelineState_atIndex (pipeline: id; index: NSUInteger); message 'setComputePipelineState:atIndex:'; { available in ios ,macos  }
    procedure setComputePipelineStates_withRange (pipelines: idPtr { variable size array of id }; range: NSRange); message 'setComputePipelineStates:withRange:'; { available in ios ,macos  }
    procedure setIndirectCommandBuffer_atIndex (indirectCommandBuffer: id; index: NSUInteger); message 'setIndirectCommandBuffer:atIndex:'; { available in macos , ios  }
    procedure setIndirectCommandBuffers_withRange (buffers: idPtr { variable size array of id }; range: NSRange); message 'setIndirectCommandBuffers:withRange:'; { available in macos , ios  }
    procedure setAccelerationStructure_atIndex (accelerationStructure: id; index: NSUInteger); message 'setAccelerationStructure:atIndex:'; { available in macos , ios  }
    function newArgumentEncoderForBufferAtIndex (index: NSUInteger): id; message 'newArgumentEncoderForBufferAtIndex:'; { available in macos , ios  }
    procedure setVisibleFunctionTable_atIndex (visibleFunctionTable: id; index: NSUInteger); message 'setVisibleFunctionTable:atIndex:'; { available in macos , ios  }
    procedure setVisibleFunctionTables_withRange (visibleFunctionTables: idPtr { variable size array of id }; range: NSRange); message 'setVisibleFunctionTables:withRange:'; { available in macos , ios  }
    procedure setIntersectionFunctionTable_atIndex (intersectionFunctionTable: id; index: NSUInteger); message 'setIntersectionFunctionTable:atIndex:'; { available in macos , ios  }
    procedure setIntersectionFunctionTables_withRange (intersectionFunctionTables: idPtr { variable size array of id }; range: NSRange); message 'setIntersectionFunctionTables:withRange:'; { available in macos , ios  }
  end;
{$endif}

