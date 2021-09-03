{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTableHeaderCell.h }

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

