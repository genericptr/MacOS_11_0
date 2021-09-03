{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSCharsetRule.h }

{$ifdef TYPES}
type
  DOMCSSCharsetRulePtr = ^DOMCSSCharsetRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSCharsetRule = objcclass external (DOMCSSRule)
  public
    function encoding: NSString; message 'encoding';
  end;
{$endif}

