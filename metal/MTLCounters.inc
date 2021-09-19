{ Parsed from Metal.framework MTLCounters.h }

{$ifdef TYPES}
type
  MTLCounterSampleBufferDescriptorPtr = ^MTLCounterSampleBufferDescriptor;
  MTLCounterProtocolPtr = ^MTLCounterProtocol;
  MTLCounterSetProtocolPtr = ^MTLCounterSetProtocol;
  MTLCounterSampleBufferProtocolPtr = ^MTLCounterSampleBufferProtocol;
{$endif}

{$ifndef MTLCounters_h}
{$ifdef TYPES}
const
  MTLCounterErrorValue = -1;

type
  MTLCommonCounter = NSString { available in macos 10.15, ios 14.0 };
  MTLCommonCounterPtr = ^MTLCommonCounter { available in macos 10.15, ios 14.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommonCounterTimestamp: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterTessellationInputPatches: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterVertexInvocations: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterPostTessellationVertexInvocations: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterClipperInvocations: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterClipperPrimitivesOut: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterFragmentInvocations: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterFragmentsPassed: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterComputeKernelInvocations: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterTotalCycles: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterVertexCycles: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterTessellationCycles: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterPostTessellationVertexCycles: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterFragmentCycles: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterRenderTargetWriteCycles: MTLCommonCounter { available in macos 10.15, ios 14.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCommonCounterSet = NSString { available in macos 10.15, ios 14.0 };
  MTLCommonCounterSetPtr = ^MTLCommonCounterSet { available in macos 10.15, ios 14.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommonCounterSetTimestamp: MTLCommonCounterSet { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterSetStageUtilization: MTLCommonCounterSet { available in macos 10.15, ios 14.0 }; cvar; external;
  MTLCommonCounterSetStatistic: MTLCommonCounterSet { available in macos 10.15, ios 14.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCounterResultTimestamp = record
    timestamp: cuint64;
  end;
type
  MTLCounterResultTimestampPtr = ^MTLCounterResultTimestamp;
type
  MTLCounterResultStageUtilization = record
    totalCycles: cuint64;
    vertexCycles: cuint64;
    tessellationCycles: cuint64;
    postTessellationVertexCycles: cuint64;
    fragmentCycles: cuint64;
    renderTargetCycles: cuint64;
  end;
type
  MTLCounterResultStageUtilizationPtr = ^MTLCounterResultStageUtilization;
type
  MTLCounterResultStatistic = record
    tessellationInputPatches: cuint64;
    vertexInvocations: cuint64;
    postTessellationVertexInvocations: cuint64;
    clipperInvocations: cuint64;
    clipperPrimitivesOut: cuint64;
    fragmentInvocations: cuint64;
    fragmentsPassed: cuint64;
    computeKernelInvocations: cuint64;
  end;
type
  MTLCounterResultStatisticPtr = ^MTLCounterResultStatistic;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCounterProtocol = objcprotocol external name 'MTLCounter' (NSObjectProtocol)
    function name: NSString; message 'name'; { available in macos 10.15, ios 14.0 }
  end;

type
  MTLCounterSetProtocol = objcprotocol external name 'MTLCounterSet' (NSObjectProtocol)
    function name: NSString; message 'name'; { available in macos 10.15, ios 14.0 }
    function counters: NSArray; message 'counters'; { available in macos 10.15, ios 14.0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  MTLCounterSampleBufferDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setCounterSet(newValue: MTLCounterSetProtocol); message 'setCounterSet:'; { available in macos 10.15, ios 14.0 }
    function counterSet: MTLCounterSetProtocol; message 'counterSet'; { available in macos 10.15, ios 14.0 }
    procedure setLabel(newValue: NSString); message 'setLabel:'; { available in macos 10.15, ios 14.0 }
    function label_: NSString; message 'label'; { available in macos 10.15, ios 14.0 }
    procedure setStorageMode(newValue: MTLStorageMode); message 'setStorageMode:'; { available in macos 10.15, ios 14.0 }
    function storageMode: MTLStorageMode; message 'storageMode'; { available in macos 10.15, ios 14.0 }
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:'; { available in macos 10.15, ios 14.0 }
    function sampleCount: NSUInteger; message 'sampleCount'; { available in macos 10.15, ios 14.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCounterSampleBufferProtocol = objcprotocol external name 'MTLCounterSampleBuffer' (NSObjectProtocol)
    function device: id; message 'device'; { available in macos 10.15, ios 14.0 }
    function label_: NSString; message 'label'; { available in macos 10.15, ios 14.0 }
    function sampleCount: NSUInteger; message 'sampleCount'; { available in macos 10.15, ios 14.0 }
    function resolveCounterRange (range: NSRange): NSData; message 'resolveCounterRange:'; { available in macos 10.15, ios 14.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCounterErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCounterSampleBufferError = NSInteger;
  MTLCounterSampleBufferErrorPtr = ^MTLCounterSampleBufferError;

const
  MTLCounterSampleBufferErrorOutOfMemory = 0;
  MTLCounterSampleBufferErrorInvalid = 1;
  MTLCounterSampleBufferErrorInternal = 2;
{$endif}

{$endif}
