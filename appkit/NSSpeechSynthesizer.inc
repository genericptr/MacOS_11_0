{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSpeechSynthesizer.h }

{$ifdef TYPES}
type
  NSSpeechSynthesizerPtr = ^NSSpeechSynthesizer;
  NSSpeechSynthesizerDelegateProtocolPtr = ^NSSpeechSynthesizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSSpeechSynthesizerVoiceName = NSString;
  NSSpeechSynthesizerVoiceNamePtr = ^NSSpeechSynthesizerVoiceName;
  NSVoiceAttributeKey = NSString;
  NSVoiceAttributeKeyPtr = ^NSVoiceAttributeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSVoiceName: NSVoiceAttributeKey; cvar; external;
  NSVoiceIdentifier: NSVoiceAttributeKey; cvar; external;
  NSVoiceAge: NSVoiceAttributeKey; cvar; external;
  NSVoiceGender: NSVoiceAttributeKey; cvar; external;
  NSVoiceDemoText: NSVoiceAttributeKey; cvar; external;
  NSVoiceLocaleIdentifier: NSVoiceAttributeKey { available in macos  }; cvar; external;
  NSVoiceSupportedCharacters: NSVoiceAttributeKey { available in macos  }; cvar; external;
  NSVoiceIndividuallySpokenCharacters: NSVoiceAttributeKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechDictionaryKey = NSString;
  NSSpeechDictionaryKeyPtr = ^NSSpeechDictionaryKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechDictionaryLocaleIdentifier: NSSpeechDictionaryKey { available in macos  }; cvar; external;
  NSSpeechDictionaryModificationDate: NSSpeechDictionaryKey { available in macos  }; cvar; external;
  NSSpeechDictionaryPronunciations: NSSpeechDictionaryKey { available in macos  }; cvar; external;
  NSSpeechDictionaryAbbreviations: NSSpeechDictionaryKey { available in macos  }; cvar; external;
  NSSpeechDictionaryEntrySpelling: NSSpeechDictionaryKey { available in macos  }; cvar; external;
  NSSpeechDictionaryEntryPhonemes: NSSpeechDictionaryKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSVoiceGenderName = NSString;
  NSVoiceGenderNamePtr = ^NSVoiceGenderName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSVoiceGenderNeuter: NSVoiceGenderName; cvar; external;
  NSVoiceGenderMale: NSVoiceGenderName; cvar; external;
  NSVoiceGenderFemale: NSVoiceGenderName; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechPropertyKey = NSString;
  NSSpeechPropertyKeyPtr = ^NSSpeechPropertyKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechStatusProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechErrorsProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechInputModeProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechCharacterModeProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechNumberModeProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechRateProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechPitchBaseProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechPitchModProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechVolumeProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechSynthesizerInfoProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechRecentSyncProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechPhonemeSymbolsProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechCurrentVoiceProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechCommandDelimiterProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechResetProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSSpeechOutputToFileURLProperty: NSSpeechPropertyKey { available in macos  }; cvar; external;
  NSVoiceLanguage: NSVoiceAttributeKey deprecated; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechBoundary = NSUInteger;
  NSSpeechBoundaryPtr = ^NSSpeechBoundary;

const
  NSSpeechImmediateBoundary = 0;
  NSSpeechWordBoundary = 1;
  NSSpeechSentenceBoundary = 2;
{$endif}

{$ifdef CLASSES}

