{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSMenuItemCell.h }

{$ifdef TYPES}
type
  NSMenuItemCellPtr = ^NSMenuItemCell;
{$endif}

{$ifdef CLASSES}

type
  NSMenuItemCell = objcclass external (NSButtonCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setMenuItem(newValue: NSMenuItem); message 'setMenuItem:';
    function menuItem: NSMenuItem; message 'menuItem';
    procedure setNeedsSizing(newValue: objcbool); message 'setNeedsSizing:';
    function needsSizing: objcbool; message 'needsSizing';
    procedure calcSize; message 'calcSize';
    procedure setNeedsDisplay(newValue: objcbool); message 'setNeedsDisplay:';
    function needsDisplay: objcbool; message 'needsDisplay';
    function stateImageWidth: CGFloat; message 'stateImageWidth';
    function imageWidth: CGFloat; message 'imageWidth';
    function titleWidth: CGFloat; message 'titleWidth';
    function keyEquivalentWidth: CGFloat; message 'keyEquivalentWidth';
    function stateImageRectForBounds (cellFrame: NSRect): NSRect; message 'stateImageRectForBounds:';
    function titleRectForBounds (cellFrame: NSRect): NSRect; message 'titleRectForBounds:';
    function keyEquivalentRectForBounds (cellFrame: NSRect): NSRect; message 'keyEquivalentRectForBounds:';
    procedure drawSeparatorItemWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawSeparatorItemWithFrame:inView:';
    procedure drawStateImageWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawStateImageWithFrame:inView:';
    procedure drawImageWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawImageWithFrame:inView:';
    procedure drawTitleWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawTitleWithFrame:inView:';
    procedure drawKeyEquivalentWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawKeyEquivalentWithFrame:inView:';
    procedure drawBorderAndBackgroundWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawBorderAndBackgroundWithFrame:inView:';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
  end;
{$endif}

