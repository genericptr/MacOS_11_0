{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioUnitComponent.h }

{ Types from AVAudioUnitComponent }
{$ifdef TYPES}



{$endif}


{ Types from AVAudioUnitComponentManager }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  AVAudioUnitComponentComponentsPassingTestCallback = reference to function (comp: AVAudioUnitComponent; stop: objcboolPtr): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAudioUnitComponentPtr = ^AVAudioUnitComponent;
  AVAudioUnitComponentManagerPtr = ^AVAudioUnitComponentManager;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT = 1;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioUnitTypeOutput: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeMusicDevice: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeMusicEffect: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeFormatConverter: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeEffect: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeMixer: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypePanner: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeGenerator: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeOfflineEffect: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitTypeMIDIProcessor: NSString { unavailable in watchos }; cvar; external;
  AVAudioUnitManufacturerNameApple: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitComponent = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function name: NSString; message 'name';
    function typeName: NSString; message 'typeName';
    function localizedTypeName: NSString; message 'localizedTypeName';
    function manufacturerName: NSString; message 'manufacturerName';
    function version: NSUInteger; message 'version';
    function versionString: NSString; message 'versionString';
    function componentURL: NSURL; message 'componentURL'; deprecated 'in 10_10, 10_11, NA, NA';
    function availableArchitectures: NSArray; message 'availableArchitectures'; { unavailable in ios, watchos, tvos }
    function isSandboxSafe: objcbool; message 'isSandboxSafe';
    function hasMIDIInput: objcbool; message 'hasMIDIInput';
    function hasMIDIOutput: objcbool; message 'hasMIDIOutput';
    {$if defined(AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT)}
    function audioComponent: AudioComponent; message 'audioComponent';
    {$endif}
    procedure setUserTagNames(newValue: NSArray); message 'setUserTagNames:'; { unavailable in ios, watchos, tvos }
    function userTagNames: NSArray; message 'userTagNames'; { unavailable in ios, watchos, tvos }
    function allTagNames: NSArray; message 'allTagNames';
    {$if defined(AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT)}
    function audioComponentDescription: AudioComponentDescription; message 'audioComponentDescription';
    {$endif}
    function iconURL: NSURL; message 'iconURL'; { unavailable in ios, watchos, tvos }
    {$if defined(TARGET_OS_OSX)}
    function icon: NSImage; message 'icon'; { unavailable in ios, watchos, tvos }
    {$endif}
    function passesAUVal: objcbool; message 'passesAUVal'; { unavailable in ios, watchos, tvos }
    function hasCustomView: objcbool; message 'hasCustomView'; { unavailable in ios, watchos, tvos }
    function configurationDictionary: NSDictionary; message 'configurationDictionary'; { unavailable in ios, watchos, tvos }
    function supportsNumberInputChannels_outputChannels (numInputChannels: NSInteger; numOutputChannels: NSInteger): objcbool; message 'supportsNumberInputChannels:outputChannels:'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioUnitComponentTagsDidChangeNotification: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitComponentManager = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function tagNames: NSArray; message 'tagNames';
    function standardLocalizedTagNames: NSArray; message 'standardLocalizedTagNames';
    class function sharedAudioUnitComponentManager: id; message 'sharedAudioUnitComponentManager';
    function componentsMatchingPredicate (predicate: NSPredicate): NSArray; message 'componentsMatchingPredicate:';
    function componentsPassingTest (testHandler: AVAudioUnitComponentComponentsPassingTestCallback): NSArray; message 'componentsPassingTest:';
    {$if defined(AVAUDIOUNITCOMPONENT_HAVE_AUDIOCOMPONENT)}
    function componentsMatchingDescription (desc: AudioComponentDescription): NSArray; message 'componentsMatchingDescription:';
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioUnitComponentManagerRegistrationsChangedNotification: NSNotificationName; cvar; external;
{$endif}

