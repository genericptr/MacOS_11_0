{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMRect.h }

{$ifdef TYPES}
type
  DOMRectPtr = ^DOMRect;
{$endif}

{$ifdef CLASSES}

type
  DOMRect = objcclass external (DOMObject)
  public
    function top: DOMCSSPrimitiveValue; message 'top';
    function right: DOMCSSPrimitiveValue; message 'right';
    function bottom: DOMCSSPrimitiveValue; message 'bottom';
    function left: DOMCSSPrimitiveValue; message 'left';
  end;
{$endif}

