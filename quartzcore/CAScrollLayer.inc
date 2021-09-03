{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAScrollLayer.h }

{$ifdef TYPES}
type
  CAScrollLayerPtr = ^CAScrollLayer;
{$endif}

{$ifdef TYPES}
type
  CAScrollLayerScrollMode = NSString;
  CAScrollLayerScrollModePtr = ^CAScrollLayerScrollMode;
{$endif}

{$ifdef CLASSES}

type
  CAScrollLayer = objcclass external (CALayer)
  public
    procedure scrollToPoint (p: CGPoint); message 'scrollToPoint:';
    procedure scrollToRect (r: CGRect); message 'scrollToRect:';
    procedure setScrollMode(newValue: CAScrollLayerScrollMode); message 'setScrollMode:';
    function scrollMode: CAScrollLayerScrollMode; message 'scrollMode';
  end;


type
  CALayerScrolling = objccategory external (CALayer)
    procedure scrollPoint (p: CGPoint); message 'scrollPoint:';
    procedure scrollRectToVisible (r: CGRect); message 'scrollRectToVisible:';
    function visibleRect: CGRect; message 'visibleRect';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAScrollNone: CAScrollLayerScrollMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAScrollVertically: CAScrollLayerScrollMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAScrollHorizontally: CAScrollLayerScrollMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAScrollBoth: CAScrollLayerScrollMode { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

