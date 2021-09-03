{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSLevelIndicator.h }

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
    procedure setLevelIndicatorStyle(newValue: NSLevelIndicatorStyle); message 'setLevelIndicatorStyle:'; { available in macos  }
    function levelIndicatorStyle: NSLevelIndicatorStyle; message 'levelIndicatorStyle'; { available in macos  }
    procedure setEditable(newValue: objcbool); message 'setEditable:'; { available in macos  }
    function isEditable: objcbool; message 'isEditable'; { available in macos  }
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
    procedure setFillColor(newValue: NSColor); message 'setFillColor:'; { available in macos  }
    function fillColor: NSColor; message 'fillColor'; { available in macos  }
    procedure setWarningFillColor(newValue: NSColor); message 'setWarningFillColor:'; { available in macos  }
    function warningFillColor: NSColor; message 'warningFillColor'; { available in macos  }
    procedure setCriticalFillColor(newValue: NSColor); message 'setCriticalFillColor:'; { available in macos  }
    function criticalFillColor: NSColor; message 'criticalFillColor'; { available in macos  }
    procedure setDrawsTieredCapacityLevels(newValue: objcbool); message 'setDrawsTieredCapacityLevels:'; { available in macos  }
    function drawsTieredCapacityLevels: objcbool; message 'drawsTieredCapacityLevels'; { available in macos  }
    procedure setPlaceholderVisibility(newValue: NSLevelIndicatorPlaceholderVisibility); message 'setPlaceholderVisibility:'; { available in macos  }
    function placeholderVisibility: NSLevelIndicatorPlaceholderVisibility; message 'placeholderVisibility'; { available in macos  }
    procedure setRatingImage(newValue: NSImage); message 'setRatingImage:'; { available in macos  }
    function ratingImage: NSImage; message 'ratingImage'; { available in macos  }
    procedure setRatingPlaceholderImage(newValue: NSImage); message 'setRatingPlaceholderImage:'; { available in macos  }
    function ratingPlaceholderImage: NSImage; message 'ratingPlaceholderImage'; { available in macos  }
  end;
{$endif}

