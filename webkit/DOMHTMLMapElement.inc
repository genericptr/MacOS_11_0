{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLMapElement.h }

{$ifdef TYPES}
type
  DOMHTMLMapElementPtr = ^DOMHTMLMapElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMapElement = objcclass external (DOMHTMLElement)
  public
    function areas: DOMHTMLCollection; message 'areas';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;
{$endif}

