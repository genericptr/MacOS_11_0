{ Parsed from WebKit.framework DOMHTMLInputElement.h }

{$ifdef TYPES}
type
  DOMHTMLInputElementPtr = ^DOMHTMLInputElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLInputElement = objcclass external (DOMHTMLElement)
  public
    procedure setAccept(newValue: NSString); message 'setAccept:';
    function accept: NSString; message 'accept';
    procedure setAlt(newValue: NSString); message 'setAlt:';
    function alt: NSString; message 'alt';
    procedure setAutofocus(newValue: objcbool); message 'setAutofocus:'; { available in 10_6 }
    function autofocus: objcbool; message 'autofocus'; { available in 10_6 }
    procedure setDefaultChecked(newValue: objcbool); message 'setDefaultChecked:';
    function defaultChecked: objcbool; message 'defaultChecked';
    procedure setChecked(newValue: objcbool); message 'setChecked:';
    function checked: objcbool; message 'checked';
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setFiles(newValue: DOMFileList); message 'setFiles:'; { available in 10_6 }
    function files: DOMFileList; message 'files'; { available in 10_6 }
    procedure setIndeterminate(newValue: objcbool); message 'setIndeterminate:'; { available in 10_5 }
    function indeterminate: objcbool; message 'indeterminate'; { available in 10_5 }
    procedure setMaxLength(newValue: cint); message 'setMaxLength:';
    function maxLength: cint; message 'maxLength';
    procedure setMultiple(newValue: objcbool); message 'setMultiple:'; { available in 10_6 }
    function multiple: objcbool; message 'multiple'; { available in 10_6 }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setReadOnly(newValue: objcbool); message 'setReadOnly:';
    function readOnly: objcbool; message 'readOnly';
    procedure setSize(newValue: NSString); message 'setSize:';
    function size: NSString; message 'size';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setType(newValue: NSString); message 'setType:';
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
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setUseMap(newValue: NSString); message 'setUseMap:';
    function useMap: NSString; message 'useMap';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
    function altDisplayString: NSString; message 'altDisplayString'; { available in 10_5 }
    function absoluteImageURL: NSURL; message 'absoluteImageURL'; { available in 10_5 }
    procedure select; message 'select';
    procedure setSelectionRange_end (start: cint; end_: cint); message 'setSelectionRange:end:'; { available in 10_5 }
    procedure click; message 'click';
  end;
{$endif}

