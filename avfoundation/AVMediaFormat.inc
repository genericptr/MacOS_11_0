{ Parsed from AVFoundation.framework AVMediaFormat.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVMediaType = NSString;
  AVMediaTypePtr = ^AVMediaType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMediaTypeVideo: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeAudio: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeText: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeClosedCaption: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeSubtitle: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeTimecode: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeMetadata: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeMuxed: AVMediaType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaTypeMetadataObject: AVMediaType { unavailable in macos, watchos }; cvar; external;
  AVMediaTypeDepthData: AVMediaType { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVMediaCharacteristic = NSString;
  AVMediaCharacteristicPtr = ^AVMediaCharacteristic;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMediaCharacteristicVisual: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicAudible: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicLegible: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicFrameBased: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicUsesWideGamutColorSpace: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicContainsHDRVideo: AVMediaCharacteristic { unavailable in watchos }; cvar; external;
  AVMediaCharacteristicContainsAlphaChannel: AVMediaCharacteristic { unavailable in watchos }; cvar; external;
  AVMediaCharacteristicIsMainProgramContent: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicIsAuxiliaryContent: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicIsOriginalContent: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicContainsOnlyForcedSubtitles: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicTranscribesSpokenDialogForAccessibility: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicDescribesMusicAndSoundForAccessibility: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicEasyToRead: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicDescribesVideoForAccessibility: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicLanguageTranslation: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicDubbedTranslation: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
  AVMediaCharacteristicVoiceOverTranslation: AVMediaCharacteristic { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVFileType = NSString;
  AVFileTypePtr = ^AVFileType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFileTypeQuickTimeMovie: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeMPEG4: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAppleM4V: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAppleM4A: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileType3GPP: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileType3GPP2: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeCoreAudioFormat: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeWAVE: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAIFF: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAIFC: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAMR: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeMPEGLayer3: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeSunAU: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAC3: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeEnhancedAC3: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeJPEG: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeDNG: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeHEIC: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeAVCI: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeHEIF: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeTIFF: AVFileType { available in macos , ios , tvos , watchos  }; cvar; external;
  AVStreamingKeyDeliveryContentKeyType: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVStreamingKeyDeliveryPersistentContentKeyType: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVFileTypeProfile = NSString;
  AVFileTypeProfilePtr = ^AVFileTypeProfile;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFileTypeProfileMPEG4AppleHLS: AVFileTypeProfile { available in macos , ios , tvos , watchos  }; cvar; external;
  AVFileTypeProfileMPEG4CMAFCompliant: AVFileTypeProfile { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$else}
{$endif}
