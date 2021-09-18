{ Parsed from WebKit.framework DOMHTMLUListElement.h }

{$ifdef TYPES}
type
  DOMHTMLUListElementPtr = ^DOMHTMLUListElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLUListElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: objcbool); message 'setCompact:';
    function compact: objcbool; message 'compact';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
  end;
{$endif}

