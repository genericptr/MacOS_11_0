{ Parsed from AVFAudio.framework AVAudioTime.h }

{$ifdef TYPES}
type
  AVAudioTimePtr = ^AVAudioTime;
{$endif}

{$ifdef CLASSES}

type
  AVAudioTime = objcclass external (NSObject)
  private
    _ats: AudioTimeStamp;
    _sampleRate: double;
    _reserved: pointer;
  public
    function initWithAudioTimeStamp_sampleRate (ts: AudioTimeStampPtr; sampleRate: double): id; message 'initWithAudioTimeStamp:sampleRate:';
    function initWithHostTime (hostTime: cuint64): id; message 'initWithHostTime:';
    function initWithSampleTime_atRate (sampleTime: AVAudioFramePosition; sampleRate: double): id; message 'initWithSampleTime:atRate:';
    function initWithHostTime_sampleTime_atRate (hostTime: cuint64; sampleTime: AVAudioFramePosition; sampleRate: double): id; message 'initWithHostTime:sampleTime:atRate:';
    class function timeWithAudioTimeStamp_sampleRate (ts: AudioTimeStampPtr; sampleRate: double): id; message 'timeWithAudioTimeStamp:sampleRate:';
    class function timeWithHostTime (hostTime: cuint64): id; message 'timeWithHostTime:';
    class function timeWithSampleTime_atRate (sampleTime: AVAudioFramePosition; sampleRate: double): id; message 'timeWithSampleTime:atRate:';
    class function timeWithHostTime_sampleTime_atRate (hostTime: cuint64; sampleTime: AVAudioFramePosition; sampleRate: double): id; message 'timeWithHostTime:sampleTime:atRate:';
    class function hostTimeForSeconds (seconds: NSTimeInterval): cuint64; message 'hostTimeForSeconds:';
    class function secondsForHostTime (hostTime: cuint64): NSTimeInterval; message 'secondsForHostTime:';
    function extrapolateTimeFromAnchor (anchorTime: AVAudioTime): AVAudioTime; message 'extrapolateTimeFromAnchor:';
    function isHostTimeValid: objcbool; message 'isHostTimeValid';
    function hostTime: cuint64; message 'hostTime';
    function isSampleTimeValid: objcbool; message 'isSampleTimeValid';
    function sampleTime: AVAudioFramePosition; message 'sampleTime';
    function sampleRate: double; message 'sampleRate';
    function audioTimeStamp: AudioTimeStamp; message 'audioTimeStamp';
  end;
{$endif}

