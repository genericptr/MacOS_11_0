{ Parsed from AppKit.framework NSPopUpButton.h }

{$ifdef TYPES}
type
  NSPopUpButtonPtr = ^NSPopUpButton;
{$endif}

{$ifdef CLASSES}

type
  NSPopUpButton = objcclass external (NSButton)
  public
    function initWithFrame_pullsDown (buttonFrame: NSRect; flag: objcbool): id; message 'initWithFrame:pullsDown:';
    procedure setMenu(newValue: NSMenu); message 'setMenu:';
    function menu: NSMenu; message 'menu';
    procedure setPullsDown(newValue: objcbool); message 'setPullsDown:';
    function pullsDown: objcbool; message 'pullsDown';
    procedure setAutoenablesItems(newValue: objcbool); message 'setAutoenablesItems:';
    function autoenablesItems: objcbool; message 'autoenablesItems';
    procedure setPreferredEdge(newValue: NSRectEdge); message 'setPreferredEdge:';
    function preferredEdge: NSRectEdge; message 'preferredEdge';
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
    function selectedTag: NSInteger; message 'selectedTag';
    procedure synchronizeTitleAndSelectedItem; message 'synchronizeTitleAndSelectedItem';
    function itemTitleAtIndex (index: NSInteger): NSString; message 'itemTitleAtIndex:';
    function itemTitles: NSArray; message 'itemTitles';
    function titleOfSelectedItem: NSString; message 'titleOfSelectedItem';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPopUpButtonWillPopUpNotification: NSNotificationName; cvar; external;
{$endif}

