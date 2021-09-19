{ Parsed from Metal.framework MTLDevice.h }

{ Types from MTLDeviceProtocol }
{$ifdef TYPES}
type
  MTLTimestamp = NSUInteger;
  MTLTimestampPtr = ^MTLTimestamp;
{$endif}


{$ifdef CALLBACKS}
type
  MTLDeviceNewBufferWithBytesNoCopyCallback = reference to procedure (pointer_: pointer; length: NSUInteger); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MTLArgumentDescriptorPtr = ^MTLArgumentDescriptor;
  MTLDeviceProtocolPtr = ^MTLDeviceProtocol;
{$endif}

{$ifdef FUNCTIONS}
function MTLCreateSystemDefaultDevice: id; cdecl; external; { available in macos , ios  }
function MTLCopyAllDevices: NSArray; cdecl; external; { unavailable in ios }
{$endif}

{$ifdef TYPES}
type
  MTLDeviceNotificationName = NSString { unavailable in ios };
  MTLDeviceNotificationNamePtr = ^MTLDeviceNotificationName { unavailable in ios };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLDeviceWasAddedNotification: MTLDeviceNotificationName { unavailable in ios }; cvar; external;
  MTLDeviceRemovalRequestedNotification: MTLDeviceNotificationName { unavailable in ios } { available in macos 10.13 }; cvar; external;
  MTLDeviceWasRemovedNotification: MTLDeviceNotificationName { unavailable in ios } { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLDeviceNotificationHandler = reference to procedure (device: id; notifyName: MTLDeviceNotificationName); cblock; cdecl { unavailable in ios } { available in macos 10.13 };
{$endif}

{$ifdef FUNCTIONS}
function MTLCopyAllDevicesWithObserver(observer: idPtr; handler: MTLDeviceNotificationHandler): NSArray; cdecl; external; { unavailable in ios }
function MTLRemoveDeviceObserver(observer: id): pointer; cdecl; external; { unavailable in ios }
{$endif}

{$ifdef TYPES}
type
  MTLFeatureSet = NSUInteger;
  MTLFeatureSetPtr = ^MTLFeatureSet;

const
  MTLFeatureSet_iOS_GPUFamily1_v1 = 0 { unavailable in macos, macCatalyst, tvos };
  MTLFeatureSet_iOS_GPUFamily2_v1 = 1 { unavailable in macos, macCatalyst, tvos };
  MTLFeatureSet_iOS_GPUFamily1_v2 = 2 { unavailable in macos, macCatalyst, tvos } { available in ios 8.0 };
  MTLFeatureSet_iOS_GPUFamily2_v2 = 3 { unavailable in macos, macCatalyst, tvos } { available in ios 8.0 };
  MTLFeatureSet_iOS_GPUFamily3_v1 = 4 { unavailable in macos, macCatalyst, tvos } { available in ios 9.0 };
  MTLFeatureSet_iOS_GPUFamily1_v3 = 5 { unavailable in macos, macCatalyst, tvos } { available in ios 9.0 };
  MTLFeatureSet_iOS_GPUFamily2_v3 = 6 { unavailable in macos, macCatalyst, tvos } { available in ios 9.0 };
  MTLFeatureSet_iOS_GPUFamily3_v2 = 7 { unavailable in macos, macCatalyst, tvos } { available in ios 10.0 };
  MTLFeatureSet_iOS_GPUFamily1_v4 = 8 { unavailable in macos, macCatalyst, tvos } { available in ios 10.0 };
  MTLFeatureSet_iOS_GPUFamily2_v4 = 9 { unavailable in macos, macCatalyst, tvos } { available in ios 10.0 };
  MTLFeatureSet_iOS_GPUFamily3_v3 = 10 { unavailable in macos, macCatalyst, tvos } { available in ios 11.0 };
  MTLFeatureSet_iOS_GPUFamily4_v1 = 11 { unavailable in macos, macCatalyst, tvos } { available in ios 11.0 };
  MTLFeatureSet_iOS_GPUFamily1_v5 = 12 { unavailable in macos, macCatalyst, tvos } { available in ios 11.0 };
  MTLFeatureSet_iOS_GPUFamily2_v5 = 13 { unavailable in macos, macCatalyst, tvos } { available in ios 11.0 };
  MTLFeatureSet_iOS_GPUFamily3_v4 = 14 { unavailable in macos, macCatalyst, tvos } { available in ios 12.0 };
  MTLFeatureSet_iOS_GPUFamily4_v2 = 15 { unavailable in macos, macCatalyst, tvos } { available in ios 12.0 };
  MTLFeatureSet_iOS_GPUFamily5_v1 = 16 { unavailable in macos, macCatalyst, tvos } { available in ios 12.0 };
  MTLFeatureSet_macOS_GPUFamily1_v1 = 10000 { unavailable in macos, macCatalyst, tvos } { available in ios 12.0 };
  MTLFeatureSet_OSX_GPUFamily1_v1 = MTLFeatureSet_macOS_GPUFamily1_v1 { unavailable in macos, macCatalyst, tvos } { available in ios 12.0 };
  MTLFeatureSet_macOS_GPUFamily1_v2 = 10001 { unavailable in ios } { unavailable in macCatalyst };
  MTLFeatureSet_OSX_GPUFamily1_v2 = MTLFeatureSet_macOS_GPUFamily1_v2 { unavailable in ios } { available in macos 10.11 };
  MTLFeatureSet_macOS_ReadWriteTextureTier2 = 10002 { unavailable in ios } { unavailable in macCatalyst };
  MTLFeatureSet_OSX_ReadWriteTextureTier2 = MTLFeatureSet_macOS_ReadWriteTextureTier2 { unavailable in ios } { available in macos 10.12 };
  MTLFeatureSet_macOS_GPUFamily1_v3 = 10003 { unavailable in ios } { available in macos 10.12 };
  MTLFeatureSet_macOS_GPUFamily1_v4 = 10004 { unavailable in ios } { available in macos 10.12 };
  MTLFeatureSet_macOS_GPUFamily2_v1 = 10005 { unavailable in ios } { unavailable in macCatalyst };
  MTLFeatureSet_tvOS_GPUFamily1_v1 = 30000 { unavailable in ios } { unavailable in macCatalyst };
  MTLFeatureSet_tvOS_GPUFamily1_v2 = 30001 { unavailable in ios } { unavailable in macCatalyst };
  MTLFeatureSet_tvOS_GPUFamily1_v3 = 30002 { unavailable in macos, ios } { available in tvos 9.0 };
  MTLFeatureSet_tvOS_GPUFamily2_v1 = 30003 { unavailable in macos, ios } { available in tvos 9.0 };
  MTLFeatureSet_tvOS_GPUFamily1_v4 = 30004 { unavailable in macos, ios } { available in tvos 10.0 };
  MTLFeatureSet_tvOS_GPUFamily2_v2 = 30005 { unavailable in macos, ios } { available in tvos 11.0 };

type
  MTLGPUFamily = NSInteger;
  MTLGPUFamilyPtr = ^MTLGPUFamily;

const
  MTLGPUFamilyApple1 = 1001;
  MTLGPUFamilyApple2 = 1002;
  MTLGPUFamilyApple3 = 1003;
  MTLGPUFamilyApple4 = 1004;
  MTLGPUFamilyApple5 = 1005;
  MTLGPUFamilyApple6 = 1006;
  MTLGPUFamilyApple7 = 1007;
  MTLGPUFamilyMac1 = 2001;
  MTLGPUFamilyMac2 = 2002;
  MTLGPUFamilyCommon1 = 3001;
  MTLGPUFamilyCommon2 = 3002;
  MTLGPUFamilyCommon3 = 3003;
  MTLGPUFamilyMacCatalyst1 = 4001;
  MTLGPUFamilyMacCatalyst2 = 4002;

type
  MTLDeviceLocation = NSUInteger;
  MTLDeviceLocationPtr = ^MTLDeviceLocation;

const
  MTLDeviceLocationBuiltIn = 0;
  MTLDeviceLocationSlot = 1;
  MTLDeviceLocationExternal = 2;
  MTLDeviceLocationUnspecified = NSUIntegerMax;

type
  MTLPipelineOption = NSUInteger;
  MTLPipelineOptionPtr = ^MTLPipelineOption;

const
  MTLPipelineOptionNone = 0;
  MTLPipelineOptionArgumentInfo = 1 shl 0;
  MTLPipelineOptionBufferTypeInfo = 1 shl 1;
  MTLPipelineOptionFailOnBinaryArchiveMiss = 1 shl 2 { available in macos , ios  };

type
  MTLReadWriteTextureTier = NSUInteger;
  MTLReadWriteTextureTierPtr = ^MTLReadWriteTextureTier;

const
  MTLReadWriteTextureTierNone = 0;
  MTLReadWriteTextureTier1 = 1;
  MTLReadWriteTextureTier2 = 2;

type
  MTLArgumentBuffersTier = NSUInteger;
  MTLArgumentBuffersTierPtr = ^MTLArgumentBuffersTier;

const
  MTLArgumentBuffersTier1 = 0;
  MTLArgumentBuffersTier2 = 1;

type
  MTLSparseTextureRegionAlignmentMode = NSUInteger;
  MTLSparseTextureRegionAlignmentModePtr = ^MTLSparseTextureRegionAlignmentMode;

const
  MTLSparseTextureRegionAlignmentModeOutward = 0;
  MTLSparseTextureRegionAlignmentModeInward = 1;

type
  MTLAccelerationStructureSizes = record
    accelerationStructureSize: NSUInteger;
    buildScratchBufferSize: NSUInteger;
    refitScratchBufferSize: NSUInteger;
  end;
type
  MTLAccelerationStructureSizesPtr = ^MTLAccelerationStructureSizes;

type
  MTLCounterSamplingPoint = NSUInteger;
  MTLCounterSamplingPointPtr = ^MTLCounterSamplingPoint;

const
  MTLCounterSamplingPointAtStageBoundary = 0;
  MTLCounterSamplingPointAtDrawBoundary = 1;
  MTLCounterSamplingPointAtDispatchBoundary = 2;
  MTLCounterSamplingPointAtTileDispatchBoundary = 3;
  MTLCounterSamplingPointAtBlitBoundary = 4;

type
  MTLSizeAndAlign = record
    size: NSUInteger;
    align: NSUInteger;
  end;
type
  MTLSizeAndAlignPtr = ^MTLSizeAndAlign;

type
  MTLAutoreleasedRenderPipelineReflection = MTLRenderPipelineReflection;
  MTLAutoreleasedRenderPipelineReflectionPtr = ^MTLAutoreleasedRenderPipelineReflection;
  MTLAutoreleasedComputePipelineReflection = MTLComputePipelineReflection;
  MTLAutoreleasedComputePipelineReflectionPtr = ^MTLAutoreleasedComputePipelineReflection;
  MTLNewLibraryCompletionHandler = reference to procedure (_library: id; error: NSError); cblock; cdecl;
  MTLNewRenderPipelineStateCompletionHandler = reference to procedure (renderPipelineState: id; error: NSError); cblock; cdecl;
  MTLNewRenderPipelineStateWithReflectionCompletionHandler = reference to procedure (renderPipelineState: id; reflection: MTLRenderPipelineReflection; error: NSError); cblock; cdecl;
  MTLNewComputePipelineStateCompletionHandler = reference to procedure (computePipelineState: id; error: NSError); cblock; cdecl;
  MTLNewComputePipelineStateWithReflectionCompletionHandler = reference to procedure (computePipelineState: id; reflection: MTLComputePipelineReflection; error: NSError); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  MTLArgumentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function argumentDescriptor: MTLArgumentDescriptor; message 'argumentDescriptor';
    procedure setDataType(newValue: MTLDataType); message 'setDataType:';
    function dataType: MTLDataType; message 'dataType';
    procedure setIndex(newValue: NSUInteger); message 'setIndex:';
    function index: NSUInteger; message 'index';
    procedure setArrayLength(newValue: NSUInteger); message 'setArrayLength:';
    function arrayLength: NSUInteger; message 'arrayLength';
    procedure setAccess(newValue: MTLArgumentAccess); message 'setAccess:';
    function access: MTLArgumentAccess; message 'access';
    procedure setTextureType(newValue: MTLTextureType); message 'setTextureType:';
    function textureType: MTLTextureType; message 'textureType';
    procedure setConstantBlockAlignment(newValue: NSUInteger); message 'setConstantBlockAlignment:';
    function constantBlockAlignment: NSUInteger; message 'constantBlockAlignment';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDeviceProtocol = objcprotocol external name 'MTLDevice' (NSObjectProtocol)
    function name: NSString; message 'name';
    function registryID: cuint64; message 'registryID'; { available in macos , ios  }
    function maxThreadsPerThreadgroup: MTLSize; message 'maxThreadsPerThreadgroup'; { available in macos , ios  }
    function isLowPower: objcbool; message 'isLowPower'; { unavailable in ios }
    function isHeadless: objcbool; message 'isHeadless'; { unavailable in ios }
    function isRemovable: objcbool; message 'isRemovable'; { unavailable in ios }
    function hasUnifiedMemory: objcbool; message 'hasUnifiedMemory'; { available in macos 10.11, macCatalyst 13.0 }
    function recommendedMaxWorkingSetSize: cuint64; message 'recommendedMaxWorkingSetSize'; { unavailable in ios } { available in macos 10.11, macCatalyst 13.0 }
    function location: MTLDeviceLocation; message 'location'; { unavailable in ios } { available in macos 10.13, macCatalyst 13.0 }
    function locationNumber: NSUInteger; message 'locationNumber'; { unavailable in ios }
    function maxTransferRate: cuint64; message 'maxTransferRate'; { unavailable in ios } { available in macos 10.12, macCatalyst 13.0 }
    function isDepth24Stencil8PixelFormatSupported: objcbool; message 'isDepth24Stencil8PixelFormatSupported'; { unavailable in ios } { available in macos 10.15 }
    function readWriteTextureSupport: MTLReadWriteTextureTier; message 'readWriteTextureSupport'; { available in macos 10.15 }
    function argumentBuffersSupport: MTLArgumentBuffersTier; message 'argumentBuffersSupport'; { available in macos 10.15 }
    function areRasterOrderGroupsSupported: objcbool; message 'areRasterOrderGroupsSupported'; { available in macos 10.11, macCatalyst 13.0 }
    function supports32BitFloatFiltering: objcbool; message 'supports32BitFloatFiltering'; { available in macos 10.13, ios 11.0 }
    function supports32BitMSAA: objcbool; message 'supports32BitMSAA'; { available in macos 10.13, ios 11.0 }
    function supportsQueryTextureLOD: objcbool; message 'supportsQueryTextureLOD'; { available in macos 10.13, ios 11.0 }
    function supportsBCTextureCompression: objcbool; message 'supportsBCTextureCompression'; { unavailable in ios }
    function supportsPullModelInterpolation: objcbool; message 'supportsPullModelInterpolation'; { available in macos 11.0, ios 14.0 }
    function areBarycentricCoordsSupported: objcbool; message 'areBarycentricCoordsSupported'; { unavailable in ios }
    function supportsShaderBarycentricCoordinates: objcbool; message 'supportsShaderBarycentricCoordinates'; { unavailable in ios } { available in macos 11.0 }
    function currentAllocatedSize: NSUInteger; message 'currentAllocatedSize'; { available in macos 11.0,ios 14.0 }
    function newCommandQueue: MTLCommandQueueProtocol; message 'newCommandQueue';
    function newCommandQueueWithMaxCommandBufferCount (maxCommandBufferCount: NSUInteger): id; message 'newCommandQueueWithMaxCommandBufferCount:';
    function heapTextureSizeAndAlignWithDescriptor (desc: MTLTextureDescriptor): MTLSizeAndAlign; message 'heapTextureSizeAndAlignWithDescriptor:'; { available in macos 10.13, ios 11.0 }
    function heapBufferSizeAndAlignWithLength_options (length: NSUInteger; options: MTLResourceOptions): MTLSizeAndAlign; message 'heapBufferSizeAndAlignWithLength:options:'; { available in macos , ios  }
    function newHeapWithDescriptor (descriptor: MTLHeapDescriptor): id; message 'newHeapWithDescriptor:'; { available in macos , ios  }
    function newBufferWithLength_options (length: NSUInteger; options: MTLResourceOptions): id; message 'newBufferWithLength:options:';
    function newBufferWithBytes_length_options (pointer_: pointer; length: NSUInteger; options: MTLResourceOptions): id; message 'newBufferWithBytes:length:options:';
    function newBufferWithBytesNoCopy_length_options_deallocator (pointer_: pointer; length: NSUInteger; options: MTLResourceOptions; deallocator: MTLDeviceNewBufferWithBytesNoCopyCallback): id; message 'newBufferWithBytesNoCopy:length:options:deallocator:';
    function newDepthStencilStateWithDescriptor (descriptor: MTLDepthStencilDescriptor): id; message 'newDepthStencilStateWithDescriptor:';
    function newTextureWithDescriptor (descriptor: MTLTextureDescriptor): id; message 'newTextureWithDescriptor:';
    function newTextureWithDescriptor_iosurface_plane (descriptor: MTLTextureDescriptor; iosurface: IOSurfaceRef; plane: NSUInteger): id; message 'newTextureWithDescriptor:iosurface:plane:'; { available in macos , ios  }
    function newSharedTextureWithDescriptor (descriptor: MTLTextureDescriptor): id; message 'newSharedTextureWithDescriptor:'; { available in macos , ios  }
    function newSharedTextureWithHandle (sharedHandle: MTLSharedTextureHandle): id; message 'newSharedTextureWithHandle:'; { available in macos , ios  }
    function newSamplerStateWithDescriptor (descriptor: MTLSamplerDescriptor): id; message 'newSamplerStateWithDescriptor:';
    function newDefaultLibrary: MTLLibraryProtocol; message 'newDefaultLibrary';
    function newDefaultLibraryWithBundle_error (bundle: NSBundle; error: NSErrorPtr): id; message 'newDefaultLibraryWithBundle:error:'; { available in macos 10.14, ios 13.0 }
    function newLibraryWithFile_error (filepath: NSString; error: NSErrorPtr): id; message 'newLibraryWithFile:error:';
    function newLibraryWithURL_error (url: NSURL; error: NSErrorPtr): id; message 'newLibraryWithURL:error:'; { available in macos , ios  }
    function newLibraryWithData_error (data: dispatch_data_t; error: NSErrorPtr): id; message 'newLibraryWithData:error:';
    function newLibraryWithSource_options_error (source: NSString; options: MTLCompileOptions; error: NSErrorPtr): id; message 'newLibraryWithSource:options:error:';
    procedure newLibraryWithSource_options_completionHandler (source: NSString; options: MTLCompileOptions; completionHandler: MTLNewLibraryCompletionHandler); message 'newLibraryWithSource:options:completionHandler:';
    function newRenderPipelineStateWithDescriptor_error (descriptor: MTLRenderPipelineDescriptor; error: NSErrorPtr): id; message 'newRenderPipelineStateWithDescriptor:error:';
    function newRenderPipelineStateWithDescriptor_options_reflection_error (descriptor: MTLRenderPipelineDescriptor; options: MTLPipelineOption; reflection: MTLAutoreleasedRenderPipelineReflectionPtr; error: NSErrorPtr): id; message 'newRenderPipelineStateWithDescriptor:options:reflection:error:';
    procedure newRenderPipelineStateWithDescriptor_completionHandler (descriptor: MTLRenderPipelineDescriptor; completionHandler: MTLNewRenderPipelineStateCompletionHandler); message 'newRenderPipelineStateWithDescriptor:completionHandler:';
    procedure newRenderPipelineStateWithDescriptor_options_completionHandler (descriptor: MTLRenderPipelineDescriptor; options: MTLPipelineOption; completionHandler: MTLNewRenderPipelineStateWithReflectionCompletionHandler); message 'newRenderPipelineStateWithDescriptor:options:completionHandler:';
    function newComputePipelineStateWithFunction_error (computeFunction: MTLFunctionProtocol; error: NSErrorPtr): id; message 'newComputePipelineStateWithFunction:error:';
    function newComputePipelineStateWithFunction_options_reflection_error (computeFunction: MTLFunctionProtocol; options: MTLPipelineOption; reflection: MTLAutoreleasedComputePipelineReflectionPtr; error: NSErrorPtr): id; message 'newComputePipelineStateWithFunction:options:reflection:error:';
    procedure newComputePipelineStateWithFunction_completionHandler (computeFunction: MTLFunctionProtocol; completionHandler: MTLNewComputePipelineStateCompletionHandler); message 'newComputePipelineStateWithFunction:completionHandler:';
    procedure newComputePipelineStateWithFunction_options_completionHandler (computeFunction: MTLFunctionProtocol; options: MTLPipelineOption; completionHandler: MTLNewComputePipelineStateWithReflectionCompletionHandler); message 'newComputePipelineStateWithFunction:options:completionHandler:';
    function newComputePipelineStateWithDescriptor_options_reflection_error (descriptor: MTLComputePipelineDescriptor; options: MTLPipelineOption; reflection: MTLAutoreleasedComputePipelineReflectionPtr; error: NSErrorPtr): id; message 'newComputePipelineStateWithDescriptor:options:reflection:error:'; { available in macos , ios  }
    procedure newComputePipelineStateWithDescriptor_options_completionHandler (descriptor: MTLComputePipelineDescriptor; options: MTLPipelineOption; completionHandler: MTLNewComputePipelineStateWithReflectionCompletionHandler); message 'newComputePipelineStateWithDescriptor:options:completionHandler:'; { available in macos , ios  }
    function newFence: MTLFenceProtocol; message 'newFence'; { available in macos , ios  }
    function supportsFeatureSet (featureSet: MTLFeatureSet): objcbool; message 'supportsFeatureSet:';
    function supportsFamily (gpuFamily: MTLGPUFamily): objcbool; message 'supportsFamily:'; { available in macos 10.11, ios 9.0 }
    function supportsTextureSampleCount (sampleCount: NSUInteger): objcbool; message 'supportsTextureSampleCount:'; { available in macos 10.13, ios 10.0 }
    function minimumLinearTextureAlignmentForPixelFormat (format: MTLPixelFormat): NSUInteger; message 'minimumLinearTextureAlignmentForPixelFormat:'; { available in macos , ios  }
    function minimumTextureBufferAlignmentForPixelFormat (format: MTLPixelFormat): NSUInteger; message 'minimumTextureBufferAlignmentForPixelFormat:'; { available in macos 10.15, ios 13.0 }
    function newRenderPipelineStateWithTileDescriptor_options_reflection_error (descriptor: MTLTileRenderPipelineDescriptor; options: MTLPipelineOption; reflection: MTLAutoreleasedRenderPipelineReflectionPtr; error: NSErrorPtr): id; message 'newRenderPipelineStateWithTileDescriptor:options:reflection:error:'; { unavailable in tvos }
    procedure newRenderPipelineStateWithTileDescriptor_options_completionHandler (descriptor: MTLTileRenderPipelineDescriptor; options: MTLPipelineOption; completionHandler: MTLNewRenderPipelineStateWithReflectionCompletionHandler); message 'newRenderPipelineStateWithTileDescriptor:options:completionHandler:'; { unavailable in tvos }
    function maxThreadgroupMemoryLength: NSUInteger; message 'maxThreadgroupMemoryLength'; { available in macos 10.14, ios 12.0 }
    function maxArgumentBufferSamplerCount: NSUInteger; message 'maxArgumentBufferSamplerCount'; { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    function areProgrammableSamplePositionsSupported: objcbool; message 'areProgrammableSamplePositionsSupported'; { available in macos 11.0, macCatalyst 14.0, ios 11.0 }
    procedure getDefaultSamplePositions_count (positions: MTLSamplePositionPtr; count: NSUInteger); message 'getDefaultSamplePositions:count:'; { available in macos 10.13, ios 11.0 }
    function newArgumentEncoderWithArguments (arguments: NSArray): id; message 'newArgumentEncoderWithArguments:'; { available in macos 10.14, ios 12.0 }
    function supportsRasterizationRateMapWithLayerCount (layerCount: NSUInteger): objcbool; message 'supportsRasterizationRateMapWithLayerCount:'; { available in macos 10.13, ios 11.0 }
    function newRasterizationRateMapWithDescriptor (descriptor: MTLRasterizationRateMapDescriptor): id; message 'newRasterizationRateMapWithDescriptor:'; { available in macos 10.13, ios 11.0 }
    function newIndirectCommandBufferWithDescriptor_maxCommandCount_options (descriptor: MTLIndirectCommandBufferDescriptor; maxCount: NSUInteger; options: MTLResourceOptions): id; message 'newIndirectCommandBufferWithDescriptor:maxCommandCount:options:'; { available in macos 10.13, ios 11.0 }
    function newEvent: MTLEventProtocol; message 'newEvent'; { available in macos 10.15.4, ios 13.0, macCatalyst 13.4 }
    function newSharedEvent: MTLSharedEventProtocol; message 'newSharedEvent'; { available in macos 10.15.4, ios 13.0, macCatalyst 13.4 }
    function newSharedEventWithHandle (sharedEventHandle: MTLSharedEventHandle): id; message 'newSharedEventWithHandle:'; { available in macos 10.14, ios 12.0 }
    function peerGroupID: cuint64; message 'peerGroupID'; { unavailable in ios }
    function peerIndex: cuint32; message 'peerIndex'; { unavailable in ios }
    function peerCount: cuint32; message 'peerCount'; { unavailable in ios }
    function sparseTileSizeWithTextureType_pixelFormat_sampleCount (textureType: MTLTextureType; pixelFormat: MTLPixelFormat; sampleCount: NSUInteger): MTLSize; message 'sparseTileSizeWithTextureType:pixelFormat:sampleCount:'; { available in macos 10.15 }
    function sparseTileSizeInBytes: NSUInteger; message 'sparseTileSizeInBytes'; { available in macos 10.15 }
  optional
    procedure convertSparsePixelRegions_toTileRegions_withTileSize_alignmentMode_numRegions (pixelRegions: MTLRegionPtr { variable size array of MTLRegion }; tileRegions: MTLRegionPtr { variable size array of MTLRegion }; tileSize: MTLSize; mode: MTLSparseTextureRegionAlignmentMode; numRegions: NSUInteger); message 'convertSparsePixelRegions:toTileRegions:withTileSize:alignmentMode:numRegions:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    procedure convertSparseTileRegions_toPixelRegions_withTileSize_numRegions (tileRegions: MTLRegionPtr { variable size array of MTLRegion }; pixelRegions: MTLRegionPtr { variable size array of MTLRegion }; tileSize: MTLSize; numRegions: NSUInteger); message 'convertSparseTileRegions:toPixelRegions:withTileSize:numRegions:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
  required
    function maxBufferLength: NSUInteger; message 'maxBufferLength'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    function counterSets: NSArray; message 'counterSets'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    function newCounterSampleBufferWithDescriptor_error (descriptor: MTLCounterSampleBufferDescriptor; error: NSErrorPtr): id; message 'newCounterSampleBufferWithDescriptor:error:'; { available in macos , ios  }
    {$if (defined(MTL_TIMESTAMP_AS_NSUINTEGER)) and defined(MTL_TIMESTAMP_AS_NSUINTEGER)}
    {$else}
    {$endif}
    procedure sampleTimestamps_gpuTimestamp (cpuTimestamp: MTLTimestampPtr; gpuTimestamp: MTLTimestampPtr); message 'sampleTimestamps:gpuTimestamp:'; { available in macos , ios  }
    function supportsCounterSampling (samplingPoint: MTLCounterSamplingPoint): objcbool; message 'supportsCounterSampling:'; { available in macos , ios  }
    function supportsVertexAmplificationCount (count: NSUInteger): objcbool; message 'supportsVertexAmplificationCount:'; { available in macos , ios , macCatalyst  }
    function supportsDynamicLibraries: objcbool; message 'supportsDynamicLibraries'; { available in macos 10.15, ios 14.0 }
    function newDynamicLibrary_error (_library: MTLLibraryProtocol; error: NSErrorPtr): id; message 'newDynamicLibrary:error:'; { available in macos 11.0, ios 14.0 }
    function newDynamicLibraryWithURL_error (url: NSURL; error: NSErrorPtr): id; message 'newDynamicLibraryWithURL:error:'; { available in macos 10.15.4, ios 13.0, macCatalyst 13.4 }
    function newBinaryArchiveWithDescriptor_error (descriptor: MTLBinaryArchiveDescriptor; error: NSErrorPtr): id; message 'newBinaryArchiveWithDescriptor:error:'; { available in macos 11.0, ios 14.0 }
    function supportsRaytracing: objcbool; message 'supportsRaytracing'; { available in macos 11.0, ios 14.0 }
    function accelerationStructureSizesWithDescriptor (descriptor: MTLAccelerationStructureDescriptor): MTLAccelerationStructureSizes; message 'accelerationStructureSizesWithDescriptor:'; { available in macos 11.0, ios 14.0 }
    function newAccelerationStructureWithSize (size: NSUInteger): id; message 'newAccelerationStructureWithSize:'; { available in macos 11.0, ios 14.0 }
    function newAccelerationStructureWithDescriptor (descriptor: MTLAccelerationStructureDescriptor): id; message 'newAccelerationStructureWithDescriptor:'; { available in macos 11.0, ios 14.0 }
    function supportsFunctionPointers: objcbool; message 'supportsFunctionPointers'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

