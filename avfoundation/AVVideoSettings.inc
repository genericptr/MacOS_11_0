{ Parsed from AVFoundation.framework AVVideoSettings.h }

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVVideoCodecKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVVideoCodecType = NSString;
  AVVideoCodecTypePtr = ^AVVideoCodecType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVVideoCodecTypeHEVC: AVVideoCodecType { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoCodecTypeH264: AVVideoCodecType { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoCodecTypeJPEG: AVVideoCodecType { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoCodecTypeAppleProRes4444: AVVideoCodecType { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoCodecTypeAppleProRes422: AVVideoCodecType { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoCodecTypeAppleProRes422HQ: AVVideoCodecType { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  AVVideoCodecTypeAppleProRes422LT: AVVideoCodecType { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  AVVideoCodecTypeAppleProRes422Proxy: AVVideoCodecType { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  AVVideoCodecTypeHEVCWithAlpha: AVVideoCodecType { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  AVVideoCodecHEVC: NSString { unavailable in watchos }; cvar; external;
  AVVideoCodecH264: NSString { unavailable in watchos }; cvar; external;
  AVVideoCodecJPEG: NSString { unavailable in watchos }; cvar; external;
  AVVideoCodecAppleProRes4444: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoCodecAppleProRes422: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoWidthKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoHeightKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoPixelAspectRatioKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoPixelAspectRatioHorizontalSpacingKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoPixelAspectRatioVerticalSpacingKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoCleanApertureKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoCleanApertureWidthKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoCleanApertureHeightKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoCleanApertureHorizontalOffsetKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoCleanApertureVerticalOffsetKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoScalingModeKey: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoScalingModeFit: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoScalingModeResize: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoScalingModeResizeAspect: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoScalingModeResizeAspectFill: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoColorPropertiesKey: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoColorPrimariesKey: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoColorPrimaries_ITU_R_709_2: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoColorPrimaries_EBU_3213: NSString { unavailable in ios, tvos, watchos } { available in macos 10.7 }; cvar; external;
  AVVideoColorPrimaries_SMPTE_C: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoColorPrimaries_P3_D65: NSString { unavailable in watchos } { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoColorPrimaries_ITU_R_2020: NSString { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoTransferFunctionKey: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoTransferFunction_ITU_R_709_2: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoTransferFunction_SMPTE_240M_1995: NSString { unavailable in ios, tvos, watchos } { available in macos 10.7 }; cvar; external;
  AVVideoTransferFunction_SMPTE_ST_2084_PQ: NSString { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoTransferFunction_ITU_R_2100_HLG: NSString { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoYCbCrMatrixKey: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoYCbCrMatrix_ITU_R_709_2: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoYCbCrMatrix_ITU_R_601_4: NSString { unavailable in watchos } { available in macos 10.7, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoYCbCrMatrix_SMPTE_240M_1995: NSString { unavailable in ios, tvos, watchos } { available in macos 10.7 }; cvar; external;
  AVVideoYCbCrMatrix_ITU_R_2020: NSString { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoAllowWideColorKey: NSString { unavailable in watchos } { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
  AVVideoCompressionPropertiesKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoAverageBitRateKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoQualityKey: NSString { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoMaxKeyFrameIntervalKey: NSString { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoMaxKeyFrameIntervalDurationKey: NSString { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoAppleProRAWBitDepthKey: NSString { available in macos 11.1, ios 14.3, tvos 14.3, watchos 7.2 }; cvar; external;
  AVVideoAllowFrameReorderingKey: NSString { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelKey: NSString { unavailable in watchos } { available in macos 10.8, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Baseline30: NSString { unavailable in watchos } { available in macos 10.8, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Baseline31: NSString { unavailable in watchos } { available in macos 10.8, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Baseline41: NSString { unavailable in watchos } { available in macos 10.8, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264BaselineAutoLevel: NSString { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Main30: NSString { unavailable in watchos } { available in macos 10.8, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Main31: NSString { unavailable in watchos } { available in macos 10.8, ios 4.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Main32: NSString { unavailable in watchos } { available in macos 10.8, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264Main41: NSString { unavailable in watchos } { available in macos 10.8, ios 5.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264MainAutoLevel: NSString { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264High40: NSString { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264High41: NSString { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }; cvar; external;
  AVVideoProfileLevelH264HighAutoLevel: NSString { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoH264EntropyModeKey: NSString { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoH264EntropyModeCAVLC: NSString { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoH264EntropyModeCABAC: NSString { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoExpectedSourceFrameRateKey: NSString { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoAverageNonDroppableFrameRateKey: NSString { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }; cvar; external;
  AVVideoDecompressionPropertiesKey: NSString { unavailable in ios, tvos, watchos } { available in macos 10.13 }; cvar; external;
  AVVideoEncoderSpecificationKey: NSString { unavailable in ios, tvos, watchos } { available in macos 10.10 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVVideoApertureMode = NSString;
  AVVideoApertureModePtr = ^AVVideoApertureMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVVideoApertureModeCleanAperture: AVVideoApertureMode { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoApertureModeProductionAperture: AVVideoApertureMode { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVVideoApertureModeEncodedPixels: AVVideoApertureMode { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
{$endif}

{$else}
{$endif}
