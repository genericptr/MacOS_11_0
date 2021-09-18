{ Parsed from AppKit.framework NSColorPickerTouchBarItem.h }

{ Types from NSColorPickerTouchBarItem }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSColorPickerTouchBarItemPtr = ^NSColorPickerTouchBarItem;
{$endif}

{$ifdef CLASSES}

type
  NSColorPickerTouchBarItem = objcclass external (NSTouchBarItem)
  public
    class function colorPickerWithIdentifier (identifier_: NSTouchBarItemIdentifier): id; message 'colorPickerWithIdentifier:';
    class function textColorPickerWithIdentifier (identifier_: NSTouchBarItemIdentifier): id; message 'textColorPickerWithIdentifier:';
    class function strokeColorPickerWithIdentifier (identifier_: NSTouchBarItemIdentifier): id; message 'strokeColorPickerWithIdentifier:';
    {$if  not defined(TARGET_OS_IPHONE)}
    class function colorPickerWithIdentifier_buttonImage (identifier_: NSTouchBarItemIdentifier; image: NSImage): id; message 'colorPickerWithIdentifier:buttonImage:';
    {$else}
    class function colorPickerWithIdentifier_buttonImage (identifier_: NSTouchBarItemIdentifier; image: UIImage): id; message 'colorPickerWithIdentifier:buttonImage:'; { available in ios  }
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
    {$else}
    procedure setColor_(newValue: UIColor); message 'setColor:'; { available in ios  }
    function color_: UIColor; message 'color'; { available in ios  }
    {$endif}
    procedure setShowsAlpha(newValue: objcbool); message 'setShowsAlpha:';
    function showsAlpha: objcbool; message 'showsAlpha';
    procedure setAllowedColorSpaces(newValue: NSArray); message 'setAllowedColorSpaces:'; { unavailable in ios }
    function allowedColorSpaces: NSArray; message 'allowedColorSpaces'; { unavailable in ios }
    procedure setColorList(newValue: NSColorList); message 'setColorList:'; { unavailable in ios }
    function colorList: NSColorList; message 'colorList'; { unavailable in ios }
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
  end;
{$endif}

