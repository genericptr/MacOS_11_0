{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLHeadingElement.h }

{$ifdef TYPES}
type
  DOMHTMLHeadingElementPtr = ^DOMHTMLHeadingElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHeadingElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
  end;
{$endif}

