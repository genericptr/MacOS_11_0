{ Parsed from AVFAudio.framework AVSpeechSynthesis.h }

{$ifdef TYPES}
type
  AVSpeechSynthesisVoicePtr = ^AVSpeechSynthesisVoice;
  AVSpeechUtterancePtr = ^AVSpeechUtterance;
  AVSpeechSynthesizerPtr = ^AVSpeechSynthesizer;
  AVSpeechSynthesizerDelegateProtocolPtr = ^AVSpeechSynthesizerDelegateProtocol;
{$endif}

{$ifdef __OBJC2__}
{$ifdef TYPES}
type
  AVSpeechBoundary = NSInteger;
  AVSpeechBoundaryPtr = ^AVSpeechBoundary;

const
  AVSpeechBoundaryImmediate = 0;
  AVSpeechBoundaryWord = 1;

type
  AVSpeechSynthesisVoiceQuality = NSInteger;
  AVSpeechSynthesisVoiceQualityPtr = ^AVSpeechSynthesisVoiceQuality;

const
  AVSpeechSynthesisVoiceQualityDefault = 1;
  AVSpeechSynthesisVoiceQualityEnhanced = 2;

type
  AVSpeechSynthesisVoiceGender = NSInteger;
  AVSpeechSynthesisVoiceGenderPtr = ^AVSpeechSynthesisVoiceGender;

