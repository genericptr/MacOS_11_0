{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSATSTypesetter.h }

{$ifdef TYPES}
type
  NSATSTypesetterPtr = ^NSATSTypesetter;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSATSTypesetter = objcclass external (NSTypesetter)
  public
    class function sharedTypesetter: NSATSTypesetter; message 'sharedTypesetter';
  end;


type
  NSPantherCompatibility = objccategory external (NSATSTypesetter)
    function lineFragmentRectForProposedRect_remainingRect (proposedRect: NSRect; remainingRect: NSRectPointer): NSRect; message 'lineFragmentRectForProposedRect:remainingRect:'; deprecated;
  end;

type
  NSPrimitiveInterface = objccategory external (NSATSTypesetter)
    procedure setUsesFontLeading(newValue: objcbool); message 'setUsesFontLeading:';
    function usesFontLeading: objcbool; message 'usesFontLeading';
    procedure setTypesetterBehavior(newValue: NSTypesetterBehavior); message 'setTypesetterBehavior:';
    function typesetterBehavior: NSTypesetterBehavior; message 'typesetterBehavior';
    procedure setHyphenationFactor(newValue: single); message 'setHyphenationFactor:';
    function hyphenationFactor: single; message 'hyphenationFactor';
    procedure setLineFragmentPadding(newValue: CGFloat); message 'setLineFragmentPadding:';
    function lineFragmentPadding: CGFloat; message 'lineFragmentPadding';
    function substituteFontForFont (originalFont: NSFont): NSFont; message 'substituteFontForFont:';
    function textTabForGlyphLocation_writingDirection_maxLocation (glyphLocation: CGFloat; direction: NSWritingDirection; maxLocation: CGFloat): NSTextTab; message 'textTabForGlyphLocation:writingDirection:maxLocation:';
    procedure setBidiProcessingEnabled(newValue: objcbool); message 'setBidiProcessingEnabled:';
    function bidiProcessingEnabled: objcbool; message 'bidiProcessingEnabled';
    procedure setAttributedString(newValue: NSAttributedString); message 'setAttributedString:';
    function attributedString: NSAttributedString; message 'attributedString';
    procedure setParagraphGlyphRange_separatorGlyphRange (paragraphRange: NSRange; paragraphSeparatorRange: NSRange); message 'setParagraphGlyphRange:separatorGlyphRange:';
    function paragraphGlyphRange: NSRange; message 'paragraphGlyphRange';
    function paragraphSeparatorGlyphRange: NSRange; message 'paragraphSeparatorGlyphRange';
    function layoutParagraphAtPoint (lineFragmentOrigin: NSPointPtr): NSUInteger; message 'layoutParagraphAtPoint:';
    function lineSpacingAfterGlyphAtIndex_withProposedLineFragmentRect (glyphIndex: NSUInteger; rect: NSRect): CGFloat; message 'lineSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:';
    function paragraphSpacingBeforeGlyphAtIndex_withProposedLineFragmentRect (glyphIndex: NSUInteger; rect: NSRect): CGFloat; message 'paragraphSpacingBeforeGlyphAtIndex:withProposedLineFragmentRect:';
    function paragraphSpacingAfterGlyphAtIndex_withProposedLineFragmentRect (glyphIndex: NSUInteger; rect: NSRect): CGFloat; message 'paragraphSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    function currentTextContainer: NSTextContainer; message 'currentTextContainer';
    procedure setHardInvalidation_forGlyphRange (flag: objcbool; glyphRange: NSRange); message 'setHardInvalidation:forGlyphRange:';
    procedure getLineFragmentRect_usedRect_forParagraphSeparatorGlyphRange_atProposedOrigin (lineFragmentRect: NSRectPtr; lineFragmentUsedRect: NSRectPtr; paragraphSeparatorGlyphRange_: NSRange; lineOrigin: NSPoint); message 'getLineFragmentRect:usedRect:forParagraphSeparatorGlyphRange:atProposedOrigin:';
  end;

type
  NSLayoutPhaseInterface = objccategory external (NSATSTypesetter)
    procedure willSetLineFragmentRect_forGlyphRange_usedRect_baselineOffset (lineRect: NSRectPtr; glyphRange: NSRange; usedRect: NSRectPtr; baselineOffset: CGFloatPtr); message 'willSetLineFragmentRect:forGlyphRange:usedRect:baselineOffset:';
    function shouldBreakLineByWordBeforeCharacterAtIndex (charIndex: NSUInteger): objcbool; message 'shouldBreakLineByWordBeforeCharacterAtIndex:';
    function shouldBreakLineByHyphenatingBeforeCharacterAtIndex (charIndex: NSUInteger): objcbool; message 'shouldBreakLineByHyphenatingBeforeCharacterAtIndex:';
    function hyphenationFactorForGlyphAtIndex (glyphIndex: NSUInteger): single; message 'hyphenationFactorForGlyphAtIndex:';
    function hyphenCharacterForGlyphAtIndex (glyphIndex: NSUInteger): UTF32Char; message 'hyphenCharacterForGlyphAtIndex:';
    function boundingBoxForControlGlyphAtIndex_forTextContainer_proposedLineFragment_glyphPosition_characterIndex (glyphIndex: NSUInteger; textContainer: NSTextContainer; proposedRect: NSRect; glyphPosition: NSPoint; charIndex: NSUInteger): NSRect; message 'boundingBoxForControlGlyphAtIndex:forTextContainer:proposedLineFragment:glyphPosition:characterIndex:';
  end;

type
  NSGlyphStorageInterface = objccategory external (NSATSTypesetter)
    function getGlyphsInRange_glyphs_characterIndexes_glyphInscriptions_elasticBits (glyphsRange: NSRange; glyphBuffer: NSGlyphPtr; charIndexBuffer: NSUIntegerPtr; inscribeBuffer: NSGlyphInscriptionPtr; elasticBuffer: objcboolPtr): NSUInteger; message 'getGlyphsInRange:glyphs:characterIndexes:glyphInscriptions:elasticBits:'; deprecated;
  end;
{$endif}

{$endif}

{$else}
{$endif}