type
  NSSpeechSynthesizer = objcclass external (NSObject)
  public
    function initWithVoice (voice: NSSpeechSynthesizerVoiceName): id; message 'initWithVoice:';
    function startSpeakingString (string_: NSString): objcbool; message 'startSpeakingString:';
    function startSpeakingString_toURL (string_: NSString; url: NSURL): objcbool; message 'startSpeakingString:toURL:';
    function isSpeaking: objcbool; message 'isSpeaking';
    procedure stopSpeaking; message 'stopSpeaking';
    procedure stopSpeakingAtBoundary (boundary: NSSpeechBoundary); message 'stopSpeakingAtBoundary:'; { available in macos  }
    procedure pauseSpeakingAtBoundary (boundary: NSSpeechBoundary); message 'pauseSpeakingAtBoundary:'; { available in macos  }
    procedure continueSpeaking; message 'continueSpeaking'; { available in macos  }
    procedure setDelegate(newValue: NSSpeechSynthesizerDelegateProtocol); message 'setDelegate:';
    function delegate: NSSpeechSynthesizerDelegateProtocol; message 'delegate';
    function voice: NSSpeechSynthesizerVoiceName; message 'voice';
    function setVoice (voice_: NSSpeechSynthesizerVoiceName): objcbool; message 'setVoice:';
    procedure setRate(newValue: single); message 'setRate:'; { available in macos  }
    function rate: single; message 'rate'; { available in macos  }
    procedure setVolume(newValue: single); message 'setVolume:'; { available in macos  }
    function volume: single; message 'volume'; { available in macos  }
    procedure setUsesFeedbackWindow(newValue: objcbool); message 'setUsesFeedbackWindow:';
    function usesFeedbackWindow: objcbool; message 'usesFeedbackWindow';
    procedure addSpeechDictionary (speechDictionary: NSDictionary); message 'addSpeechDictionary:'; { available in macos  }
    function phonemesFromText (text: NSString): NSString; message 'phonemesFromText:'; { available in macos  }
    function objectForProperty_error (property_: NSSpeechPropertyKey; outError: NSErrorPtr): id; message 'objectForProperty:error:'; { available in macos  }
    function setObject_forProperty_error (object_: id; property_: NSSpeechPropertyKey; outError: NSErrorPtr): objcbool; message 'setObject:forProperty:error:'; { available in macos  }
    class function isAnyApplicationSpeaking: objcbool; message 'isAnyApplicationSpeaking';
    class function defaultVoice: NSSpeechSynthesizerVoiceName; message 'defaultVoice';
    class function availableVoices: NSArray; message 'availableVoices';
    class function attributesForVoice (voice_: NSSpeechSynthesizerVoiceName): NSDictionary; message 'attributesForVoice:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSpeechSynthesizerDelegateProtocol = objcprotocol external name 'NSSpeechSynthesizerDelegate' (NSObjectProtocol)
  optional
    procedure speechSynthesizer_didFinishSpeaking (sender: NSSpeechSynthesizer; finishedSpeaking: objcbool); message 'speechSynthesizer:didFinishSpeaking:';
    procedure speechSynthesizer_willSpeakWord_ofString (sender: NSSpeechSynthesizer; characterRange: NSRange; string_: NSString); message 'speechSynthesizer:willSpeakWord:ofString:';
    procedure speechSynthesizer_willSpeakPhoneme (sender: NSSpeechSynthesizer; phonemeOpcode: cshort); message 'speechSynthesizer:willSpeakPhoneme:';
    procedure speechSynthesizer_didEncounterErrorAtIndex_ofString_message (sender: NSSpeechSynthesizer; characterIndex: NSUInteger; string_: NSString; message_: NSString); message 'speechSynthesizer:didEncounterErrorAtIndex:ofString:message:'; { available in macos  }
    procedure speechSynthesizer_didEncounterSyncMessage (sender: NSSpeechSynthesizer; message_: NSString); message 'speechSynthesizer:didEncounterSyncMessage:'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSSpeechMode = NSString;
  NSSpeechModePtr = ^NSSpeechMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechModeText: NSSpeechMode { available in macos  }; cvar; external;
  NSSpeechModePhoneme: NSSpeechMode { available in macos  }; cvar; external;
  NSSpeechModeNormal: NSSpeechMode { available in macos  }; cvar; external;
  NSSpeechModeLiteral: NSSpeechMode { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechStatusKey = NSString;
  NSSpeechStatusKeyPtr = ^NSSpeechStatusKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechStatusOutputBusy: NSSpeechStatusKey { available in macos  }; cvar; external;
  NSSpeechStatusOutputPaused: NSSpeechStatusKey { available in macos  }; cvar; external;
  NSSpeechStatusNumberOfCharactersLeft: NSSpeechStatusKey { available in macos  }; cvar; external;
  NSSpeechStatusPhonemeCode: NSSpeechStatusKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechErrorKey = NSString;
  NSSpeechErrorKeyPtr = ^NSSpeechErrorKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechErrorCount: NSSpeechErrorKey { available in macos  }; cvar; external;
  NSSpeechErrorOldestCode: NSSpeechErrorKey { available in macos  }; cvar; external;
  NSSpeechErrorOldestCharacterOffset: NSSpeechErrorKey { available in macos  }; cvar; external;
  NSSpeechErrorNewestCode: NSSpeechErrorKey { available in macos  }; cvar; external;
  NSSpeechErrorNewestCharacterOffset: NSSpeechErrorKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechSynthesizerInfoKey = NSString;
  NSSpeechSynthesizerInfoKeyPtr = ^NSSpeechSynthesizerInfoKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechSynthesizerInfoIdentifier: NSSpeechSynthesizerInfoKey { available in macos  }; cvar; external;
  NSSpeechSynthesizerInfoVersion: NSSpeechSynthesizerInfoKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechPhonemeInfoKey = NSString;
  NSSpeechPhonemeInfoKeyPtr = ^NSSpeechPhonemeInfoKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechPhonemeInfoOpcode: NSSpeechPhonemeInfoKey { available in macos  }; cvar; external;
  NSSpeechPhonemeInfoSymbol: NSSpeechPhonemeInfoKey { available in macos  }; cvar; external;
  NSSpeechPhonemeInfoExample: NSSpeechPhonemeInfoKey { available in macos  }; cvar; external;
  NSSpeechPhonemeInfoHiliteStart: NSSpeechPhonemeInfoKey { available in macos  }; cvar; external;
  NSSpeechPhonemeInfoHiliteEnd: NSSpeechPhonemeInfoKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpeechCommandDelimiterKey = NSString;
  NSSpeechCommandDelimiterKeyPtr = ^NSSpeechCommandDelimiterKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpeechCommandPrefix: NSSpeechCommandDelimiterKey { available in macos  }; cvar; external;
  NSSpeechCommandSuffix: NSSpeechCommandDelimiterKey { available in macos  }; cvar; external;
{$endif}

