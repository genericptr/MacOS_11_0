{ Parsed from AppKit.framework NSSliderTouchBarItem.h }

{$ifdef TYPES}
type
  NSSliderTouchBarItemPtr = ^NSSliderTouchBarItem;
{$endif}

{$ifdef TYPES}
type
  NSSliderAccessoryWidth = CGFloat { available in macos , ios  };
  NSSliderAccessoryWidthPtr = ^NSSliderAccessoryWidth { available in macos , ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSliderAccessoryWidthDefault: NSSliderAccessoryWidth { available in macos , ios  }; cvar; external;
  NSSliderAccessoryWidthWide: NSSliderAccessoryWidth { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSliderTouchBarItem = objcclass external (NSTouchBarItem)
  public
    function view: NSView; message 'view'; { unavailable in ios }
    procedure setSlider(newValue: NSSlider); message 'setSlider:'; { unavailable in ios }
    function slider: NSSlider; message 'slider'; { unavailable in ios }
    procedure setDoubleValue(newValue: double); message 'setDoubleValue:'; { available in macos , ios  }
    function doubleValue: double; message 'doubleValue'; { available in macos , ios  }
    procedure setMinimumSliderWidth(newValue: CGFloat); message 'setMinimumSliderWidth:'; { available in macos , ios  }
    function minimumSliderWidth: CGFloat; message 'minimumSliderWidth'; { available in macos , ios  }
    procedure setMaximumSliderWidth(newValue: CGFloat); message 'setMaximumSliderWidth:'; { available in macos , ios  }
    function maximumSliderWidth: CGFloat; message 'maximumSliderWidth'; { available in macos , ios  }
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setMinimumValueAccessory(newValue: NSSliderAccessory); message 'setMinimumValueAccessory:';
    function minimumValueAccessory: NSSliderAccessory; message 'minimumValueAccessory';
    procedure setMaximumValueAccessory(newValue: NSSliderAccessory); message 'setMaximumValueAccessory:';
    function maximumValueAccessory: NSSliderAccessory; message 'maximumValueAccessory';
    procedure setValueAccessoryWidth(newValue: NSSliderAccessoryWidth); message 'setValueAccessoryWidth:';
    function valueAccessoryWidth: NSSliderAccessoryWidth; message 'valueAccessoryWidth';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
  end;
{$endif}

