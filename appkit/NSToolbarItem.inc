{ Parsed from AppKit.framework NSToolbarItem.h }

{ Types from NSToolbarItem }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSToolbarItemPtr = ^NSToolbarItem;
  NSToolbarItemValidationProtocolPtr = ^NSToolbarItemValidationProtocol;
  NSCloudSharingValidationProtocolPtr = ^NSCloudSharingValidationProtocol;
{$endif}

{$ifdef TYPES}
type
  NSToolbarItemVisibilityPriority = NSInteger { available in ios  };
  NSToolbarItemVisibilityPriorityPtr = ^NSToolbarItemVisibilityPriority { available in ios  };

const
  NSToolbarItemVisibilityPriorityStandard = 0 { available in ios  };
  NSToolbarItemVisibilityPriorityLow = -1000 { available in ios  };
  NSToolbarItemVisibilityPriorityHigh = 1000 { available in ios  };
  NSToolbarItemVisibilityPriorityUser = 2000 { available in ios  };
{$endif}

{$ifdef CLASSES}

type
  NSToolbarItem = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithItemIdentifier (itemIdentifier: NSToolbarItemIdentifier): id; message 'initWithItemIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function itemIdentifier: NSToolbarItemIdentifier; message 'itemIdentifier';
    function toolbar: NSToolbar; message 'toolbar';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setPaletteLabel(newValue: NSString); message 'setPaletteLabel:';
    function paletteLabel: NSString; message 'paletteLabel';
    procedure setToolTip(newValue: NSString); message 'setToolTip:';
    function toolTip: NSString; message 'toolTip';
    procedure setMenuFormRepresentation(newValue: NSMenuItem); message 'setMenuFormRepresentation:'; { unavailable in ios }
    function menuFormRepresentation: NSMenuItem; message 'menuFormRepresentation'; { unavailable in ios }
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    {$else}
    procedure setImage_(newValue: UIImage); message 'setImage:'; { available in ios  }
    function image_: UIImage; message 'image'; { available in ios  }
    {$endif}
    procedure setTitle(newValue: NSString); message 'setTitle:'; { available in macos , ios  }
    function title: NSString; message 'title'; { available in macos , ios  }
    procedure setBordered(newValue: objcbool); message 'setBordered:'; { available in macos , ios  }
    function isBordered: objcbool; message 'isBordered'; { available in macos , ios  }
    procedure setNavigational(newValue: objcbool); message 'setNavigational:'; { available in macos , ios  }
    function isNavigational: objcbool; message 'isNavigational'; { available in macos , ios  }
    procedure setView(newValue: NSView); message 'setView:'; { unavailable in ios }
    function view: NSView; message 'view'; { unavailable in ios }
    procedure setMinSize(newValue: NSSize); message 'setMinSize:'; { unavailable in ios }
    function minSize: NSSize; message 'minSize'; { unavailable in ios }
    procedure setMaxSize(newValue: NSSize); message 'setMaxSize:'; { unavailable in ios }
    function maxSize: NSSize; message 'maxSize'; { unavailable in ios }
    procedure setVisibilityPriority(newValue: NSToolbarItemVisibilityPriority); message 'setVisibilityPriority:';
    function visibilityPriority: NSToolbarItemVisibilityPriority; message 'visibilityPriority';
    procedure validate; message 'validate'; { available in ios  }
    procedure setAutovalidates(newValue: objcbool); message 'setAutovalidates:'; { available in ios  }
    function autovalidates: objcbool; message 'autovalidates'; { available in ios  }
    function allowsDuplicatesInToolbar: objcbool; message 'allowsDuplicatesInToolbar'; { unavailable in ios }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSToolbarItemCategory = objccategory external (NSToolbarItem)
  end;
{$endif}

{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef PROTOCOLS}

type
  NSToolbarItemValidationProtocol = objcprotocol external name 'NSToolbarItemValidation' (NSObjectProtocol)
    function validateToolbarItem (item: NSToolbarItem): objcbool; message 'validateToolbarItem:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSToolbarItemValidation = objccategory external (NSObject)
    function validateToolbarItem (item: NSToolbarItem): objcbool; message 'validateToolbarItem:'; deprecated 'This is now a method of the NSToolbarItemValidation protocol.';
  end;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  NSCloudSharingValidationProtocol = objcprotocol external name 'NSCloudSharingValidation' (NSObjectProtocol)
    function cloudShareForUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): CKShare; message 'cloudShareForUserInterfaceItem:';
  end;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSToolbarSeparatorItemIdentifier: NSToolbarItemIdentifier { unavailable in ios }; cvar; external;
  NSToolbarSpaceItemIdentifier: NSToolbarItemIdentifier { available in ios  }; cvar; external;
  NSToolbarFlexibleSpaceItemIdentifier: NSToolbarItemIdentifier { available in ios  }; cvar; external;
  NSToolbarShowColorsItemIdentifier: NSToolbarItemIdentifier { available in ios  }; cvar; external;
  NSToolbarShowFontsItemIdentifier: NSToolbarItemIdentifier { available in ios  }; cvar; external;
  NSToolbarCustomizeToolbarItemIdentifier: NSToolbarItemIdentifier { unavailable in ios }; cvar; external;
  NSToolbarPrintItemIdentifier: NSToolbarItemIdentifier { available in ios  }; cvar; external;
  NSToolbarToggleSidebarItemIdentifier: NSToolbarItemIdentifier { available in macos , ios  }; cvar; external;
  NSToolbarCloudSharingItemIdentifier: NSToolbarItemIdentifier { available in macos  }; cvar; external;
  NSToolbarSidebarTrackingSeparatorItemIdentifier: NSToolbarItemIdentifier { unavailable in ios }; cvar; external;
{$endif}

