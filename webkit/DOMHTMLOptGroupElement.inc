{ Parsed from WebKit.framework DOMHTMLOptGroupElement.h }

{$ifdef TYPES}
type
  DOMHTMLOptGroupElementPtr = ^DOMHTMLOptGroupElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLOptGroupElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

