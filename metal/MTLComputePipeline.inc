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
    procedure setMaxTotalThreadsPerThreadgroup(newValue: NSUInteger); message 'setMaxTotalThreadsPerThreadgroup:'; { available in macos , ios  }
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup'; { available in macos , ios  }
    procedure setStageInputDescriptor(newValue: MTLStageInputOutputDescriptor); message 'setStageInputDescriptor:'; { available in macos , ios  }
    function stageInputDescriptor: MTLStageInputOutputDescriptor; message 'stageInputDescriptor'; { available in macos , ios  }
    function buffers: MTLPipelineBufferDescriptorArray; message 'buffers'; { available in macos , ios  }
    procedure setSupportIndirectCommandBuffers(newValue: objcbool); message 'setSupportIndirectCommandBuffers:'; { available in ios ,macos  }
    function supportIndirectCommandBuffers: objcbool; message 'supportIndirectCommandBuffers'; { available in ios ,macos  }
    procedure setInsertLibraries(newValue: NSArray); message 'setInsertLibraries:'; { available in macos , ios  }
    function insertLibraries: NSArray; message 'insertLibraries'; { available in macos , ios  }
    procedure setBinaryArchives(newValue: NSArray); message 'setBinaryArchives:'; { available in macos , ios  }
    function binaryArchives: NSArray; message 'binaryArchives'; { available in macos , ios  }
    procedure reset; message 'reset';
    procedure setLinkedFunctions(newValue: MTLLinkedFunctions); message 'setLinkedFunctions:'; { available in macos , ios  }
    function linkedFunctions: MTLLinkedFunctions; message 'linkedFunctions'; { available in macos , ios  }
    procedure setSupportAddingBinaryFunctions(newValue: objcbool); message 'setSupportAddingBinaryFunctions:'; { available in macos , ios  }
    function supportAddingBinaryFunctions: objcbool; message 'supportAddingBinaryFunctions'; { available in macos , ios  }
    procedure setMaxCallStackDepth(newValue: NSUInteger); message 'setMaxCallStackDepth:'; { available in macos , ios  }
    function maxCallStackDepth: NSUInteger; message 'maxCallStackDepth'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLComputePipelineStateProtocol = objcprotocol external name 'MTLComputePipelineState' (NSObjectProtocol)
    function label_: NSString; message 'label'; { available in macos , ios  }
    function device: id; message 'device';
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup';
    function threadExecutionWidth: NSUInteger; message 'threadExecutionWidth';
    function staticThreadgroupMemoryLength: NSUInteger; message 'staticThreadgroupMemoryLength'; { available in macos , ios  }
    function imageblockMemoryLengthForDimensions (imageblockDimensions: MTLSize): NSUInteger; message 'imageblockMemoryLengthForDimensions:'; { unavailable in tvos }
    function supportIndirectCommandBuffers: objcbool; message 'supportIndirectCommandBuffers'; { available in ios ,macos  }
    function functionHandleWithFunction (function_: id): id; message 'functionHandleWithFunction:'; { available in macos , ios  }
    function newComputePipelineStateWithAdditionalBinaryFunctions_error (functions: NSArray; error: NSErrorPtr): id; message 'newComputePipelineStateWithAdditionalBinaryFunctions:error:'; { available in macos , ios  }
    function newVisibleFunctionTableWithDescriptor (descriptor: MTLVisibleFunctionTableDescriptor): id; message 'newVisibleFunctionTableWithDescriptor:'; { available in macos , ios  }
    function newIntersectionFunctionTableWithDescriptor (descriptor: MTLIntersectionFunctionTableDescriptor): id; message 'newIntersectionFunctionTableWithDescriptor:'; { available in macos , ios  }
  end;
{$endif}

