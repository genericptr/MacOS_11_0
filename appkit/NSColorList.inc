{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSColorList.h }

{$ifdef TYPES}
type
  NSColorListPtr = ^NSColorList;
{$endif}

{$ifdef TYPES}
type
  NSColorListName = NSString;
  NSColorListNamePtr = ^NSColorListName;
  NSColorName = NSString;
  NSColorNamePtr = ^NSColorName;
{$endif}

{$ifdef CLASSES}

type
  NSColorList = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function availableColorLists: NSArray; message 'availableColorLists';
    class function colorListNamed (name: NSColorListName): NSColorList; message 'colorListNamed:';
    function initWithName (name: NSColorListName): id; message 'initWithName:';
    function initWithName_fromFile (name: NSColorListName; path: NSString): id; message 'initWithName:fromFile:';
    function name: NSColorListName; message 'name';
    procedure setColor_forKey (color: NSColor; key: NSColorName); message 'setColor:forKey:';
    procedure insertColor_key_atIndex (color: NSColor; key: NSColorName; loc: NSUInteger); message 'insertColor:key:atIndex:';
    procedure removeColorWithKey (key: NSColorName); message 'removeColorWithKey:';
    function colorWithKey (key: NSColorName): NSColor; message 'colorWithKey:';
    function allKeys: NSArray; message 'allKeys';
    function isEditable: objcbool; message 'isEditable';
    function writeToURL_error (url: NSURL; errPtr: NSErrorPtr): objcbool; message 'writeToURL:error:'; { available in macos  }
    function writeToFile (path: NSString): objcbool; message 'writeToFile:'; deprecated 'Use -writeToURL:error: instead';
    procedure removeFile; message 'removeFile';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSColorListDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

