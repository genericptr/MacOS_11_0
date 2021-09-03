{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLComputePass.h }

{$ifdef TYPES}
type
  MTLComputePassSampleBufferAttachmentDescriptorPtr = ^MTLComputePassSampleBufferAttachmentDescriptor;
  MTLComputePassSampleBufferAttachmentDescriptorArrayPtr = ^MTLComputePassSampleBufferAttachmentDescriptorArray;
  MTLComputePassDescriptorPtr = ^MTLComputePassDescriptor;
{$endif}

{$ifdef TYPES}
const
  MTLMaxComputePassSampleBuffers = 4;
{$endif}

{$ifdef CLASSES}

type
  MTLComputePassSampleBufferAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setSampleBuffer(newValue: id); message 'setSampleBuffer:';
    function sampleBuffer: id; message 'sampleBuffer';
    procedure setStartOfEncoderSampleIndex(newValue: NSUInteger); message 'setStartOfEncoderSampleIndex:';
    function startOfEncoderSampleIndex: NSUInteger; message 'startOfEncoderSampleIndex';
    procedure setEndOfEncoderSampleIndex(newValue: NSUInteger); message 'setEndOfEncoderSampleIndex:';
    function endOfEncoderSampleIndex: NSUInteger; message 'endOfEncoderSampleIndex';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLComputePassSampleBufferAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLComputePassSampleBufferAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLComputePassSampleBufferAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLComputePassDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function computePassDescriptor: MTLComputePassDescriptor; message 'computePassDescriptor';
    procedure setDispatchType(newValue: MTLDispatchType); message 'setDispatchType:';
    function dispatchType: MTLDispatchType; message 'dispatchType';
    function sampleBufferAttachments: MTLComputePassSampleBufferAttachmentDescriptorArray; message 'sampleBufferAttachments';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

