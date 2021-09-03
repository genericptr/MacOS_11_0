{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLTitleElement.h }

{$ifdef TYPES}
type
  DOMHTMLTitleElementPtr = ^DOMHTMLTitleElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTitleElement = objcclass external (DOMHTMLElement)
  public
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
  end;
{$endif}

