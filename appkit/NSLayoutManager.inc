{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSLayoutManager.h }

{$ifdef CALLBACKS}
type
  NSLayoutManagerEnumerateLineFragmentsForGlyphRangeCallback = reference to function (rect: NSRect; usedRect: NSRect; textContainer: NSTextContainer; glyphRange: NSRange; stop: objcboolPtr): pointer; cblock; cdecl;
  NSLayoutManagerEnumerateEnclosingRectsForGlyphRangeCallback = reference to function (rect: NSRect; stop: objcboolPtr): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSLayoutManagerPtr = ^NSLayoutManager;
  NSTextLayoutOrientationProviderProtocolPtr = ^NSTextLayoutOrientationProviderProtocol;
  NSLayoutManagerDelegateProtocolPtr = ^NSLayoutManagerDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSTextLayoutOrientation = NSInteger;
  NSTextLayoutOrientationPtr = ^NSTextLayoutOrientation;

const
  NSTextLayoutOrientationHorizontal = 0;
  NSTextLayoutOrientationVertical = 1;

type
  NSGlyphProperty = NSInteger;
  NSGlyphPropertyPtr = ^NSGlyphProperty;

const
  NSGlyphPropertyNull = 1 shl 0;
  NSGlyphPropertyControlCharacter = 1 shl 1;
  NSGlyphPropertyElastic = 1 shl 2;
  NSGlyphPropertyNonBaseCharacter = 1 shl 3;

type
  NSControlCharacterAction = NSInteger;
  NSControlCharacterActionPtr = ^NSControlCharacterAction;

