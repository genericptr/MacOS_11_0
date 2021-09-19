{ Parsed from WebKit.framework WKNavigation.h }

{$ifdef TYPES}
type
  WKNavigationPtr = ^WKNavigation;
{$endif}

{$ifdef CLASSES}

type
  WKNavigation = objcclass external (NSObject)
  public
    function effectiveContentMode: WKContentMode; message 'effectiveContentMode'; { available in ios 13.0 }
  end;
{$endif}

