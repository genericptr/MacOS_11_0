{ Parsed from Metal.framework MTLIndirectCommandBuffer.h }

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
  MTLIndirectCommandTypeConcurrentDispatch = 1 shl 5 { available in ios 13.0,macos 11.0 };
  MTLIndirectCommandTypeConcurrentDispatchThreads = 1 shl 6 { available in ios 13.0,macos 11.0 };

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
    procedure setInheritPipelineState(newValue: objcbool); message 'setInheritPipelineState:'; { available in macos 10.14, ios 13.0 }
    function inheritPipelineState: objcbool; message 'inheritPipelineState'; { available in macos 10.14, ios 13.0 }
    procedure setInheritBuffers(newValue: objcbool); message 'setInheritBuffers:';
    function inheritBuffers: objcbool; message 'inheritBuffers';
    procedure setMaxVertexBufferBindCount(newValue: NSUInteger); message 'setMaxVertexBufferBindCount:';
    function maxVertexBufferBindCount: NSUInteger; message 'maxVertexBufferBindCount';
    procedure setMaxFragmentBufferBindCount(newValue: NSUInteger); message 'setMaxFragmentBufferBindCount:';
    function maxFragmentBufferBindCount: NSUInteger; message 'maxFragmentBufferBindCount';
    procedure setMaxKernelBufferBindCount(newValue: NSUInteger); message 'setMaxKernelBufferBindCount:'; { available in ios 13.0,macos 11.0 }
    function maxKernelBufferBindCount: NSUInteger; message 'maxKernelBufferBindCount'; { available in ios 13.0,macos 11.0 }

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
    function indirectComputeCommandAtIndex (commandIndex: NSUInteger): id; message 'indirectComputeCommandAtIndex:'; { available in ios 13.0,macos 11.0 }
  end;
{$endif}

