{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLMarqueeElement.h }

{$ifdef TYPES}
type
  DOMHTMLMarqueeElementPtr = ^DOMHTMLMarqueeElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMarqueeElement = objcclass external (DOMHTMLElement)
  public
    procedure start; message 'start';
    procedure stop; message 'stop';
  end;
{$endif}

