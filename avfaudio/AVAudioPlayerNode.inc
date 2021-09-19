{ Parsed from AVFAudio.framework AVAudioPlayerNode.h }

{$ifdef TYPES}
type
  AVAudioPlayerNodePtr = ^AVAudioPlayerNode;
{$endif}

{$ifdef TYPES}
type
  AVAudioPlayerNodeBufferOptions = NSUInteger;
  AVAudioPlayerNodeBufferOptionsPtr = ^AVAudioPlayerNodeBufferOptions;

const
  AVAudioPlayerNodeBufferLoops = 1 shl 0;
  AVAudioPlayerNodeBufferInterrupts = 1 shl 1;
  AVAudioPlayerNodeBufferInterruptsAtLoop = 1 shl 2;

type
  AVAudioPlayerNodeCompletionCallbackType = NSInteger;
  AVAudioPlayerNodeCompletionCallbackTypePtr = ^AVAudioPlayerNodeCompletionCallbackType;

const
  AVAudioPlayerNodeCompletionDataConsumed = 0;
  AVAudioPlayerNodeCompletionDataRendered = 1;
  AVAudioPlayerNodeCompletionDataPlayedBack = 2;

type
  AVAudioPlayerNodeCompletionHandler = reference to procedure (callbackType: AVAudioPlayerNodeCompletionCallbackType); cblock; cdecl { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 };
{$endif}

{$ifdef CLASSES}

type
  AVAudioPlayerNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure scheduleBuffer_completionHandler (buffer: AVAudioPCMBuffer; completionHandler: AVAudioNodeCompletionHandler); message 'scheduleBuffer:completionHandler:';
    procedure scheduleBuffer_completionCallbackType_completionHandler (buffer: AVAudioPCMBuffer; callbackType: AVAudioPlayerNodeCompletionCallbackType; completionHandler: AVAudioPlayerNodeCompletionHandler); message 'scheduleBuffer:completionCallbackType:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure scheduleBuffer_atTime_options_completionHandler (buffer: AVAudioPCMBuffer; when: AVAudioTime; options: AVAudioPlayerNodeBufferOptions; completionHandler: AVAudioNodeCompletionHandler); message 'scheduleBuffer:atTime:options:completionHandler:';
    procedure scheduleBuffer_atTime_options_completionCallbackType_completionHandler (buffer: AVAudioPCMBuffer; when: AVAudioTime; options: AVAudioPlayerNodeBufferOptions; callbackType: AVAudioPlayerNodeCompletionCallbackType; completionHandler: AVAudioPlayerNodeCompletionHandler); message 'scheduleBuffer:atTime:options:completionCallbackType:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure scheduleFile_atTime_completionHandler (file_: AVAudioFile; when: AVAudioTime; completionHandler: AVAudioNodeCompletionHandler); message 'scheduleFile:atTime:completionHandler:';
    procedure scheduleFile_atTime_completionCallbackType_completionHandler (file_: AVAudioFile; when: AVAudioTime; callbackType: AVAudioPlayerNodeCompletionCallbackType; completionHandler: AVAudioPlayerNodeCompletionHandler); message 'scheduleFile:atTime:completionCallbackType:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure scheduleSegment_startingFrame_frameCount_atTime_completionHandler (file_: AVAudioFile; startFrame: AVAudioFramePosition; numberFrames: AVAudioFrameCount; when: AVAudioTime; completionHandler: AVAudioNodeCompletionHandler); message 'scheduleSegment:startingFrame:frameCount:atTime:completionHandler:';
    procedure scheduleSegment_startingFrame_frameCount_atTime_completionCallbackType_completionHandler (file_: AVAudioFile; startFrame: AVAudioFramePosition; numberFrames: AVAudioFrameCount; when: AVAudioTime; callbackType: AVAudioPlayerNodeCompletionCallbackType; completionHandler: AVAudioPlayerNodeCompletionHandler); message 'scheduleSegment:startingFrame:frameCount:atTime:completionCallbackType:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure stop; message 'stop';
    procedure prepareWithFrameCount (frameCount: AVAudioFrameCount); message 'prepareWithFrameCount:';
    procedure play; message 'play';
    procedure playAtTime (when: AVAudioTime); message 'playAtTime:';
    procedure pause; message 'pause';
    function nodeTimeForPlayerTime (playerTime: AVAudioTime): AVAudioTime; message 'nodeTimeForPlayerTime:';
    function playerTimeForNodeTime (nodeTime: AVAudioTime): AVAudioTime; message 'playerTimeForNodeTime:';
    function isPlaying: objcbool; message 'isPlaying';

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
{$endif}

