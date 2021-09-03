{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLHRElement.h }

{$ifdef TYPES}
type
  DOMHTMLHRElementPtr = ^DOMHTMLHRElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLHRElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setNoShade(newValue: objcbool); message 'setNoShade:';
    function noShade: objcbool; message 'noShade';
    procedure setSize(newValue: NSString); message 'setSize:';
    function size: NSString; message 'size';
    procedure setWidth(newValue: NSString); message 'setWidth:';
    function width: NSString; message 'width';
  end;
{$endif}

