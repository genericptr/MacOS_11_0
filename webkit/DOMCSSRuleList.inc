{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSRuleList.h }

{$ifdef TYPES}
type
  DOMCSSRuleListPtr = ^DOMCSSRuleList;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSRuleList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMCSSRule; message 'item:';
  end;
{$endif}

