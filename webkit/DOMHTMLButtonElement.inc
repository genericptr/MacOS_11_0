{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLButtonElement.h }

{$ifdef TYPES}
type
  DOMHTMLButtonElementPtr = ^DOMHTMLButtonElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLButtonElement = objcclass external (DOMHTMLElement)
  public
    procedure setAutofocus(newValue: objcbool); message 'setAutofocus:'; { available in 10_6 }
    function autofocus: objcbool; message 'autofocus'; { available in 10_6 }
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function willValidate: objcbool; message 'willValidate'; { available in 10_6 }
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
    procedure click; message 'click'; { available in 10_5 }
  end;
{$endif}

