{ Parsed from Metal.framework MTLCommandQueue.h }

{$ifdef TYPES}
type
  MTLCommandQueueProtocolPtr = ^MTLCommandQueueProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandQueueProtocol = objcprotocol external name 'MTLCommandQueue' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function commandBuffer: MTLCommandBufferProtocol; message 'commandBuffer';
    function commandBufferWithDescriptor (descriptor: MTLCommandBufferDescriptor): id; message 'commandBufferWithDescriptor:'; { available in macos , ios  }
    function commandBufferWithUnretainedReferences: MTLCommandBufferProtocol; message 'commandBufferWithUnretainedReferences';
    procedure insertDebugCaptureBoundary; message 'insertDebugCaptureBoundary'; deprecated 'Use MTLCaptureScope instead';
  end;
{$endif}

