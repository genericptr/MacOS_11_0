{ Parsed from AppKit.framework NSPopoverTouchBarItem.h }

{ Types from NSPopoverTouchBarItem }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSPopoverTouchBarItemPtr = ^NSPopoverTouchBarItem;
{$endif}

{$ifdef CLASSES}

type
  NSPopoverTouchBarItem = objcclass external (NSTouchBarItem)
  public
    procedure setPopoverTouchBar(newValue: NSTouchBar); message 'setPopoverTouchBar:';
    function popoverTouchBar: NSTouchBar; message 'popoverTouchBar';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
    procedure setCollapsedRepresentation(newValue: NSView); message 'setCollapsedRepresentation:'; { unavailable in ios }
    function collapsedRepresentation: NSView; message 'collapsedRepresentation'; { unavailable in ios }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setCollapsedRepresentationImage(newValue: NSImage); message 'setCollapsedRepresentationImage:';
    function collapsedRepresentationImage: NSImage; message 'collapsedRepresentationImage';
    {$else}
    procedure setCollapsedRepresentationImage_(newValue: UIImage); message 'setCollapsedRepresentationImage:'; { available in ios 13.0 }
    function collapsedRepresentationImage_: UIImage; message 'collapsedRepresentationImage'; { available in ios 13.0 }
    {$endif}
    procedure setCollapsedRepresentationLabel(newValue: NSString); message 'setCollapsedRepresentationLabel:';
    function collapsedRepresentationLabel: NSString; message 'collapsedRepresentationLabel';
    procedure setPressAndHoldTouchBar(newValue: NSTouchBar); message 'setPressAndHoldTouchBar:';
    function pressAndHoldTouchBar: NSTouchBar; message 'pressAndHoldTouchBar';
    procedure setShowsCloseButton(newValue: objcbool); message 'setShowsCloseButton:';
    function showsCloseButton: objcbool; message 'showsCloseButton';
    procedure showPopover (sender: id); message 'showPopover:';
    procedure dismissPopover (sender: id); message 'dismissPopover:';
    function makeStandardActivatePopoverGestureRecognizer: NSGestureRecognizer; message 'makeStandardActivatePopoverGestureRecognizer'; { unavailable in ios }
  end;
{$endif}

