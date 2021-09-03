{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSImportRule.h }

{$ifdef TYPES}
type
  DOMCSSImportRulePtr = ^DOMCSSImportRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSImportRule = objcclass external (DOMCSSRule)
  public
    function href: NSString; message 'href';
    function media: DOMMediaList; message 'media';
    function styleSheet: DOMCSSStyleSheet; message 'styleSheet';
  end;
{$endif}

