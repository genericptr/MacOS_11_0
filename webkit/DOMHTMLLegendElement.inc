{ Parsed from WebKit.framework DOMHTMLLegendElement.h }

{$ifdef TYPES}
type
  DOMHTMLLegendElementPtr = ^DOMHTMLLegendElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLLegendElement = objcclass external (DOMHTMLElement)
  public
    function form: DOMHTMLFormElement; message 'form';
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
  end;
{$endif}

