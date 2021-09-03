{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSStepperTouchBarItem.h }

{$ifdef CALLBACKS}
type
  NSStepperTouchBarItemStepperTouchBarItemWithIdentifierCallback = reference to function (rect: NSRect; value: double): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSStepperTouchBarItemPtr = ^NSStepperTouchBarItem;
{$endif}

{$ifdef CLASSES}

type
  NSStepperTouchBarItem = objcclass external (NSTouchBarItem)
  public
    class function stepperTouchBarItemWithIdentifier_formatter (identifier_: NSTouchBarItemIdentifier; formatter: NSFormatter): id; message 'stepperTouchBarItemWithIdentifier:formatter:';
    class function stepperTouchBarItemWithIdentifier_drawingHandler (identifier_: NSTouchBarItemIdentifier; drawingHandler: NSStepperTouchBarItemStepperTouchBarItemWithIdentifierCallback): id; message 'stepperTouchBarItemWithIdentifier:drawingHandler:';
    procedure setMaxValue(newValue: double); message 'setMaxValue:';
    function maxValue: double; message 'maxValue';
    procedure setMinValue(newValue: double); message 'setMinValue:';
    function minValue: double; message 'minValue';
    procedure setIncrement(newValue: double); message 'setIncrement:';
    function increment: double; message 'increment';
    procedure setValue(newValue: double); message 'setValue:';
    function value: double; message 'value';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
  end;
{$endif}

