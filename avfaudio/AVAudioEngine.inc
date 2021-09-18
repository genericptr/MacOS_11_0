{ Parsed from AVFAudio.framework AVAudioEngine.h }

{ Types from AVAudioEngine }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  AVAudioEnginePtr = ^AVAudioEngine;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOENGINE_HAVE_MUSICPLAYER = 1;
{$endif}

{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOENGINE_HAVE_AUAUDIOUNIT = 1;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVAudioEngineManualRenderingError = OSStatus;
  AVAudioEngineManualRenderingErrorPtr = ^AVAudioEngineManualRenderingError;

const
  AVAudioEngineManualRenderingErrorInvalidMode = -80800;
  AVAudioEngineManualRenderingErrorInitialized = -80801;
  AVAudioEngineManualRenderingErrorNotRunning = -80802;

type
  AVAudioEngineManualRenderingStatus = NSInteger;
  AVAudioEngineManualRenderingStatusPtr = ^AVAudioEngineManualRenderingStatus;

const
  AVAudioEngineManualRenderingStatusError = -1;
  AVAudioEngineManualRenderingStatusSuccess = 0;
  AVAudioEngineManualRenderingStatusInsufficientDataFromInputNode = 1;
  AVAudioEngineManualRenderingStatusCannotDoInCurrentContext = 2;

type
  AVAudioEngineManualRenderingMode = NSInteger;
  AVAudioEngineManualRenderingModePtr = ^AVAudioEngineManualRenderingMode;

const
  AVAudioEngineManualRenderingModeOffline = 0;
  AVAudioEngineManualRenderingModeRealtime = 1;

type
  AVAudioEngineManualRenderingBlock = reference to function (numberOfFrames: AVAudioFrameCount; outBuffer: AudioBufferListPtr; outError: OSStatusPtr): AVAudioEngineManualRenderingStatus; cblock; cdecl { available in macos , ios , watchos , tvos  };
{$endif}

{$ifdef CLASSES}

type
  AVAudioEngine = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function init: id; message 'init';
    procedure attachNode (node: AVAudioNode); message 'attachNode:';
    procedure detachNode (node: AVAudioNode); message 'detachNode:';
    procedure connect_to_fromBus_toBus_format (node1: AVAudioNode; node2: AVAudioNode; bus1: AVAudioNodeBus; bus2: AVAudioNodeBus; format: AVAudioFormat); message 'connect:to:fromBus:toBus:format:';
    procedure connect_to_format (node1: AVAudioNode; node2: AVAudioNode; format: AVAudioFormat); message 'connect:to:format:';
    procedure connect_toConnectionPoints_fromBus_format (sourceNode: AVAudioNode; destNodes: NSArray; sourceBus: AVAudioNodeBus; format: AVAudioFormat); message 'connect:toConnectionPoints:fromBus:format:'; { available in macos , ios , watchos , tvos  }
    procedure disconnectNodeInput_bus (node: AVAudioNode; bus: AVAudioNodeBus); message 'disconnectNodeInput:bus:';
    procedure disconnectNodeInput (node: AVAudioNode); message 'disconnectNodeInput:';
    procedure disconnectNodeOutput_bus (node: AVAudioNode; bus: AVAudioNodeBus); message 'disconnectNodeOutput:bus:';
    procedure disconnectNodeOutput (node: AVAudioNode); message 'disconnectNodeOutput:';
    procedure prepare; message 'prepare';
    function startAndReturnError (outError: NSErrorPtr): objcbool; message 'startAndReturnError:';
    procedure pause; message 'pause';
    procedure reset; message 'reset';
    procedure stop; message 'stop';
    function inputConnectionPointForNode_inputBus (node: AVAudioNode; bus: AVAudioNodeBus): AVAudioConnectionPoint; message 'inputConnectionPointForNode:inputBus:'; { available in macos , ios , watchos , tvos  }
    function outputConnectionPointsForNode_outputBus (node: AVAudioNode; bus: AVAudioNodeBus): NSArray; message 'outputConnectionPointsForNode:outputBus:'; { available in macos , ios , watchos , tvos  }
    {$if defined(AVAUDIOENGINE_HAVE_MUSICPLAYER)}
    procedure setMusicSequence(newValue: MusicSequence); message 'setMusicSequence:';
    function musicSequence: MusicSequence; message 'musicSequence';
    {$endif}
    function outputNode: AVAudioOutputNode; message 'outputNode';
    function inputNode: AVAudioInputNode; message 'inputNode'; { available in macos , ios , watchos , tvos  }
    function mainMixerNode: AVAudioMixerNode; message 'mainMixerNode';
    function isRunning: objcbool; message 'isRunning';
    procedure setAutoShutdownEnabled(newValue: objcbool); message 'setAutoShutdownEnabled:'; { unavailable in watchos }
    function isAutoShutdownEnabled: objcbool; message 'isAutoShutdownEnabled'; { unavailable in watchos }
    function attachedNodes: NSSet; message 'attachedNodes'; { available in macos , ios , watchos , tvos  }
    function enableManualRenderingMode_format_maximumFrameCount_error (mode: AVAudioEngineManualRenderingMode; pcmFormat: AVAudioFormat; maximumFrameCount: AVAudioFrameCount; outError: NSErrorPtr): objcbool; message 'enableManualRenderingMode:format:maximumFrameCount:error:'; { available in macos , ios , watchos , tvos  }
    procedure disableManualRenderingMode; message 'disableManualRenderingMode'; { available in macos , ios , watchos , tvos  }
    function renderOffline_toBuffer_error (numberOfFrames: AVAudioFrameCount; buffer: AVAudioPCMBuffer; outError: NSErrorPtr): AVAudioEngineManualRenderingStatus; message 'renderOffline:toBuffer:error:'; { available in macos , ios , watchos , tvos  }
    function manualRenderingBlock: AVAudioEngineManualRenderingBlock; message 'manualRenderingBlock'; { available in macos , ios , watchos , tvos  }
    function isInManualRenderingMode: objcbool; message 'isInManualRenderingMode'; { available in macos , ios , watchos , tvos  }
    function manualRenderingMode: AVAudioEngineManualRenderingMode; message 'manualRenderingMode'; { available in macos , ios , watchos , tvos  }
    function manualRenderingFormat: AVAudioFormat; message 'manualRenderingFormat'; { available in macos , ios , watchos , tvos  }
    function manualRenderingMaximumFrameCount: AVAudioFrameCount; message 'manualRenderingMaximumFrameCount'; { available in macos , ios , watchos , tvos  }
    function manualRenderingSampleTime: AVAudioFramePosition; message 'manualRenderingSampleTime'; { available in macos , ios , watchos , tvos  }
    {$if defined(AVAUDIOENGINE_HAVE_AUAUDIOUNIT)}
    procedure connectMIDI_to_format_block (sourceNode: AVAudioNode; destinationNode: AVAudioNode; format: AVAudioFormat; tapBlock: AUMIDIOutputEventBlock); message 'connectMIDI:to:format:block:'; { available in macos , ios , watchos , tvos  }
    procedure connectMIDI_toNodes_format_block (sourceNode: AVAudioNode; destinationNodes: NSArray; format: AVAudioFormat; tapBlock: AUMIDIOutputEventBlock); message 'connectMIDI:toNodes:format:block:'; { available in macos , ios , watchos , tvos  }
    procedure disconnectMIDI_from (sourceNode: AVAudioNode; destinationNode: AVAudioNode); message 'disconnectMIDI:from:'; { available in macos , ios , watchos , tvos  }
    procedure disconnectMIDI_fromNodes (sourceNode: AVAudioNode; destinationNodes: NSArray); message 'disconnectMIDI:fromNodes:'; { available in macos , ios , watchos , tvos  }
    procedure disconnectMIDIInput (node: AVAudioNode); message 'disconnectMIDIInput:'; { available in macos , ios , watchos , tvos  }
    procedure disconnectMIDIOutput (node: AVAudioNode); message 'disconnectMIDIOutput:'; { available in macos , ios , watchos , tvos  }
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioEngineConfigurationChangeNotification: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

