{ Parsed from WebKit.framework DOMHTMLPreElement.h }

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

