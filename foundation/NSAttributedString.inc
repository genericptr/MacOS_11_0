{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSAttributedString.h }

{ Types from NSExtendedAttributedString }
{$ifdef TYPES}

type
  NSAttributedStringEnumerationOptions = NSUInteger;
type
  NSAttributedStringEnumerationOptionsPtr = ^NSAttributedStringEnumerationOptions;

const
  NSAttributedStringEnumerationReverse = 1 shl 1;
  NSAttributedStringEnumerationLongestEffectiveRangeNotRequired = 1 shl 20;
{$endif}


{$ifdef CALLBACKS}
type
  NSAttributedStringEnumerateAttributesInRangeCallback = reference to procedure (attrs: NSDictionary; range: NSRange; stop: objcboolPtr); cblock; cdecl;
  NSAttributedStringEnumerateAttributeCallback = reference to procedure (value: id; range: NSRange; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSAttributedStringPtr = ^NSAttributedString;
  NSMutableAttributedStringPtr = ^NSMutableAttributedString;
{$endif}

{$ifdef TYPES}
type
  NSAttributedStringKey = NSString;
  NSAttributedStringKeyPtr = ^NSAttributedStringKey;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedString = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function string_: NSString; message 'string';
    function attributesAtIndex_effectiveRange (location: NSUInteger; range: NSRangePointer): NSDictionary; message 'attributesAtIndex:effectiveRange:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedAttributedString = objccategory external (NSAttributedString)
    function length: NSUInteger; message 'length';
    function attribute_atIndex_effectiveRange (attrName: NSAttributedStringKey; location: NSUInteger; range: NSRangePointer): id; message 'attribute:atIndex:effectiveRange:';
    function attributedSubstringFromRange (range: NSRange): NSAttributedString; message 'attributedSubstringFromRange:';
    function attributesAtIndex_longestEffectiveRange_inRange (location: NSUInteger; range: NSRangePointer; rangeLimit: NSRange): NSDictionary; message 'attributesAtIndex:longestEffectiveRange:inRange:';
    function attribute_atIndex_longestEffectiveRange_inRange (attrName: NSAttributedStringKey; location: NSUInteger; range: NSRangePointer; rangeLimit: NSRange): id; message 'attribute:atIndex:longestEffectiveRange:inRange:';
    function isEqualToAttributedString (other: NSAttributedString): objcbool; message 'isEqualToAttributedString:';
    function initWithString (str: NSString): id; message 'initWithString:';
    function initWithString_attributes (str: NSString; attrs: NSDictionary): id; message 'initWithString:attributes:';
    function initWithAttributedString (attrStr: NSAttributedString): id; message 'initWithAttributedString:';
    procedure enumerateAttributesInRange_options_usingBlock (enumerationRange: NSRange; opts: NSAttributedStringEnumerationOptions; block: NSAttributedStringEnumerateAttributesInRangeCallback); message 'enumerateAttributesInRange:options:usingBlock:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateAttribute_inRange_options_usingBlock (attrName: NSAttributedStringKey; enumerationRange: NSRange; opts: NSAttributedStringEnumerationOptions; block: NSAttributedStringEnumerateAttributeCallback); message 'enumerateAttribute:inRange:options:usingBlock:'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSMutableAttributedString = objcclass external (NSAttributedString)
  public
    procedure replaceCharactersInRange_withString (range: NSRange; str: NSString); message 'replaceCharactersInRange:withString:';
    procedure setAttributes_range (attrs: NSDictionary; range: NSRange); message 'setAttributes:range:';
  end;


type
  NSExtendedMutableAttributedString = objccategory external (NSMutableAttributedString)
    function mutableString: NSMutableString; message 'mutableString';
    procedure addAttribute_value_range (name: NSAttributedStringKey; value: id; range: NSRange); message 'addAttribute:value:range:';
    procedure addAttributes_range (attrs: NSDictionary; range: NSRange); message 'addAttributes:range:';
    procedure removeAttribute_range (name: NSAttributedStringKey; range: NSRange); message 'removeAttribute:range:';
    procedure replaceCharactersInRange_withAttributedString (range: NSRange; attrString: NSAttributedString); message 'replaceCharactersInRange:withAttributedString:';
    procedure insertAttributedString_atIndex (attrString: NSAttributedString; loc: NSUInteger); message 'insertAttributedString:atIndex:';
    procedure appendAttributedString (attrString: NSAttributedString); message 'appendAttributedString:';
    procedure deleteCharactersInRange (range: NSRange); message 'deleteCharactersInRange:';
    procedure setAttributedString (attrString: NSAttributedString); message 'setAttributedString:';
    procedure beginEditing; message 'beginEditing';
    procedure endEditing; message 'endEditing';
  end;
{$endif}

