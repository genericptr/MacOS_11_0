{ Parsed from AVFoundation.framework AVCaptureSessionPreset.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVCaptureSessionPreset = NSString { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 };
  AVCaptureSessionPresetPtr = ^AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureSessionPresetPhoto: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPresetHigh: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPresetMedium: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPresetLow: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPreset320x240: AVCaptureSessionPreset { unavailable in ios, macCatalyst, watchos, tvos } { available in macos 10.7 }; cvar; external;
  AVCaptureSessionPreset352x288: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 5.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPreset640x480: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPreset960x540: AVCaptureSessionPreset { unavailable in ios, macCatalyst, watchos, tvos } { available in macos 10.7 }; cvar; external;
  AVCaptureSessionPreset1280x720: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPreset1920x1080: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.15, ios 5.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPreset3840x2160: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.15, ios 9.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPresetiFrame960x540: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.9, ios 5.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPresetiFrame1280x720: AVCaptureSessionPreset { unavailable in tvos } { available in macos 10.9, ios 5.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureSessionPresetInputPriority: AVCaptureSessionPreset { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }; cvar; external;
{$endif}

{$else}
{$endif}
