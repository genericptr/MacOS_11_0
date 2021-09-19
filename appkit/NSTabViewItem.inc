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
    class function tabViewItemWithViewController (viewController: NSViewController): id; message 'tabViewItemWithViewController:'; { available in macos 10.10 }
    function initWithIdentifier (identifier: id): id; message 'initWithIdentifier:';
    procedure setIdentifier(newValue: id); message 'setIdentifier:';
    function identifier: id; message 'identifier';
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setImage(newValue: NSImage); message 'setImage:'; { available in macos 10.10 }
    function image: NSImage; message 'image'; { available in macos 10.10 }
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure setViewController(newValue: NSViewController); message 'setViewController:'; { available in macos 10.10 }
    function viewController: NSViewController; message 'viewController'; { available in macos 10.10 }
    function tabState: NSTabState; message 'tabState';
    function tabView: NSTabView; message 'tabView';
    procedure setInitialFirstResponder(newValue: NSView); message 'setInitialFirstResponder:';
    function initialFirstResponder: NSView; message 'initialFirstResponder';
    procedure setToolTip(newValue: NSString); message 'setToolTip:'; { available in macos 10.6 }
    function toolTip: NSString; message 'toolTip'; { available in macos 10.6 }
    procedure drawLabel_inRect (shouldTruncateLabel: objcbool; labelRect: NSRect); message 'drawLabel:inRect:';
    function sizeOfLabel (computeMin: objcbool): NSSize; message 'sizeOfLabel:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

