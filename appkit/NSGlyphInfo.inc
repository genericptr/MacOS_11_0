{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSGlyphInfo.h }

{$ifdef TYPES}
type
  NSGlyphInfoPtr = ^NSGlyphInfo;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSGlyphInfo = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function glyphInfoWithCGGlyph_forFont_baseString (glyph: CGGlyph; font: NSFont; string_: NSString): NSGlyphInfo; message 'glyphInfoWithCGGlyph:forFont:baseString:'; { available in macos , ios , watchos , tvos  }
    function glyphID: CGGlyph; message 'glyphID'; { available in macos , ios , watchos , tvos  }
    function baseString: NSString; message 'baseString'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCharacterCollection = NSUInteger;
  NSCharacterCollectionPtr = ^NSCharacterCollection;

const
  NSIdentityMappingCharacterCollection = 0;
  NSAdobeCNS1CharacterCollection = 1;
  NSAdobeGB1CharacterCollection = 2;
  NSAdobeJapan1CharacterCollection = 3;
  NSAdobeJapan2CharacterCollection = 4;
  NSAdobeKorea1CharacterCollection = 5;
{$endif}

{$ifdef CLASSES}

type
  NSGlyphInfo_Deprecated = objccategory external (NSGlyphInfo)
    class function glyphInfoWithGlyphName_forFont_baseString (glyphName: NSString; font: NSFont; string_: NSString): NSGlyphInfo; message 'glyphInfoWithGlyphName:forFont:baseString:';
    class function glyphInfoWithGlyph_forFont_baseString (glyph: NSGlyph; font: NSFont; string_: NSString): NSGlyphInfo; message 'glyphInfoWithGlyph:forFont:baseString:';
    class function glyphInfoWithCharacterIdentifier_collection_baseString (cid: NSUInteger; characterCollection: NSCharacterCollection; string_: NSString): NSGlyphInfo; message 'glyphInfoWithCharacterIdentifier:collection:baseString:';
    function glyphName: NSString; message 'glyphName';
    function characterIdentifier: NSUInteger; message 'characterIdentifier';
    function characterCollection: NSCharacterCollection; message 'characterCollection';
  end;
{$endif}

{$endif}

{$else}
{$endif}
