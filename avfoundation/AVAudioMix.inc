{ Parsed from AVFoundation.framework AVAudioMix.h }

{ Types from AVAudioMixInputParameters }
{$ifdef TYPES}

{$endif}


{ Types from AVMutableAudioMixInputParameters }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioMixPtr = ^AVAudioMix;
  AVMutableAudioMixPtr = ^AVMutableAudioMix;
  AVAudioMixInputParametersPtr = ^AVAudioMixInputParameters;
  AVMutableAudioMixInputParametersPtr = ^AVMutableAudioMixInputParameters;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifdef CLASSES}

type
  AVAudioMix = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _audioMix: AVAudioMixInternal;
  public
    function inputParameters: NSArray; message 'inputParameters';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableAudioMix = objcclass external (AVAudioMix)
  private
    _mutableAudioMix: AVMutableAudioMixInternal;
  public
    class function audioMix: id; message 'audioMix';
    procedure setInputParameters(newValue: NSArray); message 'setInputParameters:';
    function inputParameters: NSArray; message 'inputParameters';
  end;

type
  AVAudioMixInputParameters = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _inputParameters: AVAudioMixInputParametersInternal;
  public
    function trackID: CMPersistentTrackID; message 'trackID';
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { available in macos 10.10, ios 7.0, tvos 9.0, watchos 1.0 }
    {$if defined(AVF_AUDIO_PROCESSING_TAP_AVAILABLE)}
    function audioTapProcessor: MTAudioProcessingTapRef; message 'audioTapProcessor'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    {$endif}
    function getVolumeRampForTime_startVolume_endVolume_timeRange (time: CMTime; startVolume: psingle; endVolume: psingle; timeRange: CMTimeRangePtr): objcbool; message 'getVolumeRampForTime:startVolume:endVolume:timeRange:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableAudioMixInputParameters = objcclass external (AVAudioMixInputParameters)
  private
    _mutableInputParameters: AVMutableAudioMixInputParametersInternal;
  public
    class function audioMixInputParametersWithTrack (track: AVAssetTrack): id; message 'audioMixInputParametersWithTrack:';
    class function audioMixInputParameters: id; message 'audioMixInputParameters';
    procedure setTrackID(newValue: CMPersistentTrackID); message 'setTrackID:';
    function trackID: CMPersistentTrackID; message 'trackID';
    procedure setAudioTimePitchAlgorithm(newValue: AVAudioTimePitchAlgorithm); message 'setAudioTimePitchAlgorithm:'; { available in macos 10.10, ios 7.0, tvos 9.0, watchos 1.0 }
    function audioTimePitchAlgorithm: AVAudioTimePitchAlgorithm; message 'audioTimePitchAlgorithm'; { available in macos 10.10, ios 7.0, tvos 9.0, watchos 1.0 }
    {$if defined(AVF_AUDIO_PROCESSING_TAP_AVAILABLE)}
    procedure setAudioTapProcessor(newValue: MTAudioProcessingTapRef); message 'setAudioTapProcessor:'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    function audioTapProcessor: MTAudioProcessingTapRef; message 'audioTapProcessor'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
    {$endif}
    procedure setVolumeRampFromStartVolume_toEndVolume_timeRange (startVolume: single; endVolume: single; timeRange: CMTimeRange); message 'setVolumeRampFromStartVolume:toEndVolume:timeRange:';
    procedure setVolume_atTime (volume: single; time: CMTime); message 'setVolume:atTime:';
  end;
{$endif}

{$else}
{$endif}
