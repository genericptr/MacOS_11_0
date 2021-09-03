{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureSessionPreset.h }

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVCaptureSessionPreset = NSString { unavailable in tvos };
  AVCaptureSessionPresetPtr = ^AVCaptureSessionPreset { unavailable in tvos };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureSessionPresetPhoto: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPresetHigh: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPresetMedium: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPresetLow: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPreset320x240: AVCaptureSessionPreset { unavailable in ios, macCatalyst, watchos, tvos }; cvar; external;
  AVCaptureSessionPreset352x288: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPreset640x480: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPreset960x540: AVCaptureSessionPreset { unavailable in ios, macCatalyst, watchos, tvos }; cvar; external;
  AVCaptureSessionPreset1280x720: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPreset1920x1080: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPreset3840x2160: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPresetiFrame960x540: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPresetiFrame1280x720: AVCaptureSessionPreset { unavailable in tvos }; cvar; external;
  AVCaptureSessionPresetInputPriority: AVCaptureSessionPreset { unavailable in macos, tvos }; cvar; external;
{$endif}

{$else}
{$endif}
