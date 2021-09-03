{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLOptionElement.h }

{$ifdef TYPES}
type
  DOMHTMLOptionElementPtr = ^DOMHTMLOptionElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLOptionElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    function form: DOMHTMLFormElement; message 'form';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setDefaultSelected(newValue: objcbool); message 'setDefaultSelected:';
    function defaultSelected: objcbool; message 'defaultSelected';
    procedure setSelected(newValue: objcbool); message 'setSelected:';
    function selected: objcbool; message 'selected';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function text: NSString; message 'text';
    function index: cint; message 'index';
  end;
{$endif}

