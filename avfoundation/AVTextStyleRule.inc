{ Parsed from AVFoundation.framework AVTextStyleRule.h }

{$ifdef TYPES}
type
  AVTextStyleRulePtr = ^AVTextStyleRule;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVTextStyleRule = objcclass external (NSObject, NSCopyingProtocol)
  private
    _textStyleRule: AVTextStyleRuleInternal;
  public
    class function propertyListForTextStyleRules (textStyleRules: NSArray): id; message 'propertyListForTextStyleRules:';
    class function textStyleRulesFromPropertyList (plist: id): NSArray; message 'textStyleRulesFromPropertyList:';
    class function textStyleRuleWithTextMarkupAttributes (textMarkupAttributes: NSDictionary): AVTextStyleRule; message 'textStyleRuleWithTextMarkupAttributes:';
    class function textStyleRuleWithTextMarkupAttributes_textSelector (textMarkupAttributes: NSDictionary; textSelector: NSString): AVTextStyleRule; message 'textStyleRuleWithTextMarkupAttributes:textSelector:';
    function initWithTextMarkupAttributes (textMarkupAttributes: NSDictionary): id; message 'initWithTextMarkupAttributes:';
    function initWithTextMarkupAttributes_textSelector (textMarkupAttributes: NSDictionary; textSelector: NSString): id; message 'initWithTextMarkupAttributes:textSelector:'; { NS_DESIGNATED_INITIALIZER }
    function textMarkupAttributes: NSDictionary; message 'textMarkupAttributes';
    function textSelector: NSString; message 'textSelector';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$else}
{$endif}
