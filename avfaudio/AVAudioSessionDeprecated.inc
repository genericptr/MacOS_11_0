{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioSessionDeprecated.h }

{$ifdef TYPES}
type
  AVAudioSessionDelegateProtocolPtr = ^AVAudioSessionDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifndef AudioSession_AVAudioSession_Deprecated_h}
{$ifdef CLASSES}

type
  AVAudioSessionDeprecated = objccategory external (AVAudioSession)
    procedure setDelegate(newValue: id); message 'setDelegate:'; { unavailable in macos }
    function delegate: id; message 'delegate'; { unavailable in macos }
    function init: id; message 'init'; { unavailable in macos }
    function setActive_withFlags_error (active: objcbool; flags: NSInteger; outError: NSErrorPtr): objcbool; message 'setActive:withFlags:error:'; { unavailable in macos }
    function inputIsAvailable: objcbool; message 'inputIsAvailable'; { unavailable in macos }
    function currentHardwareSampleRate: double; message 'currentHardwareSampleRate'; { unavailable in macos }
    function currentHardwareInputNumberOfChannels: NSInteger; message 'currentHardwareInputNumberOfChannels'; { unavailable in macos }
    function currentHardwareOutputNumberOfChannels: NSInteger; message 'currentHardwareOutputNumberOfChannels'; { unavailable in macos }
    function setPreferredHardwareSampleRate_error (sampleRate: double; outError: NSErrorPtr): objcbool; message 'setPreferredHardwareSampleRate:error:'; { unavailable in macos }
    function preferredHardwareSampleRate: double; message 'preferredHardwareSampleRate'; { unavailable in macos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioSessionDelegateProtocol = objcprotocol external name 'AVAudioSessionDelegate' (NSObjectProtocol)
  optional
    procedure beginInterruption; message 'beginInterruption';
    procedure endInterruptionWithFlags (flags: NSUInteger); message 'endInterruptionWithFlags:'; { available in ios , watchos , tvos  }
    procedure endInterruption; message 'endInterruption';
    procedure inputIsAvailableChanged (isInputAvailable: objcbool); message 'inputIsAvailableChanged:';
  end;
{$endif}

{$ifdef TYPES}
const
  AVAudioSessionInterruptionFlags_ShouldResume = 1 { unavailable in macos };
const
  AVAudioSessionSetActiveFlags_NotifyOthersOnDeactivation = 1 { unavailable in macos };
{$endif}

{$endif}

{$else}
{$endif}
