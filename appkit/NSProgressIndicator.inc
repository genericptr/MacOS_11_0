{ Parsed from AppKit.framework NSProgressIndicator.h }

{$ifdef TYPES}
type
  NSProgressIndicatorPtr = ^NSProgressIndicator;
{$endif}

{$ifdef TYPES}
type
  NSProgressIndicatorStyle = NSUInteger;
  NSProgressIndicatorStylePtr = ^NSProgressIndicatorStyle;

const
  NSProgressIndicatorStyleBar = 0;
  NSProgressIndicatorStyleSpinning = 1;
{$endif}

{$ifdef CLASSES}

type
  NSProgressIndicator = objcclass external (NSView, NSAccessibilityProgressIndicatorProtocol)
  public
    procedure setIndeterminate(newValue: objcbool); message 'setIndeterminate:';
    function isIndeterminate: objcbool; message 'isIndeterminate';
    procedure setBezeled(newValue: objcbool); message 'setBezeled:';
    function isBezeled: objcbool; message 'isBezeled';
    procedure setControlTint(newValue: NSControlTint); message 'setControlTint:';
    function controlTint: NSControlTint; message 'controlTint';
    procedure setControlSize(newValue: NSControlSize); message 'setControlSize:';
    function controlSize: NSControlSize; message 'controlSize';
    procedure setDoubleValue(newValue: double); message 'setDoubleValue:';
    function doubleValue: double; message 'doubleValue';
    procedure incrementBy (delta: double); message 'incrementBy:';
    procedure setMinValue(newValue: double); message 'setMinValue:';
    function minValue: double; message 'minValue';
    procedure setMaxValue(newValue: double); message 'setMaxValue:';
    function maxValue: double; message 'maxValue';
    procedure setUsesThreadedAnimation(newValue: objcbool); message 'setUsesThreadedAnimation:';
    function usesThreadedAnimation: objcbool; message 'usesThreadedAnimation';
    procedure startAnimation (sender: id); message 'startAnimation:';
    procedure stopAnimation (sender: id); message 'stopAnimation:';
    procedure setStyle(newValue: NSProgressIndicatorStyle); message 'setStyle:';
    function style: NSProgressIndicatorStyle; message 'style';
    procedure sizeToFit; message 'sizeToFit';
    procedure setDisplayedWhenStopped(newValue: objcbool); message 'setDisplayedWhenStopped:';
    function isDisplayedWhenStopped: objcbool; message 'isDisplayedWhenStopped';

    function accessibilityValue: NSNumber; message 'accessibilityValue';
  end;
{$endif}

{$ifdef TYPES}
type
  NSProgressIndicatorThickness = NSUInteger;
  NSProgressIndicatorThicknessPtr = ^NSProgressIndicatorThickness;

const
  NSProgressIndicatorPreferredThickness = 14 deprecated 'These constants do not accurately represent the geometry of NSProgressIndicator.  Use `controlSize` and `sizeToFit` instead.';
  NSProgressIndicatorPreferredSmallThickness = 10 deprecated 'These constants do not accurately represent the geometry of NSProgressIndicator.  Use `controlSize` and `sizeToFit` instead.';
  NSProgressIndicatorPreferredLargeThickness = 18 deprecated 'These constants do not accurately represent the geometry of NSProgressIndicator.  Use `controlSize` and `sizeToFit` instead.';
  NSProgressIndicatorPreferredAquaThickness = 12 deprecated 'These constants do not accurately represent the geometry of NSProgressIndicator.  Use `controlSize` and `sizeToFit` instead.';

const
  NSProgressIndicatorBarStyle = NSProgressIndicatorStyleBar deprecated 'replace with NSProgressIndicatorStyleBar';
  NSProgressIndicatorSpinningStyle = NSProgressIndicatorStyleSpinning deprecated 'replace with NSProgressIndicatorStyleSpinning';
{$endif}

{$ifdef CLASSES}

type
  NSProgressIndicatorDeprecated = objccategory external (NSProgressIndicator)
    function animationDelay: NSTimeInterval; message 'animationDelay'; deprecated 'The animationDelay property does nothing.';
    procedure setAnimationDelay (delay: NSTimeInterval); message 'setAnimationDelay:'; deprecated 'The animationDelay property does nothing.';
    procedure animate (sender: id); message 'animate:'; deprecated 'Use -startAnimation and -stopAnimation instead.';
  end;
{$endif}

