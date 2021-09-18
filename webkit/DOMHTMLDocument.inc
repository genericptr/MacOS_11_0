{ Parsed from WebKit.framework DOMHTMLDocument.h }

{$ifdef TYPES}
type
  DOMHTMLDocumentPtr = ^DOMHTMLDocument;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLDocument = objcclass external (DOMDocument)
  public
    function embeds: DOMHTMLCollection; message 'embeds'; { available in 10_5 }
    function plugins: DOMHTMLCollection; message 'plugins'; { available in 10_5 }
    function scripts: DOMHTMLCollection; message 'scripts'; { available in 10_5 }
    function width: cint; message 'width'; { available in 10_5 }
    function height: cint; message 'height'; { available in 10_5 }
    procedure setDir(newValue: NSString); message 'setDir:'; { available in 10_5 }
    function dir: NSString; message 'dir'; { available in 10_5 }
    procedure setDesignMode(newValue: NSString); message 'setDesignMode:'; { available in 10_5 }
    function designMode: NSString; message 'designMode'; { available in 10_5 }
    function compatMode: NSString; message 'compatMode'; { available in 10_6 }
    procedure setBgColor(newValue: NSString); message 'setBgColor:'; { available in 10_5 }
    function bgColor: NSString; message 'bgColor'; { available in 10_5 }
    procedure setFgColor(newValue: NSString); message 'setFgColor:'; { available in 10_5 }
    function fgColor: NSString; message 'fgColor'; { available in 10_5 }
    procedure setAlinkColor(newValue: NSString); message 'setAlinkColor:'; { available in 10_5 }
    function alinkColor: NSString; message 'alinkColor'; { available in 10_5 }
    procedure setLinkColor(newValue: NSString); message 'setLinkColor:'; { available in 10_5 }
    function linkColor: NSString; message 'linkColor'; { available in 10_5 }
    procedure setVlinkColor(newValue: NSString); message 'setVlinkColor:'; { available in 10_5 }
    function vlinkColor: NSString; message 'vlinkColor'; { available in 10_5 }
    procedure open; message 'open';
    procedure close; message 'close';
    procedure write (text: NSString); message 'write:';
    procedure writeln (text: NSString); message 'writeln:';
    procedure clear; message 'clear'; { available in 10_6 }
    procedure captureEvents; message 'captureEvents'; { available in 10_5 }
    procedure releaseEvents; message 'releaseEvents'; { available in 10_5 }
  end;
{$endif}

