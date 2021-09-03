{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLQuoteElement.h }

{$ifdef TYPES}
type
  DOMHTMLQuoteElementPtr = ^DOMHTMLQuoteElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLQuoteElement = objcclass external (DOMHTMLElement)
  public
    procedure setCite(newValue: NSString); message 'setCite:';
    function cite: NSString; message 'cite';
  end;
{$endif}

