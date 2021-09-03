{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKNavigation.h }

{$ifdef TYPES}
type
  WKNavigationPtr = ^WKNavigation;
{$endif}

{$ifdef CLASSES}

type
  WKNavigation = objcclass external (NSObject)
  public
    function effectiveContentMode: WKContentMode; message 'effectiveContentMode'; { available in ios  }
  end;
{$endif}

