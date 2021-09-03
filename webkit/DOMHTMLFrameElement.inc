{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLFrameElement.h }

{$ifdef TYPES}
type
  DOMHTMLFrameElementPtr = ^DOMHTMLFrameElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLFrameElement = objcclass external (DOMHTMLElement)
  public
    procedure setFrameBorder(newValue: NSString); message 'setFrameBorder:';
    function frameBorder: NSString; message 'frameBorder';
    procedure setLongDesc(newValue: NSString); message 'setLongDesc:';
    function longDesc: NSString; message 'longDesc';
    procedure setMarginHeight(newValue: NSString); message 'setMarginHeight:';
    function marginHeight: NSString; message 'marginHeight';
    procedure setMarginWidth(newValue: NSString); message 'setMarginWidth:';
    function marginWidth: NSString; message 'marginWidth';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setNoResize(newValue: objcbool); message 'setNoResize:';
    function noResize: objcbool; message 'noResize';
    procedure setScrolling(newValue: NSString); message 'setScrolling:';
    function scrolling: NSString; message 'scrolling';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    function contentDocument: DOMDocument; message 'contentDocument';
    function contentWindow: DOMAbstractView; message 'contentWindow'; { available in 10_5 }
    procedure setLocation(newValue: NSString); message 'setLocation:'; { available in 10_5 }
    function location: NSString; message 'location'; { available in 10_5 }
    function width: cint; message 'width'; { available in 10_5 }
    function height: cint; message 'height'; { available in 10_5 }
  end;
{$endif}

