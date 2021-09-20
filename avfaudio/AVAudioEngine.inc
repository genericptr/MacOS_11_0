{ Parsed from AVFAudio.framework AVAudioEngine.h }

{$ifdef TYPES}
type
  AVAudioEnginePtr = ^AVAudioEngine;
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
  AVAudioEngineManualRenderingBlock = reference to function (numberOfFrames: AVAudioFrameCount; outBuffer: AudioBufferListPtr; outError: OSStatusPtr): AVAudioEngineManualRenderingStatus; cblock; cdecl { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 };
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
    procedure connect_toConnectionPoints_fromBus_format (sourceNode: AVAudioNode; destNodes: NSArray; sourceBus: AVAudioNodeBus; format: AVAudioFormat); message 'connect:toConnectionPoints:fromBus:format:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure disconnectNodeInput_bus (node: AVAudioNode; bus: AVAudioNodeBus); message 'disconnectNodeInput:bus:';
    procedure disconnectNodeInput (node: AVAudioNode); message 'disconnectNodeInput:';
    procedure disconnectNodeOutput_bus (node: AVAudioNode; bus: AVAudioNodeBus); message 'disconnectNodeOutput:bus:';
    procedure disconnectNodeOutput (node: AVAudioNode); message 'disconnectNodeOutput:';
    procedure prepare; message 'prepare';
    function startAndReturnError (outError: NSErrorPtr): objcbool; message 'startAndReturnError:';
    procedure pause; message 'pause';
    procedure reset; message 'reset';
    procedure stop; message 'stop';
    function inputConnectionPointForNode_inputBus (node: AVAudioNode; bus: AVAudioNodeBus): AVAudioConnectionPoint; message 'inputConnectionPointForNode:inputBus:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function outputConnectionPointsForNode_outputBus (node: AVAudioNode; bus: AVAudioNodeBus): NSArray; message 'outputConnectionPointsForNode:outputBus:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    {$if defined(AVAUDIOENGINE_HAVE_MUSICPLAYER)}
    procedure setMusicSequence(newValue: MusicSequence); message 'setMusicSequence:';
    function musicSequence: MusicSequence; message 'musicSequence';
    {$endif}
    function outputNode: AVAudioOutputNode; message 'outputNode';
    function inputNode: AVAudioInputNode; message 'inputNode'; { available in macos 10.10, ios 8.0, watchos 4.0, tvos 11.0 }
    function mainMixerNode: AVAudioMixerNode; message 'mainMixerNode';
    function isRunning: objcbool; message 'isRunning';
    procedure setAutoShutdownEnabled(newValue: objcbool); message 'setAutoShutdownEnabled:'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    function isAutoShutdownEnabled: objcbool; message 'isAutoShutdownEnabled'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    function attachedNodes: NSSet; message 'attachedNodes'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function enableManualRenderingMode_format_maximumFrameCount_error (mode: AVAudioEngineManualRenderingMode; pcmFormat: AVAudioFormat; maximumFrameCount: AVAudioFrameCount; outError: NSErrorPtr): objcbool; message 'enableManualRenderingMode:format:maximumFrameCount:error:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure disableManualRenderingMode; message 'disableManualRenderingMode'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function renderOffline_toBuffer_error (numberOfFrames: AVAudioFrameCount; buffer: AVAudioPCMBuffer; outError: NSErrorPtr): AVAudioEngineManualRenderingStatus; message 'renderOffline:toBuffer:error:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function manualRenderingBlock: AVAudioEngineManualRenderingBlock; message 'manualRenderingBlock'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function isInManualRenderingMode: objcbool; message 'isInManualRenderingMode'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function manualRenderingMode: AVAudioEngineManualRenderingMode; message 'manualRenderingMode'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function manualRenderingFormat: AVAudioFormat; message 'manualRenderingFormat'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function manualRenderingMaximumFrameCount: AVAudioFrameCount; message 'manualRenderingMaximumFrameCount'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function manualRenderingSampleTime: AVAudioFramePosition; message 'manualRenderingSampleTime'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    {$if defined(AVAUDIOENGINE_HAVE_AUAUDIOUNIT)}
    procedure connectMIDI_to_format_block (sourceNode: AVAudioNode; destinationNode: AVAudioNode; format: AVAudioFormat; tapBlock: AUMIDIOutputEventBlock); message 'connectMIDI:to:format:block:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    procedure connectMIDI_toNodes_format_block (sourceNode: AVAudioNode; destinationNodes: NSArray; format: AVAudioFormat; tapBlock: AUMIDIOutputEventBlock); message 'connectMIDI:toNodes:format:block:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    procedure disconnectMIDI_from (sourceNode: AVAudioNode; destinationNode: AVAudioNode); message 'disconnectMIDI:from:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    procedure disconnectMIDI_fromNodes (sourceNode: AVAudioNode; destinationNodes: NSArray); message 'disconnectMIDI:fromNodes:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    procedure disconnectMIDIInput (node: AVAudioNode); message 'disconnectMIDIInput:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    procedure disconnectMIDIOutput (node: AVAudioNode); message 'disconnectMIDIOutput:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioEngineConfigurationChangeNotification: NSString { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

