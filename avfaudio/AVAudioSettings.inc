{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioSettings.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  AVFormatIDKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVSampleRateKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVNumberOfChannelsKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVLinearPCMBitDepthKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVLinearPCMIsBigEndianKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVLinearPCMIsFloatKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVLinearPCMIsNonInterleaved: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVAudioFileTypeKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVEncoderAudioQualityKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVEncoderAudioQualityForVBRKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVEncoderBitRateKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVEncoderBitRatePerChannelKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVEncoderBitRateStrategyKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVEncoderBitDepthHintKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVSampleRateConverterAlgorithmKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVSampleRateConverterAudioQualityKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVChannelLayoutKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVAudioBitRateStrategy_Constant: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVAudioBitRateStrategy_LongTermAverage: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVAudioBitRateStrategy_VariableConstrained: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVAudioBitRateStrategy_Variable: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVSampleRateConverterAlgorithm_Normal: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVSampleRateConverterAlgorithm_Mastering: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  AVSampleRateConverterAlgorithm_MinimumPhase: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
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

