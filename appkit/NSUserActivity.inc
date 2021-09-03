{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSUserActivity.h }

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
    procedure restoreUserActivityState (userActivity: NSUserActivity); message 'restoreUserActivityState:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSResponder_NSUserActivity = objccategory external name 'NSUserActivity' (NSResponder)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:'; { available in macos  }
    function userActivity: NSUserActivity; message 'userActivity'; { available in macos  }
    procedure updateUserActivityState (userActivity_: NSUserActivity); message 'updateUserActivityState:'; { available in macos  }
  end;

type
  NSDocument_NSUserActivity = objccategory external name 'NSUserActivity' (NSDocument)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:'; { available in macos  }
    function userActivity: NSUserActivity; message 'userActivity'; { available in macos  }
    procedure updateUserActivityState (activity: NSUserActivity); message 'updateUserActivityState:'; { available in macos  }
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserActivityDocumentURLKey: NSString { available in macos  }; cvar; external;
{$endif}

{$endif}
{$endif}
