{ Parsed from AppKit.framework NSTouchBarItem.h }

{$ifdef TYPES}
type
  NSTouchBarItemPtr = ^NSTouchBarItem;
{$endif}

{$ifdef TYPES}
type
  NSTouchBarItemIdentifier = NSString { available in ios  };
  NSTouchBarItemIdentifierPtr = ^NSTouchBarItemIdentifier { available in ios  };
  NSTouchBarItemPriority = single { available in macos , ios  };
  NSTouchBarItemPriorityPtr = ^NSTouchBarItemPriority { available in macos , ios  };

const
  NSTouchBarItemPriorityHigh = 1000 { available in macos , ios  };
  NSTouchBarItemPriorityNormal = 0 { available in macos , ios  };
  NSTouchBarItemPriorityLow = -1000 { available in macos , ios  };
{$endif}

{$ifdef CLASSES}

type
  NSTouchBarItem = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithIdentifier (identifier: NSTouchBarItemIdentifier): id; message 'initWithIdentifier:'; { available in ios  }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { available in ios  }
    function init: id; message 'init';
    function identifier: NSTouchBarItemIdentifier; message 'identifier'; { available in ios  }
    procedure setVisibilityPriority(newValue: NSTouchBarItemPriority); message 'setVisibilityPriority:'; { available in ios  }
    function visibilityPriority: NSTouchBarItemPriority; message 'visibilityPriority'; { available in ios  }
    function view: NSView; message 'view';
    function viewController: NSViewController; message 'viewController';
    function customizationLabel: NSString; message 'customizationLabel'; { available in ios  }
    function isVisible: objcbool; message 'isVisible'; { available in ios  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTouchBarItemIdentifierFixedSpaceSmall: NSTouchBarItemIdentifier { available in macos , ios  }; cvar; external;
  NSTouchBarItemIdentifierFixedSpaceLarge: NSTouchBarItemIdentifier { available in macos , ios  }; cvar; external;
  NSTouchBarItemIdentifierFlexibleSpace: NSTouchBarItemIdentifier { available in macos , ios  }; cvar; external;
  NSTouchBarItemIdentifierOtherItemsProxy: NSTouchBarItemIdentifier { available in macos , ios  }; cvar; external;
{$endif}

