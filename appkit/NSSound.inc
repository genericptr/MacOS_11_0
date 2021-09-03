{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSound.h }

{$ifdef TYPES}
type
  NSSoundPtr = ^NSSound;
  NSSoundDelegateProtocolPtr = ^NSSoundDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSoundPboardType: NSPasteboardType; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSoundName = NSString;
  NSSoundNamePtr = ^NSSoundName;
  NSSoundPlaybackDeviceIdentifier = NSString;
  NSSoundPlaybackDeviceIdentifierPtr = ^NSSoundPlaybackDeviceIdentifier;
{$endif}

{$ifdef CLASSES}

type
  NSSound = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, NSPasteboardReadingProtocol, NSPasteboardWritingProtocol)
  public
    class function soundNamed (name: NSSoundName): NSSound; message 'soundNamed:';
    function initWithContentsOfURL_byReference (url: NSURL; byRef: objcbool): id; message 'initWithContentsOfURL:byReference:';
    function initWithContentsOfFile_byReference (path: NSString; byRef: objcbool): id; message 'initWithContentsOfFile:byReference:';
    function initWithData (data: NSData): id; message 'initWithData:';
    function setName (string_: NSSoundName): objcbool; message 'setName:';
    function name: NSSoundName; message 'name';
    class function canInitWithPasteboard (pasteboard: NSPasteboard): objcbool; message 'canInitWithPasteboard:';
    class function soundUnfilteredTypes: NSArray; message 'soundUnfilteredTypes'; { available in macos  }
    function initWithPasteboard (pasteboard: NSPasteboard): id; message 'initWithPasteboard:';
    procedure writeToPasteboard (pasteboard: NSPasteboard); message 'writeToPasteboard:';
    function play: objcbool; message 'play';
    function pause: objcbool; message 'pause';
    function resume: objcbool; message 'resume';
    function stop: objcbool; message 'stop';
    function isPlaying: objcbool; message 'isPlaying';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function duration: NSTimeInterval; message 'duration'; { available in macos  }
    procedure setVolume(newValue: single); message 'setVolume:'; { available in macos  }
    function volume: single; message 'volume'; { available in macos  }
    procedure setCurrentTime(newValue: NSTimeInterval); message 'setCurrentTime:'; { available in macos  }
    function currentTime: NSTimeInterval; message 'currentTime'; { available in macos  }
    procedure setLoops(newValue: objcbool); message 'setLoops:'; { available in macos  }
    function loops: objcbool; message 'loops'; { available in macos  }
    procedure setPlaybackDeviceIdentifier(newValue: NSSoundPlaybackDeviceIdentifier); message 'setPlaybackDeviceIdentifier:'; { available in macos  }
    function playbackDeviceIdentifier: NSSoundPlaybackDeviceIdentifier; message 'playbackDeviceIdentifier'; { available in macos  }
    procedure setChannelMapping (channelMapping: NSArray); message 'setChannelMapping:'; deprecated;
    function channelMapping: NSArray; message 'channelMapping'; deprecated;

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function initWithPasteboardPropertyList_ofType (propertyList: id; type_: NSPasteboardType): id; message 'initWithPasteboardPropertyList:ofType:';
    function pasteboardPropertyListForType (type_: NSPasteboardType): id; message 'pasteboardPropertyListForType:';
    class function readableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'readableTypesForPasteboard:';
    class function readingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardReadingOptions; message 'readingOptionsForType:pasteboard:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    function writableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'writableTypesForPasteboard:';
    function writingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardWritingOptions; message 'writingOptionsForType:pasteboard:';
  end;


type
  NSSound_NSDeprecated = objccategory external name 'NSDeprecated' (NSSound)
    class function soundUnfilteredFileTypes: NSArray; message 'soundUnfilteredFileTypes'; deprecated;
    class function soundUnfilteredPasteboardTypes: NSArray; message 'soundUnfilteredPasteboardTypes'; deprecated;
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSoundDelegateProtocol = objcprotocol external name 'NSSoundDelegate' (NSObjectProtocol)
  optional
    procedure sound_didFinishPlaying (sound: NSSound; flag: objcbool); message 'sound:didFinishPlaying:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSBundleSoundExtensions = objccategory external (NSBundle)
    function pathForSoundResource (name: NSSoundName): NSString; message 'pathForSoundResource:';
  end;
{$endif}

