{ Parsed from CoreVideo.framework CVImageBuffer.h }

{$if  not (defined(__COREVIDEO_CVIMAGEBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVIMAGEBUFFER_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVImageBufferCGColorSpaceKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureWidthKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureHeightKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureHorizontalOffsetKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureVerticalOffsetKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPreferredCleanApertureKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldCountKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailTemporalTopFirst: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailTemporalBottomFirst: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailSpatialFirstLineEarly: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailSpatialFirstLineLate: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPixelAspectRatioKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPixelAspectRatioHorizontalSpacingKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPixelAspectRatioVerticalSpacingKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferDisplayDimensionsKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferDisplayWidthKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferDisplayHeightKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferGammaLevelKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferICCProfileKey: CFStringRef { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrixKey: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_ITU_R_709_2: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_ITU_R_601_4: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_SMPTE_240M_1995: CFStringRef { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_DCI_P3: CFStringRef deprecated 'kCVImageBufferYCbCrMatrix_DCI_P3 no longer supported.'; cvar; external;
  kCVImageBufferYCbCrMatrix_P3_D65: CFStringRef deprecated 'kCVImageBufferYCbCrMatrix_P3_D65 no longer supported.'; cvar; external;
  kCVImageBufferYCbCrMatrix_ITU_R_2020: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferColorPrimariesKey: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_ITU_R_709_2: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_EBU_3213: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_SMPTE_C: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_P22: CFStringRef { available starting in __MAC_10_8,__IPHONE_6_0 }; cvar; external;
  kCVImageBufferColorPrimaries_DCI_P3: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferColorPrimaries_P3_D65: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferColorPrimaries_ITU_R_2020: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferTransferFunctionKey: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_ITU_R_709_2: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_240M_1995: CFStringRef { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_UseGamma: CFStringRef { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_EBU_3213: CFStringRef deprecated 'in __MAC_10_5,__MAC_10_6,__IPHONE_NA,__IPHONE_NA'; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_C: CFStringRef deprecated 'in __MAC_10_5,__MAC_10_6,__IPHONE_NA,__IPHONE_NA'; cvar; external;
  kCVImageBufferTransferFunction_sRGB: CFStringRef { available starting in __MAC_10_13,__IPHONE_11_0 }; cvar; external;
  kCVImageBufferTransferFunction_ITU_R_2020: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_ST_428_1: CFStringRef { available starting in __MAC_10_12,__IPHONE_10_0 }; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_ST_2084_PQ: CFStringRef { available starting in __MAC_10_13,__IPHONE_11_0 }; cvar; external;
  kCVImageBufferTransferFunction_ITU_R_2100_HLG: CFStringRef { available starting in __MAC_10_13,__IPHONE_11_0 }; cvar; external;
  kCVImageBufferTransferFunction_Linear: CFStringRef { available starting in __MAC_10_14,__IPHONE_12_0 }; cvar; external;
  kCVImageBufferChromaLocationTopFieldKey: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocationBottomFieldKey: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Left: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Center: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_TopLeft: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Top: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_BottomLeft: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Bottom: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_DV420: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsamplingKey: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsampling_420: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsampling_422: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsampling_411: CFStringRef { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferAlphaChannelIsOpaque: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCVImageBufferAlphaChannelModeKey: CFStringRef { unavailable in watchos } { available in macosx 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  kCVImageBufferAlphaChannelMode_StraightAlpha: CFStringRef { unavailable in watchos } { available in macosx 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  kCVImageBufferAlphaChannelMode_PremultipliedAlpha: CFStringRef { unavailable in watchos } { available in macosx 10.15, ios 13.0, tvos 13.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVYCbCrMatrixGetIntegerCodePointForString(yCbCrMatrixString: CFStringRef): cint; cdecl; external; { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
function CVColorPrimariesGetIntegerCodePointForString(colorPrimariesString: CFStringRef): cint; cdecl; external; { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
function CVTransferFunctionGetIntegerCodePointForString(transferFunctionString: CFStringRef): cint; cdecl; external; { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
function CVYCbCrMatrixGetStringForIntegerCodePoint(yCbCrMatrixCodePoint: cint): CFStringRef; cdecl; external; { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
function CVColorPrimariesGetStringForIntegerCodePoint(colorPrimariesCodePoint: cint): CFStringRef; cdecl; external; { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
function CVTransferFunctionGetStringForIntegerCodePoint(transferFunctionCodePoint: cint): CFStringRef; cdecl; external; { available in macosx 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
{$endif}

{$ifdef TYPES}
type
  CVImageBufferRef = CVBufferRef;
  CVImageBufferRefPtr = ^CVImageBufferRef;
{$endif}

{$ifdef FUNCTIONS}
function CVImageBufferGetEncodedSize(imageBuffer: CVImageBufferRef): CGSize; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferGetDisplaySize(imageBuffer: CVImageBufferRef): CGSize; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferGetCleanRect(imageBuffer: CVImageBufferRef): CGRect; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferIsFlipped(imageBuffer: CVImageBufferRef): Boolean; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$if defined(COREVIDEO_SUPPORTS_COLORSPACE)}
{$ifdef FUNCTIONS}
function CVImageBufferGetColorSpace(imageBuffer: CVImageBufferRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CVImageBufferCreateColorSpaceFromAttachments(attachments: CFDictionaryRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_8,__IPHONE_10_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVImageBufferMasteringDisplayColorVolumeKey: CFStringRef { available starting in __MAC_10_13,__IPHONE_11_0 }; cvar; external;
  kCVImageBufferContentLightLevelInfoKey: CFStringRef { available starting in __MAC_10_13,__IPHONE_11_0 }; cvar; external;
{$endif}

{$endif}
