{ Parsed from WebKit.framework DOMHTMLLinkElement.h }

{$ifdef TYPES}
type
  DOMHTMLLinkElementPtr = ^DOMHTMLLinkElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLLinkElement = objcclass external (DOMHTMLElement)
  public
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    procedure setCharset(newValue: NSString); message 'setCharset:';
    function charset: NSString; message 'charset';
    procedure setHref(newValue: NSString); message 'setHref:';
    function href: NSString; message 'href';
    procedure setHreflang(newValue: NSString); message 'setHreflang:';
    function hreflang: NSString; message 'hreflang';
    procedure setMedia(newValue: NSString); message 'setMedia:';
    function media: NSString; message 'media';
    procedure setRel(newValue: NSString); message 'setRel:';
    function rel: NSString; message 'rel';
    procedure setRev(newValue: NSString); message 'setRev:';
    function rev: NSString; message 'rev';
    procedure setTarget(newValue: NSString); message 'setTarget:';
    function target: NSString; message 'target';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    function sheet: DOMStyleSheet; message 'sheet'; { available in 10_4 }
    function absoluteLinkURL: NSURL; message 'absoluteLinkURL'; { available in 10_5 }
  end;
{$endif}

