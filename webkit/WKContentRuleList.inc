{ Parsed from WebKit.framework WKContentRuleList.h }

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

