{ Parsed from AppKit.framework NSHelpManager.h }

{$ifdef TYPES}
type
  NSHelpManagerPtr = ^NSHelpManager;
{$endif}

{$ifdef TYPES}
type
  NSHelpBookName = NSString;
  NSHelpBookNamePtr = ^NSHelpBookName;
  NSHelpAnchorName = NSString;
  NSHelpAnchorNamePtr = ^NSHelpAnchorName;
  NSHelpManagerContextHelpKey = NSString;
  NSHelpManagerContextHelpKeyPtr = ^NSHelpManagerContextHelpKey;
{$endif}

{$ifdef CLASSES}

type
  NSHelpManager = objcclass external (NSObject)
  public
    class function sharedHelpManager: NSHelpManager; message 'sharedHelpManager';
    class procedure setContextHelpModeActive(newValue: objcbool); message 'setContextHelpModeActive:';
    class function isContextHelpModeActive: objcbool; message 'isContextHelpModeActive';
    procedure setContextHelp_forObject (attrString: NSAttributedString; object_: id); message 'setContextHelp:forObject:';
    procedure removeContextHelpForObject (object_: id); message 'removeContextHelpForObject:';
    function contextHelpForObject (object_: id): NSAttributedString; message 'contextHelpForObject:';
    function showContextHelpForObject_locationHint (object_: id; pt: NSPoint): objcbool; message 'showContextHelpForObject:locationHint:';
    procedure openHelpAnchor_inBook (anchor: NSHelpAnchorName; book: NSHelpBookName); message 'openHelpAnchor:inBook:';
    procedure findString_inBook (query: NSString; book: NSHelpBookName); message 'findString:inBook:';
    function registerBooksInBundle (bundle: NSBundle): objcbool; message 'registerBooksInBundle:'; { available in macos 10.6 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSContextHelpModeDidActivateNotification: NSNotificationName; cvar; external;
  NSContextHelpModeDidDeactivateNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSBundleHelpExtension = objccategory external (NSBundle)
    function contextHelpForKey (key: NSHelpManagerContextHelpKey): NSAttributedString; message 'contextHelpForKey:';
  end;

type
  NSApplicationHelpExtension = objccategory external (NSApplication)
    procedure activateContextHelpMode (sender: id); message 'activateContextHelpMode:';
    procedure showHelp (sender: id); message 'showHelp:';
  end;
{$endif}

