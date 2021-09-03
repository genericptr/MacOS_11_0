{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLLIElement.h }

{$ifdef TYPES}
type
  DOMHTMLLIElementPtr = ^DOMHTMLLIElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLLIElement = objcclass external (DOMHTMLElement)
  public
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setValue(newValue: cint); message 'setValue:';
    function value: cint; message 'value';
  end;
{$endif}

