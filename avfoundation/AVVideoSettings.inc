{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVVideoSettings.h }

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVVideoCodecKey: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVVideoCodecType = NSString;
  AVVideoCodecTypePtr = ^AVVideoCodecType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVVideoCodecTypeHEVC: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeH264: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeJPEG: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeAppleProRes4444: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeAppleProRes422: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeAppleProRes422HQ: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeAppleProRes422LT: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeAppleProRes422Proxy: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecTypeHEVCWithAlpha: AVVideoCodecType { unavailable in watchos }; cvar; external;
  AVVideoCodecHEVC: NSString { unavailable in watchos }; cvar; external;
  AVVideoCodecH264: NSString { unavailable in watchos }; cvar; external;
  AVVideoCodecJPEG: NSString { unavailable in watchos }; cvar; external;
  AVVideoCodecAppleProRes4444: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoCodecAppleProRes422: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoWidthKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoHeightKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoPixelAspectRatioKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoPixelAspectRatioHorizontalSpacingKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoPixelAspectRatioVerticalSpacingKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoCleanApertureKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoCleanApertureWidthKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoCleanApertureHeightKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoCleanApertureHorizontalOffsetKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoCleanApertureVerticalOffsetKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoScalingModeKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoScalingModeFit: NSString { unavailable in watchos }; cvar; external;
  AVVideoScalingModeResize: NSString { unavailable in watchos }; cvar; external;
  AVVideoScalingModeResizeAspect: NSString { unavailable in watchos }; cvar; external;
  AVVideoScalingModeResizeAspectFill: NSString { unavailable in watchos }; cvar; external;
  AVVideoColorPropertiesKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoColorPrimariesKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoColorPrimaries_ITU_R_709_2: NSString { unavailable in watchos }; cvar; external;
  AVVideoColorPrimaries_EBU_3213: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoColorPrimaries_SMPTE_C: NSString { unavailable in watchos }; cvar; external;
  AVVideoColorPrimaries_P3_D65: NSString { unavailable in watchos }; cvar; external;
  AVVideoColorPrimaries_ITU_R_2020: NSString { unavailable in watchos }; cvar; external;
  AVVideoTransferFunctionKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoTransferFunction_ITU_R_709_2: NSString { unavailable in watchos }; cvar; external;
  AVVideoTransferFunction_SMPTE_240M_1995: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoTransferFunction_SMPTE_ST_2084_PQ: NSString { unavailable in watchos }; cvar; external;
  AVVideoTransferFunction_ITU_R_2100_HLG: NSString { unavailable in watchos }; cvar; external;
  AVVideoYCbCrMatrixKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoYCbCrMatrix_ITU_R_709_2: NSString { unavailable in watchos }; cvar; external;
  AVVideoYCbCrMatrix_ITU_R_601_4: NSString { unavailable in watchos }; cvar; external;
  AVVideoYCbCrMatrix_SMPTE_240M_1995: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoYCbCrMatrix_ITU_R_2020: NSString { unavailable in watchos }; cvar; external;
  AVVideoAllowWideColorKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoCompressionPropertiesKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoAverageBitRateKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoQualityKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoMaxKeyFrameIntervalKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoMaxKeyFrameIntervalDurationKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoAppleProRAWBitDepthKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVVideoAllowFrameReorderingKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Baseline30: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Baseline31: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Baseline41: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264BaselineAutoLevel: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Main30: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Main31: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Main32: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264Main41: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264MainAutoLevel: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264High40: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264High41: NSString { unavailable in watchos }; cvar; external;
  AVVideoProfileLevelH264HighAutoLevel: NSString { unavailable in watchos }; cvar; external;
  AVVideoH264EntropyModeKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoH264EntropyModeCAVLC: NSString { unavailable in watchos }; cvar; external;
  AVVideoH264EntropyModeCABAC: NSString { unavailable in watchos }; cvar; external;
  AVVideoExpectedSourceFrameRateKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoAverageNonDroppableFrameRateKey: NSString { unavailable in watchos }; cvar; external;
  AVVideoDecompressionPropertiesKey: NSString { unavailable in ios, tvos, watchos }; cvar; external;
  AVVideoEncoderSpecificationKey: NSString { unavailable in ios, tvos, watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVVideoApertureMode = NSString;
  AVVideoApertureModePtr = ^AVVideoApertureMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVVideoApertureModeCleanAperture: AVVideoApertureMode { unavailable in watchos }; cvar; external;
  AVVideoApertureModeProductionAperture: AVVideoApertureMode { unavailable in watchos }; cvar; external;
  AVVideoApertureModeEncodedPixels: AVVideoApertureMode { unavailable in watchos }; cvar; external;
{$endif}

{$else}
{$endif}
