{ Parsed from AVFAudio.framework AVAudioEnvironmentNode.h }

{$ifdef TYPES}
type
  AVAudioEnvironmentDistanceAttenuationParametersPtr = ^AVAudioEnvironmentDistanceAttenuationParameters;
  AVAudioEnvironmentReverbParametersPtr = ^AVAudioEnvironmentReverbParameters;
  AVAudioEnvironmentNodePtr = ^AVAudioEnvironmentNode;
{$endif}

{$ifdef TYPES}
type
  AVAudioEnvironmentDistanceAttenuationModel = NSInteger;
  AVAudioEnvironmentDistanceAttenuationModelPtr = ^AVAudioEnvironmentDistanceAttenuationModel;

const
  AVAudioEnvironmentDistanceAttenuationModelExponential = 1;
  AVAudioEnvironmentDistanceAttenuationModelInverse = 2;
  AVAudioEnvironmentDistanceAttenuationModelLinear = 3;
{$endif}

{$ifdef CLASSES}

type
  AVAudioEnvironmentDistanceAttenuationParameters = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function init: id; message 'init';
    procedure setDistanceAttenuationModel(newValue: AVAudioEnvironmentDistanceAttenuationModel); message 'setDistanceAttenuationModel:';
    function distanceAttenuationModel: AVAudioEnvironmentDistanceAttenuationModel; message 'distanceAttenuationModel';
    procedure setReferenceDistance(newValue: single); message 'setReferenceDistance:';
    function referenceDistance: single; message 'referenceDistance';
    procedure setMaximumDistance(newValue: single); message 'setMaximumDistance:';
    function maximumDistance: single; message 'maximumDistance';
    procedure setRolloffFactor(newValue: single); message 'setRolloffFactor:';
    function rolloffFactor: single; message 'rolloffFactor';
  end;

type
  AVAudioEnvironmentReverbParameters = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function init: id; message 'init';
    procedure setEnable(newValue: objcbool); message 'setEnable:';
    function enable: objcbool; message 'enable';
    procedure setLevel(newValue: single); message 'setLevel:';
    function level: single; message 'level';
    function filterParameters: AVAudioUnitEQFilterParameters; message 'filterParameters';
    procedure loadFactoryReverbPreset (preset: AVAudioUnitReverbPreset); message 'loadFactoryReverbPreset:';
  end;
{$endif}

{$ifdef TYPES}
type
  AVAudioEnvironmentOutputType = NSInteger;
  AVAudioEnvironmentOutputTypePtr = ^AVAudioEnvironmentOutputType;

const
  AVAudioEnvironmentOutputTypeAuto = 0;
  AVAudioEnvironmentOutputTypeHeadphones = 1;
  AVAudioEnvironmentOutputTypeBuiltInSpeakers = 2;
  AVAudioEnvironmentOutputTypeExternalSpeakers = 3;
{$endif}

{$ifdef CLASSES}

type
  AVAudioEnvironmentNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setOutputType(newValue: AVAudioEnvironmentOutputType); message 'setOutputType:'; { unavailable in watchos }
    function outputType: AVAudioEnvironmentOutputType; message 'outputType'; { unavailable in watchos }
    procedure setOutputVolume(newValue: single); message 'setOutputVolume:';
    function outputVolume: single; message 'outputVolume';
    function nextAvailableInputBus: AVAudioNodeBus; message 'nextAvailableInputBus';
    procedure setListenerPosition(newValue: AVAudio3DPoint); message 'setListenerPosition:';
    function listenerPosition: AVAudio3DPoint; message 'listenerPosition';
    procedure setListenerVectorOrientation(newValue: AVAudio3DVectorOrientation); message 'setListenerVectorOrientation:';
    function listenerVectorOrientation: AVAudio3DVectorOrientation; message 'listenerVectorOrientation';
    procedure setListenerAngularOrientation(newValue: AVAudio3DAngularOrientation); message 'setListenerAngularOrientation:';
    function listenerAngularOrientation: AVAudio3DAngularOrientation; message 'listenerAngularOrientation';
    function distanceAttenuationParameters: AVAudioEnvironmentDistanceAttenuationParameters; message 'distanceAttenuationParameters';
    function reverbParameters: AVAudioEnvironmentReverbParameters; message 'reverbParameters';
    function applicableRenderingAlgorithms: NSArray; message 'applicableRenderingAlgorithms';

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

