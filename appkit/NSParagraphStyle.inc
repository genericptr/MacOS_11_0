{ Parsed from AppKit.framework NSParagraphStyle.h }

{$ifdef TYPES}
type
  NSTextTabPtr = ^NSTextTab;
  NSParagraphStylePtr = ^NSParagraphStyle;
  NSMutableParagraphStylePtr = ^NSMutableParagraphStyle;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSLineBreakMode = NSUInteger;
  NSLineBreakModePtr = ^NSLineBreakMode;

const
  NSLineBreakByWordWrapping = 0;
  NSLineBreakByCharWrapping = 1;
  NSLineBreakByClipping = 2;
  NSLineBreakByTruncatingHead = 3;
  NSLineBreakByTruncatingTail = 4;
  NSLineBreakByTruncatingMiddle = 5;

type
  NSLineBreakStrategy = NSUInteger;
  NSLineBreakStrategyPtr = ^NSLineBreakStrategy;

const
  NSLineBreakStrategyNone = 0;
  NSLineBreakStrategyPushOut = 1 shl 0 { available in macos 10.11, ios 9.0 };
  NSLineBreakStrategyHangulWordPriority = 1 shl 1 { available in macos 11.0, ios 14.0 };
  NSLineBreakStrategyStandard = $FFFF { available in macos 11.0, ios 14.0 };

