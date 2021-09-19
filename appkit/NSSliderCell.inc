{ Parsed from AppKit.framework NSSliderCell.h }

{$ifdef TYPES}
type
  NSSliderCellPtr = ^NSSliderCell;
{$endif}

{$ifdef TYPES}
type
  NSTickMarkPosition = NSUInteger;
  NSTickMarkPositionPtr = ^NSTickMarkPosition;

const
  NSTickMarkPositionBelow = 0;
  NSTickMarkPositionAbove = 1;
  NSTickMarkPositionLeading = NSTickMarkPositionAbove;
  NSTickMarkPositionTrailing = NSTickMarkPositionBelow;

type
  NSSliderType = NSUInteger;
  NSSliderTypePtr = ^NSSliderType;

const
  NSSliderTypeLinear = 0;
  NSSliderTypeCircular = 1;
{$endif}

{$ifdef CLASSES}

type
  NSSliderCell = objcclass external (NSActionCell)
  public
    class function prefersTrackingUntilMouseUp: objcbool; message 'prefersTrackingUntilMouseUp';
    procedure setMinValue(newValue: double); message 'setMinValue:';
    function minValue: double; message 'minValue';
    procedure setMaxValue(newValue: double); message 'setMaxValue:';
    function maxValue: double; message 'maxValue';
    procedure setAltIncrementValue(newValue: double); message 'setAltIncrementValue:';
    function altIncrementValue: double; message 'altIncrementValue';
    procedure setSliderType(newValue: NSSliderType); message 'setSliderType:';
    function sliderType: NSSliderType; message 'sliderType';
    procedure setVertical(newValue: objcbool); message 'setVertical:'; { available in macos 10.11 }
    function isVertical: objcbool; message 'isVertical'; { available in macos 10.11 }
    function trackRect: NSRect; message 'trackRect';
    function knobThickness: CGFloat; message 'knobThickness';
    function knobRectFlipped (flipped: objcbool): NSRect; message 'knobRectFlipped:';
    function barRectFlipped (flipped: objcbool): NSRect; message 'barRectFlipped:'; { available in macos 10.9 }
    procedure drawKnob (knobRect: NSRect); message 'drawKnob:';
    procedure drawKnob_; message 'drawKnob';
    procedure drawBarInside_flipped (rect: NSRect; flipped: objcbool); message 'drawBarInside:flipped:';
  end;


type
  NSSliderCellVerticalGetter = objccategory external (NSSliderCell)
    function isVertical: objcbool; message 'isVertical'; { available in macos 10.0 }
  end;

type
  NSSliderCell_NSTickMarkSupport = objccategory external name 'NSTickMarkSupport' (NSSliderCell)
    procedure setNumberOfTickMarks(newValue: NSInteger); message 'setNumberOfTickMarks:';
    function numberOfTickMarks: NSInteger; message 'numberOfTickMarks';
    procedure setTickMarkPosition(newValue: NSTickMarkPosition); message 'setTickMarkPosition:';
    function tickMarkPosition: NSTickMarkPosition; message 'tickMarkPosition';
    procedure setAllowsTickMarkValuesOnly(newValue: objcbool); message 'setAllowsTickMarkValuesOnly:';
    function allowsTickMarkValuesOnly: objcbool; message 'allowsTickMarkValuesOnly';
    function tickMarkValueAtIndex (index: NSInteger): double; message 'tickMarkValueAtIndex:';
    function rectOfTickMarkAtIndex (index: NSInteger): NSRect; message 'rectOfTickMarkAtIndex:';
    function indexOfTickMarkAtPoint (point: NSPoint): NSInteger; message 'indexOfTickMarkAtPoint:';
    function closestTickMarkValueToValue (value: double): double; message 'closestTickMarkValueToValue:';
    procedure drawTickMarks; message 'drawTickMarks'; { available in macos 10.9 }
  end;

type
  NSSliderCell_NSDeprecated = objccategory external name 'NSDeprecated' (NSSliderCell)
    procedure setTitleCell (cell: NSCell); message 'setTitleCell:'; deprecated '-setTitleCell: had no effect since 10.0';
    function titleCell: id; message 'titleCell'; deprecated '-titleCell has returned nil since 10.0';
    procedure setTitleColor (newColor: NSColor); message 'setTitleColor:'; deprecated '-setTitleColor: had no effect since 10.0';
    function titleColor: NSColor; message 'titleColor'; deprecated '-titleColor has returned nil since 10.0';
    procedure setTitleFont (fontObj: NSFont); message 'setTitleFont:'; deprecated '-setTitleFont: had no effect since 10.0';
    function titleFont: NSFont; message 'titleFont'; deprecated '-titleFont has returned nil since 10.0';
    function title_: NSString; message 'title'; deprecated '-title has returned nil since 10.0';
    procedure setTitle (string_: NSString); message 'setTitle:'; deprecated '-setTitle: had no effect since 10.0';
    procedure setKnobThickness (thickness: CGFloat); message 'setKnobThickness:'; deprecated '-knobThickness has returned 0 since 10.0';
    procedure setImage (backgroundImage: NSImage); message 'setImage:'; deprecated '-setImage: had no effect since 10.0';
    function image_: NSImage; message 'image'; deprecated '-image has returned nil since 10.0';
  end;
{$endif}

{$ifdef TYPES}
const
  NSTickMarkBelow = NSTickMarkPositionBelow deprecated 'replace with NSTickMarkPositionBelow';
  NSTickMarkAbove = NSTickMarkPositionAbove deprecated 'replace with NSTickMarkPositionAbove';
  NSTickMarkLeft = NSTickMarkPositionLeading deprecated 'replace with NSTickMarkPositionLeading';
  NSTickMarkRight = NSTickMarkPositionTrailing deprecated 'replace with NSTickMarkPositionTrailing';
  NSLinearSlider = NSSliderTypeLinear deprecated 'replace with NSSliderTypeLinear';
  NSCircularSlider = NSSliderTypeCircular deprecated 'replace with NSSliderTypeCircular';
{$endif}

