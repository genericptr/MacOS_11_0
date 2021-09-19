{ Parsed from AVFAudio.framework AVAudioRecorder.h }

{ Types from AVAudioRecorderDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioRecorderPtr = ^AVAudioRecorder;
  AVAudioRecorderDelegateProtocolPtr = ^AVAudioRecorderDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVAudioRecorder = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function initWithURL_settings_error (url: NSURL; settings: NSDictionary; outError: NSErrorPtr): id; message 'initWithURL:settings:error:';
    function initWithURL_format_error (url: NSURL; format: AVAudioFormat; outError: NSErrorPtr): id; message 'initWithURL:format:error:'; { unavailable in tvos } { available in macos 10.12, ios 10.0, watchos 4.0 }
    function prepareToRecord: objcbool; message 'prepareToRecord';
    function record_: objcbool; message 'record';
    function recordAtTime (time: NSTimeInterval): objcbool; message 'recordAtTime:'; { unavailable in tvos } { available in macos 10.9, ios 6.0, watchos 4.0 }
    function recordForDuration (duration: NSTimeInterval): objcbool; message 'recordForDuration:';
    function recordAtTime_forDuration (time: NSTimeInterval; duration: NSTimeInterval): objcbool; message 'recordAtTime:forDuration:'; { unavailable in tvos } { available in macos 10.9, ios 6.0, watchos 4.0 }
    procedure pause; message 'pause';
    procedure stop; message 'stop';
    function deleteRecording: objcbool; message 'deleteRecording';
    function isRecording: objcbool; message 'isRecording';
    function url: NSURL; message 'url';
    function settings: NSDictionary; message 'settings';
    function format: AVAudioFormat; message 'format'; { unavailable in tvos } { available in macos 10.12, ios 10.0, watchos 4.0 }
    procedure setDelegate(newValue: AVAudioRecorderDelegateProtocol); message 'setDelegate:';
    function delegate: AVAudioRecorderDelegateProtocol; message 'delegate';
    function currentTime: NSTimeInterval; message 'currentTime';
    function deviceCurrentTime: NSTimeInterval; message 'deviceCurrentTime'; { unavailable in tvos } { available in macos 10.9, ios 6.0, watchos 4.0 }
    procedure setMeteringEnabled(newValue: objcbool); message 'setMeteringEnabled:';
    function isMeteringEnabled: objcbool; message 'isMeteringEnabled';
    procedure updateMeters; message 'updateMeters';
    function peakPowerForChannel (channelNumber: NSUInteger): single; message 'peakPowerForChannel:';
    function averagePowerForChannel (channelNumber: NSUInteger): single; message 'averagePowerForChannel:';
    procedure setChannelAssignments(newValue: NSArray); message 'setChannelAssignments:'; { unavailable in macos } { unavailable in tvos }
    function channelAssignments: NSArray; message 'channelAssignments'; { unavailable in macos } { unavailable in tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioRecorderDelegateProtocol = objcprotocol external name 'AVAudioRecorderDelegate' (NSObjectProtocol)
  optional
    procedure audioRecorderDidFinishRecording_successfully (recorder: AVAudioRecorder; flag: objcbool); message 'audioRecorderDidFinishRecording:successfully:';
    procedure audioRecorderEncodeErrorDidOccur_error (recorder: AVAudioRecorder; error: NSError); message 'audioRecorderEncodeErrorDidOccur:error:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure audioRecorderBeginInterruption (recorder: AVAudioRecorder); message 'audioRecorderBeginInterruption:'; deprecated 'in 2_2, 8_0';
    procedure audioRecorderEndInterruption_withOptions (recorder: AVAudioRecorder; flags: NSUInteger); message 'audioRecorderEndInterruption:withOptions:'; deprecated 'in 6_0, 8_0';
    procedure audioRecorderEndInterruption_withFlags (recorder: AVAudioRecorder; flags: NSUInteger); message 'audioRecorderEndInterruption:withFlags:'; deprecated 'in 4_0, 6_0';
    procedure audioRecorderEndInterruption (recorder: AVAudioRecorder); message 'audioRecorderEndInterruption:'; deprecated 'in 2_2, 6_0';
    {$endif}
  end;
{$endif}

