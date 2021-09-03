{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSValueList.h }

{$ifdef TYPES}
type
  DOMCSSValueListPtr = ^DOMCSSValueList;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSValueList = objcclass external (DOMCSSValue)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMCSSValue; message 'item:';
  end;
{$endif}

