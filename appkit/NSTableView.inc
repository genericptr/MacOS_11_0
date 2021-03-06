{ Parsed from AppKit.framework NSTableView.h }

{ Types from NSTableView }
{$ifdef TYPES}

type
  NSTableViewAnimationOptions = NSUInteger;
type
  NSTableViewAnimationOptionsPtr = ^NSTableViewAnimationOptions;
{$endif}


{$ifdef CALLBACKS}
type
  NSTableViewEnumerateAvailableRowViewsUsingBlockCallback = reference to procedure (rowView: NSTableRowView; row: NSInteger); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSTableViewPtr = ^NSTableView;
  NSTableViewDelegateProtocolPtr = ^NSTableViewDelegateProtocol;
  NSTableViewDataSourceProtocolPtr = ^NSTableViewDataSourceProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTableViewDropOperation = NSUInteger;
  NSTableViewDropOperationPtr = ^NSTableViewDropOperation;

const
  NSTableViewDropOn = 0;
  NSTableViewDropAbove = 1;

type
  NSTableViewColumnAutoresizingStyle = NSUInteger;
  NSTableViewColumnAutoresizingStylePtr = ^NSTableViewColumnAutoresizingStyle;

const
  NSTableViewNoColumnAutoresizing = 0;
  NSTableViewUniformColumnAutoresizingStyle = 1;
  NSTableViewSequentialColumnAutoresizingStyle = 2;
  NSTableViewReverseSequentialColumnAutoresizingStyle = 3;
  NSTableViewLastColumnOnlyAutoresizingStyle = 4;
  NSTableViewFirstColumnOnlyAutoresizingStyle = 5;

type
  NSTableViewGridLineStyle = NSUInteger;
  NSTableViewGridLineStylePtr = ^NSTableViewGridLineStyle;

const
  NSTableViewGridNone = 0;
  NSTableViewSolidVerticalGridLineMask = 1 shl 0;
  NSTableViewSolidHorizontalGridLineMask = 1 shl 1;
  NSTableViewDashedHorizontalGridLineMask = 1 shl 3 { available in macos 10.7 };

type
  NSTableViewRowSizeStyle = NSInteger;
  NSTableViewRowSizeStylePtr = ^NSTableViewRowSizeStyle;

const
  NSTableViewRowSizeStyleDefault = -1;
  NSTableViewRowSizeStyleCustom = 0;
  NSTableViewRowSizeStyleSmall = 1;
  NSTableViewRowSizeStyleMedium = 2;
  NSTableViewRowSizeStyleLarge = 3;

type
  NSTableViewStyle = NSInteger;
  NSTableViewStylePtr = ^NSTableViewStyle;

const
  NSTableViewStyleAutomatic = 0;
  NSTableViewStyleFullWidth = 1;
  NSTableViewStyleInset = 2;
  NSTableViewStyleSourceList = 3;
  NSTableViewStylePlain = 4;

type
  NSTableViewSelectionHighlightStyle = NSInteger;
  NSTableViewSelectionHighlightStylePtr = ^NSTableViewSelectionHighlightStyle;

const
  NSTableViewSelectionHighlightStyleNone = -1 { available in macos 10.6 };
  NSTableViewSelectionHighlightStyleRegular = 0;
  NSTableViewSelectionHighlightStyleSourceList = 1 deprecated 'Set the NSTableView.style property to NSTableViewStyleSourceList instead.';

type
  NSTableViewDraggingDestinationFeedbackStyle = NSInteger;
  NSTableViewDraggingDestinationFeedbackStylePtr = ^NSTableViewDraggingDestinationFeedbackStyle;

const
  NSTableViewDraggingDestinationFeedbackStyleNone = -1;
  NSTableViewDraggingDestinationFeedbackStyleRegular = 0;
  NSTableViewDraggingDestinationFeedbackStyleSourceList = 1;
  NSTableViewDraggingDestinationFeedbackStyleGap = 2 { available in macos 10.9 };

type
  NSTableRowActionEdge = NSInteger;
  NSTableRowActionEdgePtr = ^NSTableRowActionEdge;

const
  NSTableRowActionEdgeLeading = 0;
  NSTableRowActionEdgeTrailing = 1;

type
  NSTableViewAutosaveName = NSString;
  NSTableViewAutosaveNamePtr = ^NSTableViewAutosaveName;
{$endif}

{$ifdef CLASSES}

