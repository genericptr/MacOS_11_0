{ Parsed from AppKit.framework NSPopUpButtonCell.h }

{$ifdef TYPES}
type
  NSPopUpButtonCellPtr = ^NSPopUpButtonCell;
{$endif}

{$ifdef TYPES}
type
  NSPopUpArrowPosition = NSUInteger;
  NSPopUpArrowPositionPtr = ^NSPopUpArrowPosition;

const
  NSPopUpNoArrow = 0;
  NSPopUpArrowAtCenter = 1;
  NSPopUpArrowAtBottom = 2;
{$endif}

{$ifdef CLASSES}

type
  NSPopUpButtonCell = objcclass external (NSMenuItemCell, NSMenuItemValidationProtocol)
  public
    function initTextCell_pullsDown (stringValue_: NSString; pullDown: objcbool): id; message 'initTextCell:pullsDown:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setMenu(newValue: NSMenu); message 'setMenu:';
    function menu: NSMenu; message 'menu';
    procedure setPullsDown(newValue: objcbool); message 'setPullsDown:';
    function pullsDown: objcbool; message 'pullsDown';
    procedure setAutoenablesItems(newValue: objcbool); message 'setAutoenablesItems:';
    function autoenablesItems: objcbool; message 'autoenablesItems';
    procedure setPreferredEdge(newValue: NSRectEdge); message 'setPreferredEdge:';
    function preferredEdge: NSRectEdge; message 'preferredEdge';
    procedure setUsesItemFromMenu(newValue: objcbool); message 'setUsesItemFromMenu:';
    function usesItemFromMenu: objcbool; message 'usesItemFromMenu';
    procedure setAltersStateOfSelectedItem(newValue: objcbool); message 'setAltersStateOfSelectedItem:';
    function altersStateOfSelectedItem: objcbool; message 'altersStateOfSelectedItem';
    procedure addItemWithTitle (title_: NSString); message 'addItemWithTitle:';
    procedure addItemsWithTitles (itemTitles: NSArray); message 'addItemsWithTitles:';
    procedure insertItemWithTitle_atIndex (title_: NSString; index: NSInteger); message 'insertItemWithTitle:atIndex:';
    procedure removeItemWithTitle (title_: NSString); message 'removeItemWithTitle:';
    procedure removeItemAtIndex (index: NSInteger); message 'removeItemAtIndex:';
    procedure removeAllItems; message 'removeAllItems';
    function itemArray: NSArray; message 'itemArray';
    function numberOfItems: NSInteger; message 'numberOfItems';
    function indexOfItem (item: NSMenuItem): NSInteger; message 'indexOfItem:';
    function indexOfItemWithTitle (title_: NSString): NSInteger; message 'indexOfItemWithTitle:';
    function indexOfItemWithTag (tag_: NSInteger): NSInteger; message 'indexOfItemWithTag:';
    function indexOfItemWithRepresentedObject (obj: id): NSInteger; message 'indexOfItemWithRepresentedObject:';
    function indexOfItemWithTarget_andAction (target_: id; actionSelector: SEL): NSInteger; message 'indexOfItemWithTarget:andAction:';
    function itemAtIndex (index: NSInteger): NSMenuItem; message 'itemAtIndex:';
    function itemWithTitle (title_: NSString): NSMenuItem; message 'itemWithTitle:';
    function lastItem: NSMenuItem; message 'lastItem';
    procedure selectItem (item: NSMenuItem); message 'selectItem:';
    procedure selectItemAtIndex (index: NSInteger); message 'selectItemAtIndex:';
    procedure selectItemWithTitle (title_: NSString); message 'selectItemWithTitle:';
    function selectItemWithTag (tag_: NSInteger): objcbool; message 'selectItemWithTag:';
    procedure setTitle (string_: NSString); message 'setTitle:';
    function selectedItem: NSMenuItem; message 'selectedItem';
    function indexOfSelectedItem: NSInteger; message 'indexOfSelectedItem';
    procedure synchronizeTitleAndSelectedItem; message 'synchronizeTitleAndSelectedItem';
    function itemTitleAtIndex (index: NSInteger): NSString; message 'itemTitleAtIndex:';
    function itemTitles: NSArray; message 'itemTitles';
    function titleOfSelectedItem: NSString; message 'titleOfSelectedItem';
    procedure attachPopUpWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'attachPopUpWithFrame:inView:';
    procedure dismissPopUp; message 'dismissPopUp';
    procedure performClickWithFrame_inView (frame: NSRect; controlView_: NSView); message 'performClickWithFrame:inView:';
    procedure setArrowPosition(newValue: NSPopUpArrowPosition); message 'setArrowPosition:';
    function arrowPosition: NSPopUpArrowPosition; message 'arrowPosition';

    { Adopted protocols }
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPopUpButtonCellWillPopUpNotification: NSNotificationName; cvar; external;
{$endif}

