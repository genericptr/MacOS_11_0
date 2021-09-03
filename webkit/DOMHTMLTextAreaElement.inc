{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLTextAreaElement.h }

{$ifdef TYPES}
type
  DOMHTMLTextAreaElementPtr = ^DOMHTMLTextAreaElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTextAreaElement = objcclass external (DOMHTMLElement)
  public
    procedure setAutofocus(newValue: objcbool); message 'setAutofocus:'; { available in 10_6 }
    function autofocus: objcbool; message 'autofocus'; { available in 10_6 }
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setReadOnly(newValue: objcbool); message 'setReadOnly:';
    function readOnly: objcbool; message 'readOnly';
    procedure setRows(newValue: cint); message 'setRows:';
    function rows: cint; message 'rows';
    procedure setCols(newValue: cint); message 'setCols:';
    function cols: cint; message 'cols';
    function type_: NSString; message 'type';
    procedure setDefaultValue(newValue: NSString); message 'setDefaultValue:';
    function defaultValue: NSString; message 'defaultValue';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function willValidate: objcbool; message 'willValidate'; { available in 10_6 }
    procedure setSelectionStart(newValue: cint); message 'setSelectionStart:'; { available in 10_5 }
    function selectionStart: cint; message 'selectionStart'; { available in 10_5 }
    procedure setSelectionEnd(newValue: cint); message 'setSelectionEnd:'; { available in 10_5 }
    function selectionEnd: cint; message 'selectionEnd'; { available in 10_5 }
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
    procedure select; message 'select';
    procedure setSelectionRange_end (start: cint; end_: cint); message 'setSelectionRange:end:'; { available in 10_5 }
  end;
{$endif}

