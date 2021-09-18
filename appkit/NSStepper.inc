{ Parsed from AppKit.framework NSStepper.h }

{$ifdef TYPES}
type
  NSStepperPtr = ^NSStepper;
{$endif}

{$ifdef CLASSES}

type
  NSStepper = objcclass external (NSControl, NSAccessibilityStepperProtocol)
  public
    procedure setMinValue(newValue: double); message 'setMinValue:';
    function minValue: double; message 'minValue';
    procedure setMaxValue(newValue: double); message 'setMaxValue:';
    function maxValue: double; message 'maxValue';
    procedure setIncrement(newValue: double); message 'setIncrement:';
    function increment: double; message 'increment';
    procedure setValueWraps(newValue: objcbool); message 'setValueWraps:';
    function valueWraps: objcbool; message 'valueWraps';
    procedure setAutorepeat(newValue: objcbool); message 'setAutorepeat:';
    function autorepeat: objcbool; message 'autorepeat';
  end;
{$endif}

