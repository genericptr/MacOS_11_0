{ Parsed from AppKit.framework NSLevelIndicator.h }

{$ifdef TYPES}
type
  NSLevelIndicatorPtr = ^NSLevelIndicator;
{$endif}

{$ifdef TYPES}
type
  NSLevelIndicatorPlaceholderVisibility = NSInteger;
  NSLevelIndicatorPlaceholderVisibilityPtr = ^NSLevelIndicatorPlaceholderVisibility;

const
  NSLevelIndicatorPlaceholderVisibilityAutomatic = 0;
  NSLevelIndicatorPlaceholderVisibilityAlways = 1;
  NSLevelIndicatorPlaceholderVisibilityWhileEditing = 2;
{$endif}

{$ifdef CLASSES}

type
  NSLevelIndicator = objcclass external (NSControl)
  private
  public
    procedure setLevelIndicatorStyle(newValue: NSLevelIndicatorStyle); message 'setLevelIndicatorStyle:'; { available in macos 10.10 }
    function levelIndicatorStyle: NSLevelIndicatorStyle; message 'levelIndicatorStyle'; { available in macos 10.10 }
    procedure setEditable(newValue: objcbool); message 'setEditable:'; { available in macos 10.13 }
    function isEditable: objcbool; message 'isEditable'; { available in macos 10.13 }
    procedure setMinValue(newValue: double); message 'setMinValue:';
    function minValue: double; message 'minValue';
    procedure setMaxValue(newValue: double); message 'setMaxValue:';
    function maxValue: double; message 'maxValue';
    procedure setWarningValue(newValue: double); message 'setWarningValue:';
    function warningValue: double; message 'warningValue';
    procedure setCriticalValue(newValue: double); message 'setCriticalValue:';
    function criticalValue: double; message 'criticalValue';
    procedure setTickMarkPosition(newValue: NSTickMarkPosition); message 'setTickMarkPosition:';
    function tickMarkPosition: NSTickMarkPosition; message 'tickMarkPosition';
    procedure setNumberOfTickMarks(newValue: NSInteger); message 'setNumberOfTickMarks:';
    function numberOfTickMarks: NSInteger; message 'numberOfTickMarks';
    procedure setNumberOfMajorTickMarks(newValue: NSInteger); message 'setNumberOfMajorTickMarks:';
    function numberOfMajorTickMarks: NSInteger; message 'numberOfMajorTickMarks';
    function tickMarkValueAtIndex (index: NSInteger): double; message 'tickMarkValueAtIndex:';
    function rectOfTickMarkAtIndex (index: NSInteger): NSRect; message 'rectOfTickMarkAtIndex:';
    procedure setFillColor(newValue: NSColor); message 'setFillColor:'; { available in macos 10.13 }
    function fillColor: NSColor; message 'fillColor'; { available in macos 10.13 }
    procedure setWarningFillColor(newValue: NSColor); message 'setWarningFillColor:'; { available in macos 10.13 }
    function warningFillColor: NSColor; message 'warningFillColor'; { available in macos 10.13 }
    procedure setCriticalFillColor(newValue: NSColor); message 'setCriticalFillColor:'; { available in macos 10.13 }
    function criticalFillColor: NSColor; message 'criticalFillColor'; { available in macos 10.13 }
    procedure setDrawsTieredCapacityLevels(newValue: objcbool); message 'setDrawsTieredCapacityLevels:'; { available in macos 10.13 }
    function drawsTieredCapacityLevels: objcbool; message 'drawsTieredCapacityLevels'; { available in macos 10.13 }
    procedure setPlaceholderVisibility(newValue: NSLevelIndicatorPlaceholderVisibility); message 'setPlaceholderVisibility:'; { available in macos 10.13 }
    function placeholderVisibility: NSLevelIndicatorPlaceholderVisibility; message 'placeholderVisibility'; { available in macos 10.13 }
    procedure setRatingImage(newValue: NSImage); message 'setRatingImage:'; { available in macos 10.13 }
    function ratingImage: NSImage; message 'ratingImage'; { available in macos 10.13 }
    procedure setRatingPlaceholderImage(newValue: NSImage); message 'setRatingPlaceholderImage:'; { available in macos 10.13 }
    function ratingPlaceholderImage: NSImage; message 'ratingPlaceholderImage'; { available in macos 10.13 }
  end;
{$endif}

