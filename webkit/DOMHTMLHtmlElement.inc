{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLHtmlElement.h }

{$ifdef TYPES}
type
  DOMHTMLHtmlElementPtr = ^DOMHTMLHtmlElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHtmlElement = objcclass external (DOMHTMLElement)
  public
    procedure setVersion(newValue: NSString); message 'setVersion:';
    function version: NSString; message 'version';
  end;
{$endif}

