{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKWebpagePreferences.h }

{$ifdef TYPES}
type
  WKWebpagePreferencesPtr = ^WKWebpagePreferences;
{$endif}

{$ifdef TYPES}
type
  WKContentMode = NSInteger;
  WKContentModePtr = ^WKContentMode;

const
  WKContentModeRecommended = 0;
  WKContentModeMobile = 1;
  WKContentModeDesktop = 2;
{$endif}

{$ifdef CLASSES}

type
  WKWebpagePreferences = objcclass external (NSObject)
  public
    procedure setPreferredContentMode(newValue: WKContentMode); message 'setPreferredContentMode:'; { available in ios  }
    function preferredContentMode: WKContentMode; message 'preferredContentMode'; { available in ios  }
    procedure setAllowsContentJavaScript(newValue: objcbool); message 'setAllowsContentJavaScript:'; { available in macos , ios  }
    function allowsContentJavaScript: objcbool; message 'allowsContentJavaScript'; { available in macos , ios  }
  end;
{$endif}

