{ Parsed from AVFAudio.framework AVAudioUnitTimeEffect.h }

{ Types from AVAudioUnitTimeEffect }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioUnitTimeEffectPtr = ^AVAudioUnitTimeEffect;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitTimeEffect = objcclass external (AVAudioUnit)
  public
    {$if defined(AVAUDIOUNIT_HAVE_AUDIOUNIT)}
    function initWithAudioComponentDescription (audioComponentDescription_: AudioComponentDescription): id; message 'initWithAudioComponentDescription:';
    {$endif}
    procedure setBypass(newValue: objcbool); message 'setBypass:';
    function bypass: objcbool; message 'bypass';
  end;
{$endif}

