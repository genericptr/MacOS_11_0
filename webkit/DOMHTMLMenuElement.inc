{ Parsed from WebKit.framework DOMHTMLMenuElement.h }

{$ifdef TYPES}
type
  DOMHTMLMenuElementPtr = ^DOMHTMLMenuElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLMenuElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: objcbool); message 'setCompact:';
    function compact: objcbool; message 'compact';
  end;
{$endif}

