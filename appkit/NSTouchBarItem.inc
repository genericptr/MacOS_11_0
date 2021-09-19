{ Parsed from AppKit.framework NSTouchBarItem.h }

{$ifdef TYPES}
type
  NSTouchBarItemPtr = ^NSTouchBarItem;
{$endif}

{$ifdef TYPES}
type
  NSTouchBarItemIdentifier = NSString { available in ios 13.0 };
  NSTouchBarItemIdentifierPtr = ^NSTouchBarItemIdentifier { available in ios 13.0 };
  NSTouchBarItemPriority = single { available in macos 10.12.2, ios 13.0 };
  NSTouchBarItemPriorityPtr = ^NSTouchBarItemPriority { available in macos 10.12.2, ios 13.0 };

const
  NSTouchBarItemPriorityHigh = 1000 { available in macos 10.12.2, ios 13.0 };
  NSTouchBarItemPriorityNormal = 0 { available in macos 10.12.2, ios 13.0 };
  NSTouchBarItemPriorityLow = -1000 { available in macos 10.12.2, ios 13.0 };
{$endif}

{$ifdef CLASSES}

type
  NSTouchBarItem = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithIdentifier (identifier: NSTouchBarItemIdentifier): id; message 'initWithIdentifier:'; { available in ios 13.0 }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { available in ios 13.0 }
    function init: id; message 'init';
    function identifier: NSTouchBarItemIdentifier; message 'identifier'; { available in ios 13.0 }
    procedure setVisibilityPriority(newValue: NSTouchBarItemPriority); message 'setVisibilityPriority:'; { available in ios 13.0 }
    function visibilityPriority: NSTouchBarItemPriority; message 'visibilityPriority'; { available in ios 13.0 }
    function view: NSView; message 'view';
    function viewController: NSViewController; message 'viewController';
    function customizationLabel: NSString; message 'customizationLabel'; { available in ios 13.0 }
    function isVisible: objcbool; message 'isVisible'; { available in ios 13.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTouchBarItemIdentifierFixedSpaceSmall: NSTouchBarItemIdentifier { available in macos 10.12.2, ios 13.0 }; cvar; external;
  NSTouchBarItemIdentifierFixedSpaceLarge: NSTouchBarItemIdentifier { available in macos 10.12.2, ios 13.0 }; cvar; external;
  NSTouchBarItemIdentifierFlexibleSpace: NSTouchBarItemIdentifier { available in macos 10.12.2, ios 13.0 }; cvar; external;
  NSTouchBarItemIdentifierOtherItemsProxy: NSTouchBarItemIdentifier { available in macos 10.12.2, ios 13.0 }; cvar; external;
{$endif}

