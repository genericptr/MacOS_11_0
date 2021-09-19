{ Parsed from QuartzCore.framework CAScrollLayer.h }

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
  kCAScrollNone: CAScrollLayerScrollMode { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAScrollVertically: CAScrollLayerScrollMode { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAScrollHorizontally: CAScrollLayerScrollMode { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAScrollBoth: CAScrollLayerScrollMode { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

