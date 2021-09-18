{ Parsed from AVFAudio.framework AVAudioMixing.h }

{$ifdef TYPES}
type
  AVAudioMixingDestinationPtr = ^AVAudioMixingDestination;
  AVAudioMixingProtocolPtr = ^AVAudioMixingProtocol;
  AVAudioStereoMixingProtocolPtr = ^AVAudioStereoMixingProtocol;
  AVAudio3DMixingProtocolPtr = ^AVAudio3DMixingProtocol;
{$endif}

{$ifdef PROTOCOLS}
type
  AVAudio3DMixingProtocol = objcprotocol external name 'AVAudio3DMixing' (NSObjectProtocol)
    procedure setRenderingAlgorithm(newValue: AVAudio3DMixingRenderingAlgorithm); message 'setRenderingAlgorithm:'; { unavailable in watchos }
    function renderingAlgorithm: AVAudio3DMixingRenderingAlgorithm; message 'renderingAlgorithm'; { unavailable in watchos }
    procedure setSourceMode(newValue: AVAudio3DMixingSourceMode); message 'setSourceMode:'; { unavailable in watchos }
    function sourceMode: AVAudio3DMixingSourceMode; message 'sourceMode'; { unavailable in watchos }
    procedure setPointSourceInHeadMode(newValue: AVAudio3DMixingPointSourceInHeadMode); message 'setPointSourceInHeadMode:'; { unavailable in watchos }
    function pointSourceInHeadMode: AVAudio3DMixingPointSourceInHeadMode; message 'pointSourceInHeadMode'; { unavailable in watchos }
    procedure setRate(newValue: single); message 'setRate:'; { unavailable in watchos }
    function rate: single; message 'rate'; { unavailable in watchos }
    procedure setReverbBlend(newValue: single); message 'setReverbBlend:'; { unavailable in watchos }
    function reverbBlend: single; message 'reverbBlend'; { unavailable in watchos }
    procedure setObstruction(newValue: single); message 'setObstruction:'; { unavailable in watchos }
    function obstruction: single; message 'obstruction'; { unavailable in watchos }
    procedure setOcclusion(newValue: single); message 'setOcclusion:'; { unavailable in watchos }
    function occlusion: single; message 'occlusion'; { unavailable in watchos }
    procedure setPosition(newValue: AVAudio3DPoint); message 'setPosition:'; { unavailable in watchos }
    function position: AVAudio3DPoint; message 'position'; { unavailable in watchos }
  end;

type
  AVAudioStereoMixingProtocol = objcprotocol external name 'AVAudioStereoMixing' (NSObjectProtocol)
    procedure setPan(newValue: single); message 'setPan:';
    function pan: single; message 'pan';
  end;

type
  AVAudioMixingProtocol = objcprotocol external name 'AVAudioMixing' (AVAudioStereoMixingProtocol, AVAudio3DMixingProtocol)
    function destinationForMixer_bus (mixer: AVAudioNode; bus: AVAudioNodeBus): AVAudioMixingDestination; message 'destinationForMixer:bus:'; { available in macos , ios , watchos , tvos  }
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;
{$endif}

{$ifdef TYPES}
type
  AVAudio3DMixingRenderingAlgorithm = NSInteger;
  AVAudio3DMixingRenderingAlgorithmPtr = ^AVAudio3DMixingRenderingAlgorithm;

const
  AVAudio3DMixingRenderingAlgorithmEqualPowerPanning = 0;
  AVAudio3DMixingRenderingAlgorithmSphericalHead = 1;
  AVAudio3DMixingRenderingAlgorithmHRTF = 2;
  AVAudio3DMixingRenderingAlgorithmSoundField = 3;
  AVAudio3DMixingRenderingAlgorithmStereoPassThrough = 5;
  AVAudio3DMixingRenderingAlgorithmHRTFHQ = 6;
  AVAudio3DMixingRenderingAlgorithmAuto = 7 { unavailable in watchos };

type
  AVAudio3DMixingSourceMode = NSInteger;
  AVAudio3DMixingSourceModePtr = ^AVAudio3DMixingSourceMode;

const
  AVAudio3DMixingSourceModeSpatializeIfMono = 0;
  AVAudio3DMixingSourceModeBypass = 1;
  AVAudio3DMixingSourceModePointSource = 2;
  AVAudio3DMixingSourceModeAmbienceBed = 3;

type
  AVAudio3DMixingPointSourceInHeadMode = NSInteger;
  AVAudio3DMixingPointSourceInHeadModePtr = ^AVAudio3DMixingPointSourceInHeadMode;

const
  AVAudio3DMixingPointSourceInHeadModeMono = 0;
  AVAudio3DMixingPointSourceInHeadModeBypass = 1;
{$endif}

{$ifdef CLASSES}

type
  AVAudioMixingDestination = objcclass external (NSObject, AVAudioMixingProtocol)
  private
    _impl: pointer;
  public
    function init: id; message 'init';
    function connectionPoint: AVAudioConnectionPoint; message 'connectionPoint';

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

