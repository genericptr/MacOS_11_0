{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLElement.h }

{$ifdef TYPES}
type
  DOMHTMLElementPtr = ^DOMHTMLElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLElement = objcclass external (DOMElement)
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setLang(newValue: NSString); message 'setLang:';
    function lang: NSString; message 'lang';
    procedure setDir(newValue: NSString); message 'setDir:';
    function dir: NSString; message 'dir';
    procedure setTabIndex(newValue: cint); message 'setTabIndex:';
    function tabIndex: cint; message 'tabIndex';
    procedure setAccessKey(newValue: NSString); message 'setAccessKey:'; { available in 10_8 }
    function accessKey: NSString; message 'accessKey'; { available in 10_8 }
    procedure setInnerText(newValue: NSString); message 'setInnerText:';
    function innerText: NSString; message 'innerText';
    procedure setOuterText(newValue: NSString); message 'setOuterText:';
    function outerText: NSString; message 'outerText';
    procedure setContentEditable(newValue: NSString); message 'setContentEditable:';
    function contentEditable: NSString; message 'contentEditable';
    function isContentEditable: objcbool; message 'isContentEditable';
    procedure setIdName(newValue: NSString); message 'setIdName:';
    function idName: NSString; message 'idName';
    function children: DOMHTMLCollection; message 'children';
    function titleDisplayString: NSString; message 'titleDisplayString'; { available in 10_5 }
    procedure click; message 'click'; { available in 10_8 }
  end;
{$endif}

