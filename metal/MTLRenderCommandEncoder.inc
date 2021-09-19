{ Parsed from Metal.framework MTLRenderCommandEncoder.h }

{$ifdef TYPES}
type
  MTLRenderCommandEncoderProtocolPtr = ^MTLRenderCommandEncoderProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLPrimitiveType = NSUInteger;
  MTLPrimitiveTypePtr = ^MTLPrimitiveType;

const
  MTLPrimitiveTypePoint = 0;
  MTLPrimitiveTypeLine = 1;
  MTLPrimitiveTypeLineStrip = 2;
  MTLPrimitiveTypeTriangle = 3;
  MTLPrimitiveTypeTriangleStrip = 4;

type
  MTLVisibilityResultMode = NSUInteger;
  MTLVisibilityResultModePtr = ^MTLVisibilityResultMode;

const
  MTLVisibilityResultModeDisabled = 0;
  MTLVisibilityResultModeBoolean = 1;
  MTLVisibilityResultModeCounting = 2 { available in macos 10.11, ios 9.0 };

type
  MTLScissorRect = record
    x, y, width, height: NSUInteger;
  end;
type
  MTLScissorRectPtr = ^MTLScissorRect;
type
  MTLViewport = record
    originX, originY, width, height, znear, zfar: double;
  end;
type
  MTLViewportPtr = ^MTLViewport;

type
  MTLCullMode = NSUInteger;
  MTLCullModePtr = ^MTLCullMode;

const
  MTLCullModeNone = 0;
  MTLCullModeFront = 1;
  MTLCullModeBack = 2;

type
  MTLWinding = NSUInteger;
  MTLWindingPtr = ^MTLWinding;

const
  MTLWindingClockwise = 0;
  MTLWindingCounterClockwise = 1;

type
  MTLDepthClipMode = NSUInteger;
  MTLDepthClipModePtr = ^MTLDepthClipMode;

const
  MTLDepthClipModeClip = 0;
  MTLDepthClipModeClamp = 1;

type
  MTLTriangleFillMode = NSUInteger;
  MTLTriangleFillModePtr = ^MTLTriangleFillMode;

const
  MTLTriangleFillModeFill = 0;
  MTLTriangleFillModeLines = 1;

type
  MTLDrawPrimitivesIndirectArguments = record
    vertexCount: cuint32;
    instanceCount: cuint32;
    vertexStart: cuint32;
    baseInstance: cuint32;
  end;
type
  MTLDrawPrimitivesIndirectArgumentsPtr = ^MTLDrawPrimitivesIndirectArguments;
type
  MTLDrawIndexedPrimitivesIndirectArguments = record
    indexCount: cuint32;
    instanceCount: cuint32;
    indexStart: cuint32;
    baseVertex: cint32;
    baseInstance: cuint32;
  end;
type
  MTLDrawIndexedPrimitivesIndirectArgumentsPtr = ^MTLDrawIndexedPrimitivesIndirectArguments;
type
  MTLVertexAmplificationViewMapping = record
    viewportArrayIndexOffset: cuint32;
    renderTargetArrayIndexOffset: cuint32;
  end;
type
  MTLVertexAmplificationViewMappingPtr = ^MTLVertexAmplificationViewMapping;
type
  MTLDrawPatchIndirectArguments = record
    patchCount: cuint32;
    instanceCount: cuint32;
    patchStart: cuint32;
    baseInstance: cuint32;
  end;
type
  MTLDrawPatchIndirectArgumentsPtr = ^MTLDrawPatchIndirectArguments;
type
  MTLQuadTessellationFactorsHalf = record
    edgeTessellationFactor:array[0..3] of cuint16;
    insideTessellationFactor:array[0..1] of cuint16;
  end;
type
  MTLQuadTessellationFactorsHalfPtr = ^MTLQuadTessellationFactorsHalf;
type
  MTLTriangleTessellationFactorsHalf = record
    edgeTessellationFactor:array[0..2] of cuint16;
    insideTessellationFactor: cuint16;
  end;
type
  MTLTriangleTessellationFactorsHalfPtr = ^MTLTriangleTessellationFactorsHalf;

type
  MTLRenderStages = NSUInteger;
  MTLRenderStagesPtr = ^MTLRenderStages;

