{ Parsed from AppKit.framework NSGroupTouchBarItem.h }

{$ifdef TYPES}
type
  NSGroupTouchBarItemPtr = ^NSGroupTouchBarItem;
{$endif}

{$ifdef CLASSES}

type
  NSGroupTouchBarItem = objcclass external (NSTouchBarItem)
  public
    class function groupItemWithIdentifier_items (identifier_: NSTouchBarItemIdentifier; items: NSArray): id; message 'groupItemWithIdentifier:items:';
    class function groupItemWithIdentifier_items_allowedCompressionOptions (identifier_: NSTouchBarItemIdentifier; items: NSArray; allowedCompressionOptions: NSUserInterfaceCompressionOptions): id; message 'groupItemWithIdentifier:items:allowedCompressionOptions:'; { unavailable in ios } { available in macos 10.13 }
    class function alertStyleGroupItemWithIdentifier (identifier_: NSTouchBarItemIdentifier): id; message 'alertStyleGroupItemWithIdentifier:'; { available in macos 10.13 }
    procedure setGroupTouchBar(newValue: NSTouchBar); message 'setGroupTouchBar:';
    function groupTouchBar: NSTouchBar; message 'groupTouchBar';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
    procedure setGroupUserInterfaceLayoutDirection(newValue: NSUserInterfaceLayoutDirection); message 'setGroupUserInterfaceLayoutDirection:'; { unavailable in ios } { available in macos 10.13 }
    function groupUserInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'groupUserInterfaceLayoutDirection'; { unavailable in ios } { available in macos 10.13 }
    procedure setPrefersEqualWidths(newValue: objcbool); message 'setPrefersEqualWidths:'; { available in macos 10.13 }
    function prefersEqualWidths: objcbool; message 'prefersEqualWidths'; { available in macos 10.13 }
    procedure setPreferredItemWidth(newValue: CGFloat); message 'setPreferredItemWidth:'; { available in macos 10.13 }
    function preferredItemWidth: CGFloat; message 'preferredItemWidth'; { available in macos 10.13 }
    function effectiveCompressionOptions: NSUserInterfaceCompressionOptions; message 'effectiveCompressionOptions'; { unavailable in ios } { available in macos 10.13 }
    procedure setPrioritizedCompressionOptions(newValue: NSArray); message 'setPrioritizedCompressionOptions:'; { unavailable in ios } { available in macos 10.13 }
    function prioritizedCompressionOptions: NSArray; message 'prioritizedCompressionOptions'; { unavailable in ios } { available in macos 10.13 }
  end;
{$endif}

