{ Parsed from AVFAudio.framework AVAudioSourceNode.h }

{$ifdef TYPES}
type
  AVAudioSourceNodePtr = ^AVAudioSourceNode;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  AVAudioSourceNodeRenderBlock = reference to function (isSilence: objcboolPtr; timestamp: AudioTimeStampPtr; frameCount: AVAudioFrameCount; outputData: AudioBufferListPtr): OSStatus; cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef CLASSES}

type
  AVAudioSourceNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    function init: id; message 'init';
    function initWithRenderBlock (block: AVAudioSourceNodeRenderBlock): id; message 'initWithRenderBlock:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFormat_renderBlock (format: AVAudioFormat; block: AVAudioSourceNodeRenderBlock): id; message 'initWithFormat:renderBlock:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function destinationForMixer_bus (mixer: AVAudioNode; bus: AVAudioNodeBus): AVAudioMixingDestination; message 'destinationForMixer:bus:'; { available in macos , ios , watchos , tvos  }
    function obstruction: single; message 'obstruction'; { unavailable in watchos }
    function occlusion: single; message 'occlusion'; { unavailable in watchos }
    function pan: single; message 'pan';
    function pointSourceInHeadMode: AVAudio3DMixingPointSourceInHeadMode; message 'pointSourceInHeadMode'; { unavailable in watchos }
    function position: AVAudio3DPoint; message 'position'; { unavailable in watchos }
    function rate: single; message 'rate'; { unavailable in watchos }
    function renderingAlgorithm: AVAudio3DMixingRenderingAlgorithm; message 'renderingAlgorithm'; { unavailable in watchos }
    function reverbBlend: single; message 'reverbBlend'; { unavailable in watchos }
    procedure setObstruction (newValue: single); message 'setObstruction:'; { unavailable in watchos }
    procedure setOcclusion (newValue: single); message 'setOcclusion:'; { unavailable in watchos }
    procedure setPan (newValue: single); message 'setPan:';
    procedure setPointSourceInHeadMode (newValue: AVAudio3DMixingPointSourceInHeadMode); message 'setPointSourceInHeadMode:'; { unavailable in watchos }
    procedure setPosition (newValue: AVAudio3DPoint); message 'setPosition:'; { unavailable in watchos }
    procedure setRate (newValue: single); message 'setRate:'; { unavailable in watchos }
    procedure setRenderingAlgorithm (newValue: AVAudio3DMixingRenderingAlgorithm); message 'setRenderingAlgorithm:'; { unavailable in watchos }
    procedure setReverbBlend (newValue: single); message 'setReverbBlend:'; { unavailable in watchos }
    procedure setSourceMode (newValue: AVAudio3DMixingSourceMode); message 'setSourceMode:'; { unavailable in watchos }
    procedure setVolume (newValue: single); message 'setVolume:';
    function sourceMode: AVAudio3DMixingSourceMode; message 'sourceMode'; { unavailable in watchos }
    function volume: single; message 'volume';
  end;
{$endif}

{$endif}
