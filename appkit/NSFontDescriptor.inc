{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFontDescriptor.h }

{$ifdef TYPES}
type
  NSFontDescriptorPtr = ^NSFontDescriptor;
{$endif}

{$ifdef TYPES}
type
  NSFontSymbolicTraits = cuint32;
  NSFontSymbolicTraitsPtr = ^NSFontSymbolicTraits;
  NSFontDescriptorSymbolicTraits = cuint32;
  NSFontDescriptorSymbolicTraitsPtr = ^NSFontDescriptorSymbolicTraits;

const
  NSFontDescriptorTraitItalic = 1 shl 0;
  NSFontDescriptorTraitBold = 1 shl 1;
  NSFontDescriptorTraitExpanded = 1 shl 5;
  NSFontDescriptorTraitCondensed = 1 shl 6;
  NSFontDescriptorTraitMonoSpace = 1 shl 10;
  NSFontDescriptorTraitVertical = 1 shl 11;
  NSFontDescriptorTraitUIOptimized = 1 shl 12;
  NSFontDescriptorTraitTightLeading = 1 shl 15;
  NSFontDescriptorTraitLooseLeading = 1 shl 16;
  NSFontDescriptorTraitEmphasized = NSFontDescriptorTraitBold { unavailable in macos };
  NSFontDescriptorClassMask = $F0000000;
  NSFontDescriptorClassUnknown = 0 shl 28;
  NSFontDescriptorClassOldStyleSerifs = 1 shl 28;
  NSFontDescriptorClassTransitionalSerifs = 2 shl 28;
  NSFontDescriptorClassModernSerifs = 3 shl 28;
  NSFontDescriptorClassClarendonSerifs = 4 shl 28;
  NSFontDescriptorClassSlabSerifs = 5 shl 28;
  NSFontDescriptorClassFreeformSerifs = 7 shl 28;
  NSFontDescriptorClassSansSerif = 8 shl 28;
  NSFontDescriptorClassOrnamentals = 9 shl 28;
  NSFontDescriptorClassScripts = 10 shl 28;
  NSFontDescriptorClassSymbolic = 12 shl 28;

