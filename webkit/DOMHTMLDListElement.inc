{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLDListElement.h }

{$ifdef TYPES}
type
  DOMHTMLDListElementPtr = ^DOMHTMLDListElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLDListElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: objcbool); message 'setCompact:';
    function compact: objcbool; message 'compact';
  end;
{$endif}

