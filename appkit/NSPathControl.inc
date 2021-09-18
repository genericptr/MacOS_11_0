{ Parsed from AppKit.framework NSPathControl.h }

{$ifdef TYPES}
type
  NSPathControlPtr = ^NSPathControl;
  NSPathControlDelegateProtocolPtr = ^NSPathControlDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSPathControl = objcclass external (NSControl)
  public
    procedure setEditable(newValue: objcbool); message 'setEditable:'; { available in macos  }
    function isEditable: objcbool; message 'isEditable'; { available in macos  }
    procedure setAllowedTypes(newValue: NSArray); message 'setAllowedTypes:'; { available in macos  }
    function allowedTypes: NSArray; message 'allowedTypes'; { available in macos  }
    procedure setPlaceholderString(newValue: NSString); message 'setPlaceholderString:'; { available in macos  }
    function placeholderString: NSString; message 'placeholderString'; { available in macos  }
    procedure setPlaceholderAttributedString(newValue: NSAttributedString); message 'setPlaceholderAttributedString:'; { available in macos  }
    function placeholderAttributedString: NSAttributedString; message 'placeholderAttributedString'; { available in macos  }
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setDoubleAction(newValue: SEL); message 'setDoubleAction:';
    function doubleAction: SEL; message 'doubleAction';
    procedure setPathStyle(newValue: NSPathStyle); message 'setPathStyle:';
    function pathStyle: NSPathStyle; message 'pathStyle';
    function clickedPathItem: NSPathControlItem; message 'clickedPathItem'; { available in macos  }
    procedure setPathItems(newValue: NSArray); message 'setPathItems:'; { available in macos  }
    function pathItems: NSArray; message 'pathItems'; { available in macos  }
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDelegate(newValue: NSPathControlDelegateProtocol); message 'setDelegate:';
    function delegate: NSPathControlDelegateProtocol; message 'delegate';
    procedure setDraggingSourceOperationMask_forLocal (mask: NSDragOperation; isLocal: objcbool); message 'setDraggingSourceOperationMask:forLocal:';
    procedure setMenu(newValue: NSMenu); message 'setMenu:';
    function menu: NSMenu; message 'menu';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPathControlDelegateProtocol = objcprotocol external name 'NSPathControlDelegate' (NSObjectProtocol)
  optional
    function pathControl_shouldDragItem_withPasteboard (pathControl: NSPathControl; pathItem: NSPathControlItem; pasteboard: NSPasteboard): objcbool; message 'pathControl:shouldDragItem:withPasteboard:';
    function pathControl_shouldDragPathComponentCell_withPasteboard (pathControl: NSPathControl; pathComponentCell: NSPathComponentCell; pasteboard: NSPasteboard): objcbool; message 'pathControl:shouldDragPathComponentCell:withPasteboard:';
    function pathControl_validateDrop (pathControl: NSPathControl; info: NSDraggingInfoProtocol): NSDragOperation; message 'pathControl:validateDrop:';
    function pathControl_acceptDrop (pathControl: NSPathControl; info: NSDraggingInfoProtocol): objcbool; message 'pathControl:acceptDrop:';
    procedure pathControl_willDisplayOpenPanel (pathControl: NSPathControl; openPanel: NSOpenPanel); message 'pathControl:willDisplayOpenPanel:';
    procedure pathControl_willPopUpMenu (pathControl: NSPathControl; menu: NSMenu); message 'pathControl:willPopUpMenu:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSPathControl_NSDeprecated = objccategory external name 'NSDeprecated' (NSPathControl)
    function clickedPathComponentCell: NSPathComponentCell; message 'clickedPathComponentCell'; deprecated 'Use -clickedPathItem instead';
    function pathComponentCells: NSArray; message 'pathComponentCells'; deprecated 'Use -pathItems instead';
    procedure setPathComponentCells (cells: NSArray); message 'setPathComponentCells:'; deprecated 'Use -setPathItems: instead';
  end;
{$endif}

