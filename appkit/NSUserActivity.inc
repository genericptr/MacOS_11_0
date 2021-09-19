{ Parsed from AppKit.framework NSUserActivity.h }

{$ifdef TYPES}
type
  NSUserActivityRestoringProtocolPtr = ^NSUserActivityRestoringProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
const
  NS_USER_ACTIVITY_SUPPORTED = 1;
{$endif}

{$endif}

{$if defined(NS_USER_ACTIVITY_SUPPORTED)}
{$ifdef PROTOCOLS}

type
  NSUserActivityRestoringProtocol = objcprotocol external name 'NSUserActivityRestoring' (NSObjectProtocol)
    procedure restoreUserActivityState (userActivity: NSUserActivity); message 'restoreUserActivityState:'; { available in macos 10.10 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSResponder_NSUserActivity = objccategory external name 'NSUserActivity' (NSResponder)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:'; { available in macos 10.10 }
    function userActivity: NSUserActivity; message 'userActivity'; { available in macos 10.10 }
    procedure updateUserActivityState (userActivity_: NSUserActivity); message 'updateUserActivityState:'; { available in macos 10.10 }
  end;

type
  NSDocument_NSUserActivity = objccategory external name 'NSUserActivity' (NSDocument)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:'; { available in macos 10.10 }
    function userActivity: NSUserActivity; message 'userActivity'; { available in macos 10.10 }
    procedure updateUserActivityState (activity: NSUserActivity); message 'updateUserActivityState:'; { available in macos 10.10 }
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserActivityDocumentURLKey: NSString { available in macos 10.10 }; cvar; external;
{$endif}

{$endif}
{$endif}
