{ Parsed from AVFoundation.framework AVAnimation.h }

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVCoreAnimationBeginTimeAtZero: CFTimeInterval { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVLayerVideoGravity = NSString;
  AVLayerVideoGravityPtr = ^AVLayerVideoGravity;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVLayerVideoGravityResizeAspect: AVLayerVideoGravity { unavailable in watchos }; cvar; external;
  AVLayerVideoGravityResizeAspectFill: AVLayerVideoGravity { unavailable in watchos }; cvar; external;
  AVLayerVideoGravityResize: AVLayerVideoGravity { unavailable in watchos }; cvar; external;
{$endif}

{$else}
{$endif}
