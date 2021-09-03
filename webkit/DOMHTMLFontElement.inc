{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLFontElement.h }

{$ifdef TYPES}
type
  DOMHTMLFontElementPtr = ^DOMHTMLFontElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLFontElement = objcclass external (DOMHTMLElement)
  public
    procedure setColor(newValue: NSString); message 'setColor:';
    function color: NSString; message 'color';
    procedure setFace(newValue: NSString); message 'setFace:';
    function face: NSString; message 'face';
    procedure setSize(newValue: NSString); message 'setSize:';
    function size: NSString; message 'size';
  end;
{$endif}