type
  NSTableView = objcclass external (NSControl, NSUserInterfaceValidationsProtocol, NSTextViewDelegateProtocol, NSDraggingSourceProtocol, NSAccessibilityTableProtocol)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDataSource(newValue: NSTableViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: NSTableViewDataSourceProtocol; message 'dataSource';
    procedure setDelegate(newValue: NSTableViewDelegateProtocol); message 'setDelegate:';
    function delegate: NSTableViewDelegateProtocol; message 'delegate';
    procedure setHeaderView(newValue: NSTableHeaderView); message 'setHeaderView:';
    function headerView: NSTableHeaderView; message 'headerView';
    procedure setCornerView(newValue: NSView); message 'setCornerView:';
    function cornerView: NSView; message 'cornerView';
    procedure setAllowsColumnReordering(newValue: objcbool); message 'setAllowsColumnReordering:';
    function allowsColumnReordering: objcbool; message 'allowsColumnReordering';
    procedure setAllowsColumnResizing(newValue: objcbool); message 'setAllowsColumnResizing:';
    function allowsColumnResizing: objcbool; message 'allowsColumnResizing';
    procedure setColumnAutoresizingStyle(newValue: NSTableViewColumnAutoresizingStyle); message 'setColumnAutoresizingStyle:';
    function columnAutoresizingStyle: NSTableViewColumnAutoresizingStyle; message 'columnAutoresizingStyle';
    procedure setGridStyleMask(newValue: NSTableViewGridLineStyle); message 'setGridStyleMask:';
    function gridStyleMask: NSTableViewGridLineStyle; message 'gridStyleMask';
    procedure setIntercellSpacing(newValue: NSSize); message 'setIntercellSpacing:';
    function intercellSpacing: NSSize; message 'intercellSpacing';
    procedure setUsesAlternatingRowBackgroundColors(newValue: objcbool); message 'setUsesAlternatingRowBackgroundColors:';
    function usesAlternatingRowBackgroundColors: objcbool; message 'usesAlternatingRowBackgroundColors';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setGridColor(newValue: NSColor); message 'setGridColor:';
    function gridColor: NSColor; message 'gridColor';
    procedure setRowSizeStyle(newValue: NSTableViewRowSizeStyle); message 'setRowSizeStyle:'; { available in macos 10.7 }
    function rowSizeStyle: NSTableViewRowSizeStyle; message 'rowSizeStyle'; { available in macos 10.7 }
    function effectiveRowSizeStyle: NSTableViewRowSizeStyle; message 'effectiveRowSizeStyle'; { available in macos 10.7 }
    procedure setRowHeight(newValue: CGFloat); message 'setRowHeight:';
    function rowHeight: CGFloat; message 'rowHeight';
    procedure noteHeightOfRowsWithIndexesChanged (indexSet: NSIndexSet); message 'noteHeightOfRowsWithIndexesChanged:';
    function tableColumns: NSArray; message 'tableColumns';
    function numberOfColumns: NSInteger; message 'numberOfColumns';
    function numberOfRows: NSInteger; message 'numberOfRows';
    procedure addTableColumn (tableColumn: NSTableColumn); message 'addTableColumn:';
    procedure removeTableColumn (tableColumn: NSTableColumn); message 'removeTableColumn:';
    procedure moveColumn_toColumn (oldIndex: NSInteger; newIndex: NSInteger); message 'moveColumn:toColumn:';
    function columnWithIdentifier (identifier: NSUserInterfaceItemIdentifier): NSInteger; message 'columnWithIdentifier:';
    function tableColumnWithIdentifier (identifier: NSUserInterfaceItemIdentifier): NSTableColumn; message 'tableColumnWithIdentifier:';
    procedure tile; message 'tile';
    procedure sizeToFit; message 'sizeToFit';
    procedure sizeLastColumnToFit; message 'sizeLastColumnToFit';
    procedure scrollRowToVisible (row: NSInteger); message 'scrollRowToVisible:';
    procedure scrollColumnToVisible (column: NSInteger); message 'scrollColumnToVisible:';
    procedure reloadData; message 'reloadData';
    procedure noteNumberOfRowsChanged; message 'noteNumberOfRowsChanged';
    procedure reloadDataForRowIndexes_columnIndexes (rowIndexes: NSIndexSet; columnIndexes: NSIndexSet); message 'reloadDataForRowIndexes:columnIndexes:'; { available in macos 10.6 }
    function editedColumn: NSInteger; message 'editedColumn';
    function editedRow: NSInteger; message 'editedRow';
    function clickedColumn: NSInteger; message 'clickedColumn';
    function clickedRow: NSInteger; message 'clickedRow';
    procedure setDoubleAction(newValue: SEL); message 'setDoubleAction:';
    function doubleAction: SEL; message 'doubleAction';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setIndicatorImage_inTableColumn (image: NSImage; tableColumn: NSTableColumn); message 'setIndicatorImage:inTableColumn:';
    function indicatorImageInTableColumn (tableColumn: NSTableColumn): NSImage; message 'indicatorImageInTableColumn:';
    procedure setHighlightedTableColumn(newValue: NSTableColumn); message 'setHighlightedTableColumn:';
    function highlightedTableColumn: NSTableColumn; message 'highlightedTableColumn';
    procedure setVerticalMotionCanBeginDrag(newValue: objcbool); message 'setVerticalMotionCanBeginDrag:';
    function verticalMotionCanBeginDrag: objcbool; message 'verticalMotionCanBeginDrag';
    function canDragRowsWithIndexes_atPoint (rowIndexes: NSIndexSet; mouseDownPoint: NSPoint): objcbool; message 'canDragRowsWithIndexes:atPoint:';
    function dragImageForRowsWithIndexes_tableColumns_event_offset (dragRows: NSIndexSet; tableColumns_: NSArray; dragEvent: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'dragImageForRowsWithIndexes:tableColumns:event:offset:';
    procedure setDraggingSourceOperationMask_forLocal (mask: NSDragOperation; isLocal: objcbool); message 'setDraggingSourceOperationMask:forLocal:';
    procedure setDropRow_dropOperation (row: NSInteger; dropOperation: NSTableViewDropOperation); message 'setDropRow:dropOperation:';
    procedure setAllowsMultipleSelection(newValue: objcbool); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    procedure setAllowsEmptySelection(newValue: objcbool); message 'setAllowsEmptySelection:';
    function allowsEmptySelection: objcbool; message 'allowsEmptySelection';
    procedure setAllowsColumnSelection(newValue: objcbool); message 'setAllowsColumnSelection:';
    function allowsColumnSelection: objcbool; message 'allowsColumnSelection';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure deselectAll (sender: id); message 'deselectAll:';
    procedure selectColumnIndexes_byExtendingSelection (indexes: NSIndexSet; extend: objcbool); message 'selectColumnIndexes:byExtendingSelection:';
    procedure selectRowIndexes_byExtendingSelection (indexes: NSIndexSet; extend: objcbool); message 'selectRowIndexes:byExtendingSelection:';
    function selectedColumnIndexes: NSIndexSet; message 'selectedColumnIndexes';
    function selectedRowIndexes: NSIndexSet; message 'selectedRowIndexes';
    procedure deselectColumn (column: NSInteger); message 'deselectColumn:';
    procedure deselectRow (row: NSInteger); message 'deselectRow:';
    function selectedColumn: NSInteger; message 'selectedColumn';
    function selectedRow: NSInteger; message 'selectedRow';
    function isColumnSelected (column: NSInteger): objcbool; message 'isColumnSelected:';
    function isRowSelected (row: NSInteger): objcbool; message 'isRowSelected:';
    function numberOfSelectedColumns: NSInteger; message 'numberOfSelectedColumns';
    function numberOfSelectedRows: NSInteger; message 'numberOfSelectedRows';
    procedure setAllowsTypeSelect(newValue: objcbool); message 'setAllowsTypeSelect:'; { available in macos 10.5 }
    function allowsTypeSelect: objcbool; message 'allowsTypeSelect'; { available in macos 10.5 }
    procedure setStyle(newValue: NSTableViewStyle); message 'setStyle:'; { available in macos 11.0 }
    function style: NSTableViewStyle; message 'style'; { available in macos 11.0 }
    function effectiveStyle: NSTableViewStyle; message 'effectiveStyle'; { available in macos 11.0 }
    procedure setSelectionHighlightStyle(newValue: NSTableViewSelectionHighlightStyle); message 'setSelectionHighlightStyle:'; { available in macos 10.5 }
    function selectionHighlightStyle: NSTableViewSelectionHighlightStyle; message 'selectionHighlightStyle'; { available in macos 10.5 }
    procedure setDraggingDestinationFeedbackStyle(newValue: NSTableViewDraggingDestinationFeedbackStyle); message 'setDraggingDestinationFeedbackStyle:'; { available in macos 10.6 }
    function draggingDestinationFeedbackStyle: NSTableViewDraggingDestinationFeedbackStyle; message 'draggingDestinationFeedbackStyle'; { available in macos 10.6 }
    function rectOfColumn (column: NSInteger): NSRect; message 'rectOfColumn:';
    function rectOfRow (row: NSInteger): NSRect; message 'rectOfRow:';
    function columnIndexesInRect (rect: NSRect): NSIndexSet; message 'columnIndexesInRect:'; { available in macos 10.5 }
    function rowsInRect (rect: NSRect): NSRange; message 'rowsInRect:';
    function columnAtPoint (point: NSPoint): NSInteger; message 'columnAtPoint:';
    function rowAtPoint (point: NSPoint): NSInteger; message 'rowAtPoint:';
    function frameOfCellAtColumn_row (column: NSInteger; row: NSInteger): NSRect; message 'frameOfCellAtColumn:row:';
    procedure setAutosaveName(newValue: NSTableViewAutosaveName); message 'setAutosaveName:';
    function autosaveName: NSTableViewAutosaveName; message 'autosaveName';
    procedure setAutosaveTableColumns(newValue: objcbool); message 'setAutosaveTableColumns:';
    function autosaveTableColumns: objcbool; message 'autosaveTableColumns';
    procedure editColumn_row_withEvent_select (column: NSInteger; row: NSInteger; event: NSEvent; select: objcbool); message 'editColumn:row:withEvent:select:';
    procedure drawRow_clipRect (row: NSInteger; clipRect: NSRect); message 'drawRow:clipRect:';
    procedure highlightSelectionInClipRect (clipRect: NSRect); message 'highlightSelectionInClipRect:';
    procedure drawGridInClipRect (clipRect: NSRect); message 'drawGridInClipRect:';
    procedure drawBackgroundInClipRect (clipRect: NSRect); message 'drawBackgroundInClipRect:';
    function viewAtColumn_row_makeIfNecessary (column: NSInteger; row: NSInteger; makeIfNecessary: objcbool): NSView; message 'viewAtColumn:row:makeIfNecessary:'; { available in macos 10.7 }
    function rowViewAtRow_makeIfNecessary (row: NSInteger; makeIfNecessary: objcbool): NSTableRowView; message 'rowViewAtRow:makeIfNecessary:'; { available in macos 10.7 }
    function rowForView (view: NSView): NSInteger; message 'rowForView:'; { available in macos 10.7 }
    function columnForView (view: NSView): NSInteger; message 'columnForView:'; { available in macos 10.7 }
    function makeViewWithIdentifier_owner (identifier: NSUserInterfaceItemIdentifier; owner: id): NSView; message 'makeViewWithIdentifier:owner:'; { available in macos 10.7 }
    procedure enumerateAvailableRowViewsUsingBlock (handler: NSTableViewEnumerateAvailableRowViewsUsingBlockCallback); message 'enumerateAvailableRowViewsUsingBlock:'; { available in macos 10.7 }
    procedure setFloatsGroupRows(newValue: objcbool); message 'setFloatsGroupRows:'; { available in macos 10.7 }
    function floatsGroupRows: objcbool; message 'floatsGroupRows'; { available in macos 10.7 }
    procedure setRowActionsVisible(newValue: objcbool); message 'setRowActionsVisible:'; { available in macos 10.11 }
    function rowActionsVisible: objcbool; message 'rowActionsVisible'; { available in macos 10.11 }
    procedure beginUpdates; message 'beginUpdates'; { available in macos 10.7 }
    procedure endUpdates; message 'endUpdates'; { available in macos 10.7 }
    procedure insertRowsAtIndexes_withAnimation (indexes: NSIndexSet; animationOptions: NSTableViewAnimationOptions); message 'insertRowsAtIndexes:withAnimation:'; { available in macos 10.7 }
    procedure removeRowsAtIndexes_withAnimation (indexes: NSIndexSet; animationOptions: NSTableViewAnimationOptions); message 'removeRowsAtIndexes:withAnimation:'; { available in macos 10.7 }
    procedure moveRowAtIndex_toIndex (oldIndex: NSInteger; newIndex: NSInteger); message 'moveRowAtIndex:toIndex:'; { available in macos 10.7 }
    procedure hideRowsAtIndexes_withAnimation (indexes: NSIndexSet; rowAnimation: NSTableViewAnimationOptions); message 'hideRowsAtIndexes:withAnimation:'; { available in macos 10.11 }
    procedure unhideRowsAtIndexes_withAnimation (indexes: NSIndexSet; rowAnimation: NSTableViewAnimationOptions); message 'unhideRowsAtIndexes:withAnimation:'; { available in macos 10.11 }
    function hiddenRowIndexes: NSIndexSet; message 'hiddenRowIndexes'; { available in macos 10.11 }
    procedure registerNib_forIdentifier (nib: NSNib; identifier: NSUserInterfaceItemIdentifier); message 'registerNib:forIdentifier:'; { available in macos 10.8 }
    function registeredNibsByIdentifier: NSDictionary; message 'registeredNibsByIdentifier'; { available in macos 10.8 }
    procedure didAddRowView_forRow (rowView: NSTableRowView; row: NSInteger); message 'didAddRowView:forRow:'; { available in macos 10.7 }
    procedure didRemoveRowView_forRow (rowView: NSTableRowView; row: NSInteger); message 'didRemoveRowView:forRow:'; { available in macos 10.7 }
    procedure setUsesStaticContents(newValue: objcbool); message 'setUsesStaticContents:'; { available in macos 10.10 }
    function usesStaticContents: objcbool; message 'usesStaticContents'; { available in macos 10.10 }
    procedure setUserInterfaceLayoutDirection(newValue: NSUserInterfaceLayoutDirection); message 'setUserInterfaceLayoutDirection:'; { available in macos 10.8 }
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos 10.8 }
    procedure setUsesAutomaticRowHeights(newValue: objcbool); message 'setUsesAutomaticRowHeights:'; { available in macos 10.13 }
    function usesAutomaticRowHeights: objcbool; message 'usesAutomaticRowHeights'; { available in macos 10.13 }

    { Adopted protocols }
    function accessibilityHeaderGroup: NSString; message 'accessibilityHeaderGroup'; deprecated 'replace with accessibilityHeader';
    procedure draggingSession_endedAtPoint_operation (session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'draggingSession:endedAtPoint:operation:';
    procedure draggingSession_movedToPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:movedToPoint:';
    function draggingSession_sourceOperationMaskForDraggingContext (session: NSDraggingSession; context: NSDraggingContext): NSDragOperation; message 'draggingSession:sourceOperationMaskForDraggingContext:';
    procedure draggingSession_willBeginAtPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:willBeginAtPoint:';
    function ignoreModifierKeysForDraggingSession (session: NSDraggingSession): objcbool; message 'ignoreModifierKeysForDraggingSession:';
    procedure textDidBeginEditing (notification: NSNotification); message 'textDidBeginEditing:';
    procedure textDidChange (notification: NSNotification); message 'textDidChange:';
    procedure textDidEndEditing (notification: NSNotification); message 'textDidEndEditing:';
    function textShouldBeginEditing (textObject: NSText): objcbool; message 'textShouldBeginEditing:';
    function textShouldEndEditing (textObject: NSText): objcbool; message 'textShouldEndEditing:';
    function textView_candidates_forSelectedRange (textView: NSTextView; candidates: NSArray; selectedRange: NSRange): NSArray; message 'textView:candidates:forSelectedRange:'; { available in macos 10.12.2 }
    function textView_candidatesForSelectedRange (textView: NSTextView; selectedRange: NSRange): NSArray; message 'textView:candidatesForSelectedRange:'; { available in macos 10.12.2 }
    procedure textView_clickedOnCell_inRect (textView: NSTextView; cell: NSTextAttachmentCellProtocol; cellFrame: NSRect); message 'textView:clickedOnCell:inRect:'; deprecated 'Use -textView:clickedOnCell:inRect:atIndex: instead';
    procedure textView_clickedOnCell_inRect_atIndex (textView: NSTextView; cell: NSTextAttachmentCellProtocol; cellFrame: NSRect; charIndex: NSUInteger); message 'textView:clickedOnCell:inRect:atIndex:';
    function textView_clickedOnLink (textView: NSTextView; link: id): objcbool; message 'textView:clickedOnLink:'; deprecated 'Use -textView:clickedOnLink:atIndex: instead';
    function textView_clickedOnLink_atIndex (textView: NSTextView; link: id; charIndex: NSUInteger): objcbool; message 'textView:clickedOnLink:atIndex:';
    function textView_completions_forPartialWordRange_indexOfSelectedItem (textView: NSTextView; words: NSArray; charRange: NSRange; index: NSIntegerPtr): NSArray; message 'textView:completions:forPartialWordRange:indexOfSelectedItem:';
    function textView_didCheckTextInRange_types_options_results_orthography_wordCount (view: NSTextView; range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary; results: NSArray; orthography: NSOrthography; wordCount: NSInteger): NSArray; message 'textView:didCheckTextInRange:types:options:results:orthography:wordCount:'; { available in macos 10.6 }
    function textView_doCommandBySelector (textView: NSTextView; commandSelector: SEL): objcbool; message 'textView:doCommandBySelector:';
    procedure textView_doubleClickedOnCell_inRect (textView: NSTextView; cell: NSTextAttachmentCellProtocol; cellFrame: NSRect); message 'textView:doubleClickedOnCell:inRect:'; deprecated 'Use -textView:doubleClickedOnCell:inRect:atIndex: instead';
    procedure textView_doubleClickedOnCell_inRect_atIndex (textView: NSTextView; cell: NSTextAttachmentCellProtocol; cellFrame: NSRect; charIndex: NSUInteger); message 'textView:doubleClickedOnCell:inRect:atIndex:';
    procedure textView_draggedCell_inRect_event (view: NSTextView; cell: NSTextAttachmentCellProtocol; rect: NSRect; event: NSEvent); message 'textView:draggedCell:inRect:event:'; deprecated 'Use -textView:draggedCell:inRect:event:atIndex: instead';
    procedure textView_draggedCell_inRect_event_atIndex (view: NSTextView; cell: NSTextAttachmentCellProtocol; rect: NSRect; event: NSEvent; charIndex: NSUInteger); message 'textView:draggedCell:inRect:event:atIndex:';
    function textView_menu_forEvent_atIndex (view: NSTextView; menu: NSMenu; event: NSEvent; charIndex: NSUInteger): NSMenu; message 'textView:menu:forEvent:atIndex:'; { available in macos 10.5 }
    function textView_shouldChangeTextInRange_replacementString (textView: NSTextView; affectedCharRange: NSRange; replacementString: NSString): objcbool; message 'textView:shouldChangeTextInRange:replacementString:';
    function textView_shouldChangeTextInRanges_replacementStrings (textView: NSTextView; affectedRanges: NSArray; replacementStrings: NSArray): objcbool; message 'textView:shouldChangeTextInRanges:replacementStrings:';
    function textView_shouldChangeTypingAttributes_toAttributes (textView: NSTextView; oldTypingAttributes: NSDictionary; newTypingAttributes: NSDictionary): NSDictionary; message 'textView:shouldChangeTypingAttributes:toAttributes:';
    function textView_shouldSelectCandidateAtIndex (textView: NSTextView; index: NSUInteger): objcbool; message 'textView:shouldSelectCandidateAtIndex:'; { available in macos 10.12.2 }
    function textView_shouldSetSpellingState_range (textView: NSTextView; value: NSInteger; affectedCharRange: NSRange): NSInteger; message 'textView:shouldSetSpellingState:range:'; { available in macos 10.5 }
    function textView_shouldUpdateTouchBarItemIdentifiers (textView: NSTextView; identifiers: NSArray): NSArray; message 'textView:shouldUpdateTouchBarItemIdentifiers:'; { available in macos 10.12.2 }
    function textView_URLForContentsOfTextAttachment_atIndex (textView: NSTextView; textAttachment: NSTextAttachment; charIndex: NSUInteger): NSURL; message 'textView:URLForContentsOfTextAttachment:atIndex:'; { available in macos 10.7 }
    function textView_willChangeSelectionFromCharacterRange_toCharacterRange (textView: NSTextView; oldSelectedCharRange: NSRange; newSelectedCharRange: NSRange): NSRange; message 'textView:willChangeSelectionFromCharacterRange:toCharacterRange:';
    function textView_willChangeSelectionFromCharacterRanges_toCharacterRanges (textView: NSTextView; oldSelectedCharRanges: NSArray; newSelectedCharRanges: NSArray): NSArray; message 'textView:willChangeSelectionFromCharacterRanges:toCharacterRanges:';
    function textView_willCheckTextInRange_options_types (view: NSTextView; range: NSRange; options: NSDictionary; checkingTypes: NSTextCheckingTypesPtr): NSDictionary; message 'textView:willCheckTextInRange:options:types:'; { available in macos 10.6 }
    function textView_willDisplayToolTip_forCharacterAtIndex (textView: NSTextView; tooltip: NSString; characterIndex: NSUInteger): NSString; message 'textView:willDisplayToolTip:forCharacterAtIndex:';
    function textView_willShowSharingServicePicker_forItems (textView: NSTextView; servicePicker: NSSharingServicePicker; items: NSArray): NSSharingServicePicker; message 'textView:willShowSharingServicePicker:forItems:'; { available in macos 10.8 }
    function textView_writablePasteboardTypesForCell_atIndex (view: NSTextView; cell: NSTextAttachmentCellProtocol; charIndex: NSUInteger): NSArray; message 'textView:writablePasteboardTypesForCell:atIndex:';
    function textView_writeCell_atIndex_toPasteboard_type (view: NSTextView; cell: NSTextAttachmentCellProtocol; charIndex: NSUInteger; pboard: NSPasteboard; type_: NSPasteboardType): objcbool; message 'textView:writeCell:atIndex:toPasteboard:type:';
    procedure textViewDidChangeSelection (notification: NSNotification); message 'textViewDidChangeSelection:';
    procedure textViewDidChangeTypingAttributes (notification: NSNotification); message 'textViewDidChangeTypingAttributes:';
    function undoManagerForTextView (view: NSTextView): NSUndoManager; message 'undoManagerForTextView:';
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTableViewDelegateProtocol = objcprotocol external name 'NSTableViewDelegate' (NSControlTextEditingDelegateProtocol)
  optional
    function tableView_viewForTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): NSView; message 'tableView:viewForTableColumn:row:'; { available in macos 10.7 }
    function tableView_rowViewForRow (tableView: NSTableView; row: NSInteger): NSTableRowView; message 'tableView:rowViewForRow:'; { available in macos 10.7 }
    procedure tableView_didAddRowView_forRow (tableView: NSTableView; rowView: NSTableRowView; row: NSInteger); message 'tableView:didAddRowView:forRow:'; { available in macos 10.7 }
    procedure tableView_didRemoveRowView_forRow (tableView: NSTableView; rowView: NSTableRowView; row: NSInteger); message 'tableView:didRemoveRowView:forRow:'; { available in macos 10.7 }
    procedure tableView_willDisplayCell_forTableColumn_row (tableView: NSTableView; cell: id; tableColumn: NSTableColumn; row: NSInteger); message 'tableView:willDisplayCell:forTableColumn:row:';
    function tableView_shouldEditTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): objcbool; message 'tableView:shouldEditTableColumn:row:';
    function tableView_toolTipForCell_rect_tableColumn_row_mouseLocation (tableView: NSTableView; cell: NSCell; rect: NSRectPointer; tableColumn: NSTableColumn; row: NSInteger; mouseLocation: NSPoint): NSString; message 'tableView:toolTipForCell:rect:tableColumn:row:mouseLocation:';
    function tableView_shouldShowCellExpansionForTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): objcbool; message 'tableView:shouldShowCellExpansionForTableColumn:row:'; { available in macos 10.5 }
    function tableView_shouldTrackCell_forTableColumn_row (tableView: NSTableView; cell: NSCell; tableColumn: NSTableColumn; row: NSInteger): objcbool; message 'tableView:shouldTrackCell:forTableColumn:row:'; { available in macos 10.5 }
    function tableView_dataCellForTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): NSCell; message 'tableView:dataCellForTableColumn:row:'; { available in macos 10.5 }
    function selectionShouldChangeInTableView (tableView: NSTableView): objcbool; message 'selectionShouldChangeInTableView:';
    function tableView_shouldSelectRow (tableView: NSTableView; row: NSInteger): objcbool; message 'tableView:shouldSelectRow:';
    function tableView_selectionIndexesForProposedSelection (tableView: NSTableView; proposedSelectionIndexes: NSIndexSet): NSIndexSet; message 'tableView:selectionIndexesForProposedSelection:'; { available in macos 10.5 }
    function tableView_shouldSelectTableColumn (tableView: NSTableView; tableColumn: NSTableColumn): objcbool; message 'tableView:shouldSelectTableColumn:';
    procedure tableView_mouseDownInHeaderOfTableColumn (tableView: NSTableView; tableColumn: NSTableColumn); message 'tableView:mouseDownInHeaderOfTableColumn:';
    procedure tableView_didClickTableColumn (tableView: NSTableView; tableColumn: NSTableColumn); message 'tableView:didClickTableColumn:';
    procedure tableView_didDragTableColumn (tableView: NSTableView; tableColumn: NSTableColumn); message 'tableView:didDragTableColumn:';
    function tableView_heightOfRow (tableView: NSTableView; row: NSInteger): CGFloat; message 'tableView:heightOfRow:';
    function tableView_typeSelectStringForTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): NSString; message 'tableView:typeSelectStringForTableColumn:row:'; { available in macos 10.5 }
    function tableView_nextTypeSelectMatchFromRow_toRow_forString (tableView: NSTableView; startRow: NSInteger; endRow: NSInteger; searchString: NSString): NSInteger; message 'tableView:nextTypeSelectMatchFromRow:toRow:forString:'; { available in macos 10.5 }
    function tableView_shouldTypeSelectForEvent_withCurrentSearchString (tableView: NSTableView; event: NSEvent; searchString: NSString): objcbool; message 'tableView:shouldTypeSelectForEvent:withCurrentSearchString:'; { available in macos 10.5 }
    function tableView_isGroupRow (tableView: NSTableView; row: NSInteger): objcbool; message 'tableView:isGroupRow:'; { available in macos 10.5 }
    function tableView_sizeToFitWidthOfColumn (tableView: NSTableView; column: NSInteger): CGFloat; message 'tableView:sizeToFitWidthOfColumn:'; { available in macos 10.6 }
    function tableView_shouldReorderColumn_toColumn (tableView: NSTableView; columnIndex: NSInteger; newColumnIndex: NSInteger): objcbool; message 'tableView:shouldReorderColumn:toColumn:'; { available in macos 10.6 }
    function tableView_rowActionsForRow_edge (tableView: NSTableView; row: NSInteger; edge: NSTableRowActionEdge): NSArray; message 'tableView:rowActionsForRow:edge:'; { available in macos 10.11 }
    procedure tableViewSelectionDidChange (notification: NSNotification); message 'tableViewSelectionDidChange:';
    procedure tableViewColumnDidMove (notification: NSNotification); message 'tableViewColumnDidMove:';
    procedure tableViewColumnDidResize (notification: NSNotification); message 'tableViewColumnDidResize:';
    procedure tableViewSelectionIsChanging (notification: NSNotification); message 'tableViewSelectionIsChanging:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTableViewSelectionDidChangeNotification: NSNotificationName; cvar; external;
  NSTableViewColumnDidMoveNotification: NSNotificationName; cvar; external;
  NSTableViewColumnDidResizeNotification: NSNotificationName; cvar; external;
  NSTableViewSelectionIsChangingNotification: NSNotificationName; cvar; external;
  NSTableViewRowViewKey: NSUserInterfaceItemIdentifier { available in macos 10.7 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTableViewDataSourceProtocol = objcprotocol external name 'NSTableViewDataSource' (NSObjectProtocol)
  optional
    function numberOfRowsInTableView (tableView: NSTableView): NSInteger; message 'numberOfRowsInTableView:';
    function tableView_objectValueForTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): id; message 'tableView:objectValueForTableColumn:row:';
    procedure tableView_setObjectValue_forTableColumn_row (tableView: NSTableView; object_: id; tableColumn: NSTableColumn; row: NSInteger); message 'tableView:setObjectValue:forTableColumn:row:';
    procedure tableView_sortDescriptorsDidChange (tableView: NSTableView; oldDescriptors: NSArray); message 'tableView:sortDescriptorsDidChange:';
    function tableView_pasteboardWriterForRow (tableView: NSTableView; row: NSInteger): id; message 'tableView:pasteboardWriterForRow:'; { available in macos 10.7 }
    procedure tableView_draggingSession_willBeginAtPoint_forRowIndexes (tableView: NSTableView; session: NSDraggingSession; screenPoint: NSPoint; rowIndexes: NSIndexSet); message 'tableView:draggingSession:willBeginAtPoint:forRowIndexes:'; { available in macos 10.7 }
    procedure tableView_draggingSession_endedAtPoint_operation (tableView: NSTableView; session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'tableView:draggingSession:endedAtPoint:operation:'; { available in macos 10.7 }
    procedure tableView_updateDraggingItemsForDrag (tableView: NSTableView; draggingInfo: NSDraggingInfoProtocol); message 'tableView:updateDraggingItemsForDrag:'; { available in macos 10.7 }
    function tableView_writeRowsWithIndexes_toPasteboard (tableView: NSTableView; rowIndexes: NSIndexSet; pboard: NSPasteboard): objcbool; message 'tableView:writeRowsWithIndexes:toPasteboard:'; deprecated 'Use -tableView:pasteboardWriterForRow: instead';
    function tableView_validateDrop_proposedRow_proposedDropOperation (tableView: NSTableView; info: NSDraggingInfoProtocol; row: NSInteger; dropOperation: NSTableViewDropOperation): NSDragOperation; message 'tableView:validateDrop:proposedRow:proposedDropOperation:';
    function tableView_acceptDrop_row_dropOperation (tableView: NSTableView; info: NSDraggingInfoProtocol; row: NSInteger; dropOperation: NSTableViewDropOperation): objcbool; message 'tableView:acceptDrop:row:dropOperation:';
    function tableView_namesOfPromisedFilesDroppedAtDestination_forDraggedRowsWithIndexes (tableView: NSTableView; dropDestination: NSURL; indexSet: NSIndexSet): NSArray; message 'tableView:namesOfPromisedFilesDroppedAtDestination:forDraggedRowsWithIndexes:'; deprecated 'Use NSFilePromiseReceiver objects instead';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTableViewDataSourceDeprecated = objccategory external (NSObject)
    function tableView_writeRows_toPasteboard (tableView: NSTableView; rows: NSArray; pboard: NSPasteboard): objcbool; message 'tableView:writeRows:toPasteboard:'; deprecated;
  end;

type
  NSTableView_NSDeprecated = objccategory external name 'NSDeprecated' (NSTableView)
    procedure setDrawsGrid (flag: objcbool); message 'setDrawsGrid:'; deprecated;
    function drawsGrid: objcbool; message 'drawsGrid'; deprecated;
    procedure selectColumn_byExtendingSelection (column: NSInteger; extend: objcbool); message 'selectColumn:byExtendingSelection:'; deprecated;
    procedure selectRow_byExtendingSelection (row: NSInteger; extend: objcbool); message 'selectRow:byExtendingSelection:'; deprecated;
    function selectedColumnEnumerator: NSEnumerator; message 'selectedColumnEnumerator'; deprecated;
    function selectedRowEnumerator: NSEnumerator; message 'selectedRowEnumerator'; deprecated;
    function dragImageForRows_event_dragImageOffset (dragRows: NSArray; dragEvent: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'dragImageForRows:event:dragImageOffset:'; deprecated;
    procedure setAutoresizesAllColumnsToFit (flag: objcbool); message 'setAutoresizesAllColumnsToFit:'; deprecated;
    function autoresizesAllColumnsToFit: objcbool; message 'autoresizesAllColumnsToFit'; deprecated;
    function columnsInRect (rect: NSRect): NSRange; message 'columnsInRect:'; deprecated;
    function preparedCellAtColumn_row (column: NSInteger; row: NSInteger): NSCell; message 'preparedCellAtColumn:row:'; deprecated 'Use View Based TableView and -viewAtColumn:row:';
    function textShouldBeginEditing (textObject: NSText): objcbool; message 'textShouldBeginEditing:'; deprecated 'Use a View Based TableView with an NSTextField';
    function textShouldEndEditing (textObject: NSText): objcbool; message 'textShouldEndEditing:'; deprecated 'Use a View Based TableView with an NSTextField';
    procedure textDidBeginEditing (notification: NSNotification); message 'textDidBeginEditing:'; deprecated 'Use a View Based TableView with an NSTextField';
    procedure textDidEndEditing (notification: NSNotification); message 'textDidEndEditing:'; deprecated 'Use a View Based TableView with an NSTextField';
    procedure textDidChange (notification: NSNotification); message 'textDidChange:'; deprecated 'Use a View Based TableView with an NSTextField';
    function shouldFocusCell_atColumn_row (cell: NSCell; column: NSInteger; row: NSInteger): objcbool; message 'shouldFocusCell:atColumn:row:'; deprecated 'Use a View Based TableView; observe the window’s firstResponder for focus change notifications';
    function focusedColumn: NSInteger; message 'focusedColumn'; deprecated 'Use a View Based TableView and observe the window.firstResponder';
    procedure setFocusedColumn (focusedColumn_: NSInteger); message 'setFocusedColumn:'; deprecated 'Use a View Based TableView; make a particular view the first responder with [window makeFirstResponder:view] to focus it.';
    procedure performClickOnCellAtColumn_row (column: NSInteger; row: NSInteger); message 'performClickOnCellAtColumn:row:'; deprecated 'Use a View Based TableView; directly interact with a particular view as required and call -performClick: on it, if necessary';
  end;
{$endif}

