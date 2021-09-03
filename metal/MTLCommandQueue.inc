{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLCommandQueue.h }

{$ifdef TYPES}
type
  MTLCommandQueueProtocolPtr = ^MTLCommandQueueProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandQueueProtocol = objcprotocol external name 'MTLCommandQueue' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function commandBuffer: id; message 'commandBuffer';
    function commandBufferWithDescriptor (descriptor: MTLCommandBufferDescriptor): id; message 'commandBufferWithDescriptor:'; { available in macos , ios  }
    function commandBufferWithUnretainedReferences: id; message 'commandBufferWithUnretainedReferences';
    procedure insertDebugCaptureBoundary; message 'insertDebugCaptureBoundary'; deprecated 'Use MTLCaptureScope instead';
  end;
{$endif}

