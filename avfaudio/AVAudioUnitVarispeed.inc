{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioUnitVarispeed.h }

{$ifdef TYPES}
type
  AVAudioUnitVarispeedPtr = ^AVAudioUnitVarispeed;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitVarispeed = objcclass external (AVAudioUnitTimeEffect)
  public
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
  end;
{$endif}

