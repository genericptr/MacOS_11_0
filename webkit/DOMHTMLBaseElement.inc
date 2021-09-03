{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLBaseElement.h }

{$ifdef TYPES}
type
  DOMHTMLBaseElementPtr = ^DOMHTMLBaseElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLBaseElement = objcclass external (DOMHTMLElement)
  public
    procedure setHref(newValue: NSString); message 'setHref:';
    function href: NSString; message 'href';
    procedure setTarget(newValue: NSString); message 'setTarget:';
    function target: NSString; message 'target';
  end;
{$endif}

