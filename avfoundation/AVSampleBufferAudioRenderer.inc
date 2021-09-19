{ Parsed from AVFoundation.framework AVSampleBufferAudioRenderer.h }

{$ifdef CALLBACKS}
type
  AVSampleBufferAudioRendererFlushFromSourceTimeCallback = reference to procedure (flushSucceeded: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVSampleBufferAudioRendererPtr = ^AVSampleBufferAudioRenderer;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVSampleBufferAudioRenderer = objcclass external (NSObject, AVQueuedSampleBufferRenderingProtocol)
  private
    _audioRendererInternal: AVSampleBufferAudioRendererInternal;
  public
    function status: AVQueuedSampleBufferRenderingStatus; message 'status';
    function error: NSError; message 'error';
    procedure setAudioOutputDeviceUniqueID(newValue: NSString); message 'setAudioOutputDeviceUniqueID:'; { unavailable in ios, tvos, watchos } { available in macos 10.13 }
    function audioOutputDeviceUniqueID: NSString; message 'audioOutputDeviceUniqueID'; { unavailable in ios, tvos, watchos } { available in macos 10.13 }
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:';
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm';

    { Adopted protocols }
    procedure enqueueSampleBuffer (sampleBuffer: CMSampleBufferRef); message 'enqueueSampleBuffer:';
    procedure flush; message 'flush';
    function hasSufficientMediaDataForReliablePlaybackStart: objcbool; message 'hasSufficientMediaDataForReliablePlaybackStart'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
    function isReadyForMoreMediaData: objcbool; message 'isReadyForMoreMediaData';
    procedure requestMediaDataWhenReadyOnQueue_usingBlock (queue: dispatch_queue_t; block: AVQueuedSampleBufferRenderingRequestMediaDataWhenReadyOnQueueCallback); message 'requestMediaDataWhenReadyOnQueue:usingBlock:';
    procedure stopRequestingMediaData; message 'stopRequestingMediaData';
    function timebase: CMTimebaseRef; message 'timebase';
  end;


type
  AVSampleBufferAudioRendererVolumeControl = objccategory external (AVSampleBufferAudioRenderer)
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setMuted(newValue: objcbool); message 'setMuted:';
    function isMuted: objcbool; message 'isMuted';
  end;

type
  AVSampleBufferAudioRendererQueueManagement = objccategory external (AVSampleBufferAudioRenderer)
    procedure flushFromSourceTime_completionHandler (time: CMTime; completionHandler: AVSampleBufferAudioRendererFlushFromSourceTimeCallback); message 'flushFromSourceTime:completionHandler:';
  end;
{$endif}

{$else}
{$endif}
