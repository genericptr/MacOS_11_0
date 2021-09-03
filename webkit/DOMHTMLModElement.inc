{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLModElement.h }

{$ifdef TYPES}
type
  DOMHTMLModElementPtr = ^DOMHTMLModElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLModElement = objcclass external (DOMHTMLElement)
  public
    procedure setCite(newValue: NSString); message 'setCite:';
    function cite: NSString; message 'cite';
    procedure setDateTime(newValue: NSString); message 'setDateTime:';
    function dateTime: NSString; message 'dateTime';
  end;
{$endif}