const
  NSControlCharacterActionZeroAdvancement = 1 shl 0;
  NSControlCharacterActionWhitespace = 1 shl 1;
  NSControlCharacterActionHorizontalTab = 1 shl 2;
  NSControlCharacterActionLineBreak = 1 shl 3;
  NSControlCharacterActionParagraphBreak = 1 shl 4;
  NSControlCharacterActionContainerBreak = 1 shl 5;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextLayoutOrientationProviderProtocol = objcprotocol external name 'NSTextLayoutOrientationProvider'
    function layoutOrientation: NSTextLayoutOrientation; message 'layoutOrientation'; { available in macos , ios , tvos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSTypesetterBehavior = NSInteger;
  NSTypesetterBehaviorPtr = ^NSTypesetterBehavior;

const
  NSTypesetterLatestBehavior = -1;
  NSTypesetterOriginalBehavior = 0;
  NSTypesetterBehavior_10_2_WithCompatibility = 1;
  NSTypesetterBehavior_10_2 = 2;
  NSTypesetterBehavior_10_3 = 3;
  NSTypesetterBehavior_10_4 = 4;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutManager = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTextStorage(newValue: NSTextStorage); message 'setTextStorage:';
    function textStorage: NSTextStorage; message 'textStorage';
    procedure replaceTextStorage (newTextStorage: NSTextStorage); message 'replaceTextStorage:';
    function textContainers: NSArray; message 'textContainers';
    procedure addTextContainer (container: NSTextContainer); message 'addTextContainer:';
    procedure insertTextContainer_atIndex (container: NSTextContainer; index: NSUInteger); message 'insertTextContainer:atIndex:';
    procedure removeTextContainerAtIndex (index: NSUInteger); message 'removeTextContainerAtIndex:';
    procedure textContainerChangedGeometry (container: NSTextContainer); message 'textContainerChangedGeometry:';
    procedure textContainerChangedTextView (container: NSTextContainer); message 'textContainerChangedTextView:';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setShowsInvisibleCharacters(newValue: objcbool); message 'setShowsInvisibleCharacters:';
    function showsInvisibleCharacters: objcbool; message 'showsInvisibleCharacters';
    procedure setShowsControlCharacters(newValue: objcbool); message 'setShowsControlCharacters:';
    function showsControlCharacters: objcbool; message 'showsControlCharacters';
    procedure setUsesDefaultHyphenation(newValue: objcbool); message 'setUsesDefaultHyphenation:'; { available in macos , ios , tvos  }
    function usesDefaultHyphenation: objcbool; message 'usesDefaultHyphenation'; { available in macos , ios , tvos  }
    procedure setUsesFontLeading(newValue: objcbool); message 'setUsesFontLeading:';
    function usesFontLeading: objcbool; message 'usesFontLeading';
    procedure setAllowsNonContiguousLayout(newValue: objcbool); message 'setAllowsNonContiguousLayout:'; { available in macos , ios , tvos  }
    function allowsNonContiguousLayout: objcbool; message 'allowsNonContiguousLayout'; { available in macos , ios , tvos  }
    function hasNonContiguousLayout: objcbool; message 'hasNonContiguousLayout'; { available in macos , ios , tvos  }
    procedure setLimitsLayoutForSuspiciousContents(newValue: objcbool); message 'setLimitsLayoutForSuspiciousContents:'; { available in macos , ios , tvos  }
    function limitsLayoutForSuspiciousContents: objcbool; message 'limitsLayoutForSuspiciousContents'; { available in macos , ios , tvos  }
    procedure setBackgroundLayoutEnabled(newValue: objcbool); message 'setBackgroundLayoutEnabled:';
    function backgroundLayoutEnabled: objcbool; message 'backgroundLayoutEnabled';
    procedure setDefaultAttachmentScaling(newValue: NSImageScaling); message 'setDefaultAttachmentScaling:';
    function defaultAttachmentScaling: NSImageScaling; message 'defaultAttachmentScaling';
    procedure setTypesetter(newValue: NSTypesetter); message 'setTypesetter:';
    function typesetter: NSTypesetter; message 'typesetter';
    procedure setTypesetterBehavior(newValue: NSTypesetterBehavior); message 'setTypesetterBehavior:';
    function typesetterBehavior: NSTypesetterBehavior; message 'typesetterBehavior';
    procedure invalidateGlyphsForCharacterRange_changeInLength_actualCharacterRange (charRange: NSRange; delta: NSInteger; actualCharRange: NSRangePointer); message 'invalidateGlyphsForCharacterRange:changeInLength:actualCharacterRange:';
    procedure invalidateLayoutForCharacterRange_actualCharacterRange (charRange: NSRange; actualCharRange: NSRangePointer); message 'invalidateLayoutForCharacterRange:actualCharacterRange:'; { available in macos , ios , tvos  }
    procedure invalidateDisplayForCharacterRange (charRange: NSRange); message 'invalidateDisplayForCharacterRange:';
    procedure invalidateDisplayForGlyphRange (glyphRange: NSRange); message 'invalidateDisplayForGlyphRange:';
    procedure processEditingForTextStorage_edited_range_changeInLength_invalidatedRange (textStorage_: NSTextStorage; editMask: NSTextStorageEditActions; newCharRange: NSRange; delta: NSInteger; invalidatedCharRange: NSRange); message 'processEditingForTextStorage:edited:range:changeInLength:invalidatedRange:'; { available in macos , ios , tvos  }
    procedure ensureGlyphsForCharacterRange (charRange: NSRange); message 'ensureGlyphsForCharacterRange:';
    procedure ensureGlyphsForGlyphRange (glyphRange: NSRange); message 'ensureGlyphsForGlyphRange:';
    procedure ensureLayoutForCharacterRange (charRange: NSRange); message 'ensureLayoutForCharacterRange:';
    procedure ensureLayoutForGlyphRange (glyphRange: NSRange); message 'ensureLayoutForGlyphRange:';
    procedure ensureLayoutForTextContainer (container: NSTextContainer); message 'ensureLayoutForTextContainer:';
    procedure ensureLayoutForBoundingRect_inTextContainer (bounds: NSRect; container: NSTextContainer); message 'ensureLayoutForBoundingRect:inTextContainer:';
    procedure setGlyphs_properties_characterIndexes_font_forGlyphRange (glyphs: CGGlyphPtr; props: NSGlyphPropertyPtr; charIndexes: NSUIntegerPtr; aFont: NSFont; glyphRange: NSRange); message 'setGlyphs:properties:characterIndexes:font:forGlyphRange:'; { available in macos , ios , tvos  }
    function numberOfGlyphs: NSUInteger; message 'numberOfGlyphs';
    function CGGlyphAtIndex_isValidIndex (glyphIndex: NSUInteger; isValidIndex: objcboolPtr): CGGlyph; message 'CGGlyphAtIndex:isValidIndex:'; { available in macos , ios , tvos  }
    function CGGlyphAtIndex (glyphIndex: NSUInteger): CGGlyph; message 'CGGlyphAtIndex:'; { available in macos , ios , tvos  }
    function isValidGlyphIndex (glyphIndex: NSUInteger): objcbool; message 'isValidGlyphIndex:'; { available in macos , ios , tvos  }
    function propertyForGlyphAtIndex (glyphIndex: NSUInteger): NSGlyphProperty; message 'propertyForGlyphAtIndex:'; { available in macos , ios , tvos  }
    function characterIndexForGlyphAtIndex (glyphIndex: NSUInteger): NSUInteger; message 'characterIndexForGlyphAtIndex:';
    function glyphIndexForCharacterAtIndex (charIndex: NSUInteger): NSUInteger; message 'glyphIndexForCharacterAtIndex:';
    function getGlyphsInRange_glyphs_properties_characterIndexes_bidiLevels (glyphRange: NSRange; glyphBuffer: CGGlyphPtr; props: NSGlyphPropertyPtr; charIndexBuffer: NSUIntegerPtr; bidiLevelBuffer: PChar): NSUInteger; message 'getGlyphsInRange:glyphs:properties:characterIndexes:bidiLevels:'; { available in macos , ios , tvos  }
    procedure setTextContainer_forGlyphRange (container: NSTextContainer; glyphRange: NSRange); message 'setTextContainer:forGlyphRange:';
    procedure setLineFragmentRect_forGlyphRange_usedRect (fragmentRect: NSRect; glyphRange: NSRange; usedRect: NSRect); message 'setLineFragmentRect:forGlyphRange:usedRect:';
    procedure setExtraLineFragmentRect_usedRect_textContainer (fragmentRect: NSRect; usedRect: NSRect; container: NSTextContainer); message 'setExtraLineFragmentRect:usedRect:textContainer:';
    procedure setLocation_forStartOfGlyphRange (location: NSPoint; glyphRange: NSRange); message 'setLocation:forStartOfGlyphRange:';
    procedure setNotShownAttribute_forGlyphAtIndex (flag: objcbool; glyphIndex: NSUInteger); message 'setNotShownAttribute:forGlyphAtIndex:';
    procedure setDrawsOutsideLineFragment_forGlyphAtIndex (flag: objcbool; glyphIndex: NSUInteger); message 'setDrawsOutsideLineFragment:forGlyphAtIndex:';
    procedure setAttachmentSize_forGlyphRange (attachmentSize: NSSize; glyphRange: NSRange); message 'setAttachmentSize:forGlyphRange:';
    procedure getFirstUnlaidCharacterIndex_glyphIndex (charIndex: NSUIntegerPtr; glyphIndex: NSUIntegerPtr); message 'getFirstUnlaidCharacterIndex:glyphIndex:';
    function firstUnlaidCharacterIndex: NSUInteger; message 'firstUnlaidCharacterIndex';
    function firstUnlaidGlyphIndex: NSUInteger; message 'firstUnlaidGlyphIndex';
    function textContainerForGlyphAtIndex_effectiveRange (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): NSTextContainer; message 'textContainerForGlyphAtIndex:effectiveRange:';
    function textContainerForGlyphAtIndex_effectiveRange_withoutAdditionalLayout (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer; flag: objcbool): NSTextContainer; message 'textContainerForGlyphAtIndex:effectiveRange:withoutAdditionalLayout:'; { available in macos , ios , tvos  }
    function usedRectForTextContainer (container: NSTextContainer): NSRect; message 'usedRectForTextContainer:';
    function lineFragmentRectForGlyphAtIndex_effectiveRange (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): NSRect; message 'lineFragmentRectForGlyphAtIndex:effectiveRange:';
    function lineFragmentRectForGlyphAtIndex_effectiveRange_withoutAdditionalLayout (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer; flag: objcbool): NSRect; message 'lineFragmentRectForGlyphAtIndex:effectiveRange:withoutAdditionalLayout:'; { available in macos , ios , tvos  }
    function lineFragmentUsedRectForGlyphAtIndex_effectiveRange (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): NSRect; message 'lineFragmentUsedRectForGlyphAtIndex:effectiveRange:';
    function lineFragmentUsedRectForGlyphAtIndex_effectiveRange_withoutAdditionalLayout (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer; flag: objcbool): NSRect; message 'lineFragmentUsedRectForGlyphAtIndex:effectiveRange:withoutAdditionalLayout:'; { available in macos , ios , tvos  }
    function extraLineFragmentRect: NSRect; message 'extraLineFragmentRect';
    function extraLineFragmentUsedRect: NSRect; message 'extraLineFragmentUsedRect';
    function extraLineFragmentTextContainer: NSTextContainer; message 'extraLineFragmentTextContainer';
    function locationForGlyphAtIndex (glyphIndex: NSUInteger): NSPoint; message 'locationForGlyphAtIndex:';
    function notShownAttributeForGlyphAtIndex (glyphIndex: NSUInteger): objcbool; message 'notShownAttributeForGlyphAtIndex:';
    function drawsOutsideLineFragmentForGlyphAtIndex (glyphIndex: NSUInteger): objcbool; message 'drawsOutsideLineFragmentForGlyphAtIndex:';
    function attachmentSizeForGlyphAtIndex (glyphIndex: NSUInteger): NSSize; message 'attachmentSizeForGlyphAtIndex:';
    function truncatedGlyphRangeInLineFragmentForGlyphAtIndex (glyphIndex: NSUInteger): NSRange; message 'truncatedGlyphRangeInLineFragmentForGlyphAtIndex:'; { available in macos , ios , tvos  }
    function glyphRangeForCharacterRange_actualCharacterRange (charRange: NSRange; actualCharRange: NSRangePointer): NSRange; message 'glyphRangeForCharacterRange:actualCharacterRange:';
    function characterRangeForGlyphRange_actualGlyphRange (glyphRange: NSRange; actualGlyphRange: NSRangePointer): NSRange; message 'characterRangeForGlyphRange:actualGlyphRange:';
    function glyphRangeForTextContainer (container: NSTextContainer): NSRange; message 'glyphRangeForTextContainer:';
    function rangeOfNominallySpacedGlyphsContainingIndex (glyphIndex: NSUInteger): NSRange; message 'rangeOfNominallySpacedGlyphsContainingIndex:';
    function boundingRectForGlyphRange_inTextContainer (glyphRange: NSRange; container: NSTextContainer): NSRect; message 'boundingRectForGlyphRange:inTextContainer:';
    function glyphRangeForBoundingRect_inTextContainer (bounds: NSRect; container: NSTextContainer): NSRange; message 'glyphRangeForBoundingRect:inTextContainer:';
    function glyphRangeForBoundingRectWithoutAdditionalLayout_inTextContainer (bounds: NSRect; container: NSTextContainer): NSRange; message 'glyphRangeForBoundingRectWithoutAdditionalLayout:inTextContainer:';
    function glyphIndexForPoint_inTextContainer_fractionOfDistanceThroughGlyph (point: NSPoint; container: NSTextContainer; partialFraction: CGFloatPtr): NSUInteger; message 'glyphIndexForPoint:inTextContainer:fractionOfDistanceThroughGlyph:';
    function glyphIndexForPoint_inTextContainer (point: NSPoint; container: NSTextContainer): NSUInteger; message 'glyphIndexForPoint:inTextContainer:';
    function fractionOfDistanceThroughGlyphForPoint_inTextContainer (point: NSPoint; container: NSTextContainer): CGFloat; message 'fractionOfDistanceThroughGlyphForPoint:inTextContainer:';
    function characterIndexForPoint_inTextContainer_fractionOfDistanceBetweenInsertionPoints (point: NSPoint; container: NSTextContainer; partialFraction: CGFloatPtr): NSUInteger; message 'characterIndexForPoint:inTextContainer:fractionOfDistanceBetweenInsertionPoints:';
    function getLineFragmentInsertionPointsForCharacterAtIndex_alternatePositions_inDisplayOrder_positions_characterIndexes (charIndex: NSUInteger; aFlag: objcbool; dFlag: objcbool; positions: CGFloatPtr; charIndexes: NSUIntegerPtr): NSUInteger; message 'getLineFragmentInsertionPointsForCharacterAtIndex:alternatePositions:inDisplayOrder:positions:characterIndexes:';
    procedure enumerateLineFragmentsForGlyphRange_usingBlock (glyphRange: NSRange; block: NSLayoutManagerEnumerateLineFragmentsForGlyphRangeCallback); message 'enumerateLineFragmentsForGlyphRange:usingBlock:'; { available in macos , ios , tvos  }
    procedure enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock (glyphRange: NSRange; selectedRange: NSRange; textContainer: NSTextContainer; block: NSLayoutManagerEnumerateEnclosingRectsForGlyphRangeCallback); message 'enumerateEnclosingRectsForGlyphRange:withinSelectedGlyphRange:inTextContainer:usingBlock:'; { available in macos , ios , tvos  }
    procedure drawBackgroundForGlyphRange_atPoint (glyphsToShow: NSRange; origin: NSPoint); message 'drawBackgroundForGlyphRange:atPoint:';
    procedure drawGlyphsForGlyphRange_atPoint (glyphsToShow: NSRange; origin: NSPoint); message 'drawGlyphsForGlyphRange:atPoint:';
    procedure showCGGlyphs_positions_count_font_textMatrix_attributes_inContext (glyphs: CGGlyphPtr; positions: CGPointPtr; glyphCount: NSInteger; font: NSFont; textMatrix: CGAffineTransform; attributes: NSDictionary; CGContext: CGContextRef); message 'showCGGlyphs:positions:count:font:textMatrix:attributes:inContext:'; { available in macos , ios , tvos  }
    procedure fillBackgroundRectArray_count_forCharacterRange_color (rectArray: NSRectPtr; rectCount: NSUInteger; charRange: NSRange; color: NSColor); message 'fillBackgroundRectArray:count:forCharacterRange:color:'; { available in macos  }
    procedure drawUnderlineForGlyphRange_underlineType_baselineOffset_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; underlineVal: NSUnderlineStyle; baselineOffset: CGFloat; lineRect: NSRect; lineGlyphRange: NSRange; containerOrigin: NSPoint); message 'drawUnderlineForGlyphRange:underlineType:baselineOffset:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure underlineGlyphRange_underlineType_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; underlineVal: NSUnderlineStyle; lineRect: NSRect; lineGlyphRange: NSRange; containerOrigin: NSPoint); message 'underlineGlyphRange:underlineType:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure drawStrikethroughForGlyphRange_strikethroughType_baselineOffset_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; strikethroughVal: NSUnderlineStyle; baselineOffset: CGFloat; lineRect: NSRect; lineGlyphRange: NSRange; containerOrigin: NSPoint); message 'drawStrikethroughForGlyphRange:strikethroughType:baselineOffset:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure strikethroughGlyphRange_strikethroughType_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; strikethroughVal: NSUnderlineStyle; lineRect: NSRect; lineGlyphRange: NSRange; containerOrigin: NSPoint); message 'strikethroughGlyphRange:strikethroughType:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure showAttachmentCell_inRect_characterIndex (cell: NSCell; rect: NSRect; attachmentIndex: NSUInteger); message 'showAttachmentCell:inRect:characterIndex:';
    procedure setLayoutRect_forTextBlock_glyphRange (rect: NSRect; block: NSTextBlock; glyphRange: NSRange); message 'setLayoutRect:forTextBlock:glyphRange:';
    procedure setBoundsRect_forTextBlock_glyphRange (rect: NSRect; block: NSTextBlock; glyphRange: NSRange); message 'setBoundsRect:forTextBlock:glyphRange:';
    function layoutRectForTextBlock_glyphRange (block: NSTextBlock; glyphRange: NSRange): NSRect; message 'layoutRectForTextBlock:glyphRange:';
    function boundsRectForTextBlock_glyphRange (block: NSTextBlock; glyphRange: NSRange): NSRect; message 'boundsRectForTextBlock:glyphRange:';
    function layoutRectForTextBlock_atIndex_effectiveRange (block: NSTextBlock; glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): NSRect; message 'layoutRectForTextBlock:atIndex:effectiveRange:';
    function boundsRectForTextBlock_atIndex_effectiveRange (block: NSTextBlock; glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): NSRect; message 'boundsRectForTextBlock:atIndex:effectiveRange:';
    function temporaryAttributesAtCharacterIndex_effectiveRange (charIndex: NSUInteger; effectiveCharRange: NSRangePointer): NSDictionary; message 'temporaryAttributesAtCharacterIndex:effectiveRange:';
    procedure setTemporaryAttributes_forCharacterRange (attrs: NSDictionary; charRange: NSRange); message 'setTemporaryAttributes:forCharacterRange:';
    procedure addTemporaryAttributes_forCharacterRange (attrs: NSDictionary; charRange: NSRange); message 'addTemporaryAttributes:forCharacterRange:';
    procedure removeTemporaryAttribute_forCharacterRange (attrName: NSAttributedStringKey; charRange: NSRange); message 'removeTemporaryAttribute:forCharacterRange:';
    function temporaryAttribute_atCharacterIndex_effectiveRange (attrName: NSAttributedStringKey; location: NSUInteger; range: NSRangePointer): id; message 'temporaryAttribute:atCharacterIndex:effectiveRange:'; { available in macos  }
    function temporaryAttribute_atCharacterIndex_longestEffectiveRange_inRange (attrName: NSAttributedStringKey; location: NSUInteger; range: NSRangePointer; rangeLimit: NSRange): id; message 'temporaryAttribute:atCharacterIndex:longestEffectiveRange:inRange:'; { available in macos  }
    function temporaryAttributesAtCharacterIndex_longestEffectiveRange_inRange (location: NSUInteger; range: NSRangePointer; rangeLimit: NSRange): NSDictionary; message 'temporaryAttributesAtCharacterIndex:longestEffectiveRange:inRange:'; { available in macos  }
    procedure addTemporaryAttribute_value_forCharacterRange (attrName: NSAttributedStringKey; value: id; charRange: NSRange); message 'addTemporaryAttribute:value:forCharacterRange:'; { available in macos  }
    function defaultLineHeightForFont (theFont: NSFont): CGFloat; message 'defaultLineHeightForFont:';
    function defaultBaselineOffsetForFont (theFont: NSFont): CGFloat; message 'defaultBaselineOffsetForFont:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSTextViewSupport = objccategory external (NSLayoutManager)
    function rulerMarkersForTextView_paragraphStyle_ruler (view: NSTextView; style: NSParagraphStyle; ruler: NSRulerView): NSArray; message 'rulerMarkersForTextView:paragraphStyle:ruler:';
    function rulerAccessoryViewForTextView_paragraphStyle_ruler_enabled (view: NSTextView; style: NSParagraphStyle; ruler: NSRulerView; isEnabled: objcbool): NSView; message 'rulerAccessoryViewForTextView:paragraphStyle:ruler:enabled:';
    function layoutManagerOwnsFirstResponderInWindow (window: NSWindow): objcbool; message 'layoutManagerOwnsFirstResponderInWindow:';
    function firstTextView: NSTextView; message 'firstTextView';
    function textViewForBeginningOfSelection: NSTextView; message 'textViewForBeginningOfSelection';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSLayoutManagerDelegateProtocol = objcprotocol external name 'NSLayoutManagerDelegate' (NSObjectProtocol)
  optional
    function layoutManager_shouldGenerateGlyphs_properties_characterIndexes_font_forGlyphRange (layoutManager: NSLayoutManager; glyphs: CGGlyphPtr; props: NSGlyphPropertyPtr; charIndexes: NSUIntegerPtr; aFont: NSFont; glyphRange: NSRange): NSUInteger; message 'layoutManager:shouldGenerateGlyphs:properties:characterIndexes:font:forGlyphRange:'; { available in macos , ios , tvos  }
    function layoutManager_lineSpacingAfterGlyphAtIndex_withProposedLineFragmentRect (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; rect: NSRect): CGFloat; message 'layoutManager:lineSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:'; { available in macos , ios , tvos  }
    function layoutManager_paragraphSpacingBeforeGlyphAtIndex_withProposedLineFragmentRect (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; rect: NSRect): CGFloat; message 'layoutManager:paragraphSpacingBeforeGlyphAtIndex:withProposedLineFragmentRect:'; { available in macos , ios , tvos  }
    function layoutManager_paragraphSpacingAfterGlyphAtIndex_withProposedLineFragmentRect (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; rect: NSRect): CGFloat; message 'layoutManager:paragraphSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:'; { available in macos , ios , tvos  }
    function layoutManager_shouldUseAction_forControlCharacterAtIndex (layoutManager: NSLayoutManager; action: NSControlCharacterAction; charIndex: NSUInteger): NSControlCharacterAction; message 'layoutManager:shouldUseAction:forControlCharacterAtIndex:'; { available in macos , ios , tvos  }
    function layoutManager_shouldBreakLineByWordBeforeCharacterAtIndex (layoutManager: NSLayoutManager; charIndex: NSUInteger): objcbool; message 'layoutManager:shouldBreakLineByWordBeforeCharacterAtIndex:'; { available in macos , ios , tvos  }
    function layoutManager_shouldBreakLineByHyphenatingBeforeCharacterAtIndex (layoutManager: NSLayoutManager; charIndex: NSUInteger): objcbool; message 'layoutManager:shouldBreakLineByHyphenatingBeforeCharacterAtIndex:'; { available in macos , ios , tvos  }
    function layoutManager_boundingBoxForControlGlyphAtIndex_forTextContainer_proposedLineFragment_glyphPosition_characterIndex (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; textContainer: NSTextContainer; proposedRect: NSRect; glyphPosition: NSPoint; charIndex: NSUInteger): NSRect; message 'layoutManager:boundingBoxForControlGlyphAtIndex:forTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in macos , ios , tvos  }
    function layoutManager_shouldSetLineFragmentRect_lineFragmentUsedRect_baselineOffset_inTextContainer_forGlyphRange (layoutManager: NSLayoutManager; lineFragmentRect: NSRectPtr; lineFragmentUsedRect: NSRectPtr; baselineOffset: CGFloatPtr; textContainer: NSTextContainer; glyphRange: NSRange): objcbool; message 'layoutManager:shouldSetLineFragmentRect:lineFragmentUsedRect:baselineOffset:inTextContainer:forGlyphRange:'; { available in macos , ios , tvos  }
    procedure layoutManagerDidInvalidateLayout (sender: NSLayoutManager); message 'layoutManagerDidInvalidateLayout:'; { available in macos , ios , tvos  }
    procedure layoutManager_didCompleteLayoutForTextContainer_atEnd (layoutManager: NSLayoutManager; textContainer: NSTextContainer; layoutFinishedFlag: objcbool); message 'layoutManager:didCompleteLayoutForTextContainer:atEnd:'; { available in macos , ios , tvos  }
    procedure layoutManager_textContainer_didChangeGeometryFromSize (layoutManager: NSLayoutManager; textContainer: NSTextContainer; oldSize: NSSize); message 'layoutManager:textContainer:didChangeGeometryFromSize:'; { available in macos , ios , tvos  }
    function layoutManager_shouldUseTemporaryAttributes_forDrawingToScreen_atCharacterIndex_effectiveRange (layoutManager: NSLayoutManager; attrs: NSDictionary; toScreen: objcbool; charIndex: NSUInteger; effectiveCharRange: NSRangePointer): NSDictionary; message 'layoutManager:shouldUseTemporaryAttributes:forDrawingToScreen:atCharacterIndex:effectiveRange:'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
