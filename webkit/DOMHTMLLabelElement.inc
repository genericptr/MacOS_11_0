{ Parsed from WebKit.framework DOMHTMLLabelElement.h }

{$ifdef TYPES}
type
  DOMHTMLLabelElementPtr = ^DOMHTMLLabelElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLLabelElement = objcclass external (DOMHTMLElement)
  public
    function form: DOMHTMLFormElement; message 'form';
    procedure setHtmlFor(newValue: NSString); message 'setHtmlFor:';
    function htmlFor: NSString; message 'htmlFor';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
  end;
{$endif}

