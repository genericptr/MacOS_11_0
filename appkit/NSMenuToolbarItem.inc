{ Parsed from AppKit.framework NSMenuToolbarItem.h }

{$ifdef TYPES}
type
  NSMenuToolbarItemPtr = ^NSMenuToolbarItem;
{$endif}

{$ifdef CLASSES}

type
  NSMenuToolbarItem = objcclass external (NSToolbarItem)
  public
    procedure setMenu(newValue: NSMenu); message 'setMenu:'; { unavailable in ios }
    function menu: NSMenu; message 'menu'; { unavailable in ios }
    procedure setShowsIndicator(newValue: objcbool); message 'setShowsIndicator:';
    function showsIndicator: objcbool; message 'showsIndicator';
  end;
{$endif}

