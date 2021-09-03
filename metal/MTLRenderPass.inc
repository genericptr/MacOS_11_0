{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLRenderPass.h }

{$ifdef TYPES}
type
  MTLRenderPassAttachmentDescriptorPtr = ^MTLRenderPassAttachmentDescriptor;
  MTLRenderPassColorAttachmentDescriptorPtr = ^MTLRenderPassColorAttachmentDescriptor;
  MTLRenderPassDepthAttachmentDescriptorPtr = ^MTLRenderPassDepthAttachmentDescriptor;
  MTLRenderPassStencilAttachmentDescriptorPtr = ^MTLRenderPassStencilAttachmentDescriptor;
  MTLRenderPassColorAttachmentDescriptorArrayPtr = ^MTLRenderPassColorAttachmentDescriptorArray;
  MTLRenderPassSampleBufferAttachmentDescriptorPtr = ^MTLRenderPassSampleBufferAttachmentDescriptor;
  MTLRenderPassSampleBufferAttachmentDescriptorArrayPtr = ^MTLRenderPassSampleBufferAttachmentDescriptorArray;
  MTLRenderPassDescriptorPtr = ^MTLRenderPassDescriptor;
{$endif}

{$ifdef TYPES}
const
  MTLMaxRenderPassSampleBuffers = 4;

type
  MTLLoadAction = NSUInteger;
  MTLLoadActionPtr = ^MTLLoadAction;

const
  MTLLoadActionDontCare = 0;
  MTLLoadActionLoad = 1;
  MTLLoadActionClear = 2;

type
  MTLStoreAction = NSUInteger;
  MTLStoreActionPtr = ^MTLStoreAction;

const
  MTLStoreActionDontCare = 0;
  MTLStoreActionStore = 1;
  MTLStoreActionMultisampleResolve = 2;
  MTLStoreActionStoreAndMultisampleResolve = 3 { available in macos , ios  };
  MTLStoreActionUnknown = 4 { available in macos , ios  };
  MTLStoreActionCustomSampleDepthStore = 5 { available in macos , ios  };

type
  MTLStoreActionOptions = NSUInteger;
  MTLStoreActionOptionsPtr = ^MTLStoreActionOptions;

const
  MTLStoreActionOptionNone = 0;
  MTLStoreActionOptionCustomSamplePositions = 1 shl 0;

type
  MTLClearColor = record
    red: double;
    green: double;
    blue: double;
    alpha: double;
  end;
type
  MTLClearColorPtr = ^MTLClearColor;
{$endif}

{$ifdef CLASSES}

type
  MTLRenderPassAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setTexture(newValue: id); message 'setTexture:';
    function texture: id; message 'texture';
    procedure setLevel(newValue: NSUInteger); message 'setLevel:';
    function level: NSUInteger; message 'level';
    procedure setSlice(newValue: NSUInteger); message 'setSlice:';
    function slice: NSUInteger; message 'slice';
    procedure setDepthPlane(newValue: NSUInteger); message 'setDepthPlane:';
    function depthPlane: NSUInteger; message 'depthPlane';
    procedure setResolveTexture(newValue: id); message 'setResolveTexture:';
    function resolveTexture: id; message 'resolveTexture';
    procedure setResolveLevel(newValue: NSUInteger); message 'setResolveLevel:';
    function resolveLevel: NSUInteger; message 'resolveLevel';
    procedure setResolveSlice(newValue: NSUInteger); message 'setResolveSlice:';
    function resolveSlice: NSUInteger; message 'resolveSlice';
    procedure setResolveDepthPlane(newValue: NSUInteger); message 'setResolveDepthPlane:';
    function resolveDepthPlane: NSUInteger; message 'resolveDepthPlane';
    procedure setLoadAction(newValue: MTLLoadAction); message 'setLoadAction:';
    function loadAction: MTLLoadAction; message 'loadAction';
    procedure setStoreAction(newValue: MTLStoreAction); message 'setStoreAction:';
    function storeAction: MTLStoreAction; message 'storeAction';
    procedure setStoreActionOptions(newValue: MTLStoreActionOptions); message 'setStoreActionOptions:'; { available in macos , ios  }
    function storeActionOptions: MTLStoreActionOptions; message 'storeActionOptions'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLRenderPassColorAttachmentDescriptor = objcclass external (MTLRenderPassAttachmentDescriptor)
  public
    procedure setClearColor(newValue: MTLClearColor); message 'setClearColor:';
    function clearColor: MTLClearColor; message 'clearColor';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLMultisampleDepthResolveFilter = NSUInteger;
  MTLMultisampleDepthResolveFilterPtr = ^MTLMultisampleDepthResolveFilter;

const
  MTLMultisampleDepthResolveFilterSample0 = 0;
  MTLMultisampleDepthResolveFilterMin = 1;
  MTLMultisampleDepthResolveFilterMax = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLRenderPassDepthAttachmentDescriptor = objcclass external (MTLRenderPassAttachmentDescriptor)
  public
    procedure setClearDepth(newValue: double); message 'setClearDepth:';
    function clearDepth: double; message 'clearDepth';
    procedure setDepthResolveFilter(newValue: MTLMultisampleDepthResolveFilter); message 'setDepthResolveFilter:'; { available in macos , ios  }
    function depthResolveFilter: MTLMultisampleDepthResolveFilter; message 'depthResolveFilter'; { available in macos , ios  }
  end;
{$endif}

{$ifdef TYPES}
type
  MTLMultisampleStencilResolveFilter = NSUInteger;
  MTLMultisampleStencilResolveFilterPtr = ^MTLMultisampleStencilResolveFilter;

const
  MTLMultisampleStencilResolveFilterSample0 = 0;
  MTLMultisampleStencilResolveFilterDepthResolvedSample = 1;
{$endif}

