{ Parsed from AVFAudio.framework AVAudioFormat.h }

{ Types from AVAudioFormat }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  AVAudioFormatPtr = ^AVAudioFormat;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOFORMAT_HAVE_CMFORMATDESCRIPTION = 1;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVAudioCommonFormat = NSUInteger;
  AVAudioCommonFormatPtr = ^AVAudioCommonFormat;

const
  AVAudioOtherFormat = 0;
  AVAudioPCMFormatFloat32 = 1;
  AVAudioPCMFormatFloat64 = 2;
  AVAudioPCMFormatInt16 = 3;
  AVAudioPCMFormatInt32 = 4;
{$endif}

{$ifdef CLASSES}

type
  AVAudioFormat = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _asbd: AudioStreamBasicDescription;
    _layout: AVAudioChannelLayout;
    _commonFormat: AVAudioCommonFormat;
    _reserved: pointer;
  public
    function initWithStreamDescription (asbd: AudioStreamBasicDescriptionPtr): id; message 'initWithStreamDescription:';
    function initWithStreamDescription_channelLayout (asbd: AudioStreamBasicDescriptionPtr; layout: AVAudioChannelLayout): id; message 'initWithStreamDescription:channelLayout:';
    function initStandardFormatWithSampleRate_channels (sampleRate: double; channels: AVAudioChannelCount): id; message 'initStandardFormatWithSampleRate:channels:';
    function initStandardFormatWithSampleRate_channelLayout (sampleRate: double; layout: AVAudioChannelLayout): id; message 'initStandardFormatWithSampleRate:channelLayout:';
    function initWithCommonFormat_sampleRate_channels_interleaved (format: AVAudioCommonFormat; sampleRate: double; channels: AVAudioChannelCount; interleaved: objcbool): id; message 'initWithCommonFormat:sampleRate:channels:interleaved:';
    function initWithCommonFormat_sampleRate_interleaved_channelLayout (format: AVAudioCommonFormat; sampleRate: double; interleaved: objcbool; layout: AVAudioChannelLayout): id; message 'initWithCommonFormat:sampleRate:interleaved:channelLayout:';
    function initWithSettings (settings: NSDictionary): id; message 'initWithSettings:';
    {$if defined(AVAUDIOFORMAT_HAVE_CMFORMATDESCRIPTION)}
    function initWithCMAudioFormatDescription (formatDescription: CMAudioFormatDescriptionRef): id; message 'initWithCMAudioFormatDescription:'; { available in macos , ios , watchos , tvos  }
    {$endif}
    function isEqual (object_: id): objcbool; message 'isEqual:';
    function isStandard: objcbool; message 'isStandard';
    function commonFormat: AVAudioCommonFormat; message 'commonFormat';
    function channelCount: AVAudioChannelCount; message 'channelCount';
    function sampleRate: double; message 'sampleRate';
    function isInterleaved: objcbool; message 'isInterleaved';
    function streamDescription: AudioStreamBasicDescriptionPtr; message 'streamDescription';
    function channelLayout: AVAudioChannelLayout; message 'channelLayout';
    procedure setMagicCookie(newValue: NSData); message 'setMagicCookie:'; { available in macos , ios , watchos , tvos  }
    function magicCookie: NSData; message 'magicCookie'; { available in macos , ios , watchos , tvos  }
    function settings: NSDictionary; message 'settings';
    {$if defined(AVAUDIOFORMAT_HAVE_CMFORMATDESCRIPTION)}
    function formatDescription: CMAudioFormatDescriptionRef; message 'formatDescription'; { available in macos , ios , watchos , tvos  }
    {$endif}

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

