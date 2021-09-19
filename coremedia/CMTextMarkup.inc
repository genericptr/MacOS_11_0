{ Parsed from CoreMedia.framework CMTextMarkup.h }

{$ifndef CMTEXTMARKUP_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTextMarkupAttribute_ForegroundColorARGB: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_BackgroundColorARGB: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_CharacterBackgroundColorARGB: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_BoldStyle: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_ItalicStyle: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_UnderlineStyle: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_FontFamilyName: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_GenericFontFamilyName: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_Default: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_Serif: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_SansSerif: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_Monospace: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_ProportionalSerif: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_ProportionalSansSerif: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_MonospaceSerif: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_MonospaceSansSerif: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_Casual: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_Cursive: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_Fantasy: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupGenericFontName_SmallCapital: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_BaseFontSizePercentageRelativeToVideoHeight: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_RelativeFontSize: CFStringRef { available in macos 10.9, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_VerticalLayout: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextVerticalLayout_LeftToRight: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextVerticalLayout_RightToLeft: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_Alignment: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAlignmentType_Start: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAlignmentType_Middle: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAlignmentType_End: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAlignmentType_Left: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAlignmentType_Right: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_TextPositionPercentageRelativeToWritingDirection: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_OrthogonalLinePositionPercentageRelativeToWritingDirection: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_WritingDirectionSizePercentage: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupAttribute_CharacterEdgeStyle: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupCharacterEdgeStyle_None: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupCharacterEdgeStyle_Raised: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupCharacterEdgeStyle_Depressed: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupCharacterEdgeStyle_Uniform: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextMarkupCharacterEdgeStyle_DropShadow: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$endif}
