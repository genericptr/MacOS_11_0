{ Parsed from WebKit.framework DOMHTMLDirectoryElement.h }

{$ifdef TYPES}
type
  DOMHTMLDirectoryElementPtr = ^DOMHTMLDirectoryElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLDirectoryElement = objcclass external (DOMHTMLElement)
  public
    procedure setCompact(newValue: objcbool); message 'setCompact:';
    function compact: objcbool; message 'compact';
  end;
{$endif}

