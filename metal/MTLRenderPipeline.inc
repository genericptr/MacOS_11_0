{ Parsed from Metal.framework MTLRenderPipeline.h }

{$ifdef TYPES}
type
  MTLRenderPipelineColorAttachmentDescriptorPtr = ^MTLRenderPipelineColorAttachmentDescriptor;
  MTLRenderPipelineReflectionPtr = ^MTLRenderPipelineReflection;
  MTLRenderPipelineDescriptorPtr = ^MTLRenderPipelineDescriptor;
  MTLRenderPipelineColorAttachmentDescriptorArrayPtr = ^MTLRenderPipelineColorAttachmentDescriptorArray;
  MTLTileRenderPipelineColorAttachmentDescriptorPtr = ^MTLTileRenderPipelineColorAttachmentDescriptor;
  MTLTileRenderPipelineColorAttachmentDescriptorArrayPtr = ^MTLTileRenderPipelineColorAttachmentDescriptorArray;
  MTLTileRenderPipelineDescriptorPtr = ^MTLTileRenderPipelineDescriptor;
  MTLRenderPipelineStateProtocolPtr = ^MTLRenderPipelineStateProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLBlendFactor = NSUInteger;
  MTLBlendFactorPtr = ^MTLBlendFactor;

const
  MTLBlendFactorZero = 0;
  MTLBlendFactorOne = 1;
  MTLBlendFactorSourceColor = 2;
  MTLBlendFactorOneMinusSourceColor = 3;
  MTLBlendFactorSourceAlpha = 4;
  MTLBlendFactorOneMinusSourceAlpha = 5;
  MTLBlendFactorDestinationColor = 6;
  MTLBlendFactorOneMinusDestinationColor = 7;
  MTLBlendFactorDestinationAlpha = 8;
  MTLBlendFactorOneMinusDestinationAlpha = 9;
  MTLBlendFactorSourceAlphaSaturated = 10;
  MTLBlendFactorBlendColor = 11;
  MTLBlendFactorOneMinusBlendColor = 12;
  MTLBlendFactorBlendAlpha = 13;
  MTLBlendFactorOneMinusBlendAlpha = 14;
  MTLBlendFactorSource1Color = 15 { available in macos 10.12, ios 10.11 };
  MTLBlendFactorOneMinusSource1Color = 16 { available in macos 10.12, ios 10.11 };
  MTLBlendFactorSource1Alpha = 17 { available in macos 10.12, ios 10.11 };
  MTLBlendFactorOneMinusSource1Alpha = 18 { available in macos 10.12, ios 10.11 };

type
  MTLBlendOperation = NSUInteger;
  MTLBlendOperationPtr = ^MTLBlendOperation;

const
  MTLBlendOperationAdd = 0;
  MTLBlendOperationSubtract = 1;
  MTLBlendOperationReverseSubtract = 2;
  MTLBlendOperationMin = 3;
  MTLBlendOperationMax = 4;

type
  MTLColorWriteMask = NSUInteger;
  MTLColorWriteMaskPtr = ^MTLColorWriteMask;

const
  MTLColorWriteMaskNone = 0;
  MTLColorWriteMaskRed = $1 shl 3;
  MTLColorWriteMaskGreen = $1 shl 2;
  MTLColorWriteMaskBlue = $1 shl 1;
  MTLColorWriteMaskAlpha = $1 shl 0;
  MTLColorWriteMaskAll = $f;

type
  MTLPrimitiveTopologyClass = NSUInteger;
  MTLPrimitiveTopologyClassPtr = ^MTLPrimitiveTopologyClass;

const
  MTLPrimitiveTopologyClassUnspecified = 0;
  MTLPrimitiveTopologyClassPoint = 1;
  MTLPrimitiveTopologyClassLine = 2;
  MTLPrimitiveTopologyClassTriangle = 3;

