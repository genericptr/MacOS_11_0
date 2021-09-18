{ Parsed from WebKit.framework DOMHTMLStyleElement.h }

{$ifdef TYPES}
type
  DOMHTMLStyleElementPtr = ^DOMHTMLStyleElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLStyleElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    procedure setMedia(newValue: NSString); message 'setMedia:';
    function media: NSString; message 'media';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    function sheet: DOMStyleSheet; message 'sheet'; { available in 10_4 }
  end;
{$endif}

