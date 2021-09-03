{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLIndirectCommandBuffer.h }

{$ifdef TYPES}
type
  MTLIndirectCommandBufferDescriptorPtr = ^MTLIndirectCommandBufferDescriptor;
  MTLIndirectCommandBufferProtocolPtr = ^MTLIndirectCommandBufferProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLIndirectCommandType = NSUInteger;
  MTLIndirectCommandTypePtr = ^MTLIndirectCommandType;

const
  MTLIndirectCommandTypeDraw = 1 shl 0;
  MTLIndirectCommandTypeDrawIndexed = 1 shl 1;
  MTLIndirectCommandTypeDrawPatches = 1 shl 2 { unavailable in tvos };
  MTLIndirectCommandTypeDrawIndexedPatches = 1 shl 3 { unavailable in tvos };
  MTLIndirectCommandTypeConcurrentDispatch = 1 shl 5 { available in ios ,macos  };
  MTLIndirectCommandTypeConcurrentDispatchThreads = 1 shl 6 { available in ios ,macos  };

type
  MTLIndirectCommandBufferExecutionRange = record
    location: cuint32;
    length: cuint32;
  end;
type
  MTLIndirectCommandBufferExecutionRangePtr = ^MTLIndirectCommandBufferExecutionRange;
{$endif}

{$ifdef CLASSES}

type
  MTLIndirectCommandBufferDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setCommandTypes(newValue: MTLIndirectCommandType); message 'setCommandTypes:';
    function commandTypes: MTLIndirectCommandType; message 'commandTypes';
    procedure setInheritPipelineState(newValue: objcbool); message 'setInheritPipelineState:'; { available in macos , ios  }
    function inheritPipelineState: objcbool; message 'inheritPipelineState'; { available in macos , ios  }
    procedure setInheritBuffers(newValue: objcbool); message 'setInheritBuffers:';
    function inheritBuffers: objcbool; message 'inheritBuffers';
    procedure setMaxVertexBufferBindCount(newValue: NSUInteger); message 'setMaxVertexBufferBindCount:';
    function maxVertexBufferBindCount: NSUInteger; message 'maxVertexBufferBindCount';
    procedure setMaxFragmentBufferBindCount(newValue: NSUInteger); message 'setMaxFragmentBufferBindCount:';
    function maxFragmentBufferBindCount: NSUInteger; message 'maxFragmentBufferBindCount';
    procedure setMaxKernelBufferBindCount(newValue: NSUInteger); message 'setMaxKernelBufferBindCount:'; { available in ios ,macos  }
    function maxKernelBufferBindCount: NSUInteger; message 'maxKernelBufferBindCount'; { available in ios ,macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLIndirectCommandBufferProtocol = objcprotocol external name 'MTLIndirectCommandBuffer' (MTLResourceProtocol)
    function size: NSUInteger; message 'size';
    procedure resetWithRange (range: NSRange); message 'resetWithRange:';
    function indirectRenderCommandAtIndex (commandIndex: NSUInteger): id; message 'indirectRenderCommandAtIndex:';
    function indirectComputeCommandAtIndex (commandIndex: NSUInteger): id; message 'indirectComputeCommandAtIndex:'; { available in ios ,macos  }
  end;
{$endif}

