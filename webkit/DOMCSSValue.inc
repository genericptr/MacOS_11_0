{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSValue.h }

{$ifdef TYPES}
type
  DOMCSSValuePtr = ^DOMCSSValue;
{$endif}

{$ifdef TYPES}
const
  DOM_CSS_INHERIT = 0;
  DOM_CSS_PRIMITIVE_VALUE = 1;
  DOM_CSS_VALUE_LIST = 2;
  DOM_CSS_CUSTOM = 3;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSValue = objcclass external (DOMObject)
  public
    procedure setCssText(newValue: NSString); message 'setCssText:';
    function cssText: NSString; message 'cssText';
    function cssValueType: cushort; message 'cssValueType';
  end;
{$endif}

