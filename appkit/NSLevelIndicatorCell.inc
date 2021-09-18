{ Parsed from AppKit.framework NSLevelIndicatorCell.h }

{$ifdef TYPES}
type
  NSLevelIndicatorCellPtr = ^NSLevelIndicatorCell;
{$endif}

{$ifdef TYPES}
type
  NSLevelIndicatorStyle = NSUInteger;
  NSLevelIndicatorStylePtr = ^NSLevelIndicatorStyle;

const
  NSLevelIndicatorStyleRelevancy = 0;
  NSLevelIndicatorStyleContinuousCapacity = 1;
  NSLevelIndicatorStyleDiscreteCapacity = 2;
  NSLevelIndicatorStyleRating = 3;
{$endif}

{$ifdef CLASSES}

type
  NSLevelIndicatorCell = objcclass external (NSActionCell)
  public
    function initWithLevelIndicatorStyle (levelIndicatorStyle: NSLevelIndicatorStyle): id; message 'initWithLevelIndicatorStyle:';
    procedure setLevelIndicatorStyle(newValue: NSLevelIndicatorStyle); message 'setLevelIndicatorStyle:';
    function levelIndicatorStyle: NSLevelIndicatorStyle; message 'levelIndicatorStyle';
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
    function rectOfTickMarkAtIndex (index: NSInteger): NSRect; message 'rectOfTickMarkAtIndex:';
    function tickMarkValueAtIndex (index: NSInteger): double; message 'tickMarkValueAtIndex:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSRelevancyLevelIndicatorStyle = NSLevelIndicatorStyleRelevancy deprecated 'replace with NSLevelIndicatorStyleRelevancy';
  NSContinuousCapacityLevelIndicatorStyle = NSLevelIndicatorStyleContinuousCapacity deprecated 'replace with NSLevelIndicatorStyleContinuousCapacity';
  NSDiscreteCapacityLevelIndicatorStyle = NSLevelIndicatorStyleDiscreteCapacity deprecated 'replace with NSLevelIndicatorStyleDiscreteCapacity';
  NSRatingLevelIndicatorStyle = NSLevelIndicatorStyleRating deprecated 'replace with NSLevelIndicatorStyleRating';
{$endif}

