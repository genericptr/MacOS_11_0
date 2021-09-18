{ Parsed from AppKit.framework NSScroller.h }

{$ifdef TYPES}
type
  NSScrollerPtr = ^NSScroller;
{$endif}

{$ifdef TYPES}
type
  NSUsableScrollerParts = NSUInteger;
  NSUsableScrollerPartsPtr = ^NSUsableScrollerParts;

const
  NSNoScrollerParts = 0;
  NSOnlyScrollerArrows = 1 deprecated;
  NSAllScrollerParts = 2;

type
  NSScrollerPart = NSUInteger;
  NSScrollerPartPtr = ^NSScrollerPart;

const
  NSScrollerNoPart = 0;
  NSScrollerDecrementPage = 1;
  NSScrollerKnob = 2;
  NSScrollerIncrementPage = 3;
  NSScrollerDecrementLine = 4 deprecated;
  NSScrollerIncrementLine = 5 deprecated;
  NSScrollerKnobSlot = 6;

type
  NSScrollerStyle = NSInteger;
  NSScrollerStylePtr = ^NSScrollerStyle;

const
  NSScrollerStyleLegacy = 0;
  NSScrollerStyleOverlay = 1;

type
  NSScrollerKnobStyle = NSInteger;
  NSScrollerKnobStylePtr = ^NSScrollerKnobStyle;

const
  NSScrollerKnobStyleDefault = 0;
  NSScrollerKnobStyleDark = 1;
  NSScrollerKnobStyleLight = 2;
{$endif}

{$ifdef CLASSES}

type
  NSScroller = objcclass external (NSControl)
  public
    class function isCompatibleWithOverlayScrollers: objcbool; message 'isCompatibleWithOverlayScrollers'; { available in macos  }
    class function scrollerWidthForControlSize_scrollerStyle (controlSize_: NSControlSize; scrollerStyle: NSScrollerStyle): CGFloat; message 'scrollerWidthForControlSize:scrollerStyle:'; { available in macos  }
    class function preferredScrollerStyle: NSScrollerStyle; message 'preferredScrollerStyle'; { available in macos  }
    procedure setScrollerStyle(newValue: NSScrollerStyle); message 'setScrollerStyle:'; { available in macos  }
    function scrollerStyle: NSScrollerStyle; message 'scrollerStyle'; { available in macos  }
    procedure setKnobStyle(newValue: NSScrollerKnobStyle); message 'setKnobStyle:'; { available in macos  }
    function knobStyle: NSScrollerKnobStyle; message 'knobStyle'; { available in macos  }
    function rectForPart (partCode: NSScrollerPart): NSRect; message 'rectForPart:';
    procedure checkSpaceForParts; message 'checkSpaceForParts';
    function usableParts: NSUsableScrollerParts; message 'usableParts';
    procedure setControlSize(newValue: NSControlSize); message 'setControlSize:';
    function controlSize: NSControlSize; message 'controlSize';
    procedure drawKnob; message 'drawKnob';
    procedure drawKnobSlotInRect_highlight (slotRect: NSRect; flag: objcbool); message 'drawKnobSlotInRect:highlight:';
    function testPart (point: NSPoint): NSScrollerPart; message 'testPart:';
    procedure trackKnob (event: NSEvent); message 'trackKnob:';
    function hitPart: NSScrollerPart; message 'hitPart';
    procedure setKnobProportion(newValue: CGFloat); message 'setKnobProportion:';
    function knobProportion: CGFloat; message 'knobProportion';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPreferredScrollerStyleDidChangeNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSScrollArrowPosition = NSUInteger;
  NSScrollArrowPositionPtr = ^NSScrollArrowPosition;

const
  NSScrollerArrowsMaxEnd = 0;
  NSScrollerArrowsMinEnd = 1;
  NSScrollerArrowsDefaultSetting = 0;
  NSScrollerArrowsNone = 2;

type
  NSScrollerArrow = NSUInteger;
  NSScrollerArrowPtr = ^NSScrollerArrow;

const
  NSScrollerIncrementArrow = 0;
  NSScrollerDecrementArrow = 1;
{$endif}

{$ifdef CLASSES}

type
  NSScroller_NSDeprecated = objccategory external name 'NSDeprecated' (NSScroller)
    class function scrollerWidthForControlSize (controlSize_: NSControlSize): CGFloat; message 'scrollerWidthForControlSize:'; deprecated 'Use +scrollerWidthForControlSize:scrollerStyle: instead';
    class function scrollerWidth: CGFloat; message 'scrollerWidth'; deprecated 'Use +scrollerWidthForControlSize:scrollerStyle: instead';
    procedure setFloatValue_knobProportion (value: single; proportion: CGFloat); message 'setFloatValue:knobProportion:'; deprecated;
    procedure setArrowsPosition(newValue: NSScrollArrowPosition); message 'setArrowsPosition:'; deprecated 'Has had no effect since 10.7';
    function arrowsPosition: NSScrollArrowPosition; message 'arrowsPosition'; deprecated 'Has had no effect since 10.7';
    procedure setControlTint(newValue: NSControlTint); message 'setControlTint:'; deprecated 'Has had no effect since 10.7';
    function controlTint: NSControlTint; message 'controlTint'; deprecated 'Has had no effect since 10.7';
    procedure highlight (flag: objcbool); message 'highlight:'; deprecated 'Has had no effect since 10.7';
    procedure trackScrollButtons (event: NSEvent); message 'trackScrollButtons:'; deprecated 'Not invoked since 10.7';
    procedure drawParts; message 'drawParts'; deprecated 'Not invoked on any macOS version';
    procedure drawArrow_highlight (whichArrow: NSScrollerArrow; flag: objcbool); message 'drawArrow:highlight:'; deprecated 'Scrollers don''t have arrows as of 10.7';
  end;
{$endif}

