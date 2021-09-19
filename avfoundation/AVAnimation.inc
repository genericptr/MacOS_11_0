{ Parsed from AVFoundation.framework AVAnimation.h }

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVCoreAnimationBeginTimeAtZero: CFTimeInterval { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVLayerVideoGravity = NSString;
  AVLayerVideoGravityPtr = ^AVLayerVideoGravity;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVLayerVideoGravityResizeAspect: AVLayerVideoGravity { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVLayerVideoGravityResizeAspectFill: AVLayerVideoGravity { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
  AVLayerVideoGravityResize: AVLayerVideoGravity { unavailable in watchos } { available in macos 10.7, ios 4.0, tvos 9.0 }; cvar; external;
{$endif}

{$else}
{$endif}
