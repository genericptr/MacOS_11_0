{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSGlyphGenerator.h }

{$ifdef TYPES}
type
  NSGlyphGeneratorPtr = ^NSGlyphGenerator;
  NSGlyphStorageProtocolPtr = ^NSGlyphStorageProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  NSShowControlGlyphs = 1 shl 0;
  NSShowInvisibleGlyphs = 1 shl 1;
  NSWantsBidiLevels = 1 shl 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSGlyphStorageProtocol = objcprotocol external name 'NSGlyphStorage'
    procedure insertGlyphs_length_forStartingGlyphAtIndex_characterIndex (glyphs: NSGlyphPtr; length: NSUInteger; glyphIndex: NSUInteger; charIndex: NSUInteger); message 'insertGlyphs:length:forStartingGlyphAtIndex:characterIndex:';
    procedure setIntAttribute_value_forGlyphAtIndex (attributeTag: NSInteger; val: NSInteger; glyphIndex: NSUInteger); message 'setIntAttribute:value:forGlyphAtIndex:';
    function attributedString: NSAttributedString; message 'attributedString';
    function layoutOptions: NSUInteger; message 'layoutOptions';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSGlyphGenerator = objcclass external (NSObject)
  public
    procedure generateGlyphsForGlyphStorage_desiredNumberOfCharacters_glyphIndex_characterIndex (glyphStorage: id; nChars: NSUInteger; glyphIndex: NSUIntegerPtr; charIndex: NSUIntegerPtr); message 'generateGlyphsForGlyphStorage:desiredNumberOfCharacters:glyphIndex:characterIndex:';
    class function sharedGlyphGenerator: NSGlyphGenerator; message 'sharedGlyphGenerator';
  end;
{$endif}

{$endif}

{$else}
{$endif}
