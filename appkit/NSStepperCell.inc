{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSStepperCell.h }

{$ifdef TYPES}
type
  NSStepperCellPtr = ^NSStepperCell;
{$endif}

{$ifdef CLASSES}

type
  NSStepperCell = objcclass external (NSActionCell)
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

