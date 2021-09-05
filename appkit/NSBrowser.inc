{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSBrowser.h }

{$ifdef TYPES}
type
  NSBrowserPtr = ^NSBrowser;
  NSBrowserDelegateProtocolPtr = ^NSBrowserDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumberWithContinuousScrollingBrowser = 680.0;
  NSAppKitVersionNumberWithColumnResizingBrowser = 685.0;

type
  NSBrowserColumnsAutosaveName = NSString;
  NSBrowserColumnsAutosaveNamePtr = ^NSBrowserColumnsAutosaveName;
  NSBrowserColumnResizingType = NSUInteger;
  NSBrowserColumnResizingTypePtr = ^NSBrowserColumnResizingType;

const
  NSBrowserNoColumnResizing = 0;
  NSBrowserAutoColumnResizing = 1;
  NSBrowserUserColumnResizing = 2;

type
  NSBrowserDropOperation = NSUInteger;
  NSBrowserDropOperationPtr = ^NSBrowserDropOperation;

const
  NSBrowserDropOn = 0;
  NSBrowserDropAbove = 1;
{$endif}

{$ifdef CLASSES}

type
  NSBrowser = objcclass external (NSControl)
  public
    class function cellClass: pobjc_class; message 'cellClass';
    procedure loadColumnZero; message 'loadColumnZero';
    function isLoaded: objcbool; message 'isLoaded';
    procedure setDoubleAction(newValue: SEL); message 'setDoubleAction:';
    function doubleAction: SEL; message 'doubleAction';
    procedure setCellClass (factoryId: pobjc_class); message 'setCellClass:';
    procedure setCellPrototype(newValue: id); message 'setCellPrototype:';
    function cellPrototype: id; message 'cellPrototype';
    procedure setDelegate(newValue: NSBrowserDelegateProtocol); message 'setDelegate:';
    function delegate: NSBrowserDelegateProtocol; message 'delegate';
    procedure setReusesColumns(newValue: objcbool); message 'setReusesColumns:';
    function reusesColumns: objcbool; message 'reusesColumns';
    procedure setHasHorizontalScroller(newValue: objcbool); message 'setHasHorizontalScroller:';
    function hasHorizontalScroller: objcbool; message 'hasHorizontalScroller';
    procedure setAutohidesScroller(newValue: objcbool); message 'setAutohidesScroller:'; { available in macos  }
    function autohidesScroller: objcbool; message 'autohidesScroller'; { available in macos  }
    procedure setSeparatesColumns(newValue: objcbool); message 'setSeparatesColumns:';
    function separatesColumns: objcbool; message 'separatesColumns';
    procedure setTitled(newValue: objcbool); message 'setTitled:';
    function isTitled: objcbool; message 'isTitled';
    procedure setMinColumnWidth(newValue: CGFloat); message 'setMinColumnWidth:';
    function minColumnWidth: CGFloat; message 'minColumnWidth';
    procedure setMaxVisibleColumns(newValue: NSInteger); message 'setMaxVisibleColumns:';
    function maxVisibleColumns: NSInteger; message 'maxVisibleColumns';
    procedure setAllowsMultipleSelection(newValue: objcbool); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    procedure setAllowsBranchSelection(newValue: objcbool); message 'setAllowsBranchSelection:';
    function allowsBranchSelection: objcbool; message 'allowsBranchSelection';
    procedure setAllowsEmptySelection(newValue: objcbool); message 'setAllowsEmptySelection:';
    function allowsEmptySelection: objcbool; message 'allowsEmptySelection';
    procedure setTakesTitleFromPreviousColumn(newValue: objcbool); message 'setTakesTitleFromPreviousColumn:';
    function takesTitleFromPreviousColumn: objcbool; message 'takesTitleFromPreviousColumn';
    procedure setSendsActionOnArrowKeys(newValue: objcbool); message 'setSendsActionOnArrowKeys:';
    function sendsActionOnArrowKeys: objcbool; message 'sendsActionOnArrowKeys';
    function itemAtIndexPath (indexPath: NSIndexPath): id; message 'itemAtIndexPath:'; { available in macos  }
    function itemAtRow_inColumn (row: NSInteger; column: NSInteger): id; message 'itemAtRow:inColumn:'; { available in macos  }
    function indexPathForColumn (column: NSInteger): NSIndexPath; message 'indexPathForColumn:'; { available in macos  }
    function isLeafItem (item: id): objcbool; message 'isLeafItem:'; { available in macos  }
    procedure reloadDataForRowIndexes_inColumn (rowIndexes: NSIndexSet; column: NSInteger); message 'reloadDataForRowIndexes:inColumn:'; { available in macos  }
    function parentForItemsInColumn (column: NSInteger): id; message 'parentForItemsInColumn:'; { available in macos  }
    procedure scrollRowToVisible_inColumn (row: NSInteger; column: NSInteger); message 'scrollRowToVisible:inColumn:'; { available in macos  }
    procedure setTitle_ofColumn (string_: NSString; column: NSInteger); message 'setTitle:ofColumn:';
    function titleOfColumn (column: NSInteger): NSString; message 'titleOfColumn:';
    procedure setPathSeparator(newValue: NSString); message 'setPathSeparator:';
    function pathSeparator: NSString; message 'pathSeparator';
    function setPath (path: NSString): objcbool; message 'setPath:';
    function path: NSString; message 'path';
    function pathToColumn (column: NSInteger): NSString; message 'pathToColumn:';
    function clickedColumn: NSInteger; message 'clickedColumn'; { available in macos  }
    function clickedRow: NSInteger; message 'clickedRow'; { available in macos  }
    function selectedColumn: NSInteger; message 'selectedColumn';
    function selectedCell: id; message 'selectedCell';
    function selectedCellInColumn (column: NSInteger): id; message 'selectedCellInColumn:';
    function selectedCells: NSArray; message 'selectedCells';
    procedure selectRow_inColumn (row: NSInteger; column: NSInteger); message 'selectRow:inColumn:';
    function selectedRowInColumn (column: NSInteger): NSInteger; message 'selectedRowInColumn:';
    procedure setSelectionIndexPath(newValue: NSIndexPath); message 'setSelectionIndexPath:'; { available in macos  }
    function selectionIndexPath: NSIndexPath; message 'selectionIndexPath'; { available in macos  }
    procedure setSelectionIndexPaths(newValue: NSArray); message 'setSelectionIndexPaths:'; { available in macos  }
    function selectionIndexPaths: NSArray; message 'selectionIndexPaths'; { available in macos  }
    procedure selectRowIndexes_inColumn (indexes: NSIndexSet; column: NSInteger); message 'selectRowIndexes:inColumn:'; { available in macos  }
    function selectedRowIndexesInColumn (column: NSInteger): NSIndexSet; message 'selectedRowIndexesInColumn:'; { available in macos  }
    procedure reloadColumn (column: NSInteger); message 'reloadColumn:';
    procedure validateVisibleColumns; message 'validateVisibleColumns';
    procedure scrollColumnsRightBy (shiftAmount: NSInteger); message 'scrollColumnsRightBy:';
    procedure scrollColumnsLeftBy (shiftAmount: NSInteger); message 'scrollColumnsLeftBy:';
    procedure scrollColumnToVisible (column: NSInteger); message 'scrollColumnToVisible:';
    procedure setLastColumn(newValue: NSInteger); message 'setLastColumn:';
    function lastColumn: NSInteger; message 'lastColumn';
    procedure addColumn; message 'addColumn';
    function numberOfVisibleColumns: NSInteger; message 'numberOfVisibleColumns';
    function firstVisibleColumn: NSInteger; message 'firstVisibleColumn';
    function lastVisibleColumn: NSInteger; message 'lastVisibleColumn';
    function loadedCellAtRow_column (row: NSInteger; col: NSInteger): id; message 'loadedCellAtRow:column:';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure tile; message 'tile';
    procedure doClick (sender: id); message 'doClick:';
    procedure doDoubleClick (sender: id); message 'doDoubleClick:';
    function sendAction: objcbool; message 'sendAction';
    function titleFrameOfColumn (column: NSInteger): NSRect; message 'titleFrameOfColumn:';
    procedure drawTitleOfColumn_inRect (column: NSInteger; rect: NSRect); message 'drawTitleOfColumn:inRect:';
    function titleHeight: CGFloat; message 'titleHeight';
    function frameOfColumn (column: NSInteger): NSRect; message 'frameOfColumn:';
    function frameOfInsideOfColumn (column: NSInteger): NSRect; message 'frameOfInsideOfColumn:';
    function frameOfRow_inColumn (row: NSInteger; column: NSInteger): NSRect; message 'frameOfRow:inColumn:'; { available in macos  }
    function getRow_column_forPoint (row: NSIntegerPtr; column: NSIntegerPtr; point: NSPoint): objcbool; message 'getRow:column:forPoint:'; { available in macos  }
    function columnWidthForColumnContentWidth (columnContentWidth: CGFloat): CGFloat; message 'columnWidthForColumnContentWidth:';
    function columnContentWidthForColumnWidth (columnWidth: CGFloat): CGFloat; message 'columnContentWidthForColumnWidth:';
    procedure setColumnResizingType(newValue: NSBrowserColumnResizingType); message 'setColumnResizingType:';
    function columnResizingType: NSBrowserColumnResizingType; message 'columnResizingType';
    procedure setPrefersAllColumnUserResizing(newValue: objcbool); message 'setPrefersAllColumnUserResizing:';
    function prefersAllColumnUserResizing: objcbool; message 'prefersAllColumnUserResizing';
    procedure setWidth_ofColumn (columnWidth: CGFloat; columnIndex: NSInteger); message 'setWidth:ofColumn:';
    function widthOfColumn (column: NSInteger): CGFloat; message 'widthOfColumn:';
    procedure setRowHeight(newValue: CGFloat); message 'setRowHeight:'; { available in macos  }
    function rowHeight: CGFloat; message 'rowHeight'; { available in macos  }
    procedure noteHeightOfRowsWithIndexesChanged_inColumn (indexSet: NSIndexSet; columnIndex: NSInteger); message 'noteHeightOfRowsWithIndexesChanged:inColumn:'; { available in macos  }
    procedure setDefaultColumnWidth (columnWidth: CGFloat); message 'setDefaultColumnWidth:'; { available in macos  }
    function defaultColumnWidth: CGFloat; message 'defaultColumnWidth'; { available in macos  }
    procedure setColumnsAutosaveName(newValue: NSBrowserColumnsAutosaveName); message 'setColumnsAutosaveName:';
    function columnsAutosaveName: NSBrowserColumnsAutosaveName; message 'columnsAutosaveName';
    class procedure removeSavedColumnsWithAutosaveName (name: NSBrowserColumnsAutosaveName); message 'removeSavedColumnsWithAutosaveName:';
    function canDragRowsWithIndexes_inColumn_withEvent (rowIndexes: NSIndexSet; column: NSInteger; event: NSEvent): objcbool; message 'canDragRowsWithIndexes:inColumn:withEvent:'; { available in macos  }
    function draggingImageForRowsWithIndexes_inColumn_withEvent_offset (rowIndexes: NSIndexSet; column: NSInteger; event: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'draggingImageForRowsWithIndexes:inColumn:withEvent:offset:'; { available in macos  }
    procedure setDraggingSourceOperationMask_forLocal (mask: NSDragOperation; isLocal: objcbool); message 'setDraggingSourceOperationMask:forLocal:'; { available in macos  }
    procedure setAllowsTypeSelect(newValue: objcbool); message 'setAllowsTypeSelect:'; { available in macos  }
    function allowsTypeSelect: objcbool; message 'allowsTypeSelect'; { available in macos  }
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:'; { available in macos  }
    function backgroundColor: NSColor; message 'backgroundColor'; { available in macos  }
    procedure editItemAtIndexPath_withEvent_select (indexPath: NSIndexPath; event: NSEvent; select: objcbool); message 'editItemAtIndexPath:withEvent:select:'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSBrowserColumnConfigurationDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSBrowserDelegateProtocol = objcprotocol external name 'NSBrowserDelegate' (NSObjectProtocol)
  optional
    function browser_numberOfRowsInColumn (sender: NSBrowser; column: NSInteger): NSInteger; message 'browser:numberOfRowsInColumn:';
    procedure browser_createRowsForColumn_inMatrix (sender: NSBrowser; column: NSInteger; matrix: NSMatrix); message 'browser:createRowsForColumn:inMatrix:';
    function browser_numberOfChildrenOfItem (browser: NSBrowser; item: id): NSInteger; message 'browser:numberOfChildrenOfItem:'; { available in macos  }
    function browser_child_ofItem (browser: NSBrowser; index: NSInteger; item: id): id; message 'browser:child:ofItem:'; { available in macos  }
    function browser_isLeafItem (browser: NSBrowser; item: id): objcbool; message 'browser:isLeafItem:'; { available in macos  }
    function browser_objectValueForItem (browser: NSBrowser; item: id): id; message 'browser:objectValueForItem:'; { available in macos  }
    function browser_heightOfRow_inColumn (browser: NSBrowser; row: NSInteger; columnIndex: NSInteger): CGFloat; message 'browser:heightOfRow:inColumn:'; { available in macos  }
    function rootItemForBrowser (browser: NSBrowser): id; message 'rootItemForBrowser:'; { available in macos  }
    procedure browser_setObjectValue_forItem (browser: NSBrowser; object_: id; item: id); message 'browser:setObjectValue:forItem:'; { available in macos  }
    function browser_shouldEditItem (browser: NSBrowser; item: id): objcbool; message 'browser:shouldEditItem:'; { available in macos  }
    procedure browser_willDisplayCell_atRow_column (sender: NSBrowser; cell: id; row: NSInteger; column: NSInteger); message 'browser:willDisplayCell:atRow:column:';
    function browser_titleOfColumn (sender: NSBrowser; column: NSInteger): NSString; message 'browser:titleOfColumn:';
    function browser_selectCellWithString_inColumn (sender: NSBrowser; title: NSString; column: NSInteger): objcbool; message 'browser:selectCellWithString:inColumn:';
    function browser_selectRow_inColumn (sender: NSBrowser; row: NSInteger; column: NSInteger): objcbool; message 'browser:selectRow:inColumn:';
    function browser_isColumnValid (sender: NSBrowser; column: NSInteger): objcbool; message 'browser:isColumnValid:';
    procedure browserWillScroll (sender: NSBrowser); message 'browserWillScroll:';
    procedure browserDidScroll (sender: NSBrowser); message 'browserDidScroll:';
    function browser_shouldSizeColumn_forUserResize_toWidth (browser: NSBrowser; columnIndex: NSInteger; forUserResize: objcbool; suggestedWidth: CGFloat): CGFloat; message 'browser:shouldSizeColumn:forUserResize:toWidth:';
    function browser_sizeToFitWidthOfColumn (browser: NSBrowser; columnIndex: NSInteger): CGFloat; message 'browser:sizeToFitWidthOfColumn:';
    procedure browserColumnConfigurationDidChange (notification: NSNotification); message 'browserColumnConfigurationDidChange:';
    function browser_shouldShowCellExpansionForRow_column (browser: NSBrowser; row: NSInteger; column: NSInteger): objcbool; message 'browser:shouldShowCellExpansionForRow:column:'; { available in macos  }
    function browser_writeRowsWithIndexes_inColumn_toPasteboard (browser: NSBrowser; rowIndexes: NSIndexSet; column: NSInteger; pasteboard: NSPasteboard): objcbool; message 'browser:writeRowsWithIndexes:inColumn:toPasteboard:'; { available in macos  }
    function browser_namesOfPromisedFilesDroppedAtDestination_forDraggedRowsWithIndexes_inColumn (browser: NSBrowser; dropDestination: NSURL; rowIndexes: NSIndexSet; column: NSInteger): NSArray; message 'browser:namesOfPromisedFilesDroppedAtDestination:forDraggedRowsWithIndexes:inColumn:'; deprecated 'Use NSFilePromiseReceiver objects instead';
    function browser_canDragRowsWithIndexes_inColumn_withEvent (browser: NSBrowser; rowIndexes: NSIndexSet; column: NSInteger; event: NSEvent): objcbool; message 'browser:canDragRowsWithIndexes:inColumn:withEvent:'; { available in macos  }
    function browser_draggingImageForRowsWithIndexes_inColumn_withEvent_offset (browser: NSBrowser; rowIndexes: NSIndexSet; column: NSInteger; event: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'browser:draggingImageForRowsWithIndexes:inColumn:withEvent:offset:'; { available in macos  }
    function browser_validateDrop_proposedRow_column_dropOperation (browser: NSBrowser; info: NSDraggingInfoProtocol; row: NSIntegerPtr; column: NSIntegerPtr; dropOperation: NSBrowserDropOperationPtr): NSDragOperation; message 'browser:validateDrop:proposedRow:column:dropOperation:'; { available in macos  }
    function browser_acceptDrop_atRow_column_dropOperation (browser: NSBrowser; info: NSDraggingInfoProtocol; row: NSInteger; column: NSInteger; dropOperation: NSBrowserDropOperation): objcbool; message 'browser:acceptDrop:atRow:column:dropOperation:'; { available in macos  }
    function browser_typeSelectStringForRow_inColumn (browser: NSBrowser; row: NSInteger; column: NSInteger): NSString; message 'browser:typeSelectStringForRow:inColumn:'; { available in macos  }
    function browser_shouldTypeSelectForEvent_withCurrentSearchString (browser: NSBrowser; event: NSEvent; searchString: NSString): objcbool; message 'browser:shouldTypeSelectForEvent:withCurrentSearchString:'; { available in macos  }
    function browser_nextTypeSelectMatchFromRow_toRow_inColumn_forString (browser: NSBrowser; startRow: NSInteger; endRow: NSInteger; column: NSInteger; searchString: NSString): NSInteger; message 'browser:nextTypeSelectMatchFromRow:toRow:inColumn:forString:'; { available in macos  }
    function browser_previewViewControllerForLeafItem (browser: NSBrowser; item: id): NSViewController; message 'browser:previewViewControllerForLeafItem:'; { available in macos  }
    function browser_headerViewControllerForItem (browser: NSBrowser; item: id): NSViewController; message 'browser:headerViewControllerForItem:'; { available in macos  }
    procedure browser_didChangeLastColumn_toColumn (browser: NSBrowser; oldLastColumn: NSInteger; column: NSInteger); message 'browser:didChangeLastColumn:toColumn:';
    function browser_selectionIndexesForProposedSelection_inColumn (browser: NSBrowser; proposedSelectionIndexes: NSIndexSet; column: NSInteger): NSIndexSet; message 'browser:selectionIndexesForProposedSelection:inColumn:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSBrowser_NSDeprecated = objccategory external name 'NSDeprecated' (NSBrowser)
    procedure setAcceptsArrowKeys (flag: objcbool); message 'setAcceptsArrowKeys:'; deprecated;
    function acceptsArrowKeys: objcbool; message 'acceptsArrowKeys'; deprecated;
    procedure displayColumn (column: NSInteger); message 'displayColumn:'; deprecated;
    procedure displayAllColumns; message 'displayAllColumns'; deprecated;
    procedure scrollViaScroller (sender: NSScroller); message 'scrollViaScroller:'; deprecated;
    procedure updateScroller; message 'updateScroller'; deprecated;
    procedure setMatrixClass (factoryId: pobjc_class); message 'setMatrixClass:'; deprecated 'Use the item based NSBrowser instead';
    function matrixClass: pobjc_class; message 'matrixClass'; deprecated 'Use the item based NSBrowser instead';
    function columnOfMatrix (matrix: NSMatrix): NSInteger; message 'columnOfMatrix:'; deprecated 'Use the item based NSBrowser instead';
    function matrixInColumn (column: NSInteger): NSMatrix; message 'matrixInColumn:'; deprecated 'Use the item based NSBrowser instead';
  end;
{$endif}

