{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSGridView.h }

{$ifdef TYPES}
type
  NSGridViewPtr = ^NSGridView;
  NSGridRowPtr = ^NSGridRow;
  NSGridColumnPtr = ^NSGridColumn;
  NSGridCellPtr = ^NSGridCell;
{$endif}

{$ifdef TYPES}
type
  NSGridCellPlacement = NSInteger;
  NSGridCellPlacementPtr = ^NSGridCellPlacement;

const
  NSGridCellPlacementInherited = 0;
  NSGridCellPlacementNone = 1;
  NSGridCellPlacementLeading = 2;
  NSGridCellPlacementTop = NSGridCellPlacementLeading;
  NSGridCellPlacementTrailing = 3;
  NSGridCellPlacementBottom = NSGridCellPlacementTrailing;
  NSGridCellPlacementCenter = 4;
  NSGridCellPlacementFill = 5;

type
  NSGridRowAlignment = NSInteger;
  NSGridRowAlignmentPtr = ^NSGridRowAlignment;

const
  NSGridRowAlignmentInherited = 0;
  NSGridRowAlignmentNone = 1;
  NSGridRowAlignmentFirstBaseline = 2;
  NSGridRowAlignmentLastBaseline = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGridViewSizeForContent: CGFloat { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSGridView = objcclass external (NSView)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function gridViewWithNumberOfColumns_rows (columnCount: NSInteger; rowCount: NSInteger): id; message 'gridViewWithNumberOfColumns:rows:';
    class function gridViewWithViews (rows: NSArray): id; message 'gridViewWithViews:';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function numberOfColumns: NSInteger; message 'numberOfColumns';
    function rowAtIndex (index: NSInteger): NSGridRow; message 'rowAtIndex:';
    function indexOfRow (row: NSGridRow): NSInteger; message 'indexOfRow:';
    function columnAtIndex (index: NSInteger): NSGridColumn; message 'columnAtIndex:';
    function indexOfColumn (column: NSGridColumn): NSInteger; message 'indexOfColumn:';
    function cellAtColumnIndex_rowIndex (columnIndex: NSInteger; rowIndex: NSInteger): NSGridCell; message 'cellAtColumnIndex:rowIndex:';
    function cellForView (view: NSView): NSGridCell; message 'cellForView:';
    function addRowWithViews (views: NSArray): NSGridRow; message 'addRowWithViews:';
    function insertRowAtIndex_withViews (index: NSInteger; views: NSArray): NSGridRow; message 'insertRowAtIndex:withViews:';
    procedure moveRowAtIndex_toIndex (fromIndex: NSInteger; toIndex: NSInteger); message 'moveRowAtIndex:toIndex:';
    procedure removeRowAtIndex (index: NSInteger); message 'removeRowAtIndex:';
    function addColumnWithViews (views: NSArray): NSGridColumn; message 'addColumnWithViews:';
    function insertColumnAtIndex_withViews (index: NSInteger; views: NSArray): NSGridColumn; message 'insertColumnAtIndex:withViews:';
    procedure moveColumnAtIndex_toIndex (fromIndex: NSInteger; toIndex: NSInteger); message 'moveColumnAtIndex:toIndex:';
    procedure removeColumnAtIndex (index: NSInteger); message 'removeColumnAtIndex:';
    procedure setXPlacement(newValue: NSGridCellPlacement); message 'setXPlacement:';
    function xPlacement: NSGridCellPlacement; message 'xPlacement';
    procedure setYPlacement(newValue: NSGridCellPlacement); message 'setYPlacement:';
    function yPlacement: NSGridCellPlacement; message 'yPlacement';
    procedure setRowAlignment(newValue: NSGridRowAlignment); message 'setRowAlignment:';
    function rowAlignment: NSGridRowAlignment; message 'rowAlignment';
    procedure setRowSpacing(newValue: CGFloat); message 'setRowSpacing:';
    function rowSpacing: CGFloat; message 'rowSpacing';
    procedure setColumnSpacing(newValue: CGFloat); message 'setColumnSpacing:';
    function columnSpacing: CGFloat; message 'columnSpacing';
    procedure mergeCellsInHorizontalRange_verticalRange (hRange: NSRange; vRange: NSRange); message 'mergeCellsInHorizontalRange:verticalRange:';
  end;

type
  NSGridRow = objcclass external (NSObject, NSCodingProtocol)
  public
    function gridView: NSGridView; message 'gridView';
    function numberOfCells: NSInteger; message 'numberOfCells';
    function cellAtIndex (index: NSInteger): NSGridCell; message 'cellAtIndex:';
    procedure setYPlacement(newValue: NSGridCellPlacement); message 'setYPlacement:';
    function yPlacement: NSGridCellPlacement; message 'yPlacement';
    procedure setRowAlignment(newValue: NSGridRowAlignment); message 'setRowAlignment:';
    function rowAlignment: NSGridRowAlignment; message 'rowAlignment';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setTopPadding(newValue: CGFloat); message 'setTopPadding:';
    function topPadding: CGFloat; message 'topPadding';
    procedure setBottomPadding(newValue: CGFloat); message 'setBottomPadding:';
    function bottomPadding: CGFloat; message 'bottomPadding';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure mergeCellsInRange (range: NSRange); message 'mergeCellsInRange:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;

type
  NSGridColumn = objcclass external (NSObject, NSCodingProtocol)
  public
    function gridView: NSGridView; message 'gridView';
    function numberOfCells: NSInteger; message 'numberOfCells';
    function cellAtIndex (index: NSInteger): NSGridCell; message 'cellAtIndex:';
    procedure setXPlacement(newValue: NSGridCellPlacement); message 'setXPlacement:';
    function xPlacement: NSGridCellPlacement; message 'xPlacement';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setLeadingPadding(newValue: CGFloat); message 'setLeadingPadding:';
    function leadingPadding: CGFloat; message 'leadingPadding';
    procedure setTrailingPadding(newValue: CGFloat); message 'setTrailingPadding:';
    function trailingPadding: CGFloat; message 'trailingPadding';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure mergeCellsInRange (range: NSRange); message 'mergeCellsInRange:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;

type
  NSGridCell = objcclass external (NSObject, NSCodingProtocol)
  public
    procedure setContentView(newValue: NSView); message 'setContentView:';
    function contentView: NSView; message 'contentView';
    class function emptyContentView: NSView; message 'emptyContentView';
    function row: NSGridRow; message 'row';
    function column: NSGridColumn; message 'column';
    procedure setXPlacement(newValue: NSGridCellPlacement); message 'setXPlacement:';
    function xPlacement: NSGridCellPlacement; message 'xPlacement';
    procedure setYPlacement(newValue: NSGridCellPlacement); message 'setYPlacement:';
    function yPlacement: NSGridCellPlacement; message 'yPlacement';
    procedure setRowAlignment(newValue: NSGridRowAlignment); message 'setRowAlignment:';
    function rowAlignment: NSGridRowAlignment; message 'rowAlignment';
    procedure setCustomPlacementConstraints(newValue: NSArray); message 'setCustomPlacementConstraints:';
    function customPlacementConstraints: NSArray; message 'customPlacementConstraints';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

