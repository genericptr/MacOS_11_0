{ Parsed from Metal.framework MTLCommandBuffer.h }

{$ifdef TYPES}
type
  MTLCommandBufferDescriptorPtr = ^MTLCommandBufferDescriptor;
  MTLCommandBufferEncoderInfoProtocolPtr = ^MTLCommandBufferEncoderInfoProtocol;
  MTLCommandBufferProtocolPtr = ^MTLCommandBufferProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLCommandBufferStatus = NSUInteger;
  MTLCommandBufferStatusPtr = ^MTLCommandBufferStatus;

const
  MTLCommandBufferStatusNotEnqueued = 0;
  MTLCommandBufferStatusEnqueued = 1;
  MTLCommandBufferStatusCommitted = 2;
  MTLCommandBufferStatusScheduled = 3;
  MTLCommandBufferStatusCompleted = 4;
  MTLCommandBufferStatusError = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommandBufferErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCommandBufferError = NSUInteger;
  MTLCommandBufferErrorPtr = ^MTLCommandBufferError;

const
  MTLCommandBufferErrorNone = 0;
  MTLCommandBufferErrorInternal = 1;
  MTLCommandBufferErrorTimeout = 2;
  MTLCommandBufferErrorPageFault = 3;
  MTLCommandBufferErrorBlacklisted = 4;
  MTLCommandBufferErrorNotPermitted = 7;
  MTLCommandBufferErrorOutOfMemory = 8;
  MTLCommandBufferErrorInvalidResource = 9;
  MTLCommandBufferErrorMemoryless = 10 { available in macos , macCatalyst , ios  };
  MTLCommandBufferErrorDeviceRemoved = 11 { unavailable in ios };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommandBufferEncoderInfoErrorKey: NSErrorUserInfoKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCommandBufferErrorOption = NSUInteger;
  MTLCommandBufferErrorOptionPtr = ^MTLCommandBufferErrorOption;

const
  MTLCommandBufferErrorOptionNone = 0;
  MTLCommandBufferErrorOptionEncoderExecutionStatus = 1 shl 0;

type
  MTLCommandEncoderErrorState = NSInteger;
  MTLCommandEncoderErrorStatePtr = ^MTLCommandEncoderErrorState;

const
  MTLCommandEncoderErrorStateUnknown = 0;
  MTLCommandEncoderErrorStateCompleted = 1;
  MTLCommandEncoderErrorStateAffected = 2;
  MTLCommandEncoderErrorStatePending = 3;
  MTLCommandEncoderErrorStateFaulted = 4;
{$endif}

{$ifdef CLASSES}

type
  MTLCommandBufferDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setRetainedReferences(newValue: objcbool); message 'setRetainedReferences:';
    function retainedReferences: objcbool; message 'retainedReferences';
    procedure setErrorOptions(newValue: MTLCommandBufferErrorOption); message 'setErrorOptions:';
    function errorOptions: MTLCommandBufferErrorOption; message 'errorOptions';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandBufferEncoderInfoProtocol = objcprotocol external name 'MTLCommandBufferEncoderInfo' (NSObjectProtocol)
    function label_: NSString; message 'label';
    function debugSignposts: NSArray; message 'debugSignposts';
    function errorState: MTLCommandEncoderErrorState; message 'errorState';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLCommandBufferHandler = reference to procedure (param1: id); cblock; cdecl;
  MTLDispatchType = NSUInteger;
  MTLDispatchTypePtr = ^MTLDispatchType;

const
  MTLDispatchTypeSerial = 0;
  MTLDispatchTypeConcurrent = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandBufferProtocol = objcprotocol external name 'MTLCommandBuffer' (NSObjectProtocol)
    function device: id; message 'device';
    function commandQueue: id; message 'commandQueue';
    function retainedReferences: objcbool; message 'retainedReferences';
    function errorOptions: MTLCommandBufferErrorOption; message 'errorOptions'; { available in macos , ios  }
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function kernelStartTime: CFTimeInterval; message 'kernelStartTime'; { available in macos , macCatalyst , ios  }
    function kernelEndTime: CFTimeInterval; message 'kernelEndTime'; { available in macos , macCatalyst , ios  }
    function logs: id; message 'logs'; { available in macos , ios  }
    function GPUStartTime: CFTimeInterval; message 'GPUStartTime'; { available in macos , macCatalyst , ios  }
    function GPUEndTime: CFTimeInterval; message 'GPUEndTime'; { available in macos , macCatalyst , ios  }
    procedure enqueue; message 'enqueue';
    procedure commit; message 'commit';
    procedure addScheduledHandler (block: MTLCommandBufferHandler); message 'addScheduledHandler:';
    procedure presentDrawable (drawable: id); message 'presentDrawable:';
    procedure presentDrawable_atTime (drawable: id; presentationTime: CFTimeInterval); message 'presentDrawable:atTime:';
    procedure presentDrawable_afterMinimumDuration (drawable: id; duration: CFTimeInterval); message 'presentDrawable:afterMinimumDuration:'; { available in macos , ios , macCatalyst  }
    procedure waitUntilScheduled; message 'waitUntilScheduled';
    procedure addCompletedHandler (block: MTLCommandBufferHandler); message 'addCompletedHandler:';
    procedure waitUntilCompleted; message 'waitUntilCompleted';
    function status: MTLCommandBufferStatus; message 'status';
    function error: NSError; message 'error';
    function blitCommandEncoder: id; message 'blitCommandEncoder';
    function renderCommandEncoderWithDescriptor (renderPassDescriptor: MTLRenderPassDescriptor): id; message 'renderCommandEncoderWithDescriptor:';
    function computeCommandEncoderWithDescriptor (computePassDescriptor: MTLComputePassDescriptor): id; message 'computeCommandEncoderWithDescriptor:'; { available in macos , ios  }
    function blitCommandEncoderWithDescriptor (blitPassDescriptor: MTLBlitPassDescriptor): id; message 'blitCommandEncoderWithDescriptor:'; { available in macos , ios  }
    function computeCommandEncoder: id; message 'computeCommandEncoder';
    function computeCommandEncoderWithDispatchType (dispatchType: MTLDispatchType): id; message 'computeCommandEncoderWithDispatchType:'; { available in macos , ios  }
    procedure encodeWaitForEvent_value (event: id; value: cuint64); message 'encodeWaitForEvent:value:'; { available in macos , ios  }
    procedure encodeSignalEvent_value (event: id; value: cuint64); message 'encodeSignalEvent:value:'; { available in macos , ios  }
    function parallelRenderCommandEncoderWithDescriptor (renderPassDescriptor: MTLRenderPassDescriptor): id; message 'parallelRenderCommandEncoderWithDescriptor:';
    function resourceStateCommandEncoder: id; message 'resourceStateCommandEncoder'; { available in macos , macCatalyst , ios  }
    function resourceStateCommandEncoderWithDescriptor (resourceStatePassDescriptor: MTLResourceStatePassDescriptor): id; message 'resourceStateCommandEncoderWithDescriptor:'; { available in macos , ios  }
    function accelerationStructureCommandEncoder: id; message 'accelerationStructureCommandEncoder'; { available in macos , ios  }
    procedure pushDebugGroup (string_: NSString); message 'pushDebugGroup:'; { available in macos , ios  }
    procedure popDebugGroup; message 'popDebugGroup'; { available in macos , ios  }
  end;
{$endif}

