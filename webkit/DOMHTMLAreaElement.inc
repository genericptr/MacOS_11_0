{ Parsed from WebKit.framework DOMHTMLAreaElement.h }

{$ifdef TYPES}
type
  DOMHTMLAreaElementPtr = ^DOMHTMLAreaElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLAreaElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlt(newValue: NSString); message 'setAlt:';
    function alt: NSString; message 'alt';
    procedure setCoords(newValue: NSString); message 'setCoords:';
    function coords: NSString; message 'coords';
    procedure setNoHref(newValue: objcbool); message 'setNoHref:';
    function noHref: objcbool; message 'noHref';
    procedure setShape(newValue: NSString); message 'setShape:';
    function shape: NSString; message 'shape';
    procedure setTarget(newValue: NSString); message 'setTarget:';
    function target: NSString; message 'target';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
    function absoluteLinkURL: NSURL; message 'absoluteLinkURL'; { available in 10_5 }
    procedure setHref(newValue: NSString); message 'setHref:';
    function href: NSString; message 'href';
    function protocol: NSString; message 'protocol'; { available in 10_5 }
    function host: NSString; message 'host'; { available in 10_5 }
    function hostname: NSString; message 'hostname'; { available in 10_5 }
    function port: NSString; message 'port'; { available in 10_5 }
    function pathname: NSString; message 'pathname'; { available in 10_5 }
    function search: NSString; message 'search'; { available in 10_5 }
    function hashName: NSString; message 'hashName'; { available in 10_5 }
  end;
{$endif}

