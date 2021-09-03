{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLPipeline.h }

{$ifdef TYPES}
type
  MTLPipelineBufferDescriptorPtr = ^MTLPipelineBufferDescriptor;
  MTLPipelineBufferDescriptorArrayPtr = ^MTLPipelineBufferDescriptorArray;
{$endif}

{$ifdef TYPES}
type
  MTLMutability = NSUInteger;
  MTLMutabilityPtr = ^MTLMutability;

const
  MTLMutabilityDefault = 0;
  MTLMutabilityMutable = 1;
  MTLMutabilityImmutable = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLPipelineBufferDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setMutability(newValue: MTLMutability); message 'setMutability:';
    function mutability: MTLMutability; message 'mutability';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLPipelineBufferDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (bufferIndex: NSUInteger): MTLPipelineBufferDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (buffer: MTLPipelineBufferDescriptor; bufferIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;
{$endif}