const
  AVSpeechSynthesisVoiceGenderUnspecified = 0;
  AVSpeechSynthesisVoiceGenderMale = 1;
  AVSpeechSynthesisVoiceGenderFemale = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVSpeechUtteranceMinimumSpeechRate: single { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }; cvar; external;
  AVSpeechUtteranceMaximumSpeechRate: single { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }; cvar; external;
  AVSpeechUtteranceDefaultSpeechRate: single { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }; cvar; external;
  AVSpeechSynthesisVoiceIdentifierAlex: NSString { available in ios 9.0, watchos 2.0, tvos 9.0, macos 10.14 }; cvar; external;
  AVSpeechSynthesisIPANotationAttribute: NSString { available in ios 10.0, watchos 3.0, tvos 10.0, macos 10.14 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVSpeechSynthesizerBufferCallback = reference to procedure (buffer: AVAudioBuffer); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  AVSpeechSynthesisVoice = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function speechVoices: NSArray; message 'speechVoices';
    class function currentLanguageCode: NSString; message 'currentLanguageCode';
    class function voiceWithLanguage (languageCode: NSString): AVSpeechSynthesisVoice; message 'voiceWithLanguage:';
    class function voiceWithIdentifier (identifier: NSString): AVSpeechSynthesisVoice; message 'voiceWithIdentifier:'; { available in ios 9.0, watchos 2.0, tvos 9.0, macos 10.14 }
    function language: NSString; message 'language';
    function identifier: NSString; message 'identifier'; { available in ios 9.0, watchos 2.0, tvos 9.0, macos 10.14 }
    function name: NSString; message 'name'; { available in ios 9.0, watchos 2.0, tvos 9.0, macos 10.14 }
    function quality: AVSpeechSynthesisVoiceQuality; message 'quality'; { available in ios 9.0, watchos 2.0, tvos 9.0, macos 10.14 }
    function gender: AVSpeechSynthesisVoiceGender; message 'gender'; { available in ios 13.0, watchos 6.0, tvos 13.0, macos 10.15 }
    function audioFileSettings: NSDictionary; message 'audioFileSettings'; { available in ios 13.0, watchos 6.0, tvos 13.0, macos 10.15 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  AVSpeechUtterance = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function speechUtteranceWithString (string_: NSString): id; message 'speechUtteranceWithString:';
    class function speechUtteranceWithAttributedString (string_: NSAttributedString): id; message 'speechUtteranceWithAttributedString:'; { available in ios 10.0, watchos 3.0, tvos 10.0, macos 10.14 }
    function initWithString (string_: NSString): id; message 'initWithString:';
    function initWithAttributedString (string_: NSAttributedString): id; message 'initWithAttributedString:'; { available in ios 10.0, watchos 3.0, tvos 10.0, macos 10.14 }
    procedure setVoice(newValue: AVSpeechSynthesisVoice); message 'setVoice:';
    function voice: AVSpeechSynthesisVoice; message 'voice';
    function speechString: NSString; message 'speechString';
    function attributedSpeechString: NSAttributedString; message 'attributedSpeechString'; { available in ios 10.0, watchos 3.0, tvos 10.0, macos 10.14 }
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setPitchMultiplier(newValue: single); message 'setPitchMultiplier:';
    function pitchMultiplier: single; message 'pitchMultiplier';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setPrefersAssistiveTechnologySettings(newValue: objcbool); message 'setPrefersAssistiveTechnologySettings:'; { available in ios 14.0, watchos 7.0, tvos 14.0, macos 11.0 }
    function prefersAssistiveTechnologySettings: objcbool; message 'prefersAssistiveTechnologySettings'; { available in ios 14.0, watchos 7.0, tvos 14.0, macos 11.0 }
    procedure setPreUtteranceDelay(newValue: NSTimeInterval); message 'setPreUtteranceDelay:';
    function preUtteranceDelay: NSTimeInterval; message 'preUtteranceDelay';
    procedure setPostUtteranceDelay(newValue: NSTimeInterval); message 'setPostUtteranceDelay:';
    function postUtteranceDelay: NSTimeInterval; message 'postUtteranceDelay';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  AVSpeechSynthesizer = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: AVSpeechSynthesizerDelegateProtocol); message 'setDelegate:';
    function delegate: AVSpeechSynthesizerDelegateProtocol; message 'delegate';
    function isSpeaking: objcbool; message 'isSpeaking';
    function isPaused: objcbool; message 'isPaused';
    procedure speakUtterance (utterance: AVSpeechUtterance); message 'speakUtterance:';
    procedure writeUtterance_toBufferCallback (utterance: AVSpeechUtterance; bufferCallback: AVSpeechSynthesizerBufferCallback); message 'writeUtterance:toBufferCallback:'; { available in ios 13.0, watchos 6.0, tvos 13.0, macos 10.15 }
    function stopSpeakingAtBoundary (boundary: AVSpeechBoundary): objcbool; message 'stopSpeakingAtBoundary:';
    function pauseSpeakingAtBoundary (boundary: AVSpeechBoundary): objcbool; message 'pauseSpeakingAtBoundary:';
    function continueSpeaking: objcbool; message 'continueSpeaking';
    procedure setOutputChannels(newValue: NSArray); message 'setOutputChannels:'; { unavailable in macos } { available in ios 10.0, watchos 3.0, tvos 10.0 }
    function outputChannels: NSArray; message 'outputChannels'; { unavailable in macos } { available in ios 10.0, watchos 3.0, tvos 10.0 }
    procedure setUsesApplicationAudioSession(newValue: objcbool); message 'setUsesApplicationAudioSession:'; { unavailable in macos } { available in ios 13.0, watchos 6.0, tvos 13.0, macCatalyst 14.0 }
    function usesApplicationAudioSession: objcbool; message 'usesApplicationAudioSession'; { unavailable in macos } { available in ios 13.0, watchos 6.0, tvos 13.0, macCatalyst 14.0 }
    procedure setMixToTelephonyUplink(newValue: objcbool); message 'setMixToTelephonyUplink:'; { unavailable in tvos, macos } { available in ios 13.0, watchos 6.0 }
    function mixToTelephonyUplink: objcbool; message 'mixToTelephonyUplink'; { unavailable in tvos, macos } { available in ios 13.0, watchos 6.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVSpeechSynthesizerDelegateProtocol = objcprotocol external name 'AVSpeechSynthesizerDelegate' (NSObjectProtocol)
  optional
    procedure speechSynthesizer_didStartSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didStartSpeechUtterance:'; { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }
    procedure speechSynthesizer_didFinishSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didFinishSpeechUtterance:'; { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }
    procedure speechSynthesizer_didPauseSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didPauseSpeechUtterance:'; { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }
    procedure speechSynthesizer_didContinueSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didContinueSpeechUtterance:'; { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }
    procedure speechSynthesizer_didCancelSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didCancelSpeechUtterance:'; { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }
    procedure speechSynthesizer_willSpeakRangeOfSpeechString_utterance (synthesizer: AVSpeechSynthesizer; characterRange: NSRange; utterance: AVSpeechUtterance); message 'speechSynthesizer:willSpeakRangeOfSpeechString:utterance:'; { available in ios 7.0, watchos 1.0, tvos 7.0, macos 10.14 }
  end;
{$endif}

{$endif}
