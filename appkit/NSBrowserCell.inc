{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSBrowserCell.h }

{$ifdef TYPES}
type
  NSBrowserCellPtr = ^NSBrowserCell;
{$endif}

{$ifdef CLASSES}

type
  NSBrowserCell = objcclass external (NSCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image_: NSImage): id; message 'initImageCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function branchImage: NSImage; message 'branchImage';
    class function highlightedBranchImage: NSImage; message 'highlightedBranchImage';
    function highlightColorInView (controlView_: NSView): NSColor; message 'highlightColorInView:';
    procedure setLeaf(newValue: objcbool); message 'setLeaf:';
    function isLeaf: objcbool; message 'isLeaf';
    procedure setLoaded(newValue: objcbool); message 'setLoaded:';
    function isLoaded: objcbool; message 'isLoaded';
    procedure reset; message 'reset';
    procedure set_; message 'set';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setAlternateImage(newValue: NSImage); message 'setAlternateImage:';
    function alternateImage: NSImage; message 'alternateImage';
  end;
{$endif}

