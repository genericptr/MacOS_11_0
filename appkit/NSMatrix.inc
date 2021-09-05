{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSMatrix.h }

{$ifdef CALLBACKS}
type
  NSMatrixSortUsingFunctionCompareCallback = function (param1: id; param2: id; param3: pointer): NSInteger; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSMatrixPtr = ^NSMatrix;
  NSMatrixDelegateProtocolPtr = ^NSMatrixDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSMatrixMode = NSUInteger;
  NSMatrixModePtr = ^NSMatrixMode;

const
  NSRadioModeMatrix = 0;
  NSHighlightModeMatrix = 1;
  NSListModeMatrix = 2;
  NSTrackModeMatrix = 3;
{$endif}

{$ifdef CLASSES}

type
  NSMatrix = objcclass external (NSControl, NSUserInterfaceValidationsProtocol, NSViewToolTipOwnerProtocol)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:';
    function initWithFrame_mode_prototype_numberOfRows_numberOfColumns (frameRect: NSRect; mode: NSMatrixMode; cell: NSCell; rowsHigh: NSInteger; colsWide: NSInteger): id; message 'initWithFrame:mode:prototype:numberOfRows:numberOfColumns:';
    function initWithFrame_mode_cellClass_numberOfRows_numberOfColumns (frameRect: NSRect; mode: NSMatrixMode; factoryId: pobjc_class; rowsHigh: NSInteger; colsWide: NSInteger): id; message 'initWithFrame:mode:cellClass:numberOfRows:numberOfColumns:';
    procedure setCellClass(newValue: pobjc_class); message 'setCellClass:';
    function cellClass: pobjc_class; message 'cellClass';
    procedure setPrototype(newValue: NSCell); message 'setPrototype:';
    function prototype: NSCell; message 'prototype';
    function makeCellAtRow_column (row: NSInteger; col: NSInteger): NSCell; message 'makeCellAtRow:column:';
    procedure setMode(newValue: NSMatrixMode); message 'setMode:';
    function mode: NSMatrixMode; message 'mode';
    procedure setAllowsEmptySelection(newValue: objcbool); message 'setAllowsEmptySelection:';
    function allowsEmptySelection: objcbool; message 'allowsEmptySelection';
    procedure sendAction_to_forAllCells (selector: SEL; object_: id; flag: objcbool); message 'sendAction:to:forAllCells:';
    function cells: NSArray; message 'cells';
    procedure sortUsingSelector (comparator: SEL); message 'sortUsingSelector:';
    procedure sortUsingFunction_context (compare: NSMatrixSortUsingFunctionCompareCallback; context: pointer); message 'sortUsingFunction:context:';
    function selectedCell: NSCell; message 'selectedCell';
    function selectedCells: NSArray; message 'selectedCells';
    function selectedRow: NSInteger; message 'selectedRow';
    function selectedColumn: NSInteger; message 'selectedColumn';
    procedure setSelectionByRect(newValue: objcbool); message 'setSelectionByRect:';
    function isSelectionByRect: objcbool; message 'isSelectionByRect';
    procedure setSelectionFrom_to_anchor_highlight (startPos: NSInteger; endPos: NSInteger; anchorPos: NSInteger; lit: objcbool); message 'setSelectionFrom:to:anchor:highlight:';
    procedure deselectSelectedCell; message 'deselectSelectedCell';
    procedure deselectAllCells; message 'deselectAllCells';
    procedure selectCellAtRow_column (row: NSInteger; col: NSInteger); message 'selectCellAtRow:column:';
    procedure selectAll (sender: id); message 'selectAll:';
    function selectCellWithTag (tag_: NSInteger): objcbool; message 'selectCellWithTag:';
    procedure setCellSize(newValue: NSSize); message 'setCellSize:';
    function cellSize: NSSize; message 'cellSize';
    procedure setIntercellSpacing(newValue: NSSize); message 'setIntercellSpacing:';
    function intercellSpacing: NSSize; message 'intercellSpacing';
    procedure setScrollable (flag: objcbool); message 'setScrollable:';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setCellBackgroundColor(newValue: NSColor); message 'setCellBackgroundColor:';
    function cellBackgroundColor: NSColor; message 'cellBackgroundColor';
    procedure setDrawsCellBackground(newValue: objcbool); message 'setDrawsCellBackground:';
    function drawsCellBackground: objcbool; message 'drawsCellBackground';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setState_atRow_column (value: NSInteger; row: NSInteger; col: NSInteger); message 'setState:atRow:column:';
    procedure getNumberOfRows_columns (rowCount: NSIntegerPtr; colCount: NSIntegerPtr); message 'getNumberOfRows:columns:';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function numberOfColumns: NSInteger; message 'numberOfColumns';
    function cellAtRow_column (row: NSInteger; col: NSInteger): NSCell; message 'cellAtRow:column:';
    function cellFrameAtRow_column (row: NSInteger; col: NSInteger): NSRect; message 'cellFrameAtRow:column:';
    function getRow_column_ofCell (row: NSIntegerPtr; col: NSIntegerPtr; cell: NSCell): objcbool; message 'getRow:column:ofCell:';
    function getRow_column_forPoint (row: NSIntegerPtr; col: NSIntegerPtr; point: NSPoint): objcbool; message 'getRow:column:forPoint:';
    procedure renewRows_columns (newRows: NSInteger; newCols: NSInteger); message 'renewRows:columns:';
    procedure putCell_atRow_column (newCell: NSCell; row: NSInteger; col: NSInteger); message 'putCell:atRow:column:';
    procedure addRow; message 'addRow';
    procedure addRowWithCells (newCells: NSArray); message 'addRowWithCells:';
    procedure insertRow (row: NSInteger); message 'insertRow:';
    procedure insertRow_withCells (row: NSInteger; newCells: NSArray); message 'insertRow:withCells:';
    procedure removeRow (row: NSInteger); message 'removeRow:';
    procedure addColumn; message 'addColumn';
    procedure addColumnWithCells (newCells: NSArray); message 'addColumnWithCells:';
    procedure insertColumn (column: NSInteger); message 'insertColumn:';
    procedure insertColumn_withCells (column: NSInteger; newCells: NSArray); message 'insertColumn:withCells:';
    procedure removeColumn (col: NSInteger); message 'removeColumn:';
    function cellWithTag (tag_: NSInteger): NSCell; message 'cellWithTag:';
    procedure setDoubleAction(newValue: SEL); message 'setDoubleAction:';
    function doubleAction: SEL; message 'doubleAction';
    procedure setAutosizesCells(newValue: objcbool); message 'setAutosizesCells:';
    function autosizesCells: objcbool; message 'autosizesCells';
    procedure sizeToCells; message 'sizeToCells';
    procedure setValidateSize (flag: objcbool); message 'setValidateSize:';
    procedure drawCellAtRow_column (row: NSInteger; col: NSInteger); message 'drawCellAtRow:column:';
    procedure highlightCell_atRow_column (flag: objcbool; row: NSInteger; col: NSInteger); message 'highlightCell:atRow:column:';
    procedure setAutoscroll(newValue: objcbool); message 'setAutoscroll:';
    function isAutoscroll: objcbool; message 'isAutoscroll';
    procedure scrollCellToVisibleAtRow_column (row: NSInteger; col: NSInteger); message 'scrollCellToVisibleAtRow:column:';
    function mouseDownFlags: NSInteger; message 'mouseDownFlags';
    procedure mouseDown (event: NSEvent); message 'mouseDown:';
    function performKeyEquivalent (event: NSEvent): objcbool; message 'performKeyEquivalent:';
    function sendAction: objcbool; message 'sendAction';
    procedure sendDoubleAction; message 'sendDoubleAction';
    procedure setDelegate(newValue: NSMatrixDelegateProtocol); message 'setDelegate:';
    function delegate: NSMatrixDelegateProtocol; message 'delegate';
    function textShouldBeginEditing (textObject: NSText): objcbool; message 'textShouldBeginEditing:';
    function textShouldEndEditing (textObject: NSText): objcbool; message 'textShouldEndEditing:';
    procedure textDidBeginEditing (notification: NSNotification); message 'textDidBeginEditing:';
    procedure textDidEndEditing (notification: NSNotification); message 'textDidEndEditing:';
    procedure textDidChange (notification: NSNotification); message 'textDidChange:';
    procedure selectText (sender: id); message 'selectText:';
    function selectTextAtRow_column (row: NSInteger; col: NSInteger): NSCell; message 'selectTextAtRow:column:';
    function acceptsFirstMouse (event: NSEvent): objcbool; message 'acceptsFirstMouse:';
    procedure resetCursorRects; message 'resetCursorRects';
    procedure setToolTip_forCell (toolTipString: NSString; cell: NSCell); message 'setToolTip:forCell:';
    function toolTipForCell (cell: NSCell): NSString; message 'toolTipForCell:';
    procedure setAutorecalculatesCellSize(newValue: objcbool); message 'setAutorecalculatesCellSize:'; { available in macos  }
    function autorecalculatesCellSize: objcbool; message 'autorecalculatesCellSize'; { available in macos  }

    { Adopted protocols }
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
    function view_stringForToolTip_point_userData (view: NSView; tag: NSToolTipTag; point: NSPoint; data: pointer): NSString; message 'view:stringForToolTip:point:userData:';
  end;


type
  NSMatrix_NSKeyboardUI = objccategory external name 'NSKeyboardUI' (NSMatrix)
    procedure setTabKeyTraversesCells(newValue: objcbool); message 'setTabKeyTraversesCells:';
    function tabKeyTraversesCells: objcbool; message 'tabKeyTraversesCells';
    procedure setKeyCell(newValue: NSCell); message 'setKeyCell:';
    function keyCell: NSCell; message 'keyCell';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSMatrixDelegateProtocol = objcprotocol external name 'NSMatrixDelegate' (NSControlTextEditingDelegateProtocol)
  end;
{$endif}

