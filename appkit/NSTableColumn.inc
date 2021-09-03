{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTableColumn.h }

{$ifdef TYPES}
type
  NSTableColumnPtr = ^NSTableColumn;
{$endif}

{$ifdef TYPES}
type
  NSTableColumnResizingOptions = NSUInteger;
  NSTableColumnResizingOptionsPtr = ^NSTableColumnResizingOptions;

const
  NSTableColumnNoResizing = 0;
  NSTableColumnAutoresizingMask = 1 shl 0;
  NSTableColumnUserResizingMask = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSTableColumn = objcclass external (NSObject, NSCodingProtocol, NSUserInterfaceItemIdentificationProtocol)
  public
    function initWithIdentifier (identifier: NSUserInterfaceItemIdentifier): id; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setIdentifier(newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    procedure setTableView(newValue: NSTableView); message 'setTableView:';
    function tableView: NSTableView; message 'tableView';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setMinWidth(newValue: CGFloat); message 'setMinWidth:';
    function minWidth: CGFloat; message 'minWidth';
    procedure setMaxWidth(newValue: CGFloat); message 'setMaxWidth:';
    function maxWidth: CGFloat; message 'maxWidth';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setHeaderCell(newValue: NSTableHeaderCell); message 'setHeaderCell:';
    function headerCell: NSTableHeaderCell; message 'headerCell';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure sizeToFit; message 'sizeToFit';
    procedure setSortDescriptorPrototype(newValue: NSSortDescriptor); message 'setSortDescriptorPrototype:';
    function sortDescriptorPrototype: NSSortDescriptor; message 'sortDescriptorPrototype';
    procedure setResizingMask(newValue: NSTableColumnResizingOptions); message 'setResizingMask:';
    function resizingMask: NSTableColumnResizingOptions; message 'resizingMask';
    procedure setHeaderToolTip(newValue: NSString); message 'setHeaderToolTip:'; { available in macos  }
    function headerToolTip: NSString; message 'headerToolTip'; { available in macos  }
    procedure setHidden(newValue: objcbool); message 'setHidden:'; { available in macos  }
    function isHidden: objcbool; message 'isHidden'; { available in macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function identifier_: NSUserInterfaceItemIdentifier; message 'identifier';
    procedure setIdentifier_ (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
  end;


type
  NSTableColumn_NSDeprecated = objccategory external name 'NSDeprecated' (NSTableColumn)
    procedure setResizable (flag: objcbool); message 'setResizable:'; deprecated;
    function isResizable: objcbool; message 'isResizable'; deprecated;
    procedure setDataCell(newValue: id); message 'setDataCell:';
    function dataCell: id; message 'dataCell';
    function dataCellForRow (row: NSInteger): id; message 'dataCellForRow:';
  end;
{$endif}

