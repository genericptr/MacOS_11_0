{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMRGBColor.h }

{$ifdef TYPES}
type
  DOMRGBColorPtr = ^DOMRGBColor;
{$endif}

{$ifdef CLASSES}

type
  DOMRGBColor = objcclass external (DOMObject)
  public
    function red: DOMCSSPrimitiveValue; message 'red';
    function green: DOMCSSPrimitiveValue; message 'green';
    function blue: DOMCSSPrimitiveValue; message 'blue';
    function alpha: DOMCSSPrimitiveValue; message 'alpha';
    function color: NSColor; message 'color'; { available in 10_5 }
  end;
{$endif}

