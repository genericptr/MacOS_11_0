{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKPreferences.h }

{ Types from WKPreferences }
{$ifdef TYPES}

{$endif}


{ Types from WKPreferences_WKDeprecated }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKPreferencesPtr = ^WKPreferences;
{$endif}

{$ifdef CLASSES}

type
  WKPreferences = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setMinimumFontSize(newValue: CGFloat); message 'setMinimumFontSize:';
    function minimumFontSize: CGFloat; message 'minimumFontSize';
    procedure setJavaScriptCanOpenWindowsAutomatically(newValue: objcbool); message 'setJavaScriptCanOpenWindowsAutomatically:';
    function javaScriptCanOpenWindowsAutomatically: objcbool; message 'javaScriptCanOpenWindowsAutomatically';
    procedure setFraudulentWebsiteWarningEnabled(newValue: objcbool); message 'setFraudulentWebsiteWarningEnabled:'; { available in macos , ios  }
    function isFraudulentWebsiteWarningEnabled: objcbool; message 'isFraudulentWebsiteWarningEnabled'; { available in macos , ios  }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setTabFocusesLinks(newValue: objcbool); message 'setTabFocusesLinks:'; { available in macos  }
    function tabFocusesLinks: objcbool; message 'tabFocusesLinks'; { available in macos  }
    {$endif}
    procedure setTextInteractionEnabled(newValue: objcbool); message 'setTextInteractionEnabled:'; { available in macos , ios  }
    function textInteractionEnabled: objcbool; message 'textInteractionEnabled'; { available in macos , ios  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  WKPreferences_WKDeprecated = objccategory external name 'WKDeprecated' (WKPreferences)
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setJavaEnabled(newValue: objcbool); message 'setJavaEnabled:'; deprecated 'Java is no longer supported';
    function javaEnabled: objcbool; message 'javaEnabled'; deprecated 'Java is no longer supported';
    procedure setPlugInsEnabled(newValue: objcbool); message 'setPlugInsEnabled:'; deprecated 'Plug-ins are no longer supported';
    function plugInsEnabled: objcbool; message 'plugInsEnabled'; deprecated 'Plug-ins are no longer supported';
    {$endif}
    procedure setJavaScriptEnabled(newValue: objcbool); message 'setJavaScriptEnabled:'; deprecated 'Use WKWebPagePreferences.allowsContentJavaScript to disable content JavaScript on a per-navigation basis';
    function javaScriptEnabled: objcbool; message 'javaScriptEnabled'; deprecated 'Use WKWebPagePreferences.allowsContentJavaScript to disable content JavaScript on a per-navigation basis';
  end;
{$endif}

