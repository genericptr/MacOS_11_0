{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSFontFaceRule.h }

{$ifdef TYPES}
type
  DOMCSSFontFaceRulePtr = ^DOMCSSFontFaceRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSFontFaceRule = objcclass external (DOMCSSRule)
  public
    function style: DOMCSSStyleDeclaration; message 'style';
  end;
{$endif}