const
  MTLRenderStageVertex = 1 shl 0;
  MTLRenderStageFragment = 1 shl 1;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLRenderCommandEncoderProtocol = objcprotocol external name 'MTLRenderCommandEncoder' (MTLCommandEncoderProtocol)
    procedure setRenderPipelineState (pipelineState: MTLRenderPipelineStateProtocol); message 'setRenderPipelineState:';
    procedure setVertexBytes_length_atIndex (bytes: pointer; length: NSUInteger; index: NSUInteger); message 'setVertexBytes:length:atIndex:'; { available in macos 10.11, ios 8.3 }
    procedure setVertexBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setVertexBuffer:offset:atIndex:';
    procedure setVertexBufferOffset_atIndex (offset: NSUInteger; index: NSUInteger); message 'setVertexBufferOffset:atIndex:'; { available in macos 10.11, ios 8.3 }
    procedure setVertexBuffers_offsets_withRange (buffers: MTLBufferProtocolPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setVertexBuffers:offsets:withRange:';
    procedure setVertexTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setVertexTexture:atIndex:';
    procedure setVertexTextures_withRange (textures: MTLTextureProtocolPtr { variable size array of id }; range: NSRange); message 'setVertexTextures:withRange:';
    procedure setVertexSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setVertexSamplerState:atIndex:';
    procedure setVertexSamplerStates_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; range: NSRange); message 'setVertexSamplerStates:withRange:';
    procedure setVertexSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setVertexSamplerState:lodMinClamp:lodMaxClamp:atIndex:';
    procedure setVertexSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setVertexSamplerStates:lodMinClamps:lodMaxClamps:withRange:';
    procedure setViewport (viewport: MTLViewport); message 'setViewport:';
    procedure setViewports_count (viewports: MTLViewportPtr { variable size array of MTLViewport }; count: NSUInteger); message 'setViewports:count:'; { unavailable in tvos } { available in macos 10.13, ios 12.0 }
    procedure setFrontFacingWinding (frontFacingWinding: MTLWinding); message 'setFrontFacingWinding:';
    procedure setVertexAmplificationCount_viewMappings (count: NSUInteger; viewMappings: MTLVertexAmplificationViewMappingPtr); message 'setVertexAmplificationCount:viewMappings:'; { available in macos 10.15.4, ios 13.0, macCatalyst 13.4 }
    procedure setCullMode (cullMode: MTLCullMode); message 'setCullMode:';
    procedure setDepthClipMode (depthClipMode: MTLDepthClipMode); message 'setDepthClipMode:'; { available in macos 10.11, ios 11.0 }
    procedure setDepthBias_slopeScale_clamp (depthBias: single; slopeScale: single; clamp: single); message 'setDepthBias:slopeScale:clamp:';
    procedure setScissorRect (rect: MTLScissorRect); message 'setScissorRect:';
    procedure setScissorRects_count (scissorRects: MTLScissorRectPtr { variable size array of MTLScissorRect }; count: NSUInteger); message 'setScissorRects:count:'; { unavailable in tvos } { available in macos 10.13, ios 12.0 }
    procedure setTriangleFillMode (fillMode: MTLTriangleFillMode); message 'setTriangleFillMode:';
    procedure setFragmentBytes_length_atIndex (bytes: pointer; length: NSUInteger; index: NSUInteger); message 'setFragmentBytes:length:atIndex:'; { available in macos 10.11, ios 8.3 }
    procedure setFragmentBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setFragmentBuffer:offset:atIndex:';
    procedure setFragmentBufferOffset_atIndex (offset: NSUInteger; index: NSUInteger); message 'setFragmentBufferOffset:atIndex:'; { available in macos 10.11, ios 8.3 }
    procedure setFragmentBuffers_offsets_withRange (buffers: MTLBufferProtocolPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setFragmentBuffers:offsets:withRange:';
    procedure setFragmentTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setFragmentTexture:atIndex:';
    procedure setFragmentTextures_withRange (textures: MTLTextureProtocolPtr { variable size array of id }; range: NSRange); message 'setFragmentTextures:withRange:';
    procedure setFragmentSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setFragmentSamplerState:atIndex:';
    procedure setFragmentSamplerStates_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; range: NSRange); message 'setFragmentSamplerStates:withRange:';
    procedure setFragmentSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setFragmentSamplerState:lodMinClamp:lodMaxClamp:atIndex:';
    procedure setFragmentSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setFragmentSamplerStates:lodMinClamps:lodMaxClamps:withRange:';
    procedure setBlendColorRed_green_blue_alpha (red: single; green: single; blue: single; alpha: single); message 'setBlendColorRed:green:blue:alpha:';
    procedure setDepthStencilState (depthStencilState: MTLDepthStencilStateProtocol); message 'setDepthStencilState:';
    procedure setStencilReferenceValue (referenceValue: cuint32); message 'setStencilReferenceValue:';
    procedure setStencilFrontReferenceValue_backReferenceValue (frontReferenceValue: cuint32; backReferenceValue: cuint32); message 'setStencilFrontReferenceValue:backReferenceValue:'; { available in macos 10.11, ios 9.0 }
    procedure setVisibilityResultMode_offset (mode: MTLVisibilityResultMode; offset: NSUInteger); message 'setVisibilityResultMode:offset:';
    procedure setColorStoreAction_atIndex (storeAction: MTLStoreAction; colorAttachmentIndex: NSUInteger); message 'setColorStoreAction:atIndex:'; { available in macos 10.12, ios 10.0 }
    procedure setDepthStoreAction (storeAction: MTLStoreAction); message 'setDepthStoreAction:'; { available in macos 10.12, ios 10.0 }
    procedure setStencilStoreAction (storeAction: MTLStoreAction); message 'setStencilStoreAction:'; { available in macos 10.12, ios 10.0 }
    procedure setColorStoreActionOptions_atIndex (storeActionOptions: MTLStoreActionOptions; colorAttachmentIndex: NSUInteger); message 'setColorStoreActionOptions:atIndex:'; { available in macos 10.13, ios 11.0 }
    procedure setDepthStoreActionOptions (storeActionOptions: MTLStoreActionOptions); message 'setDepthStoreActionOptions:'; { available in macos 10.13, ios 11.0 }
    procedure setStencilStoreActionOptions (storeActionOptions: MTLStoreActionOptions); message 'setStencilStoreActionOptions:'; { available in macos 10.13, ios 11.0 }
    procedure drawPrimitives_vertexStart_vertexCount_instanceCount (primitiveType: MTLPrimitiveType; vertexStart: NSUInteger; vertexCount: NSUInteger; instanceCount: NSUInteger); message 'drawPrimitives:vertexStart:vertexCount:instanceCount:';
    procedure drawPrimitives_vertexStart_vertexCount (primitiveType: MTLPrimitiveType; vertexStart: NSUInteger; vertexCount: NSUInteger); message 'drawPrimitives:vertexStart:vertexCount:';
    procedure drawIndexedPrimitives_indexCount_indexType_indexBuffer_indexBufferOffset_instanceCount (primitiveType: MTLPrimitiveType; indexCount: NSUInteger; indexType: MTLIndexType; indexBuffer: MTLBufferProtocol; indexBufferOffset: NSUInteger; instanceCount: NSUInteger); message 'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:';
    procedure drawIndexedPrimitives_indexCount_indexType_indexBuffer_indexBufferOffset (primitiveType: MTLPrimitiveType; indexCount: NSUInteger; indexType: MTLIndexType; indexBuffer: MTLBufferProtocol; indexBufferOffset: NSUInteger); message 'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:';
    procedure drawPrimitives_vertexStart_vertexCount_instanceCount_baseInstance (primitiveType: MTLPrimitiveType; vertexStart: NSUInteger; vertexCount: NSUInteger; instanceCount: NSUInteger; baseInstance: NSUInteger); message 'drawPrimitives:vertexStart:vertexCount:instanceCount:baseInstance:'; { available in macos 10.11, ios 9.0 }
    procedure drawIndexedPrimitives_indexCount_indexType_indexBuffer_indexBufferOffset_instanceCount_baseVertex_baseInstance (primitiveType: MTLPrimitiveType; indexCount: NSUInteger; indexType: MTLIndexType; indexBuffer: MTLBufferProtocol; indexBufferOffset: NSUInteger; instanceCount: NSUInteger; baseVertex: NSInteger; baseInstance: NSUInteger); message 'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:baseVertex:baseInstance:'; { available in macos 10.11, ios 9.0 }
    procedure drawPrimitives_indirectBuffer_indirectBufferOffset (primitiveType: MTLPrimitiveType; indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'drawPrimitives:indirectBuffer:indirectBufferOffset:'; { available in macos 10.11, ios 9.0 }
    procedure drawIndexedPrimitives_indexType_indexBuffer_indexBufferOffset_indirectBuffer_indirectBufferOffset (primitiveType: MTLPrimitiveType; indexType: MTLIndexType; indexBuffer: MTLBufferProtocol; indexBufferOffset: NSUInteger; indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'drawIndexedPrimitives:indexType:indexBuffer:indexBufferOffset:indirectBuffer:indirectBufferOffset:'; { available in macos 10.11, ios 9.0 }
    procedure textureBarrier; message 'textureBarrier'; { unavailable in ios }
    procedure updateFence_afterStages (fence: MTLFenceProtocol; stages: MTLRenderStages); message 'updateFence:afterStages:'; { available in macos 10.13, ios 10.0 }
    procedure waitForFence_beforeStages (fence: MTLFenceProtocol; stages: MTLRenderStages); message 'waitForFence:beforeStages:'; { available in macos 10.13, ios 10.0 }
    procedure setTessellationFactorBuffer_offset_instanceStride (buffer: MTLBufferProtocol; offset: NSUInteger; instanceStride: NSUInteger); message 'setTessellationFactorBuffer:offset:instanceStride:'; { available in macos 10.12, ios 10.0 }
    procedure setTessellationFactorScale (scale: single); message 'setTessellationFactorScale:'; { available in macos 10.12, ios 10.0 }
    procedure drawPatches_patchStart_patchCount_patchIndexBuffer_patchIndexBufferOffset_instanceCount_baseInstance (numberOfPatchControlPoints: NSUInteger; patchStart: NSUInteger; patchCount: NSUInteger; patchIndexBuffer: MTLBufferProtocol; patchIndexBufferOffset: NSUInteger; instanceCount: NSUInteger; baseInstance: NSUInteger); message 'drawPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:instanceCount:baseInstance:'; { available in macos 10.12, ios 10.0 }
    procedure drawPatches_patchIndexBuffer_patchIndexBufferOffset_indirectBuffer_indirectBufferOffset (numberOfPatchControlPoints: NSUInteger; patchIndexBuffer: MTLBufferProtocol; patchIndexBufferOffset: NSUInteger; indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'drawPatches:patchIndexBuffer:patchIndexBufferOffset:indirectBuffer:indirectBufferOffset:'; { unavailable in tvos } { available in macos 10.12, ios 12.0 }
    procedure drawIndexedPatches_patchStart_patchCount_patchIndexBuffer_patchIndexBufferOffset_controlPointIndexBuffer_controlPointIndexBufferOffset_instanceCount_baseInstance (numberOfPatchControlPoints: NSUInteger; patchStart: NSUInteger; patchCount: NSUInteger; patchIndexBuffer: MTLBufferProtocol; patchIndexBufferOffset: NSUInteger; controlPointIndexBuffer: MTLBufferProtocol; controlPointIndexBufferOffset: NSUInteger; instanceCount: NSUInteger; baseInstance: NSUInteger); message 'drawIndexedPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:controlPointIndexBuffer:controlPointIndexBufferOffset:instanceCount:baseInstance:'; { available in macos 10.12, ios 10.0 }
    procedure drawIndexedPatches_patchIndexBuffer_patchIndexBufferOffset_controlPointIndexBuffer_controlPointIndexBufferOffset_indirectBuffer_indirectBufferOffset (numberOfPatchControlPoints: NSUInteger; patchIndexBuffer: MTLBufferProtocol; patchIndexBufferOffset: NSUInteger; controlPointIndexBuffer: MTLBufferProtocol; controlPointIndexBufferOffset: NSUInteger; indirectBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'drawIndexedPatches:patchIndexBuffer:patchIndexBufferOffset:controlPointIndexBuffer:controlPointIndexBufferOffset:indirectBuffer:indirectBufferOffset:'; { unavailable in tvos } { available in macos 10.12, ios 12.0 }
    function tileWidth: NSUInteger; message 'tileWidth'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    function tileHeight: NSUInteger; message 'tileHeight'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileBytes_length_atIndex (bytes: pointer; length: NSUInteger; index: NSUInteger); message 'setTileBytes:length:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setTileBuffer:offset:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileBufferOffset_atIndex (offset: NSUInteger; index: NSUInteger); message 'setTileBufferOffset:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileBuffers_offsets_withRange (buffers: MTLBufferProtocolPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setTileBuffers:offsets:withRange:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setTileTexture:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileTextures_withRange (textures: MTLTextureProtocolPtr { variable size array of id }; range: NSRange); message 'setTileTextures:withRange:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setTileSamplerState:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileSamplerStates_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; range: NSRange); message 'setTileSamplerStates:withRange:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setTileSamplerState:lodMinClamp:lodMaxClamp:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setTileSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocolPtr { variable size array of id }; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setTileSamplerStates:lodMinClamps:lodMaxClamps:withRange:'; { unavailable in tvos } { available in ios 11.0, macos 11.0, macCatalyst 14.0 }
    procedure dispatchThreadsPerTile (threadsPerTile: MTLSize); message 'dispatchThreadsPerTile:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0 }
    procedure setThreadgroupMemoryLength_offset_atIndex (length: NSUInteger; offset: NSUInteger; index: NSUInteger); message 'setThreadgroupMemoryLength:offset:atIndex:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0 }
    procedure useResource_usage (resource: MTLResourceProtocol; usage: MTLResourceUsage); message 'useResource:usage:'; { available in macos 10.13, ios 11.0 }
    procedure useResources_count_usage (resources: MTLResourceProtocolPtr { variable size array of id }; count: NSUInteger; usage: MTLResourceUsage); message 'useResources:count:usage:'; { available in macos 10.13, ios 11.0 }
    procedure useResource_usage_stages (resource: MTLResourceProtocol; usage: MTLResourceUsage; stages: MTLRenderStages); message 'useResource:usage:stages:'; { available in macos 10.15, ios 13.0 }
    procedure useResources_count_usage_stages (resources: MTLResourceProtocolPtr { variable size array of id }; count: NSUInteger; usage: MTLResourceUsage; stages: MTLRenderStages); message 'useResources:count:usage:stages:'; { available in macos 10.15, ios 13.0 }
    procedure useHeap (heap: MTLHeapProtocol); message 'useHeap:'; { available in macos 10.13, ios 11.0 }
    procedure useHeaps_count (heaps: MTLHeapProtocolPtr { variable size array of id }; count: NSUInteger); message 'useHeaps:count:'; { available in macos 10.13, ios 11.0 }
    procedure useHeap_stages (heap: MTLHeapProtocol; stages: MTLRenderStages); message 'useHeap:stages:'; { available in macos 10.15, ios 13.0 }
    procedure useHeaps_count_stages (heaps: MTLHeapProtocolPtr { variable size array of id }; count: NSUInteger; stages: MTLRenderStages); message 'useHeaps:count:stages:'; { available in macos 10.15, ios 13.0 }
    procedure executeCommandsInBuffer_withRange (indirectCommandBuffer: MTLIndirectCommandBufferProtocol; executionRange: NSRange); message 'executeCommandsInBuffer:withRange:'; { available in macos 10.14, ios 12.0 }
    procedure executeCommandsInBuffer_indirectBuffer_indirectBufferOffset (indirectCommandbuffer: MTLIndirectCommandBufferProtocol; indirectRangeBuffer: MTLBufferProtocol; indirectBufferOffset: NSUInteger); message 'executeCommandsInBuffer:indirectBuffer:indirectBufferOffset:'; { available in macos 10.14, macCatalyst 13.0, ios 13.0 }
    procedure memoryBarrierWithScope_afterStages_beforeStages (scope: MTLBarrierScope; after: MTLRenderStages; before: MTLRenderStages); message 'memoryBarrierWithScope:afterStages:beforeStages:'; { unavailable in ios } { available in macos 10.14, macCatalyst 13.0 }
    procedure memoryBarrierWithResources_count_afterStages_beforeStages (resources: MTLResourceProtocolPtr { variable size array of id }; count: NSUInteger; after: MTLRenderStages; before: MTLRenderStages); message 'memoryBarrierWithResources:count:afterStages:beforeStages:'; { unavailable in ios } { available in macos 10.14, macCatalyst 13.0 }
    procedure sampleCountersInBuffer_atSampleIndex_withBarrier (sampleBuffer: MTLCounterSampleBufferProtocol; sampleIndex: NSUInteger; barrier: objcbool); message 'sampleCountersInBuffer:atSampleIndex:withBarrier:'; { available in macos 10.15, ios 14.0 }
  end;
{$endif}

