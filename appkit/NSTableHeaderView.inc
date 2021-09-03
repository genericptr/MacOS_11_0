{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTableHeaderView.h }

{$ifdef TYPES}
type
  NSTableHeaderViewPtr = ^NSTableHeaderView;
{$endif}

{$ifdef CLASSES}

type
  NSTableHeaderView = objcclass external (NSView, NSViewToolTipOwnerProtocol)
  public
    procedure setTableView(newValue: NSTableView); message 'setTableView:';
    function tableView: NSTableView; message 'tableView';
    function draggedColumn: NSInteger; message 'draggedColumn';
    function draggedDistance: CGFloat; message 'draggedDistance';
    function resizedColumn: NSInteger; message 'resizedColumn';
    function headerRectOfColumn (column: NSInteger): NSRect; message 'headerRectOfColumn:';
    function columnAtPoint (point: NSPoint): NSInteger; message 'columnAtPoint:';

    { Adopted protocols }
    function view_stringForToolTip_point_userData (view: NSView; tag: NSToolTipTag; point: NSPoint; data: pointer): NSString; message 'view:stringForToolTip:point:userData:';
  end;
{$endif}

