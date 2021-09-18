{ Parsed from WebKit.framework DOMHTMLSelectElement.h }

{$ifdef TYPES}
type
  DOMHTMLSelectElementPtr = ^DOMHTMLSelectElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLSelectElement = objcclass external (DOMHTMLElement)
  public
    procedure setAutofocus(newValue: objcbool); message 'setAutofocus:'; { available in 10_6 }
    function autofocus: objcbool; message 'autofocus'; { available in 10_6 }
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setMultiple(newValue: objcbool); message 'setMultiple:';
    function multiple: objcbool; message 'multiple';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSize(newValue: cint); message 'setSize:';
    function size: cint; message 'size';
    function type_: NSString; message 'type';
    function options: DOMHTMLOptionsCollection; message 'options';
    function length: cint; message 'length';
    procedure setSelectedIndex(newValue: cint); message 'setSelectedIndex:';
    function selectedIndex: cint; message 'selectedIndex';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function willValidate: objcbool; message 'willValidate'; { available in 10_6 }
    function item (index: cuint): DOMNode; message 'item:'; { available in 10_6 }
    function namedItem (name_: NSString): DOMNode; message 'namedItem:'; { available in 10_6 }
    procedure add_before (element: DOMHTMLElement; before: DOMHTMLElement); message 'add:before:'; { available in 10_5 }
    procedure remove (index: cint); message 'remove:';
  end;


type
  DOMHTMLSelectElementDeprecated = objccategory external (DOMHTMLSelectElement)
    procedure add (element: DOMHTMLElement); message 'add:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

