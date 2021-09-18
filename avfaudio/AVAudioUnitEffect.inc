{ Parsed from AVFAudio.framework AVAudioUnitEffect.h }

{ Types from AVAudioUnitEffect }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioUnitEffectPtr = ^AVAudioUnitEffect;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitEffect = objcclass external (AVAudioUnit)
  public
    {$if defined(AVAUDIOUNIT_HAVE_AUDIOUNIT)}
    function initWithAudioComponentDescription (audioComponentDescription_: AudioComponentDescription): id; message 'initWithAudioComponentDescription:';
    {$endif}
    procedure setBypass(newValue: objcbool); message 'setBypass:';
    function bypass: objcbool; message 'bypass';
  end;
{$endif}

