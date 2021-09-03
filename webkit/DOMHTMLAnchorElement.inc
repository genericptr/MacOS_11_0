{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLAnchorElement.h }

{$ifdef TYPES}
type
  DOMHTMLAnchorElementPtr = ^DOMHTMLAnchorElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLAnchorElement = objcclass external (DOMHTMLElement)
  public
    procedure setCharset(newValue: NSString); message 'setCharset:';
    function charset: NSString; message 'charset';
    procedure setCoords(newValue: NSString); message 'setCoords:';
    function coords: NSString; message 'coords';
    procedure setHreflang(newValue: NSString); message 'setHreflang:';
    function hreflang: NSString; message 'hreflang';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setRel(newValue: NSString); message 'setRel:';
    function rel: NSString; message 'rel';
    procedure setRev(newValue: NSString); message 'setRev:';
    function rev: NSString; message 'rev';
    procedure setShape(newValue: NSString); message 'setShape:';
    function shape: NSString; message 'shape';
    procedure setTarget(newValue: NSString); message 'setTarget:';
    function target: NSString; message 'target';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; deprecated 'in 10_4, 10_8';
    function accessKey: NSString; message 'accessKey'; deprecated 'in 10_4, 10_8';
    function text: NSString; message 'text'; { available in 10_5 }
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

