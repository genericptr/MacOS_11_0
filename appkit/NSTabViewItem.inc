{ Parsed from AppKit.framework NSTabViewItem.h }

{$ifdef TYPES}
type
  NSTabViewItemPtr = ^NSTabViewItem;
{$endif}

{$ifdef TYPES}
type
  NSTabState = NSUInteger;
  NSTabStatePtr = ^NSTabState;

const
  NSSelectedTab = 0;
  NSBackgroundTab = 1;
  NSPressedTab = 2;
{$endif}

{$ifdef CLASSES}

type
  NSTabViewItem = objcclass external (NSObject, NSCodingProtocol)
  public
    class function tabViewItemWithViewController (viewController: NSViewController): id; message 'tabViewItemWithViewController:'; { available in macos  }
    function initWithIdentifier (identifier: id): id; message 'initWithIdentifier:';
    procedure setIdentifier(newValue: id); message 'setIdentifier:';
    function identifier: id; message 'identifier';
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setImage(newValue: NSImage); message 'setImage:'; { available in macos  }
    function image: NSImage; message 'image'; { available in macos  }
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure setViewController(newValue: NSViewController); message 'setViewController:'; { available in macos  }
    function viewController: NSViewController; message 'viewController'; { available in macos  }
    function tabState: NSTabState; message 'tabState';
    function tabView: NSTabView; message 'tabView';
    procedure setInitialFirstResponder(newValue: NSView); message 'setInitialFirstResponder:';
    function initialFirstResponder: NSView; message 'initialFirstResponder';
    procedure setToolTip(newValue: NSString); message 'setToolTip:'; { available in macos  }
    function toolTip: NSString; message 'toolTip'; { available in macos  }
    procedure drawLabel_inRect (shouldTruncateLabel: objcbool; labelRect: NSRect); message 'drawLabel:inRect:';
    function sizeOfLabel (computeMin: objcbool): NSSize; message 'sizeOfLabel:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

