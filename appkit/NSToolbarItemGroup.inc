{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSToolbarItemGroup.h }

{ Types from NSToolbarItemGroup }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSToolbarItemGroupPtr = ^NSToolbarItemGroup;
{$endif}

{$ifdef TYPES}
type
  NSToolbarItemGroupSelectionMode = NSInteger;
  NSToolbarItemGroupSelectionModePtr = ^NSToolbarItemGroupSelectionMode;

const
  NSToolbarItemGroupSelectionModeSelectOne = 0;
  NSToolbarItemGroupSelectionModeSelectAny = 1;
  NSToolbarItemGroupSelectionModeMomentary = 2;

type
  NSToolbarItemGroupControlRepresentation = NSInteger;
  NSToolbarItemGroupControlRepresentationPtr = ^NSToolbarItemGroupControlRepresentation;

const
  NSToolbarItemGroupControlRepresentationAutomatic = 0;
  NSToolbarItemGroupControlRepresentationExpanded = 1;
  NSToolbarItemGroupControlRepresentationCollapsed = 2;
{$endif}

{$ifdef CLASSES}

type
  NSToolbarItemGroup = objcclass external (NSToolbarItem)
  public
    class function groupWithItemIdentifier_titles_selectionMode_labels_target_action (itemIdentifier_: NSToolbarItemIdentifier; titles: NSArray; selectionMode: NSToolbarItemGroupSelectionMode; labels: NSArray; target_: id; action_: SEL): id; message 'groupWithItemIdentifier:titles:selectionMode:labels:target:action:'; { available in macos  }
    {$if  not defined(TARGET_OS_IPHONE)}
    class function groupWithItemIdentifier_images_selectionMode_labels_target_action (itemIdentifier_: NSToolbarItemIdentifier; images: NSArray; selectionMode: NSToolbarItemGroupSelectionMode; labels: NSArray; target_: id; action_: SEL): id; message 'groupWithItemIdentifier:images:selectionMode:labels:target:action:'; { available in macos  }
    {$else}
    class function groupWithItemIdentifier_images_selectionMode_labels_target_action (itemIdentifier_: NSToolbarItemIdentifier; images: NSArray; selectionMode: NSToolbarItemGroupSelectionMode; labels: NSArray; target_: id; action_: SEL): id; message 'groupWithItemIdentifier:images:selectionMode:labels:target:action:';
    {$endif}
    procedure setSubitems(newValue: NSArray); message 'setSubitems:';
    function subitems: NSArray; message 'subitems';
    procedure setControlRepresentation(newValue: NSToolbarItemGroupControlRepresentation); message 'setControlRepresentation:'; { available in macos  }
    function controlRepresentation: NSToolbarItemGroupControlRepresentation; message 'controlRepresentation'; { available in macos  }
    procedure setSelectionMode(newValue: NSToolbarItemGroupSelectionMode); message 'setSelectionMode:'; { available in macos  }
    function selectionMode: NSToolbarItemGroupSelectionMode; message 'selectionMode'; { available in macos  }
    procedure setSelectedIndex(newValue: NSInteger); message 'setSelectedIndex:'; { available in macos  }
    function selectedIndex: NSInteger; message 'selectedIndex'; { available in macos  }
    procedure setSelected_atIndex (selected: objcbool; index: NSInteger); message 'setSelected:atIndex:'; { available in macos  }
    function isSelectedAtIndex (index: NSInteger): objcbool; message 'isSelectedAtIndex:'; { available in macos  }
  end;
{$endif}

