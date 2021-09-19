{ Parsed from AVFoundation.framework AVMediaFormat.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVMediaType = NSString;
  AVMediaTypePtr = ^AVMediaType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMediaTypeVideo: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeAudio: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeText: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeClosedCaption: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeSubtitle: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeTimecode: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeMetadata: AVMediaType { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeMuxed: AVMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaTypeMetadataObject: AVMediaType { unavailable in macos, watchos } { available in ios 9.0, tvos 9.0 }; cvar; external;
  AVMediaTypeDepthData: AVMediaType { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVMediaCharacteristic = NSString;
  AVMediaCharacteristicPtr = ^AVMediaCharacteristic;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMediaCharacteristicVisual: AVMediaCharacteristic { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicAudible: AVMediaCharacteristic { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicLegible: AVMediaCharacteristic { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicFrameBased: AVMediaCharacteristic { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicUsesWideGamutColorSpace: AVMediaCharacteristic { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 }; cvar; external;
  AVMediaCharacteristicContainsHDRVideo: AVMediaCharacteristic { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }; cvar; external;
  AVMediaCharacteristicContainsAlphaChannel: AVMediaCharacteristic { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  AVMediaCharacteristicIsMainProgramContent: AVMediaCharacteristic { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicIsAuxiliaryContent: AVMediaCharacteristic { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicIsOriginalContent: AVMediaCharacteristic { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }; cvar; external;
  AVMediaCharacteristicContainsOnlyForcedSubtitles: AVMediaCharacteristic { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicTranscribesSpokenDialogForAccessibility: AVMediaCharacteristic { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicDescribesMusicAndSoundForAccessibility: AVMediaCharacteristic { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicEasyToRead: AVMediaCharacteristic { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicDescribesVideoForAccessibility: AVMediaCharacteristic { available in macos 10.8, ios 5.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVMediaCharacteristicLanguageTranslation: AVMediaCharacteristic { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
  AVMediaCharacteristicDubbedTranslation: AVMediaCharacteristic { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
  AVMediaCharacteristicVoiceOverTranslation: AVMediaCharacteristic { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVFileType = NSString;
  AVFileTypePtr = ^AVFileType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFileTypeQuickTimeMovie: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeMPEG4: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeAppleM4V: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeAppleM4A: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileType3GPP: AVFileType { available in macos 10.11, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileType3GPP2: AVFileType { available in macos 10.11, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeCoreAudioFormat: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeWAVE: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeAIFF: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeAIFC: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeAMR: AVFileType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeMPEGLayer3: AVFileType { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeSunAU: AVFileType { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeAC3: AVFileType { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVFileTypeEnhancedAC3: AVFileType { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
  AVFileTypeJPEG: AVFileType { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  AVFileTypeDNG: AVFileType { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  AVFileTypeHEIC: AVFileType { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  AVFileTypeAVCI: AVFileType { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  AVFileTypeHEIF: AVFileType { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  AVFileTypeTIFF: AVFileType { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  AVStreamingKeyDeliveryContentKeyType: NSString { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
  AVStreamingKeyDeliveryPersistentContentKeyType: NSString { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVFileTypeProfile = NSString;
  AVFileTypeProfilePtr = ^AVFileTypeProfile;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVFileTypeProfileMPEG4AppleHLS: AVFileTypeProfile { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 }; cvar; external;
  AVFileTypeProfileMPEG4CMAFCompliant: AVFileTypeProfile { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 }; cvar; external;
{$endif}

{$else}
{$endif}
