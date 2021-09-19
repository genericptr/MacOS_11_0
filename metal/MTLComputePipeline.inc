{ Parsed from Metal.framework MTLComputePipeline.h }

{$ifdef TYPES}
type
  MTLComputePipelineReflectionPtr = ^MTLComputePipelineReflection;
  MTLComputePipelineDescriptorPtr = ^MTLComputePipelineDescriptor;
  MTLComputePipelineStateProtocolPtr = ^MTLComputePipelineStateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTLComputePipelineReflection = objcclass external (NSObject)
  public
    function arguments: NSArray; message 'arguments';
  end;

type
  MTLComputePipelineDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setComputeFunction(newValue: MTLFunctionProtocol); message 'setComputeFunction:';
    function computeFunction: MTLFunctionProtocol; message 'computeFunction';
    procedure setThreadGroupSizeIsMultipleOfThreadExecutionWidth(newValue: objcbool); message 'setThreadGroupSizeIsMultipleOfThreadExecutionWidth:';
    function threadGroupSizeIsMultipleOfThreadExecutionWidth: objcbool; message 'threadGroupSizeIsMultipleOfThreadExecutionWidth';
    procedure setMaxTotalThreadsPerThreadgroup(newValue: NSUInteger); message 'setMaxTotalThreadsPerThreadgroup:'; { available in macos 10.14, ios 12.0 }
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup'; { available in macos 10.14, ios 12.0 }
    procedure setStageInputDescriptor(newValue: MTLStageInputOutputDescriptor); message 'setStageInputDescriptor:'; { available in macos 10.12, ios 10.0 }
    function stageInputDescriptor: MTLStageInputOutputDescriptor; message 'stageInputDescriptor'; { available in macos 10.12, ios 10.0 }
    function buffers: MTLPipelineBufferDescriptorArray; message 'buffers'; { available in macos 10.13, ios 11.0 }
    procedure setSupportIndirectCommandBuffers(newValue: objcbool); message 'setSupportIndirectCommandBuffers:'; { available in ios 13.0,macos 11.0 }
    function supportIndirectCommandBuffers: objcbool; message 'supportIndirectCommandBuffers'; { available in ios 13.0,macos 11.0 }
    procedure setInsertLibraries(newValue: NSArray); message 'setInsertLibraries:'; { available in macos 11.0, ios 14.0 }
    function insertLibraries: NSArray; message 'insertLibraries'; { available in macos 11.0, ios 14.0 }
    procedure setBinaryArchives(newValue: NSArray); message 'setBinaryArchives:'; { available in macos 11.0, ios 14.0 }
    function binaryArchives: NSArray; message 'binaryArchives'; { available in macos 11.0, ios 14.0 }
    procedure reset; message 'reset';
    procedure setLinkedFunctions(newValue: MTLLinkedFunctions); message 'setLinkedFunctions:'; { available in macos 11.0, ios 14.0 }
    function linkedFunctions: MTLLinkedFunctions; message 'linkedFunctions'; { available in macos 11.0, ios 14.0 }
    procedure setSupportAddingBinaryFunctions(newValue: objcbool); message 'setSupportAddingBinaryFunctions:'; { available in macos 11.0, ios 14.0 }
    function supportAddingBinaryFunctions: objcbool; message 'supportAddingBinaryFunctions'; { available in macos 11.0, ios 14.0 }
    procedure setMaxCallStackDepth(newValue: NSUInteger); message 'setMaxCallStackDepth:'; { available in macos 11.0, ios 14.0 }
    function maxCallStackDepth: NSUInteger; message 'maxCallStackDepth'; { available in macos 11.0, ios 14.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLComputePipelineStateProtocol = objcprotocol external name 'MTLComputePipelineState' (NSObjectProtocol)
    function label_: NSString; message 'label'; { available in macos 10.13, ios 11.0 }
    function device: id; message 'device';
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup';
    function threadExecutionWidth: NSUInteger; message 'threadExecutionWidth';
    function staticThreadgroupMemoryLength: NSUInteger; message 'staticThreadgroupMemoryLength'; { available in macos 10.13, ios 11.0 }
    function imageblockMemoryLengthForDimensions (imageblockDimensions: MTLSize): NSUInteger; message 'imageblockMemoryLengthForDimensions:'; { unavailable in tvos } { available in ios 11.0, macos 11.0, macCatalyst 14.0 }
    function supportIndirectCommandBuffers: objcbool; message 'supportIndirectCommandBuffers'; { available in ios 13.0,macos 11.0 }
    function functionHandleWithFunction (function_: id): id; message 'functionHandleWithFunction:'; { available in macos 11.0, ios 14.0 }
    function newComputePipelineStateWithAdditionalBinaryFunctions_error (functions: NSArray; error: NSErrorPtr): id; message 'newComputePipelineStateWithAdditionalBinaryFunctions:error:'; { available in macos 11.0, ios 14.0 }
    function newVisibleFunctionTableWithDescriptor (descriptor: MTLVisibleFunctionTableDescriptor): id; message 'newVisibleFunctionTableWithDescriptor:'; { available in macos 11.0, ios 14.0 }
    function newIntersectionFunctionTableWithDescriptor (descriptor: MTLIntersectionFunctionTableDescriptor): id; message 'newIntersectionFunctionTableWithDescriptor:'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