{$ifdef CLASSES}

type
  MTLRenderPassStencilAttachmentDescriptor = objcclass external (MTLRenderPassAttachmentDescriptor)
  public
    procedure setClearStencil(newValue: cuint32); message 'setClearStencil:';
    function clearStencil: cuint32; message 'clearStencil';
    procedure setStencilResolveFilter(newValue: MTLMultisampleStencilResolveFilter); message 'setStencilResolveFilter:'; { unavailable in tvos }
    function stencilResolveFilter: MTLMultisampleStencilResolveFilter; message 'stencilResolveFilter'; { unavailable in tvos }
  end;

type
  MTLRenderPassColorAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLRenderPassColorAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLRenderPassColorAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLRenderPassSampleBufferAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setSampleBuffer(newValue: id); message 'setSampleBuffer:'; { available in macos , ios  }
    function sampleBuffer: id; message 'sampleBuffer'; { available in macos , ios  }
    procedure setStartOfVertexSampleIndex(newValue: NSUInteger); message 'setStartOfVertexSampleIndex:'; { available in macos , ios  }
    function startOfVertexSampleIndex: NSUInteger; message 'startOfVertexSampleIndex'; { available in macos , ios  }
    procedure setEndOfVertexSampleIndex(newValue: NSUInteger); message 'setEndOfVertexSampleIndex:'; { available in macos , ios  }
    function endOfVertexSampleIndex: NSUInteger; message 'endOfVertexSampleIndex'; { available in macos , ios  }
    procedure setStartOfFragmentSampleIndex(newValue: NSUInteger); message 'setStartOfFragmentSampleIndex:'; { available in macos , ios  }
    function startOfFragmentSampleIndex: NSUInteger; message 'startOfFragmentSampleIndex'; { available in macos , ios  }
    procedure setEndOfFragmentSampleIndex(newValue: NSUInteger); message 'setEndOfFragmentSampleIndex:'; { available in macos , ios  }
    function endOfFragmentSampleIndex: NSUInteger; message 'endOfFragmentSampleIndex'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLRenderPassSampleBufferAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLRenderPassSampleBufferAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLRenderPassSampleBufferAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLRenderPassDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function renderPassDescriptor: MTLRenderPassDescriptor; message 'renderPassDescriptor';
    function colorAttachments: MTLRenderPassColorAttachmentDescriptorArray; message 'colorAttachments';
    procedure setDepthAttachment(newValue: MTLRenderPassDepthAttachmentDescriptor); message 'setDepthAttachment:';
    function depthAttachment: MTLRenderPassDepthAttachmentDescriptor; message 'depthAttachment';
    procedure setStencilAttachment(newValue: MTLRenderPassStencilAttachmentDescriptor); message 'setStencilAttachment:';
    function stencilAttachment: MTLRenderPassStencilAttachmentDescriptor; message 'stencilAttachment';
    procedure setVisibilityResultBuffer(newValue: id); message 'setVisibilityResultBuffer:';
    function visibilityResultBuffer: id; message 'visibilityResultBuffer';
    procedure setRenderTargetArrayLength(newValue: NSUInteger); message 'setRenderTargetArrayLength:'; { unavailable in tvos }
    function renderTargetArrayLength: NSUInteger; message 'renderTargetArrayLength'; { unavailable in tvos }
    procedure setImageblockSampleLength(newValue: NSUInteger); message 'setImageblockSampleLength:'; { unavailable in tvos }
    function imageblockSampleLength: NSUInteger; message 'imageblockSampleLength'; { unavailable in tvos }
    procedure setThreadgroupMemoryLength(newValue: NSUInteger); message 'setThreadgroupMemoryLength:'; { unavailable in tvos }
    function threadgroupMemoryLength: NSUInteger; message 'threadgroupMemoryLength'; { unavailable in tvos }
    procedure setTileWidth(newValue: NSUInteger); message 'setTileWidth:'; { unavailable in tvos }
    function tileWidth: NSUInteger; message 'tileWidth'; { unavailable in tvos }
    procedure setTileHeight(newValue: NSUInteger); message 'setTileHeight:'; { unavailable in tvos }
    function tileHeight: NSUInteger; message 'tileHeight'; { unavailable in tvos }
    procedure setDefaultRasterSampleCount(newValue: NSUInteger); message 'setDefaultRasterSampleCount:'; { unavailable in tvos }
    function defaultRasterSampleCount: NSUInteger; message 'defaultRasterSampleCount'; { unavailable in tvos }
    procedure setRenderTargetWidth(newValue: NSUInteger); message 'setRenderTargetWidth:'; { unavailable in tvos }
    function renderTargetWidth: NSUInteger; message 'renderTargetWidth'; { unavailable in tvos }
    procedure setRenderTargetHeight(newValue: NSUInteger); message 'setRenderTargetHeight:'; { unavailable in tvos }
    function renderTargetHeight: NSUInteger; message 'renderTargetHeight'; { unavailable in tvos }
    procedure setSamplePositions_count (positions: MTLSamplePositionPtr; count: NSUInteger); message 'setSamplePositions:count:'; { available in macos , ios  }
    function getSamplePositions_count (positions: MTLSamplePositionPtr; count: NSUInteger): NSUInteger; message 'getSamplePositions:count:'; { available in macos , ios  }
    procedure setRasterizationRateMap(newValue: id); message 'setRasterizationRateMap:'; { available in macos , ios , macCatalyst  }
    function rasterizationRateMap: id; message 'rasterizationRateMap'; { available in macos , ios , macCatalyst  }
    function sampleBufferAttachments: MTLRenderPassSampleBufferAttachmentDescriptorArray; message 'sampleBufferAttachments'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

