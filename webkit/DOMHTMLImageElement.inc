{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLImageElement.h }

{$ifdef TYPES}
type
  DOMHTMLImageElementPtr = ^DOMHTMLImageElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLImageElement = objcclass external (DOMHTMLElement)
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setAlt(newValue: NSString); message 'setAlt:';
    function alt: NSString; message 'alt';
    procedure setBorder(newValue: NSString); message 'setBorder:';
    function border: NSString; message 'border';
    procedure setHeight(newValue: cint); message 'setHeight:';
    function height: cint; message 'height';
    procedure setHspace(newValue: cint); message 'setHspace:';
    function hspace: cint; message 'hspace';
    procedure setIsMap(newValue: objcbool); message 'setIsMap:';
    function isMap: objcbool; message 'isMap';
    procedure setLongDesc(newValue: NSString); message 'setLongDesc:';
    function longDesc: NSString; message 'longDesc';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    procedure setUseMap(newValue: NSString); message 'setUseMap:';
    function useMap: NSString; message 'useMap';
    procedure setVspace(newValue: cint); message 'setVspace:';
    function vspace: cint; message 'vspace';
    procedure setWidth(newValue: cint); message 'setWidth:';
    function width: cint; message 'width';
    function complete: objcbool; message 'complete'; { available in 10_5 }
    procedure setLowsrc(newValue: NSString); message 'setLowsrc:'; { available in 10_5 }
    function lowsrc: NSString; message 'lowsrc'; { available in 10_5 }
    function naturalHeight: cint; message 'naturalHeight'; { available in 10_5 }
    function naturalWidth: cint; message 'naturalWidth'; { available in 10_5 }
    function x: cint; message 'x'; { available in 10_5 }
    function y: cint; message 'y'; { available in 10_5 }
    function altDisplayString: NSString; message 'altDisplayString'; { available in 10_5 }
    function absoluteImageURL: NSURL; message 'absoluteImageURL'; { available in 10_5 }
  end;
{$endif}

