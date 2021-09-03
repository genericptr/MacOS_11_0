{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKAccessPoint.h }

{ Types from GKAccessPoint }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  GKAccessPointTriggerAccessPointWithHandlerCallback = reference to function : pointer; cblock; cdecl;
  GKAccessPointTriggerAccessPointWithStateCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKAccessPointPtr = ^GKAccessPoint;
{$endif}

{$ifdef TYPES}
type
  GKAccessPointLocation = NSInteger;
  GKAccessPointLocationPtr = ^GKAccessPointLocation;

const
  GKAccessPointLocationTopLeading = 0;
  GKAccessPointLocationTopTrailing = 1;
  GKAccessPointLocationBottomLeading = 2;
  GKAccessPointLocationBottomTrailing = 3;
{$endif}

{$ifdef CLASSES}

type
  GKAccessPoint = objcclass external (NSObject)
  public
    class function shared: GKAccessPoint; message 'shared';
    procedure setActive(newValue: objcbool); message 'setActive:';
    function isActive: objcbool; message 'isActive';
    procedure setFocused(newValue: objcbool); message 'setFocused:'; { unavailable in macos, ios }
    function isFocused: objcbool; message 'isFocused'; { unavailable in macos, ios }
    function isVisible: objcbool; message 'isVisible';
    function isPresentingGameCenter: objcbool; message 'isPresentingGameCenter';
    procedure setShowHighlights(newValue: objcbool); message 'setShowHighlights:';
    function showHighlights: objcbool; message 'showHighlights';
    procedure setLocation(newValue: GKAccessPointLocation); message 'setLocation:';
    function location: GKAccessPointLocation; message 'location';
    {$if defined(TARGET_OS_OSX) and not defined(TARGET_OS_MACCATALYST)}
    function frameInScreenCoordinates: NSRect; message 'frameInScreenCoordinates';
    {$else}
    function frameInScreenCoordinates_: CGRect; message 'frameInScreenCoordinates';
    {$endif}
    {$if defined(TARGET_OS_OSX) and not defined(TARGET_OS_MACCATALYST)}
    procedure setParentWindow(newValue: NSWindow); message 'setParentWindow:';
    function parentWindow: NSWindow; message 'parentWindow';
    {$else}
    procedure setParentWindow_(newValue: UIWindow); message 'setParentWindow:';
    function parentWindow_: UIWindow; message 'parentWindow';
    {$endif}
    procedure triggerAccessPointWithHandler (handler: GKAccessPointTriggerAccessPointWithHandlerCallback); message 'triggerAccessPointWithHandler:';
    procedure triggerAccessPointWithState_handler (state: GKGameCenterViewControllerState; handler: GKAccessPointTriggerAccessPointWithStateCallback); message 'triggerAccessPointWithState:handler:';
  end;
{$endif}

