{ Parsed from WebKit.framework WKWebpagePreferences.h }

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
    procedure setPreferredContentMode(newValue: WKContentMode); message 'setPreferredContentMode:'; { available in ios 13.0 }
    function preferredContentMode: WKContentMode; message 'preferredContentMode'; { available in ios 13.0 }
    procedure setAllowsContentJavaScript(newValue: objcbool); message 'setAllowsContentJavaScript:'; { available in macos 11.0, ios 14.0 }
    function allowsContentJavaScript: objcbool; message 'allowsContentJavaScript'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

