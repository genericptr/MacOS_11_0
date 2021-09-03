{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLScriptElement.h }

{$ifdef TYPES}
type
  DOMHTMLScriptElementPtr = ^DOMHTMLScriptElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLScriptElement = objcclass external (DOMHTMLElement)
  public
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setHtmlFor(newValue: NSString); message 'setHtmlFor:';
    function htmlFor: NSString; message 'htmlFor';
    procedure setEvent(newValue: NSString); message 'setEvent:';
    function event: NSString; message 'event';
    procedure setCharset(newValue: NSString); message 'setCharset:';
    function charset: NSString; message 'charset';
    procedure setDefer(newValue: objcbool); message 'setDefer:';
    function defer: objcbool; message 'defer';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
  end;
{$endif}

