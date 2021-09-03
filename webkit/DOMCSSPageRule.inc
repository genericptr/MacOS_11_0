{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSPageRule.h }

{$ifdef TYPES}
type
  DOMCSSPageRulePtr = ^DOMCSSPageRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSPageRule = objcclass external (DOMCSSRule)
  public
    procedure setSelectorText(newValue: NSString); message 'setSelectorText:';
    function selectorText: NSString; message 'selectorText';
    function style: DOMCSSStyleDeclaration; message 'style';
  end;
{$endif}

