{ Parsed from AppKit.framework NSPickerTouchBarItem.h }

{ Types from NSPickerTouchBarItem }
{$ifdef TYPES}




{$endif}


{$ifdef TYPES}
type
  NSPickerTouchBarItemPtr = ^NSPickerTouchBarItem;
{$endif}

{$ifdef TYPES}
type
  NSPickerTouchBarItemSelectionMode = NSInteger;
  NSPickerTouchBarItemSelectionModePtr = ^NSPickerTouchBarItemSelectionMode;

const
  NSPickerTouchBarItemSelectionModeSelectOne = 0;
  NSPickerTouchBarItemSelectionModeSelectAny = 1;
  NSPickerTouchBarItemSelectionModeMomentary = 2;

type
  NSPickerTouchBarItemControlRepresentation = NSInteger;
  NSPickerTouchBarItemControlRepresentationPtr = ^NSPickerTouchBarItemControlRepresentation;

const
  NSPickerTouchBarItemControlRepresentationAutomatic = 0;
  NSPickerTouchBarItemControlRepresentationExpanded = 1;
  NSPickerTouchBarItemControlRepresentationCollapsed = 2;
{$endif}

{$ifdef CLASSES}

type
  NSPickerTouchBarItem = objcclass external (NSTouchBarItem)
  public
    class function pickerTouchBarItemWithIdentifier_labels_selectionMode_target_action (identifier_: NSTouchBarItemIdentifier; labels: NSArray; selectionMode: NSPickerTouchBarItemSelectionMode; target: id; action: SEL): id; message 'pickerTouchBarItemWithIdentifier:labels:selectionMode:target:action:';
    {$if  not defined(TARGET_OS_IPHONE)}
    class function pickerTouchBarItemWithIdentifier_images_selectionMode_target_action (identifier_: NSTouchBarItemIdentifier; images: NSArray; selectionMode: NSPickerTouchBarItemSelectionMode; target: id; action: SEL): id; message 'pickerTouchBarItemWithIdentifier:images:selectionMode:target:action:';
    {$else}
    class function pickerTouchBarItemWithIdentifier_images_selectionMode_target_action (identifier_: NSTouchBarItemIdentifier; images: NSArray; selectionMode: NSPickerTouchBarItemSelectionMode; target: id; action: SEL): id; message 'pickerTouchBarItemWithIdentifier:images:selectionMode:target:action:';
    {$endif}
    procedure setControlRepresentation(newValue: NSPickerTouchBarItemControlRepresentation); message 'setControlRepresentation:';
    function controlRepresentation: NSPickerTouchBarItemControlRepresentation; message 'controlRepresentation';
    procedure setCollapsedRepresentationLabel(newValue: NSString); message 'setCollapsedRepresentationLabel:';
    function collapsedRepresentationLabel: NSString; message 'collapsedRepresentationLabel';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setCollapsedRepresentationImage(newValue: NSImage); message 'setCollapsedRepresentationImage:';
    function collapsedRepresentationImage: NSImage; message 'collapsedRepresentationImage';
    {$else}
    procedure setCollapsedRepresentationImage_(newValue: UIImage); message 'setCollapsedRepresentationImage:';
    function collapsedRepresentationImage_: UIImage; message 'collapsedRepresentationImage';
    {$endif}
    procedure setSelectedIndex(newValue: NSInteger); message 'setSelectedIndex:';
    function selectedIndex: NSInteger; message 'selectedIndex';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setSelectionColor(newValue: NSColor); message 'setSelectionColor:';
    function selectionColor: NSColor; message 'selectionColor';
    {$else}
    procedure setSelectionColor_(newValue: UIColor); message 'setSelectionColor:';
    function selectionColor_: UIColor; message 'selectionColor';
    {$endif}
    procedure setSelectionMode(newValue: NSPickerTouchBarItemSelectionMode); message 'setSelectionMode:';
    function selectionMode: NSPickerTouchBarItemSelectionMode; message 'selectionMode';
    procedure setNumberOfOptions(newValue: NSInteger); message 'setNumberOfOptions:';
    function numberOfOptions: NSInteger; message 'numberOfOptions';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setImage_atIndex (image: NSImage; index: NSInteger); message 'setImage:atIndex:';
    function imageAtIndex (index: NSInteger): NSImage; message 'imageAtIndex:';
    {$else}
    procedure setImage_atIndex (image: UIImage; index: NSInteger); message 'setImage:atIndex:'; { available in ios  }
    function imageAtIndex (index: NSInteger): UIImage; message 'imageAtIndex:'; { available in ios  }
    {$endif}
    procedure setLabel_atIndex (label_: NSString; index: NSInteger); message 'setLabel:atIndex:';
    function labelAtIndex (index: NSInteger): NSString; message 'labelAtIndex:';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setEnabled_atIndex (enabled: objcbool; index: NSInteger); message 'setEnabled:atIndex:';
    function isEnabledAtIndex (index: NSInteger): objcbool; message 'isEnabledAtIndex:';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
  end;
{$endif}