type
  NSFontDescriptorAttributeName = NSString;
  NSFontDescriptorAttributeNamePtr = ^NSFontDescriptorAttributeName;
  NSFontDescriptorTraitKey = NSString;
  NSFontDescriptorTraitKeyPtr = ^NSFontDescriptorTraitKey;
  NSFontDescriptorVariationKey = NSString;
  NSFontDescriptorVariationKeyPtr = ^NSFontDescriptorVariationKey;
  NSFontDescriptorFeatureKey = NSString;
  NSFontDescriptorFeatureKeyPtr = ^NSFontDescriptorFeatureKey;
  NSFontWeight = CGFloat;
  NSFontWeightPtr = ^NSFontWeight;
  NSFontDescriptorSystemDesign = NSString;
  NSFontDescriptorSystemDesignPtr = ^NSFontDescriptorSystemDesign;
  NSFontTextStyle = NSString { available in macos  };
  NSFontTextStylePtr = ^NSFontTextStyle { available in macos  };
  NSFontTextStyleOptionKey = NSString { available in macos  };
  NSFontTextStyleOptionKeyPtr = ^NSFontTextStyleOptionKey { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSFontDescriptor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function postscriptName: NSString; message 'postscriptName';
    function pointSize: CGFloat; message 'pointSize';
    function matrix: NSAffineTransform; message 'matrix';
    function symbolicTraits: NSFontDescriptorSymbolicTraits; message 'symbolicTraits';
    function requiresFontAssetRequest: objcbool; message 'requiresFontAssetRequest'; { available in macos  }
    function objectForKey (attribute: NSFontDescriptorAttributeName): id; message 'objectForKey:';
    function fontAttributes: NSDictionary; message 'fontAttributes';
    class function fontDescriptorWithFontAttributes (attributes: NSDictionary): NSFontDescriptor; message 'fontDescriptorWithFontAttributes:';
    class function fontDescriptorWithName_size (fontName: NSString; size: CGFloat): NSFontDescriptor; message 'fontDescriptorWithName:size:';
    class function fontDescriptorWithName_matrix (fontName: NSString; matrix_: NSAffineTransform): NSFontDescriptor; message 'fontDescriptorWithName:matrix:';
    function initWithFontAttributes (attributes: NSDictionary): id; message 'initWithFontAttributes:';
    function matchingFontDescriptorsWithMandatoryKeys (mandatoryKeys: NSSet): NSArray; message 'matchingFontDescriptorsWithMandatoryKeys:';
    function matchingFontDescriptorWithMandatoryKeys (mandatoryKeys: NSSet): NSFontDescriptor; message 'matchingFontDescriptorWithMandatoryKeys:'; { available in macos  }
    function fontDescriptorByAddingAttributes (attributes: NSDictionary): NSFontDescriptor; message 'fontDescriptorByAddingAttributes:';
    function fontDescriptorWithSymbolicTraits (symbolicTraits_: NSFontDescriptorSymbolicTraits): NSFontDescriptor; message 'fontDescriptorWithSymbolicTraits:';
    function fontDescriptorWithSize (newPointSize: CGFloat): NSFontDescriptor; message 'fontDescriptorWithSize:';
    function fontDescriptorWithMatrix (matrix_: NSAffineTransform): NSFontDescriptor; message 'fontDescriptorWithMatrix:';
    function fontDescriptorWithFace (newFace: NSString): NSFontDescriptor; message 'fontDescriptorWithFace:';
    function fontDescriptorWithFamily (newFamily: NSString): NSFontDescriptor; message 'fontDescriptorWithFamily:';
    function fontDescriptorWithDesign (design: NSFontDescriptorSystemDesign): id; message 'fontDescriptorWithDesign:'; { available in macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontFamilyAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontNameAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontFaceAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontSizeAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontVisibleNameAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontMatrixAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontVariationAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontCharacterSetAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontCascadeListAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontTraitsAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontFixedAdvanceAttribute: NSFontDescriptorAttributeName; cvar; external;
  NSFontFeatureSettingsAttribute: NSFontDescriptorAttributeName { available in macos  }; cvar; external;
  NSFontSymbolicTrait: NSFontDescriptorTraitKey; cvar; external;
  NSFontWeightTrait: NSFontDescriptorTraitKey; cvar; external;
  NSFontWidthTrait: NSFontDescriptorTraitKey; cvar; external;
  NSFontSlantTrait: NSFontDescriptorTraitKey; cvar; external;
  NSFontVariationAxisIdentifierKey: NSFontDescriptorVariationKey; cvar; external;
  NSFontVariationAxisMinimumValueKey: NSFontDescriptorVariationKey; cvar; external;
  NSFontVariationAxisMaximumValueKey: NSFontDescriptorVariationKey; cvar; external;
  NSFontVariationAxisDefaultValueKey: NSFontDescriptorVariationKey; cvar; external;
  NSFontVariationAxisNameKey: NSFontDescriptorVariationKey; cvar; external;
  NSFontFeatureTypeIdentifierKey: NSFontDescriptorFeatureKey { available in macos  }; cvar; external;
  NSFontFeatureSelectorIdentifierKey: NSFontDescriptorFeatureKey { available in macos  }; cvar; external;
  NSFontWeightUltraLight: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightThin: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightLight: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightRegular: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightMedium: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightSemibold: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightBold: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightHeavy: NSFontWeight { available in macos  }; cvar; external;
  NSFontWeightBlack: NSFontWeight { available in macos  }; cvar; external;
  NSFontDescriptorSystemDesignDefault: NSFontDescriptorSystemDesign { available in macos  }; cvar; external;
  NSFontDescriptorSystemDesignSerif: NSFontDescriptorSystemDesign { available in macos  }; cvar; external;
  NSFontDescriptorSystemDesignMonospaced: NSFontDescriptorSystemDesign { available in macos  }; cvar; external;
  NSFontDescriptorSystemDesignRounded: NSFontDescriptorSystemDesign { available in macos  }; cvar; external;
  NSFontTextStyleLargeTitle: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleTitle1: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleTitle2: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleTitle3: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleHeadline: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleSubheadline: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleBody: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleCallout: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleFootnote: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleCaption1: NSFontTextStyle { available in macos  }; cvar; external;
  NSFontTextStyleCaption2: NSFontTextStyle { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSFontFamilyClass = cuint32;
  NSFontFamilyClassPtr = ^NSFontFamilyClass;

const
  NSFontUnknownClass = 0 shl 28;
  NSFontOldStyleSerifsClass = 1 shl 28;
  NSFontTransitionalSerifsClass = 2 shl 28;
  NSFontModernSerifsClass = 3 shl 28;
  NSFontClarendonSerifsClass = 4 shl 28;
  NSFontSlabSerifsClass = 5 shl 28;
  NSFontFreeformSerifsClass = 7 shl 28;
  NSFontSansSerifClass = 8 shl 28;
  NSFontOrnamentalsClass = 9 shl 28;
  NSFontScriptsClass = 10 shl 28;
  NSFontSymbolicClass = 12 shl 28;
const
  NSFontFamilyClassMask = $F0000000;
const
  NSFontItalicTrait = 1 shl 0;
  NSFontBoldTrait = 1 shl 1;
  NSFontExpandedTrait = 1 shl 5;
  NSFontCondensedTrait = 1 shl 6;
  NSFontMonoSpaceTrait = 1 shl 10;
  NSFontVerticalTrait = 1 shl 11;
  NSFontUIOptimizedTrait = 1 shl 12;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontColorAttribute: NSString deprecated; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFontDescriptor_TextStyles = objccategory external (NSFontDescriptor)
    class function preferredFontDescriptorForTextStyle_options (style: NSFontTextStyle; options: NSDictionary): NSFontDescriptor; message 'preferredFontDescriptorForTextStyle:options:'; { available in macos  }
  end;
{$endif}

