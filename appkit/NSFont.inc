{ Parsed from AppKit.framework NSFont.h }

{$ifdef TYPES}
type
  NSFontPtr = ^NSFont;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontIdentityMatrix: CGFloatPtr; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFont = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function fontWithName_size (fontName: NSString; fontSize: CGFloat): NSFont; message 'fontWithName:size:';
    class function fontWithName_matrix (fontName: NSString; fontMatrix: CGFloatPtr): NSFont; message 'fontWithName:matrix:';
    class function fontWithDescriptor_size (fontDescriptor: NSFontDescriptor; fontSize: CGFloat): NSFont; message 'fontWithDescriptor:size:';
    class function fontWithDescriptor_textTransform (fontDescriptor: NSFontDescriptor; textTransform: NSAffineTransform): NSFont; message 'fontWithDescriptor:textTransform:';
    class function userFontOfSize (fontSize: CGFloat): NSFont; message 'userFontOfSize:';
    class function userFixedPitchFontOfSize (fontSize: CGFloat): NSFont; message 'userFixedPitchFontOfSize:';
    class procedure setUserFont (font: NSFont); message 'setUserFont:';
    class procedure setUserFixedPitchFont (font: NSFont); message 'setUserFixedPitchFont:';
    class function systemFontOfSize (fontSize: CGFloat): NSFont; message 'systemFontOfSize:';
    class function boldSystemFontOfSize (fontSize: CGFloat): NSFont; message 'boldSystemFontOfSize:';
    class function labelFontOfSize (fontSize: CGFloat): NSFont; message 'labelFontOfSize:';
    class function titleBarFontOfSize (fontSize: CGFloat): NSFont; message 'titleBarFontOfSize:';
    class function menuFontOfSize (fontSize: CGFloat): NSFont; message 'menuFontOfSize:';
    class function menuBarFontOfSize (fontSize: CGFloat): NSFont; message 'menuBarFontOfSize:';
    class function messageFontOfSize (fontSize: CGFloat): NSFont; message 'messageFontOfSize:';
    class function paletteFontOfSize (fontSize: CGFloat): NSFont; message 'paletteFontOfSize:';
    class function toolTipsFontOfSize (fontSize: CGFloat): NSFont; message 'toolTipsFontOfSize:';
    class function controlContentFontOfSize (fontSize: CGFloat): NSFont; message 'controlContentFontOfSize:';
    class function systemFontOfSize_weight (fontSize: CGFloat; weight: NSFontWeight): NSFont; message 'systemFontOfSize:weight:'; { available in macos  }
    class function monospacedDigitSystemFontOfSize_weight (fontSize: CGFloat; weight: NSFontWeight): NSFont; message 'monospacedDigitSystemFontOfSize:weight:'; { available in macos  }
    class function monospacedSystemFontOfSize_weight (fontSize: CGFloat; weight: NSFontWeight): NSFont; message 'monospacedSystemFontOfSize:weight:'; { available in macos  }
    function fontWithSize (fontSize: CGFloat): NSFont; message 'fontWithSize:'; { available in macos  }
    class function systemFontSize: CGFloat; message 'systemFontSize';
    class function smallSystemFontSize: CGFloat; message 'smallSystemFontSize';
    class function labelFontSize: CGFloat; message 'labelFontSize';
    class function systemFontSizeForControlSize (controlSize: NSControlSize): CGFloat; message 'systemFontSizeForControlSize:';
    function fontName: NSString; message 'fontName';
    function pointSize: CGFloat; message 'pointSize';
    function matrix: CGFloatPtr; message 'matrix';
    function familyName: NSString; message 'familyName';
    function displayName: NSString; message 'displayName';
    function fontDescriptor: NSFontDescriptor; message 'fontDescriptor';
    function textTransform: NSAffineTransform; message 'textTransform';
    function numberOfGlyphs: NSUInteger; message 'numberOfGlyphs';
    function mostCompatibleStringEncoding: NSStringEncoding; message 'mostCompatibleStringEncoding';
    function coveredCharacterSet: NSCharacterSet; message 'coveredCharacterSet';
    function boundingRectForFont: NSRect; message 'boundingRectForFont';
    function maximumAdvancement: NSSize; message 'maximumAdvancement';
    function ascender: CGFloat; message 'ascender';
    function descender: CGFloat; message 'descender';
    function leading: CGFloat; message 'leading';
    function underlinePosition: CGFloat; message 'underlinePosition';
    function underlineThickness: CGFloat; message 'underlineThickness';
    function italicAngle: CGFloat; message 'italicAngle';
    function capHeight: CGFloat; message 'capHeight';
    function xHeight: CGFloat; message 'xHeight';
    function isFixedPitch: objcbool; message 'isFixedPitch';
    function boundingRectForCGGlyph (glyph: CGGlyph): NSRect; message 'boundingRectForCGGlyph:'; { available in macos  }
    function advancementForCGGlyph (glyph: CGGlyph): NSSize; message 'advancementForCGGlyph:'; { available in macos  }
    procedure getBoundingRects_forCGGlyphs_count (bounds: NSRectArray; glyphs: CGGlyphPtr; glyphCount: NSUInteger); message 'getBoundingRects:forCGGlyphs:count:'; { available in macos  }
    procedure getAdvancements_forCGGlyphs_count (advancements: NSSizeArray; glyphs: CGGlyphPtr; glyphCount: NSUInteger); message 'getAdvancements:forCGGlyphs:count:'; { available in macos  }
    procedure set_; message 'set';
    procedure setInContext (graphicsContext: NSGraphicsContext); message 'setInContext:';
    function verticalFont: NSFont; message 'verticalFont'; { available in macos  }
    function isVertical: objcbool; message 'isVertical'; { available in macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAntialiasThresholdChangedNotification: NSNotificationName; cvar; external;
  NSFontSetChangedNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSGlyph = cuint;
  NSGlyphPtr = ^NSGlyph;

const
  NSControlGlyph = $00FFFFFF;
  NSNullGlyph = $0;

type
  NSFontRenderingMode = NSUInteger;
  NSFontRenderingModePtr = ^NSFontRenderingMode;

const
  NSFontDefaultRenderingMode = 0;
  NSFontAntialiasedRenderingMode = 1;
  NSFontIntegerAdvancementsRenderingMode = 2;
  NSFontAntialiasedIntegerAdvancementsRenderingMode = 3;

type
  NSMultibyteGlyphPacking = NSUInteger;
  NSMultibyteGlyphPackingPtr = ^NSMultibyteGlyphPacking;

const
  NSNativeShortGlyphPacking = 5 deprecated;
{$endif}

{$ifdef FUNCTIONS}
function NSConvertGlyphsToPackedGlyphs(glBuf: NSGlyphPtr; count: NSInteger; packing: NSMultibyteGlyphPacking; packedGlyphs: PChar): NSInteger; cdecl; external; deprecated;
{$endif}

{$ifdef CLASSES}

type
  NSFont_Deprecated = objccategory external (NSFont)
    function glyphWithName (name: NSString): NSGlyph; message 'glyphWithName:';
    function boundingRectForGlyph (glyph: NSGlyph): NSRect; message 'boundingRectForGlyph:';
    function advancementForGlyph (glyph: NSGlyph): NSSize; message 'advancementForGlyph:';
    procedure getBoundingRects_forGlyphs_count (bounds: NSRectArray; glyphs: NSGlyphPtr; glyphCount: NSUInteger); message 'getBoundingRects:forGlyphs:count:';
    procedure getAdvancements_forGlyphs_count (advancements: NSSizeArray; glyphs: NSGlyphPtr; glyphCount: NSUInteger); message 'getAdvancements:forGlyphs:count:';
    procedure getAdvancements_forPackedGlyphs_length (advancements: NSSizeArray; packedGlyphs: pointer; length: NSUInteger); message 'getAdvancements:forPackedGlyphs:length:';
    function printerFont: NSFont; message 'printerFont';
    function screenFont: NSFont; message 'screenFont';
    function screenFontWithRenderingMode (renderingMode: NSFontRenderingMode): NSFont; message 'screenFontWithRenderingMode:';
    function renderingMode: NSFontRenderingMode; message 'renderingMode';
  end;

type
  NSFont_TextStyles = objccategory external (NSFont)
    class function preferredFontForTextStyle_options (style: NSFontTextStyle; options: NSDictionary): NSFont; message 'preferredFontForTextStyle:options:'; { available in macos  }
  end;
{$endif}

