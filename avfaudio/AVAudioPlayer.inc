{ Parsed from AVFAudio.framework AVAudioPlayer.h }

{ Types from AVAudioPlayerDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioPlayerPtr = ^AVAudioPlayer;
  AVAudioPlayerDelegateProtocolPtr = ^AVAudioPlayerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVAudioPlayer = objcclass external (NSObject)
  private
    _impl: id;
  public
    function initWithContentsOfURL_error (url: NSURL; outError: NSErrorPtr): id; message 'initWithContentsOfURL:error:';
    function initWithData_error (data: NSData; outError: NSErrorPtr): id; message 'initWithData:error:';
    function initWithContentsOfURL_fileTypeHint_error (url: NSURL; utiString: NSString; outError: NSErrorPtr): id; message 'initWithContentsOfURL:fileTypeHint:error:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function initWithData_fileTypeHint_error (data: NSData; utiString: NSString; outError: NSErrorPtr): id; message 'initWithData:fileTypeHint:error:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function prepareToPlay: objcbool; message 'prepareToPlay';
    function play: objcbool; message 'play';
    function playAtTime (time: NSTimeInterval): objcbool; message 'playAtTime:'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure pause; message 'pause';
    procedure stop; message 'stop';
    function isPlaying: objcbool; message 'isPlaying';
    function numberOfChannels: NSUInteger; message 'numberOfChannels';
    function duration: NSTimeInterval; message 'duration';
    procedure setCurrentDevice(newValue: NSString); message 'setCurrentDevice:'; { unavailable in ios, watchos, tvos } { available in macos 10.13 }
    function currentDevice: NSString; message 'currentDevice'; { unavailable in ios, watchos, tvos } { available in macos 10.13 }
    procedure setDelegate(newValue: AVAudioPlayerDelegateProtocol); message 'setDelegate:';
    function delegate: AVAudioPlayerDelegateProtocol; message 'delegate';
    function url: NSURL; message 'url';
    function data: NSData; message 'data';
    procedure setPan(newValue: single); message 'setPan:'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    function pan: single; message 'pan'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setVolume_fadeDuration (volume_: single; duration_: NSTimeInterval); message 'setVolume:fadeDuration:'; { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    procedure setEnableRate(newValue: objcbool); message 'setEnableRate:'; { available in macos 10.8, ios 5.0, watchos 2.0, tvos 9.0 }
    function enableRate: objcbool; message 'enableRate'; { available in macos 10.8, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure setRate(newValue: single); message 'setRate:'; { available in macos 10.8, ios 5.0, watchos 2.0, tvos 9.0 }
    function rate: single; message 'rate'; { available in macos 10.8, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure setCurrentTime(newValue: NSTimeInterval); message 'setCurrentTime:';
    function currentTime: NSTimeInterval; message 'currentTime';
    function deviceCurrentTime: NSTimeInterval; message 'deviceCurrentTime'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setNumberOfLoops(newValue: NSInteger); message 'setNumberOfLoops:';
    function numberOfLoops: NSInteger; message 'numberOfLoops';
    function settings: NSDictionary; message 'settings'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    function format: AVAudioFormat; message 'format'; { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    procedure setMeteringEnabled(newValue: objcbool); message 'setMeteringEnabled:';
    function isMeteringEnabled: objcbool; message 'isMeteringEnabled';
    procedure updateMeters; message 'updateMeters';
    function peakPowerForChannel (channelNumber: NSUInteger): single; message 'peakPowerForChannel:';
    function averagePowerForChannel (channelNumber: NSUInteger): single; message 'averagePowerForChannel:';
    procedure setChannelAssignments(newValue: NSArray); message 'setChannelAssignments:'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
    function channelAssignments: NSArray; message 'channelAssignments'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioPlayerDelegateProtocol = objcprotocol external name 'AVAudioPlayerDelegate' (NSObjectProtocol)
  optional
    procedure audioPlayerDidFinishPlaying_successfully (player: AVAudioPlayer; flag: objcbool); message 'audioPlayerDidFinishPlaying:successfully:';
    procedure audioPlayerDecodeErrorDidOccur_error (player: AVAudioPlayer; error: NSError); message 'audioPlayerDecodeErrorDidOccur:error:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure audioPlayerBeginInterruption (player: AVAudioPlayer); message 'audioPlayerBeginInterruption:'; deprecated 'in 2_2, 8_0';
    procedure audioPlayerEndInterruption_withOptions (player: AVAudioPlayer; flags: NSUInteger); message 'audioPlayerEndInterruption:withOptions:'; deprecated 'in 6_0, 8_0';
    procedure audioPlayerEndInterruption_withFlags (player: AVAudioPlayer; flags: NSUInteger); message 'audioPlayerEndInterruption:withFlags:'; deprecated 'in 4_0, 6_0';
    procedure audioPlayerEndInterruption (player: AVAudioPlayer); message 'audioPlayerEndInterruption:'; deprecated 'in 2_2, 6_0';
    {$endif}
  end;
{$endif}