type
  MTLTessellationPartitionMode = NSUInteger;
  MTLTessellationPartitionModePtr = ^MTLTessellationPartitionMode;

const
  MTLTessellationPartitionModePow2 = 0;
  MTLTessellationPartitionModeInteger = 1;
  MTLTessellationPartitionModeFractionalOdd = 2;
  MTLTessellationPartitionModeFractionalEven = 3;

type
  MTLTessellationFactorStepFunction = NSUInteger;
  MTLTessellationFactorStepFunctionPtr = ^MTLTessellationFactorStepFunction;

const
  MTLTessellationFactorStepFunctionConstant = 0;
  MTLTessellationFactorStepFunctionPerPatch = 1;
  MTLTessellationFactorStepFunctionPerInstance = 2;
  MTLTessellationFactorStepFunctionPerPatchAndPerInstance = 3;

type
  MTLTessellationFactorFormat = NSUInteger;
  MTLTessellationFactorFormatPtr = ^MTLTessellationFactorFormat;

const
  MTLTessellationFactorFormatHalf = 0;

type
  MTLTessellationControlPointIndexType = NSUInteger;
  MTLTessellationControlPointIndexTypePtr = ^MTLTessellationControlPointIndexType;

const
  MTLTessellationControlPointIndexTypeNone = 0;
  MTLTessellationControlPointIndexTypeUInt16 = 1;
  MTLTessellationControlPointIndexTypeUInt32 = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLRenderPipelineColorAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setBlendingEnabled(newValue: objcbool); message 'setBlendingEnabled:';
    function isBlendingEnabled: objcbool; message 'isBlendingEnabled';
    procedure setSourceRGBBlendFactor(newValue: MTLBlendFactor); message 'setSourceRGBBlendFactor:';
    function sourceRGBBlendFactor: MTLBlendFactor; message 'sourceRGBBlendFactor';
    procedure setDestinationRGBBlendFactor(newValue: MTLBlendFactor); message 'setDestinationRGBBlendFactor:';
    function destinationRGBBlendFactor: MTLBlendFactor; message 'destinationRGBBlendFactor';
    procedure setRgbBlendOperation(newValue: MTLBlendOperation); message 'setRgbBlendOperation:';
    function rgbBlendOperation: MTLBlendOperation; message 'rgbBlendOperation';
    procedure setSourceAlphaBlendFactor(newValue: MTLBlendFactor); message 'setSourceAlphaBlendFactor:';
    function sourceAlphaBlendFactor: MTLBlendFactor; message 'sourceAlphaBlendFactor';
    procedure setDestinationAlphaBlendFactor(newValue: MTLBlendFactor); message 'setDestinationAlphaBlendFactor:';
    function destinationAlphaBlendFactor: MTLBlendFactor; message 'destinationAlphaBlendFactor';
    procedure setAlphaBlendOperation(newValue: MTLBlendOperation); message 'setAlphaBlendOperation:';
    function alphaBlendOperation: MTLBlendOperation; message 'alphaBlendOperation';
    procedure setWriteMask(newValue: MTLColorWriteMask); message 'setWriteMask:';
    function writeMask: MTLColorWriteMask; message 'writeMask';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLRenderPipelineReflection = objcclass external (NSObject)
  public
    function vertexArguments: NSArray; message 'vertexArguments';
    function fragmentArguments: NSArray; message 'fragmentArguments';
    function tileArguments: NSArray; message 'tileArguments'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
  end;

