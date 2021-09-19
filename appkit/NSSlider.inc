{ Parsed from AppKit.framework NSSlider.h }

{$ifdef TYPES}
type
  NSSliderPtr = ^NSSlider;
{$endif}

{$ifdef CLASSES}

type
  NSSlider = objcclass external (NSControl, NSAccessibilitySliderProtocol)
  public
    procedure setSliderType(newValue: NSSliderType); message 'setSliderType:'; { available in macos 10.10 }
    function sliderType: NSSliderType; message 'sliderType'; { available in macos 10.10 }
    procedure setMinValue(newValue: double); message 'setMinValue:';
    function minValue: double; message 'minValue';
    procedure setMaxValue(newValue: double); message 'setMaxValue:';
    function maxValue: double; message 'maxValue';
    procedure setAltIncrementValue(newValue: double); message 'setAltIncrementValue:';
    function altIncrementValue: double; message 'altIncrementValue';
    function knobThickness: CGFloat; message 'knobThickness';
    function acceptsFirstMouse (event: NSEvent): objcbool; message 'acceptsFirstMouse:';
    procedure setVertical(newValue: objcbool); message 'setVertical:'; { available in macos 10.12 }
    function isVertical: objcbool; message 'isVertical'; { available in macos 10.12 }
    procedure setTrackFillColor(newValue: NSColor); message 'setTrackFillColor:'; { available in macos 10.12.2 }
    function trackFillColor: NSColor; message 'trackFillColor'; { available in macos 10.12.2 }
  end;


type
  NSSliderVerticalGetter = objccategory external (NSSlider)
    function isVertical: objcbool; message 'isVertical'; { available in macos 10.0 }
  end;

type
  NSTickMarkSupport = objccategory external (NSSlider)
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
  end;

type
  NSSliderConvenience = objccategory external (NSSlider)
    class function sliderWithTarget_action (target_: id; action_: SEL): id; message 'sliderWithTarget:action:'; { available in macos 10.12 }
    class function sliderWithValue_minValue_maxValue_target_action (value: double; minValue_: double; maxValue_: double; target_: id; action_: SEL): id; message 'sliderWithValue:minValue:maxValue:target:action:'; { available in macos 10.12 }
  end;

type
  NSSliderDeprecated = objccategory external (NSSlider)
    procedure setTitleCell (cell: NSCell); message 'setTitleCell:'; deprecated '-setTitleCell: had no effect since 10.0';
    function titleCell: id; message 'titleCell'; deprecated '-titleCell has returned nil since 10.0';
    procedure setTitleColor (newColor: NSColor); message 'setTitleColor:'; deprecated '-setTitleColor: had no effect since 10.0';
    function titleColor: NSColor; message 'titleColor'; deprecated '-titleColor has returned nil since 10.0';
    procedure setTitleFont (fontObj: NSFont); message 'setTitleFont:'; deprecated '-setTitleFont: had no effect since 10.0';
    function titleFont: NSFont; message 'titleFont'; deprecated '-titleFont has returned nil since 10.0';
    function title: NSString; message 'title'; deprecated '-title has returned nil since 10.0';
    procedure setTitle (string_: NSString); message 'setTitle:'; deprecated '-setTitle: had no effect since 10.0';
    procedure setKnobThickness (thickness: CGFloat); message 'setKnobThickness:'; deprecated '-knobThickness has returned 0 since 10.0';
    procedure setImage (backgroundImage: NSImage); message 'setImage:'; deprecated '-setImage: had no effect since 10.0';
    function image: NSImage; message 'image'; deprecated '-image has returned nil since 10.0';
  end;
{$endif}

