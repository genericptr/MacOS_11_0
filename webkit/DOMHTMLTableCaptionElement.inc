{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLTableCaptionElement.h }

{$ifdef TYPES}
type
  DOMHTMLTableCaptionElementPtr = ^DOMHTMLTableCaptionElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTableCaptionElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
  end;
{$endif}