type
  MTLRenderPipelineDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setVertexFunction(newValue: id); message 'setVertexFunction:';
    function vertexFunction: id; message 'vertexFunction';
    procedure setFragmentFunction(newValue: id); message 'setFragmentFunction:';
    function fragmentFunction: id; message 'fragmentFunction';
    procedure setVertexDescriptor(newValue: MTLVertexDescriptor); message 'setVertexDescriptor:';
    function vertexDescriptor: MTLVertexDescriptor; message 'vertexDescriptor';
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:';
    function sampleCount: NSUInteger; message 'sampleCount';
    procedure setRasterSampleCount(newValue: NSUInteger); message 'setRasterSampleCount:';
    function rasterSampleCount: NSUInteger; message 'rasterSampleCount';
    procedure setAlphaToCoverageEnabled(newValue: objcbool); message 'setAlphaToCoverageEnabled:';
    function isAlphaToCoverageEnabled: objcbool; message 'isAlphaToCoverageEnabled';
    procedure setAlphaToOneEnabled(newValue: objcbool); message 'setAlphaToOneEnabled:';
    function isAlphaToOneEnabled: objcbool; message 'isAlphaToOneEnabled';
    procedure setRasterizationEnabled(newValue: objcbool); message 'setRasterizationEnabled:';
    function isRasterizationEnabled: objcbool; message 'isRasterizationEnabled';
    procedure setMaxVertexAmplificationCount(newValue: NSUInteger); message 'setMaxVertexAmplificationCount:'; { available in macos 10.15.4, ios 13.0, macCatalyst 13.4 }
    function maxVertexAmplificationCount: NSUInteger; message 'maxVertexAmplificationCount'; { available in macos 10.15.4, ios 13.0, macCatalyst 13.4 }
    function colorAttachments: MTLRenderPipelineColorAttachmentDescriptorArray; message 'colorAttachments';
    procedure setDepthAttachmentPixelFormat(newValue: MTLPixelFormat); message 'setDepthAttachmentPixelFormat:';
    function depthAttachmentPixelFormat: MTLPixelFormat; message 'depthAttachmentPixelFormat';
    procedure setStencilAttachmentPixelFormat(newValue: MTLPixelFormat); message 'setStencilAttachmentPixelFormat:';
    function stencilAttachmentPixelFormat: MTLPixelFormat; message 'stencilAttachmentPixelFormat';
    procedure setInputPrimitiveTopology(newValue: MTLPrimitiveTopologyClass); message 'setInputPrimitiveTopology:'; { unavailable in tvos } { available in macos 10.11, ios 12.0 }
    function inputPrimitiveTopology: MTLPrimitiveTopologyClass; message 'inputPrimitiveTopology'; { unavailable in tvos } { available in macos 10.11, ios 12.0 }
    procedure setTessellationPartitionMode(newValue: MTLTessellationPartitionMode); message 'setTessellationPartitionMode:'; { available in macos 10.12, ios 10.0 }
    function tessellationPartitionMode: MTLTessellationPartitionMode; message 'tessellationPartitionMode'; { available in macos 10.12, ios 10.0 }
    procedure setMaxTessellationFactor(newValue: NSUInteger); message 'setMaxTessellationFactor:'; { available in macos 10.12, ios 10.0 }
    function maxTessellationFactor: NSUInteger; message 'maxTessellationFactor'; { available in macos 10.12, ios 10.0 }
    procedure setTessellationFactorScaleEnabled(newValue: objcbool); message 'setTessellationFactorScaleEnabled:'; { available in macos 10.12, ios 10.0 }
    function isTessellationFactorScaleEnabled: objcbool; message 'isTessellationFactorScaleEnabled'; { available in macos 10.12, ios 10.0 }
    procedure setTessellationFactorFormat(newValue: MTLTessellationFactorFormat); message 'setTessellationFactorFormat:'; { available in macos 10.12, ios 10.0 }
    function tessellationFactorFormat: MTLTessellationFactorFormat; message 'tessellationFactorFormat'; { available in macos 10.12, ios 10.0 }
    procedure setTessellationControlPointIndexType(newValue: MTLTessellationControlPointIndexType); message 'setTessellationControlPointIndexType:'; { available in macos 10.12, ios 10.0 }
    function tessellationControlPointIndexType: MTLTessellationControlPointIndexType; message 'tessellationControlPointIndexType'; { available in macos 10.12, ios 10.0 }
    procedure setTessellationFactorStepFunction(newValue: MTLTessellationFactorStepFunction); message 'setTessellationFactorStepFunction:'; { available in macos 10.12, ios 10.0 }
    function tessellationFactorStepFunction: MTLTessellationFactorStepFunction; message 'tessellationFactorStepFunction'; { available in macos 10.12, ios 10.0 }
    procedure setTessellationOutputWindingOrder(newValue: MTLWinding); message 'setTessellationOutputWindingOrder:'; { available in macos 10.12, ios 10.0 }
    function tessellationOutputWindingOrder: MTLWinding; message 'tessellationOutputWindingOrder'; { available in macos 10.12, ios 10.0 }
    function vertexBuffers: MTLPipelineBufferDescriptorArray; message 'vertexBuffers'; { available in macos 10.13, ios 11.0 }
    function fragmentBuffers: MTLPipelineBufferDescriptorArray; message 'fragmentBuffers'; { available in macos 10.13, ios 11.0 }
    procedure setSupportIndirectCommandBuffers(newValue: objcbool); message 'setSupportIndirectCommandBuffers:'; { available in macos 10.14, ios 12.0 }
    function supportIndirectCommandBuffers: objcbool; message 'supportIndirectCommandBuffers'; { available in macos 10.14, ios 12.0 }
    procedure setBinaryArchives(newValue: NSArray); message 'setBinaryArchives:'; { available in macos 11.0, ios 14.0 }
    function binaryArchives: NSArray; message 'binaryArchives'; { available in macos 11.0, ios 14.0 }
    procedure reset; message 'reset';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLRenderPipelineStateProtocol = objcprotocol external name 'MTLRenderPipelineState' (NSObjectProtocol)
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    function threadgroupSizeMatchesTileSize: objcbool; message 'threadgroupSizeMatchesTileSize'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    function imageblockSampleLength: NSUInteger; message 'imageblockSampleLength'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    function imageblockMemoryLengthForDimensions (imageblockDimensions: MTLSize): NSUInteger; message 'imageblockMemoryLengthForDimensions:'; { unavailable in tvos } { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    function supportIndirectCommandBuffers: objcbool; message 'supportIndirectCommandBuffers'; { available in macos 10.14, ios 12.0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  MTLRenderPipelineColorAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLRenderPipelineColorAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLRenderPipelineColorAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLTileRenderPipelineColorAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLTileRenderPipelineColorAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLTileRenderPipelineColorAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLTileRenderPipelineColorAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLTileRenderPipelineDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setTileFunction(newValue: id); message 'setTileFunction:';
    function tileFunction: id; message 'tileFunction';
    procedure setRasterSampleCount(newValue: NSUInteger); message 'setRasterSampleCount:';
    function rasterSampleCount: NSUInteger; message 'rasterSampleCount';
    function colorAttachments: MTLTileRenderPipelineColorAttachmentDescriptorArray; message 'colorAttachments';
    procedure setThreadgroupSizeMatchesTileSize(newValue: objcbool); message 'setThreadgroupSizeMatchesTileSize:';
    function threadgroupSizeMatchesTileSize: objcbool; message 'threadgroupSizeMatchesTileSize';
    function tileBuffers: MTLPipelineBufferDescriptorArray; message 'tileBuffers'; { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure setMaxTotalThreadsPerThreadgroup(newValue: NSUInteger); message 'setMaxTotalThreadsPerThreadgroup:'; { available in macos 10.15, ios 12.0 }
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup'; { available in macos 10.15, ios 12.0 }
    procedure setBinaryArchives(newValue: NSArray); message 'setBinaryArchives:'; { available in macos 11.0, ios 14.0 }
    function binaryArchives: NSArray; message 'binaryArchives'; { available in macos 11.0, ios 14.0 }
    procedure reset; message 'reset';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

