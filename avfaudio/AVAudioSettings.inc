{ Parsed from AVFAudio.framework AVAudioSettings.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  AVFormatIDKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVSampleRateKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVNumberOfChannelsKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVLinearPCMBitDepthKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVLinearPCMIsBigEndianKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVLinearPCMIsFloatKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVLinearPCMIsNonInterleaved: NSString { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioFileTypeKey: NSString { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }; cvar; external;
  AVEncoderAudioQualityKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVEncoderAudioQualityForVBRKey: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVEncoderBitRateKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVEncoderBitRatePerChannelKey: NSString { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVEncoderBitRateStrategyKey: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVEncoderBitDepthHintKey: NSString { available in macos 10.7, ios 3.0, watchos 3.0, tvos 9.0 }; cvar; external;
  AVSampleRateConverterAlgorithmKey: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVSampleRateConverterAudioQualityKey: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVChannelLayoutKey: NSString { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioBitRateStrategy_Constant: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioBitRateStrategy_LongTermAverage: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioBitRateStrategy_VariableConstrained: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioBitRateStrategy_Variable: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVSampleRateConverterAlgorithm_Normal: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVSampleRateConverterAlgorithm_Mastering: NSString { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVSampleRateConverterAlgorithm_MinimumPhase: NSString { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioQuality = NSInteger;
  AVAudioQualityPtr = ^AVAudioQuality;

const
  AVAudioQualityMin = 0;
  AVAudioQualityLow = $20;
  AVAudioQualityMedium = $40;
  AVAudioQualityHigh = $60;
  AVAudioQualityMax = $7F;
{$endif}

