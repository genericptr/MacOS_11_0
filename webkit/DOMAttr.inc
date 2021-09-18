{ Parsed from WebKit.framework DOMAttr.h }

{$ifdef TYPES}
type
  DOMAttrPtr = ^DOMAttr;
{$endif}

{$ifdef CLASSES}

type
  DOMAttr = objcclass external (DOMNode)
  public
    function name: NSString; message 'name';
    function specified: objcbool; message 'specified';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function ownerElement: DOMElement; message 'ownerElement';
    function style: DOMCSSStyleDeclaration; message 'style'; { available in 10_5 }
  end;
{$endif}

