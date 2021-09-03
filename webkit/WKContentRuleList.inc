{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKContentRuleList.h }

{$ifdef TYPES}
type
  WKContentRuleListPtr = ^WKContentRuleList;
{$endif}

{$ifdef CLASSES}

type
  WKContentRuleList = objcclass external (NSObject)
  public
    function identifier: NSString; message 'identifier';
  end;
{$endif}

