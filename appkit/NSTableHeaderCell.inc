{ Parsed from AppKit.framework NSTableHeaderCell.h }

{$ifdef TYPES}
type
  NSTableHeaderCellPtr = ^NSTableHeaderCell;
{$endif}

{$ifdef CLASSES}

type
  NSTableHeaderCell = objcclass external (NSTextFieldCell)
  public
    procedure drawSortIndicatorWithFrame_inView_ascending_priority (cellFrame: NSRect; controlView_: NSView; ascending: objcbool; priority: NSInteger); message 'drawSortIndicatorWithFrame:inView:ascending:priority:';
    function sortIndicatorRectForBounds (rect: NSRect): NSRect; message 'sortIndicatorRectForBounds:';
  end;
{$endif}

