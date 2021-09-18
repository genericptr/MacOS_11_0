{ Parsed from AppKit.framework NSSearchToolbarItem.h }

{$ifdef TYPES}
type
  NSSearchToolbarItemPtr = ^NSSearchToolbarItem;
{$endif}

{$ifdef CLASSES}

type
  NSSearchToolbarItem = objcclass external (NSToolbarItem)
  public
    procedure setSearchField(newValue: NSSearchField); message 'setSearchField:';
    function searchField: NSSearchField; message 'searchField';
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure setResignsFirstResponderWithCancel(newValue: objcbool); message 'setResignsFirstResponderWithCancel:';
    function resignsFirstResponderWithCancel: objcbool; message 'resignsFirstResponderWithCancel';
    procedure setPreferredWidthForSearchField(newValue: CGFloat); message 'setPreferredWidthForSearchField:';
    function preferredWidthForSearchField: CGFloat; message 'preferredWidthForSearchField';
    procedure beginSearchInteraction; message 'beginSearchInteraction';
    procedure endSearchInteraction; message 'endSearchInteraction';
  end;
{$endif}

