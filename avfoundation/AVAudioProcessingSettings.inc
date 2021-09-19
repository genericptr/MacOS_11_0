{ Parsed from AVFoundation.framework AVAudioProcessingSettings.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVAudioTimePitchAlgorithm = NSString;
  AVAudioTimePitchAlgorithmPtr = ^AVAudioTimePitchAlgorithm;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioTimePitchAlgorithmLowQualityZeroLatency: AVAudioTimePitchAlgorithm { unavailable in macos } { available in ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVAudioTimePitchAlgorithmTimeDomain: AVAudioTimePitchAlgorithm { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVAudioTimePitchAlgorithmSpectral: AVAudioTimePitchAlgorithm { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVAudioTimePitchAlgorithmVarispeed: AVAudioTimePitchAlgorithm { available in macos 10.9, ios 7.0, tvos 9.0, watchos 1.0 }; cvar; external;
{$endif}

{$else}
{$endif}
