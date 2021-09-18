{ Parsed from WebKit.framework DOMHTMLDListElement.h }

{$ifdef TYPES}
type
  DOMHTMLDListElementPtr = ^DOMHTMLDListElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLDListElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: objcbool); message 'setCompact:';
    function compact: objcbool; message 'compact';
  end;
{$endif}

