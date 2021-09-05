{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLCounters.h }

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
  MTLCommonCounter = NSString { available in macos , ios  };
  MTLCommonCounterPtr = ^MTLCommonCounter { available in macos , ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommonCounterTimestamp: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterTessellationInputPatches: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterVertexInvocations: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterPostTessellationVertexInvocations: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterClipperInvocations: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterClipperPrimitivesOut: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterFragmentInvocations: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterFragmentsPassed: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterComputeKernelInvocations: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterTotalCycles: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterVertexCycles: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterTessellationCycles: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterPostTessellationVertexCycles: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterFragmentCycles: MTLCommonCounter { available in macos , ios  }; cvar; external;
  MTLCommonCounterRenderTargetWriteCycles: MTLCommonCounter { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCommonCounterSet = NSString { available in macos , ios  };
  MTLCommonCounterSetPtr = ^MTLCommonCounterSet { available in macos , ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommonCounterSetTimestamp: MTLCommonCounterSet { available in macos , ios  }; cvar; external;
  MTLCommonCounterSetStageUtilization: MTLCommonCounterSet { available in macos , ios  }; cvar; external;
  MTLCommonCounterSetStatistic: MTLCommonCounterSet { available in macos , ios  }; cvar; external;
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
    function name: NSString; message 'name'; { available in macos , ios  }
  end;

type
  MTLCounterSetProtocol = objcprotocol external name 'MTLCounterSet' (NSObjectProtocol)
    function name: NSString; message 'name'; { available in macos , ios  }
    function counters: NSArray; message 'counters'; { available in macos , ios  }
  end;
{$endif}

{$ifdef CLASSES}

type
  MTLCounterSampleBufferDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setCounterSet(newValue: MTLCounterSetProtocol); message 'setCounterSet:'; { available in macos , ios  }
    function counterSet: MTLCounterSetProtocol; message 'counterSet'; { available in macos , ios  }
    procedure setLabel(newValue: NSString); message 'setLabel:'; { available in macos , ios  }
    function label_: NSString; message 'label'; { available in macos , ios  }
    procedure setStorageMode(newValue: MTLStorageMode); message 'setStorageMode:'; { available in macos , ios  }
    function storageMode: MTLStorageMode; message 'storageMode'; { available in macos , ios  }
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:'; { available in macos , ios  }
    function sampleCount: NSUInteger; message 'sampleCount'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCounterSampleBufferProtocol = objcprotocol external name 'MTLCounterSampleBuffer' (NSObjectProtocol)
    function device: id; message 'device'; { available in macos , ios  }
    function label_: NSString; message 'label'; { available in macos , ios  }
    function sampleCount: NSUInteger; message 'sampleCount'; { available in macos , ios  }
    function resolveCounterRange (range: NSRange): NSData; message 'resolveCounterRange:'; { available in macos , ios  }
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