type
  NSTextTabOptionKey = NSString;
  NSTextTabOptionKeyPtr = ^NSTextTabOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTabColumnTerminatorsAttributeName: NSTextTabOptionKey { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSTextTab = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class function columnTerminatorsForLocale (aLocale: NSLocale): NSCharacterSet; message 'columnTerminatorsForLocale:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function initWithTextAlignment_location_options (alignment: NSTextAlignment; loc: CGFloat; options: NSDictionary): id; message 'initWithTextAlignment:location:options:'; { NS_DESIGNATED_INITIALIZER }
    function alignment: NSTextAlignment; message 'alignment';
    function location: CGFloat; message 'location';
    function options: NSDictionary; message 'options';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSParagraphStyle = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    class function defaultParagraphStyle: NSParagraphStyle; message 'defaultParagraphStyle';
    class function defaultWritingDirectionForLanguage (languageName: NSString): NSWritingDirection; message 'defaultWritingDirectionForLanguage:';
    function lineSpacing: CGFloat; message 'lineSpacing';
    function paragraphSpacing: CGFloat; message 'paragraphSpacing';
    function alignment: NSTextAlignment; message 'alignment';
    function headIndent: CGFloat; message 'headIndent';
    function tailIndent: CGFloat; message 'tailIndent';
    function firstLineHeadIndent: CGFloat; message 'firstLineHeadIndent';
    function minimumLineHeight: CGFloat; message 'minimumLineHeight';
    function maximumLineHeight: CGFloat; message 'maximumLineHeight';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    function lineHeightMultiple: CGFloat; message 'lineHeightMultiple';
    function paragraphSpacingBefore: CGFloat; message 'paragraphSpacingBefore';
    function hyphenationFactor: single; message 'hyphenationFactor';
    function tabStops: NSArray; message 'tabStops'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    function defaultTabInterval: CGFloat; message 'defaultTabInterval'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    function allowsDefaultTighteningForTruncation: objcbool; message 'allowsDefaultTighteningForTruncation'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function tighteningFactorForTruncation: single; message 'tighteningFactorForTruncation';
    function textBlocks: NSArray; message 'textBlocks';
    function textLists: NSArray; message 'textLists';
    function headerLevel: NSInteger; message 'headerLevel';
    function lineBreakStrategy: NSLineBreakStrategy; message 'lineBreakStrategy'; { available in macos 10.11, ios 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSMutableParagraphStyle = objcclass external (NSParagraphStyle)
  public
    procedure setLineSpacing(newValue: CGFloat); message 'setLineSpacing:';
    function lineSpacing: CGFloat; message 'lineSpacing';
    procedure setParagraphSpacing(newValue: CGFloat); message 'setParagraphSpacing:';
    function paragraphSpacing: CGFloat; message 'paragraphSpacing';
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setFirstLineHeadIndent(newValue: CGFloat); message 'setFirstLineHeadIndent:';
    function firstLineHeadIndent: CGFloat; message 'firstLineHeadIndent';
    procedure setHeadIndent(newValue: CGFloat); message 'setHeadIndent:';
    function headIndent: CGFloat; message 'headIndent';
    procedure setTailIndent(newValue: CGFloat); message 'setTailIndent:';
    function tailIndent: CGFloat; message 'tailIndent';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setMinimumLineHeight(newValue: CGFloat); message 'setMinimumLineHeight:';
    function minimumLineHeight: CGFloat; message 'minimumLineHeight';
    procedure setMaximumLineHeight(newValue: CGFloat); message 'setMaximumLineHeight:';
    function maximumLineHeight: CGFloat; message 'maximumLineHeight';
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    procedure setLineHeightMultiple(newValue: CGFloat); message 'setLineHeightMultiple:';
    function lineHeightMultiple: CGFloat; message 'lineHeightMultiple';
    procedure setParagraphSpacingBefore(newValue: CGFloat); message 'setParagraphSpacingBefore:';
    function paragraphSpacingBefore: CGFloat; message 'paragraphSpacingBefore';
    procedure setHyphenationFactor(newValue: single); message 'setHyphenationFactor:';
    function hyphenationFactor: single; message 'hyphenationFactor';
    procedure setTabStops(newValue: NSArray); message 'setTabStops:'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    function tabStops: NSArray; message 'tabStops'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setDefaultTabInterval(newValue: CGFloat); message 'setDefaultTabInterval:'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    function defaultTabInterval: CGFloat; message 'defaultTabInterval'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setAllowsDefaultTighteningForTruncation(newValue: objcbool); message 'setAllowsDefaultTighteningForTruncation:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function allowsDefaultTighteningForTruncation: objcbool; message 'allowsDefaultTighteningForTruncation'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure addTabStop (anObject: NSTextTab); message 'addTabStop:'; { available in macos 10.0, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure removeTabStop (anObject: NSTextTab); message 'removeTabStop:'; { available in macos 10.0, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure setParagraphStyle (obj: NSParagraphStyle); message 'setParagraphStyle:'; { available in macos 10.0, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure setTighteningFactorForTruncation(newValue: single); message 'setTighteningFactorForTruncation:';
    function tighteningFactorForTruncation: single; message 'tighteningFactorForTruncation';
    procedure setTextBlocks(newValue: NSArray); message 'setTextBlocks:';
    function textBlocks: NSArray; message 'textBlocks';
    procedure setTextLists(newValue: NSArray); message 'setTextLists:';
    function textLists: NSArray; message 'textLists';
    procedure setHeaderLevel(newValue: NSInteger); message 'setHeaderLevel:';
    function headerLevel: NSInteger; message 'headerLevel';
    procedure setLineBreakStrategy(newValue: NSLineBreakStrategy); message 'setLineBreakStrategy:'; { available in macos 10.11, ios 9.0 }
    function lineBreakStrategy: NSLineBreakStrategy; message 'lineBreakStrategy'; { available in macos 10.11, ios 9.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSTextTabType = NSUInteger;
  NSTextTabTypePtr = ^NSTextTabType;

const
  NSLeftTabStopType = 0;
  NSRightTabStopType = 1;
  NSCenterTabStopType = 2;
  NSDecimalTabStopType = 3;
{$endif}

{$ifdef CLASSES}

type
  NSTextTabDeprecated = objccategory external (NSTextTab)
    function initWithType_location (type_: NSTextTabType; loc: CGFloat): id; message 'initWithType:location:';
    function tabStopType: NSTextTabType; message 'tabStopType';
  end;
{$endif}

{$endif}

{$else}
{$endif}
