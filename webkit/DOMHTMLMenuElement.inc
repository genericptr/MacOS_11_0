{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLMenuElement.h }

{$ifdef TYPES}
type
  DOMHTMLMenuElementPtr = ^DOMHTMLMenuElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMenuElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: objcbool); message 'setCompact:';
    function compact: objcbool; message 'compact';
  end;
{$endif}