const
  NSGlyphAttributeSoft = 0 deprecated;
  NSGlyphAttributeElastic = 1 deprecated;
  NSGlyphAttributeBidiLevel = 2 deprecated;
  NSGlyphAttributeInscribe = 5 deprecated;

type
  NSGlyphInscription = NSUInteger;
  NSGlyphInscriptionPtr = ^NSGlyphInscription;

const
  NSGlyphInscribeBase = 0 deprecated;
  NSGlyphInscribeBelow = 1 deprecated;
  NSGlyphInscribeAbove = 2 deprecated;
  NSGlyphInscribeOverstrike = 3 deprecated;
  NSGlyphInscribeOverBelow = 4 deprecated;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutManagerDeprecated = objccategory external (NSLayoutManager)
    function glyphAtIndex_isValidIndex (glyphIndex: NSUInteger; isValidIndex: objcboolPtr): NSGlyph; message 'glyphAtIndex:isValidIndex:';
    function glyphAtIndex (glyphIndex: NSUInteger): NSGlyph; message 'glyphAtIndex:';
    function rectArrayForCharacterRange_withinSelectedCharacterRange_inTextContainer_rectCount (charRange: NSRange; selCharRange: NSRange; container: NSTextContainer; rectCount: NSUIntegerPtr): NSRectArray; message 'rectArrayForCharacterRange:withinSelectedCharacterRange:inTextContainer:rectCount:';
    function rectArrayForGlyphRange_withinSelectedGlyphRange_inTextContainer_rectCount (glyphRange: NSRange; selGlyphRange: NSRange; container: NSTextContainer; rectCount: NSUIntegerPtr): NSRectArray; message 'rectArrayForGlyphRange:withinSelectedGlyphRange:inTextContainer:rectCount:';
    procedure setUsesScreenFonts(newValue: objcbool); message 'setUsesScreenFonts:'; deprecated;
    function usesScreenFonts: objcbool; message 'usesScreenFonts'; deprecated;
    function substituteFontForFont (originalFont: NSFont): NSFont; message 'substituteFontForFont:'; deprecated;
    procedure insertGlyphs_length_forStartingGlyphAtIndex_characterIndex (glyphs: NSGlyphPtr; length: NSUInteger; glyphIndex: NSUInteger; charIndex: NSUInteger); message 'insertGlyphs:length:forStartingGlyphAtIndex:characterIndex:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    procedure insertGlyph_atGlyphIndex_characterIndex (glyph: NSGlyph; glyphIndex: NSUInteger; charIndex: NSUInteger); message 'insertGlyph:atGlyphIndex:characterIndex:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    procedure replaceGlyphAtIndex_withGlyph (glyphIndex: NSUInteger; newGlyph: NSGlyph); message 'replaceGlyphAtIndex:withGlyph:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    procedure deleteGlyphsInRange (glyphRange: NSRange); message 'deleteGlyphsInRange:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    procedure setCharacterIndex_forGlyphAtIndex (charIndex: NSUInteger; glyphIndex: NSUInteger); message 'setCharacterIndex:forGlyphAtIndex:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    procedure setIntAttribute_value_forGlyphAtIndex (attributeTag: NSInteger; val: NSInteger; glyphIndex: NSUInteger); message 'setIntAttribute:value:forGlyphAtIndex:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    procedure invalidateGlyphsOnLayoutInvalidationForGlyphRange (glyphRange: NSRange); message 'invalidateGlyphsOnLayoutInvalidationForGlyphRange:'; deprecated 'Use -setGlyphs:properties:characterIndexes:font:forGlyphRange instead';
    function intAttribute_forGlyphAtIndex (attributeTag: NSInteger; glyphIndex: NSUInteger): NSInteger; message 'intAttribute:forGlyphAtIndex:'; deprecated 'Use -getGlyphsInRange:glyphs:properties:characterIndexes:bidiLevels: instead';
    function getGlyphsInRange_glyphs_characterIndexes_glyphInscriptions_elasticBits (glyphRange: NSRange; glyphBuffer: NSGlyphPtr; charIndexBuffer: NSUIntegerPtr; inscribeBuffer: NSGlyphInscriptionPtr; elasticBuffer: objcboolPtr): NSUInteger; message 'getGlyphsInRange:glyphs:characterIndexes:glyphInscriptions:elasticBits:'; deprecated 'Use -getGlyphsInRange:glyphs:properties:characterIndexes:bidiLevels: instead';
    function getGlyphsInRange_glyphs_characterIndexes_glyphInscriptions_elasticBits_bidiLevels (glyphRange: NSRange; glyphBuffer: NSGlyphPtr; charIndexBuffer: NSUIntegerPtr; inscribeBuffer: NSGlyphInscriptionPtr; elasticBuffer: objcboolPtr; bidiLevelBuffer: PChar): NSUInteger; message 'getGlyphsInRange:glyphs:characterIndexes:glyphInscriptions:elasticBits:bidiLevels:'; deprecated 'Use -getGlyphsInRange:glyphs:properties:characterIndexes:bidiLevels: instead';
    function getGlyphs_range (glyphArray: NSGlyphPtr; glyphRange: NSRange): NSUInteger; message 'getGlyphs:range:'; deprecated 'Use -getGlyphsInRange:glyphs:properties:characterIndexes:bidiLevels: instead';
    procedure invalidateLayoutForCharacterRange_isSoft_actualCharacterRange (charRange: NSRange; flag: objcbool; actualCharRange: NSRangePointer); message 'invalidateLayoutForCharacterRange:isSoft:actualCharacterRange:'; deprecated 'Use -invalidateLayoutForCharacterRange:actualCharacterRange: instead';
    procedure textStorage_edited_range_changeInLength_invalidatedRange (str: NSTextStorage; editedMask: NSTextStorageEditedOptions; newCharRange: NSRange; delta: NSInteger; invalidatedCharRange: NSRange); message 'textStorage:edited:range:changeInLength:invalidatedRange:'; deprecated 'Use -processEditingForTextStorage:edited:range:changeInLength:invalidatedRange: instead';
    procedure setLocations_startingGlyphIndexes_count_forGlyphRange (locations: NSPointArray; glyphIndexes: NSUIntegerPtr; count: NSUInteger; glyphRange: NSRange); message 'setLocations:startingGlyphIndexes:count:forGlyphRange:'; deprecated 'Use -setLocation:forStartOfGlyphRange: instead';
    procedure showPackedGlyphs_length_glyphRange_atPoint_font_color_printingAdjustment (glyphs: PChar; glyphLen: NSUInteger; glyphRange: NSRange; point: NSPoint; font: NSFont; color: NSColor; printingAdjustment: NSSize); message 'showPackedGlyphs:length:glyphRange:atPoint:font:color:printingAdjustment:'; deprecated 'Use -showCGGlyphs:positions:count:font:matrix:attributes:inContext: instead';
    procedure showCGGlyphs_positions_count_font_matrix_attributes_inContext (glyphs: CGGlyphPtr; positions: NSPointPtr; glyphCount: NSUInteger; font: NSFont; textMatrix: NSAffineTransform; attributes: NSDictionary; graphicsContext: NSGraphicsContext); message 'showCGGlyphs:positions:count:font:matrix:attributes:inContext:'; { unavailable in macCatalyst }
    procedure setHyphenationFactor(newValue: single); message 'setHyphenationFactor:'; { unavailable in macCatalyst }
    function hyphenationFactor: single; message 'hyphenationFactor'; { unavailable in macCatalyst }
  end;

type
  NSGlyphGeneration = objccategory external (NSLayoutManager)
    procedure setGlyphGenerator(newValue: NSGlyphGenerator); message 'setGlyphGenerator:';
    function glyphGenerator: NSGlyphGenerator; message 'glyphGenerator';
  end;
{$endif}

{$endif}

{$else}
{$endif}
