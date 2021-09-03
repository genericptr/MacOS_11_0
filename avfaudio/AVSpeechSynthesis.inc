{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVSpeechSynthesis.h }

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
  AVSpeechUtteranceMinimumSpeechRate: single { available in ios , watchos , tvos , macos  }; cvar; external;
  AVSpeechUtteranceMaximumSpeechRate: single { available in ios , watchos , tvos , macos  }; cvar; external;
  AVSpeechUtteranceDefaultSpeechRate: single { available in ios , watchos , tvos , macos  }; cvar; external;
  AVSpeechSynthesisVoiceIdentifierAlex: NSString { available in ios , watchos , tvos , macos  }; cvar; external;
  AVSpeechSynthesisIPANotationAttribute: NSString { available in ios , watchos , tvos , macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVSpeechSynthesizerBufferCallback = reference to function (buffer: AVAudioBuffer): pointer; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  AVSpeechSynthesisVoice = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function speechVoices: NSArray; message 'speechVoices';
    class function currentLanguageCode: NSString; message 'currentLanguageCode';
    class function voiceWithLanguage (languageCode: NSString): AVSpeechSynthesisVoice; message 'voiceWithLanguage:';
    class function voiceWithIdentifier (identifier: NSString): AVSpeechSynthesisVoice; message 'voiceWithIdentifier:'; { available in ios , watchos , tvos , macos  }
    function language: NSString; message 'language';
    function identifier: NSString; message 'identifier'; { available in ios , watchos , tvos , macos  }
    function name: NSString; message 'name'; { available in ios , watchos , tvos , macos  }
    function quality: AVSpeechSynthesisVoiceQuality; message 'quality'; { available in ios , watchos , tvos , macos  }
    function gender: AVSpeechSynthesisVoiceGender; message 'gender'; { available in ios , watchos , tvos , macos  }
    function audioFileSettings: NSDictionary; message 'audioFileSettings'; { available in ios , watchos , tvos , macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  AVSpeechUtterance = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function speechUtteranceWithString (string_: NSString): id; message 'speechUtteranceWithString:';
    class function speechUtteranceWithAttributedString (string_: NSAttributedString): id; message 'speechUtteranceWithAttributedString:'; { available in ios , watchos , tvos , macos  }
    function initWithString (string_: NSString): id; message 'initWithString:';
    function initWithAttributedString (string_: NSAttributedString): id; message 'initWithAttributedString:'; { available in ios , watchos , tvos , macos  }
    procedure setVoice(newValue: AVSpeechSynthesisVoice); message 'setVoice:';
    function voice: AVSpeechSynthesisVoice; message 'voice';
    function speechString: NSString; message 'speechString';
    function attributedSpeechString: NSAttributedString; message 'attributedSpeechString'; { available in ios , watchos , tvos , macos  }
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setPitchMultiplier(newValue: single); message 'setPitchMultiplier:';
    function pitchMultiplier: single; message 'pitchMultiplier';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setPrefersAssistiveTechnologySettings(newValue: objcbool); message 'setPrefersAssistiveTechnologySettings:'; { available in ios , watchos , tvos , macos  }
    function prefersAssistiveTechnologySettings: objcbool; message 'prefersAssistiveTechnologySettings'; { available in ios , watchos , tvos , macos  }
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
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function isSpeaking: objcbool; message 'isSpeaking';
    function isPaused: objcbool; message 'isPaused';
    procedure speakUtterance (utterance: AVSpeechUtterance); message 'speakUtterance:';
    procedure writeUtterance_toBufferCallback (utterance: AVSpeechUtterance; bufferCallback: AVSpeechSynthesizerBufferCallback); message 'writeUtterance:toBufferCallback:'; { available in ios , watchos , tvos , macos  }
    function stopSpeakingAtBoundary (boundary: AVSpeechBoundary): objcbool; message 'stopSpeakingAtBoundary:';
    function pauseSpeakingAtBoundary (boundary: AVSpeechBoundary): objcbool; message 'pauseSpeakingAtBoundary:';
    function continueSpeaking: objcbool; message 'continueSpeaking';
    procedure setOutputChannels(newValue: NSArray); message 'setOutputChannels:'; { unavailable in macos }
    function outputChannels: NSArray; message 'outputChannels'; { unavailable in macos }
    procedure setUsesApplicationAudioSession(newValue: objcbool); message 'setUsesApplicationAudioSession:'; { unavailable in macos }
    function usesApplicationAudioSession: objcbool; message 'usesApplicationAudioSession'; { unavailable in macos }
    procedure setMixToTelephonyUplink(newValue: objcbool); message 'setMixToTelephonyUplink:'; { unavailable in tvos, macos }
    function mixToTelephonyUplink: objcbool; message 'mixToTelephonyUplink'; { unavailable in tvos, macos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVSpeechSynthesizerDelegateProtocol = objcprotocol external name 'AVSpeechSynthesizerDelegate' (NSObjectProtocol)
  optional
    procedure speechSynthesizer_didStartSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didStartSpeechUtterance:'; { available in ios , watchos , tvos , macos  }
    procedure speechSynthesizer_didFinishSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didFinishSpeechUtterance:'; { available in ios , watchos , tvos , macos  }
    procedure speechSynthesizer_didPauseSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didPauseSpeechUtterance:'; { available in ios , watchos , tvos , macos  }
    procedure speechSynthesizer_didContinueSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didContinueSpeechUtterance:'; { available in ios , watchos , tvos , macos  }
    procedure speechSynthesizer_didCancelSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didCancelSpeechUtterance:'; { available in ios , watchos , tvos , macos  }
    procedure speechSynthesizer_willSpeakRangeOfSpeechString_utterance (synthesizer: AVSpeechSynthesizer; characterRange: NSRange; utterance: AVSpeechUtterance); message 'speechSynthesizer:willSpeakRangeOfSpeechString:utterance:'; { available in ios , watchos , tvos , macos  }
  end;
{$endif}

{$endif}
