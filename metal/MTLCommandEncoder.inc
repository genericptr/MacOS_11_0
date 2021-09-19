{ Parsed from Metal.framework MTLCommandEncoder.h }

{$ifdef TYPES}
type
  MTLCommandEncoderProtocolPtr = ^MTLCommandEncoderProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLResourceUsage = NSUInteger;
  MTLResourceUsagePtr = ^MTLResourceUsage;

const
  MTLResourceUsageRead = 1 shl 0;
  MTLResourceUsageWrite = 1 shl 1;
  MTLResourceUsageSample = 1 shl 2;

type
  MTLBarrierScope = NSUInteger;
  MTLBarrierScopePtr = ^MTLBarrierScope;

const
  MTLBarrierScopeBuffers = 1 shl 0;
  MTLBarrierScopeTextures = 1 shl 1;
  MTLBarrierScopeRenderTargets = 1 shl 2 { unavailable in ios } { available in macos 10.14, macCatalyst 13.0 };
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandEncoderProtocol = objcprotocol external name 'MTLCommandEncoder' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure endEncoding; message 'endEncoding';
    procedure insertDebugSignpost (string_: NSString); message 'insertDebugSignpost:';
    procedure pushDebugGroup (string_: NSString); message 'pushDebugGroup:';
    procedure popDebugGroup; message 'popDebugGroup';
  end;
{$endif}

