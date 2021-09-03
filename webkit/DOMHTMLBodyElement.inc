{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLBodyElement.h }

{$ifdef TYPES}
type
  DOMHTMLBodyElementPtr = ^DOMHTMLBodyElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLBodyElement = objcclass external (DOMHTMLElement)
  public
    procedure setALink(newValue: NSString); message 'setALink:';
    function aLink: NSString; message 'aLink';
    procedure setBackground(newValue: NSString); message 'setBackground:';
    function background: NSString; message 'background';
    procedure setBgColor(newValue: NSString); message 'setBgColor:';
    function bgColor: NSString; message 'bgColor';
    procedure setLink(newValue: NSString); message 'setLink:';
    function link: NSString; message 'link';
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setVLink(newValue: NSString); message 'setVLink:';
    function vLink: NSString; message 'vLink';
  end;
{$endif}

