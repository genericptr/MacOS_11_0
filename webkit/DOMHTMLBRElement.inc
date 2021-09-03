{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLBRElement.h }

{$ifdef TYPES}
type
  DOMHTMLBRElementPtr = ^DOMHTMLBRElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLBRElement = objcclass external (DOMHTMLElement)
  public
    procedure setClear(newValue: NSString); message 'setClear:';
    function clear: NSString; message 'clear';
  end;
{$endif}

