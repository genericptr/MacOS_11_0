{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAudioProcessingSettings.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVAudioTimePitchAlgorithm = NSString;
  AVAudioTimePitchAlgorithmPtr = ^AVAudioTimePitchAlgorithm;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioTimePitchAlgorithmLowQualityZeroLatency: AVAudioTimePitchAlgorithm { unavailable in macos }; cvar; external;
  AVAudioTimePitchAlgorithmTimeDomain: AVAudioTimePitchAlgorithm { available in macos , ios , tvos , watchos  }; cvar; external;
  AVAudioTimePitchAlgorithmSpectral: AVAudioTimePitchAlgorithm { available in macos , ios , tvos , watchos  }; cvar; external;
  AVAudioTimePitchAlgorithmVarispeed: AVAudioTimePitchAlgorithm { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$else}
{$endif}
