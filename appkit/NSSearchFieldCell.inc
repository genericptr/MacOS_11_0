{ Parsed from AppKit.framework NSSearchFieldCell.h }

{$ifdef TYPES}
type
  NSSearchFieldCellPtr = ^NSSearchFieldCell;
{$endif}

{$ifdef TYPES}
const
  NSSearchFieldRecentsTitleMenuItemTag = 1000;
  NSSearchFieldRecentsMenuItemTag = 1001;
  NSSearchFieldClearRecentsMenuItemTag = 1002;
  NSSearchFieldNoRecentsMenuItemTag = 1003;
{$endif}

{$ifdef CLASSES}

type
  NSSearchFieldCell = objcclass external (NSTextFieldCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image_: NSImage): id; message 'initImageCell:';
    procedure setSearchButtonCell(newValue: NSButtonCell); message 'setSearchButtonCell:';
    function searchButtonCell: NSButtonCell; message 'searchButtonCell';
    procedure setCancelButtonCell(newValue: NSButtonCell); message 'setCancelButtonCell:';
    function cancelButtonCell: NSButtonCell; message 'cancelButtonCell';
    procedure resetSearchButtonCell; message 'resetSearchButtonCell';
    procedure resetCancelButtonCell; message 'resetCancelButtonCell';
    function searchTextRectForBounds (rect: NSRect): NSRect; message 'searchTextRectForBounds:';
    function searchButtonRectForBounds (rect: NSRect): NSRect; message 'searchButtonRectForBounds:';
    function cancelButtonRectForBounds (rect: NSRect): NSRect; message 'cancelButtonRectForBounds:';
    procedure setSearchMenuTemplate(newValue: NSMenu); message 'setSearchMenuTemplate:';
    function searchMenuTemplate: NSMenu; message 'searchMenuTemplate';
    procedure setSendsWholeSearchString(newValue: objcbool); message 'setSendsWholeSearchString:';
    function sendsWholeSearchString: objcbool; message 'sendsWholeSearchString';
    procedure setMaximumRecents(newValue: NSInteger); message 'setMaximumRecents:';
    function maximumRecents: NSInteger; message 'maximumRecents';
    procedure setRecentSearches(newValue: NSArray); message 'setRecentSearches:';
    function recentSearches: NSArray; message 'recentSearches';
    procedure setRecentsAutosaveName(newValue: NSSearchFieldRecentsAutosaveName); message 'setRecentsAutosaveName:';
    function recentsAutosaveName: NSSearchFieldRecentsAutosaveName; message 'recentsAutosaveName';
    procedure setSendsSearchStringImmediately(newValue: objcbool); message 'setSendsSearchStringImmediately:';
    function sendsSearchStringImmediately: objcbool; message 'sendsSearchStringImmediately';
  end;
{$endif}

