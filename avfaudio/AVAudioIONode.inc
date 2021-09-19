{ Parsed from AVFAudio.framework AVAudioIONode.h }

{ Types from AVAudioIONode }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioIONodePtr = ^AVAudioIONode;
  AVAudioInputNodePtr = ^AVAudioInputNode;
  AVAudioOutputNodePtr = ^AVAudioOutputNode;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOIONODE_HAVE_AUDIOUNIT = 1;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVAudioIONodeInputBlock = reference to function (inNumberOfFrames: AVAudioFrameCount): AudioBufferListPtr; cblock; cdecl { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 };
{$endif}

{$ifdef CLASSES}

type
  AVAudioIONode = objcclass external (AVAudioNode)
  public
    function presentationLatency: NSTimeInterval; message 'presentationLatency';
    {$if defined(AVAUDIOIONODE_HAVE_AUDIOUNIT)}
    function audioUnit: AudioUnit; message 'audioUnit';
    {$endif}
    function isVoiceProcessingEnabled: objcbool; message 'isVoiceProcessingEnabled'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function setVoiceProcessingEnabled_error (enabled: objcbool; outError: NSErrorPtr): objcbool; message 'setVoiceProcessingEnabled:error:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
  end;

type
  AVAudioInputNode = objcclass external (AVAudioIONode, AVAudioMixingProtocol)
  public
    function init: id; message 'init';
    function setManualRenderingInputPCMFormat_inputBlock (format: AVAudioFormat; block: AVAudioIONodeInputBlock): objcbool; message 'setManualRenderingInputPCMFormat:inputBlock:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setVoiceProcessingBypassed(newValue: objcbool); message 'setVoiceProcessingBypassed:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isVoiceProcessingBypassed: objcbool; message 'isVoiceProcessingBypassed'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure setVoiceProcessingAGCEnabled(newValue: objcbool); message 'setVoiceProcessingAGCEnabled:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isVoiceProcessingAGCEnabled: objcbool; message 'isVoiceProcessingAGCEnabled'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure setVoiceProcessingInputMuted(newValue: objcbool); message 'setVoiceProcessingInputMuted:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isVoiceProcessingInputMuted: objcbool; message 'isVoiceProcessingInputMuted'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }

    { Adopted protocols }
    function destinationForMixer_bus (mixer: AVAudioNode; bus: AVAudioNodeBus): AVAudioMixingDestination; message 'destinationForMixer:bus:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function obstruction: single; message 'obstruction'; { unavailable in watchos }
    function occlusion: single; message 'occlusion'; { unavailable in watchos }
    function pan: single; message 'pan';
    function pointSourceInHeadMode: AVAudio3DMixingPointSourceInHeadMode; message 'pointSourceInHeadMode'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
    function position: AVAudio3DPoint; message 'position'; { unavailable in watchos }
    function rate: single; message 'rate'; { unavailable in watchos }
    function renderingAlgorithm: AVAudio3DMixingRenderingAlgorithm; message 'renderingAlgorithm'; { unavailable in watchos }
    function reverbBlend: single; message 'reverbBlend'; { unavailable in watchos }
    procedure setObstruction (newValue: single); message 'setObstruction:'; { unavailable in watchos }
    procedure setOcclusion (newValue: single); message 'setOcclusion:'; { unavailable in watchos }
    procedure setPan (newValue: single); message 'setPan:';
    procedure setPointSourceInHeadMode (newValue: AVAudio3DMixingPointSourceInHeadMode); message 'setPointSourceInHeadMode:'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
    procedure setPosition (newValue: AVAudio3DPoint); message 'setPosition:'; { unavailable in watchos }
    procedure setRate (newValue: single); message 'setRate:'; { unavailable in watchos }
    procedure setRenderingAlgorithm (newValue: AVAudio3DMixingRenderingAlgorithm); message 'setRenderingAlgorithm:'; { unavailable in watchos }
    procedure setReverbBlend (newValue: single); message 'setReverbBlend:'; { unavailable in watchos }
    procedure setSourceMode (newValue: AVAudio3DMixingSourceMode); message 'setSourceMode:'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
    procedure setVolume (newValue: single); message 'setVolume:';
    function sourceMode: AVAudio3DMixingSourceMode; message 'sourceMode'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
    function volume: single; message 'volume';
  end;

type
  AVAudioOutputNode = objcclass external (AVAudioIONode)
  public
    function init: id; message 'init';
  end;
{$endif}

