{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLEmbedElement.h }

{$ifdef TYPES}
type
  DOMHTMLEmbedElementPtr = ^DOMHTMLEmbedElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLEmbedElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setHeight(newValue: cint); message 'setHeight:';
    function height: cint; message 'height';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setWidth(newValue: cint); message 'setWidth:';
    function width: cint; message 'width';
  end;
{$endif}

