{ Parsed from Metal.framework MTLResourceStatePass.h }

{$ifdef TYPES}
type
  MTLResourceStatePassSampleBufferAttachmentDescriptorPtr = ^MTLResourceStatePassSampleBufferAttachmentDescriptor;
  MTLResourceStatePassSampleBufferAttachmentDescriptorArrayPtr = ^MTLResourceStatePassSampleBufferAttachmentDescriptorArray;
  MTLResourceStatePassDescriptorPtr = ^MTLResourceStatePassDescriptor;
{$endif}

{$ifdef TYPES}
const
  MTLMaxResourceStatePassSampleBuffers = 4;
{$endif}

{$ifdef CLASSES}

type
  MTLResourceStatePassSampleBufferAttachmentDescriptor = objcclass external (NSObject, NSCopyingProtocol)
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
  MTLResourceStatePassSampleBufferAttachmentDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (attachmentIndex: NSUInteger): MTLResourceStatePassSampleBufferAttachmentDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attachment: MTLResourceStatePassSampleBufferAttachmentDescriptor; attachmentIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLResourceStatePassDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function resourceStatePassDescriptor: MTLResourceStatePassDescriptor; message 'resourceStatePassDescriptor';
    function sampleBufferAttachments: MTLResourceStatePassSampleBufferAttachmentDescriptorArray; message 'sampleBufferAttachments'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

