{ Parsed from AVFAudio.framework AVAudioUnit.h }

{ Types from AVAudioUnit }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  AVAudioUnitInstantiateWithComponentDescriptionCallback = reference to procedure (audioUnit: AVAudioUnit; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAudioUnitPtr = ^AVAudioUnit;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOUNIT_HAVE_AUDIOUNIT = 1;
{$endif}

{$endif}

{$ifdef CLASSES}

{$define AVAUDIOUNIT_HAVE_AUDIOUNIT}

type
  AVAudioUnit = objcclass external (AVAudioNode)
  public
    {$if defined(AVAUDIOUNIT_HAVE_AUDIOUNIT)}
    class procedure instantiateWithComponentDescription_options_completionHandler (audioComponentDescription_: AudioComponentDescription; options: AudioComponentInstantiationOptions; completionHandler: AVAudioUnitInstantiateWithComponentDescriptionCallback); message 'instantiateWithComponentDescription:options:completionHandler:'; { available in macos , ios , tvos  }
    function loadAudioUnitPresetAtURL_error (url: NSURL; outError: NSErrorPtr): objcbool; message 'loadAudioUnitPresetAtURL:error:';
    function audioComponentDescription: AudioComponentDescription; message 'audioComponentDescription';
    function audioUnit: AudioUnit; message 'audioUnit';
    {$ifdef __OBJC2__}
    function AUAudioUnit_: AUAudioUnit; message 'AUAudioUnit'; { available in macos , ios , tvos  }
    {$endif}
    function name: NSString; message 'name';
    function manufacturerName: NSString; message 'manufacturerName';
    function version: NSUInteger; message 'version';
    {$endif}
  end;
{$endif}

