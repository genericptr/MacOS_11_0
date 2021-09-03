{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLBlitPass.h }

{$ifdef TYPES}
type
  MTLBlitPassSampleBufferAttachmentDescriptorPtr = ^MTLBlitPassSampleBufferAttachmentDescriptor;
  MTLBlitPassSampleBufferAttachmentDescriptorArrayPtr = ^MTLBlitPassSampleBufferAttachmentDescriptorArray;
  MTLBlitPassDescriptorPtr = ^MTLBlitPassDescriptor;
{$endif}

{$ifdef CLASSES}

type
  MTLBlitPassSampleBufferAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
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
  MTLBlitPassSampleBufferAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLBlitPassSampleBufferAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLBlitPassSampleBufferAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLBlitPassDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function blitPassDescriptor: MTLBlitPassDescriptor; message 'blitPassDescriptor';
    function sampleBufferAttachments: MTLBlitPassSampleBufferAttachmentDescriptorArray; message 'sampleBufferAttachments';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

