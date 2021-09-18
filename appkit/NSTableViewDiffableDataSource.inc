{ Parsed from AppKit.framework NSTableViewDiffableDataSource.h }

{ Types from NSTableViewDiffableDataSource }
{$ifdef TYPES}

type
  NSTableViewDiffableDataSourceCellProvider = reference to function (tableView: NSTableView; column: NSTableColumn; row: NSInteger; itemId: id): NSView; cblock; cdecl;

type
  NSTableViewDiffableDataSourceRowProvider = reference to function (tableView: NSTableView; row: NSInteger; identifier: id): NSTableRowView; cblock; cdecl;

type
  NSTableViewDiffableDataSourceSectionHeaderViewProvider = reference to function (tableView: NSTableView; row: NSInteger; sectionId: id): NSView; cblock; cdecl;
{$endif}


{$ifdef CALLBACKS}
type
  NSTableViewDiffableDataSourceApplySnapshotCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSTableViewDiffableDataSourcePtr = ^NSTableViewDiffableDataSource;
{$endif}

{$ifdef CLASSES}

type
  NSTableViewDiffableDataSource = objcclass external (NSObject, NSTableViewDataSourceProtocol)
  public
    function initWithTableView_cellProvider (tableView: NSTableView; cellProvider: NSTableViewDiffableDataSourceCellProvider): id; message 'initWithTableView:cellProvider:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function snapshot: NSDiffableDataSourceSnapshot; message 'snapshot';
    procedure applySnapshot_animatingDifferences (snapshot_: NSDiffableDataSourceSnapshot; animatingDifferences: objcbool); message 'applySnapshot:animatingDifferences:';
    procedure applySnapshot_animatingDifferences_completion (snapshot_: NSDiffableDataSourceSnapshot; animatingDifferences: objcbool; completion: NSTableViewDiffableDataSourceApplySnapshotCallback); message 'applySnapshot:animatingDifferences:completion:';
    function itemIdentifierForRow (row: NSInteger): id; message 'itemIdentifierForRow:';
    function rowForItemIdentifier (identifier: id): NSInteger; message 'rowForItemIdentifier:';
    function sectionIdentifierForRow (row: NSInteger): id; message 'sectionIdentifierForRow:';
    function rowForSectionIdentifier (identifier: id): NSInteger; message 'rowForSectionIdentifier:';
    procedure setRowViewProvider(newValue: NSTableViewDiffableDataSourceRowProvider); message 'setRowViewProvider:';
    function rowViewProvider: NSTableViewDiffableDataSourceRowProvider; message 'rowViewProvider';
    procedure setSectionHeaderViewProvider(newValue: NSTableViewDiffableDataSourceSectionHeaderViewProvider); message 'setSectionHeaderViewProvider:';
    function sectionHeaderViewProvider: NSTableViewDiffableDataSourceSectionHeaderViewProvider; message 'sectionHeaderViewProvider';
    procedure setDefaultRowAnimation(newValue: NSTableViewAnimationOptions); message 'setDefaultRowAnimation:';
    function defaultRowAnimation: NSTableViewAnimationOptions; message 'defaultRowAnimation';

    { Adopted protocols }
    function numberOfRowsInTableView (tableView: NSTableView): NSInteger; message 'numberOfRowsInTableView:';
    function tableView_acceptDrop_row_dropOperation (tableView: NSTableView; info: NSDraggingInfoProtocol; row: NSInteger; dropOperation: NSTableViewDropOperation): objcbool; message 'tableView:acceptDrop:row:dropOperation:';
    procedure tableView_draggingSession_endedAtPoint_operation (tableView: NSTableView; session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'tableView:draggingSession:endedAtPoint:operation:'; { available in macos  }
    procedure tableView_draggingSession_willBeginAtPoint_forRowIndexes (tableView: NSTableView; session: NSDraggingSession; screenPoint: NSPoint; rowIndexes: NSIndexSet); message 'tableView:draggingSession:willBeginAtPoint:forRowIndexes:'; { available in macos  }
    function tableView_namesOfPromisedFilesDroppedAtDestination_forDraggedRowsWithIndexes (tableView: NSTableView; dropDestination: NSURL; indexSet: NSIndexSet): NSArray; message 'tableView:namesOfPromisedFilesDroppedAtDestination:forDraggedRowsWithIndexes:'; deprecated 'Use NSFilePromiseReceiver objects instead';
    function tableView_objectValueForTableColumn_row (tableView: NSTableView; tableColumn: NSTableColumn; row: NSInteger): id; message 'tableView:objectValueForTableColumn:row:';
    function tableView_pasteboardWriterForRow (tableView: NSTableView; row: NSInteger): id; message 'tableView:pasteboardWriterForRow:'; { available in macos  }
    procedure tableView_setObjectValue_forTableColumn_row (tableView: NSTableView; object_: id; tableColumn: NSTableColumn; row: NSInteger); message 'tableView:setObjectValue:forTableColumn:row:';
    procedure tableView_sortDescriptorsDidChange (tableView: NSTableView; oldDescriptors: NSArray); message 'tableView:sortDescriptorsDidChange:';
    procedure tableView_updateDraggingItemsForDrag (tableView: NSTableView; draggingInfo: NSDraggingInfoProtocol); message 'tableView:updateDraggingItemsForDrag:'; { available in macos  }
    function tableView_validateDrop_proposedRow_proposedDropOperation (tableView: NSTableView; info: NSDraggingInfoProtocol; row: NSInteger; dropOperation: NSTableViewDropOperation): NSDragOperation; message 'tableView:validateDrop:proposedRow:proposedDropOperation:';
    function tableView_writeRowsWithIndexes_toPasteboard (tableView: NSTableView; rowIndexes: NSIndexSet; pboard: NSPasteboard): objcbool; message 'tableView:writeRowsWithIndexes:toPasteboard:'; deprecated 'Use -tableView:pasteboardWriterForRow: instead';
  end;
{$endif}

