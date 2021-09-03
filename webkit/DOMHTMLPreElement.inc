{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLPreElement.h }

{$ifdef TYPES}
type
  DOMHTMLPreElementPtr = ^DOMHTMLPreElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLPreElement = objcclass external (DOMHTMLElement)
  public
    procedure setWidth(newValue: cint); message 'setWidth:';
    function width: cint; message 'width';
    procedure setWrap(newValue: objcbool); message 'setWrap:'; { available in 10_5 }
    function wrap: objcbool; message 'wrap'; { available in 10_5 }
  end;
{$endif}

