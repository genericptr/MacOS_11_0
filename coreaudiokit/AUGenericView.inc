{ Parsed from CoreAudioKit.framework AUGenericView.h }

{$ifdef TYPES}
type
  AUGenericViewPtr = ^AUGenericView;
{$endif}

{$ifdef TYPES}
type
  AUGenericViewDisplayFlags = UInt32;
  AUGenericViewDisplayFlagsPtr = ^AUGenericViewDisplayFlags;

const
  AUViewTitleDisplayFlag = 1 shl 0;
  AUViewPropertiesDisplayFlag = 1 shl 1;
  AUViewParametersDisplayFlag = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  AUGenericView = objcclass external (NSView, AUCustomViewPersistentDataProtocol)
  private
    {$if defined(__OBJC_GC__)}
    {$endif}
    _reserved:array[0..31] of pointer;
  public
    function audioUnit: AudioUnit; message 'audioUnit';
    procedure setShowsExpertParameters(newValue: objcbool); message 'setShowsExpertParameters:';
    function showsExpertParameters: objcbool; message 'showsExpertParameters';
    function initWithAudioUnit (au: AudioUnit): AUGenericView; message 'initWithAudioUnit:';
    function initWithAudioUnit_displayFlags (inAudioUnit: AudioUnit; inFlags: AUGenericViewDisplayFlags): AUGenericView; message 'initWithAudioUnit:displayFlags:';

    { Adopted protocols }
    function customViewPersistentData: NSDictionary; message 'customViewPersistentData';
    procedure setCustomViewPersistentData (newValue: NSDictionary); message 'setCustomViewPersistentData:';
  end;
{$endif}

