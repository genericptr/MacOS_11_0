{ Parsed from AppKit.framework NSOutlineView.h }

{$ifdef TYPES}
type
  NSOutlineViewPtr = ^NSOutlineView;
  NSOutlineViewDataSourceProtocolPtr = ^NSOutlineViewDataSourceProtocol;
  NSOutlineViewDelegateProtocolPtr = ^NSOutlineViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  NSOutlineViewDropOnItemIndex = -1;
{$endif}

{$ifdef CLASSES}

type
  NSOutlineView = objcclass external (NSTableView, NSAccessibilityOutlineProtocol)
  public
    procedure setDelegate(newValue: NSOutlineViewDelegateProtocol); message 'setDelegate:';
    function delegate: NSOutlineViewDelegateProtocol; message 'delegate';
    procedure setDataSource(newValue: NSOutlineViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: NSOutlineViewDataSourceProtocol; message 'dataSource';
    procedure setOutlineTableColumn(newValue: NSTableColumn); message 'setOutlineTableColumn:';
    function outlineTableColumn: NSTableColumn; message 'outlineTableColumn';
    function isExpandable (item: id): objcbool; message 'isExpandable:';
    function numberOfChildrenOfItem (item: id): NSInteger; message 'numberOfChildrenOfItem:'; { available in macos  }
    function child_ofItem (index: NSInteger; item: id): id; message 'child:ofItem:'; { available in macos  }
    procedure expandItem_expandChildren (item: id; expandChildren: objcbool); message 'expandItem:expandChildren:';
    procedure expandItem (item: id); message 'expandItem:';
    procedure collapseItem_collapseChildren (item: id; collapseChildren: objcbool); message 'collapseItem:collapseChildren:';
    procedure collapseItem (item: id); message 'collapseItem:';
    procedure reloadItem_reloadChildren (item: id; reloadChildren: objcbool); message 'reloadItem:reloadChildren:';
    procedure reloadItem (item: id); message 'reloadItem:';
    function parentForItem (item: id): id; message 'parentForItem:';
    function childIndexForItem (item: id): NSInteger; message 'childIndexForItem:'; { available in macos  }
    function itemAtRow (row: NSInteger): id; message 'itemAtRow:';
    function rowForItem (item: id): NSInteger; message 'rowForItem:';
    function levelForItem (item: id): NSInteger; message 'levelForItem:';
    function levelForRow (row: NSInteger): NSInteger; message 'levelForRow:';
    function isItemExpanded (item: id): objcbool; message 'isItemExpanded:';
    procedure setIndentationPerLevel(newValue: CGFloat); message 'setIndentationPerLevel:';
    function indentationPerLevel: CGFloat; message 'indentationPerLevel';
    procedure setIndentationMarkerFollowsCell(newValue: objcbool); message 'setIndentationMarkerFollowsCell:';
    function indentationMarkerFollowsCell: objcbool; message 'indentationMarkerFollowsCell';
    procedure setAutoresizesOutlineColumn(newValue: objcbool); message 'setAutoresizesOutlineColumn:';
    function autoresizesOutlineColumn: objcbool; message 'autoresizesOutlineColumn';
    function frameOfOutlineCellAtRow (row: NSInteger): NSRect; message 'frameOfOutlineCellAtRow:'; { available in macos  }
    procedure setDropItem_dropChildIndex (item: id; index: NSInteger); message 'setDropItem:dropChildIndex:';
    function shouldCollapseAutoExpandedItemsForDeposited (deposited: objcbool): objcbool; message 'shouldCollapseAutoExpandedItemsForDeposited:';
    procedure setAutosaveExpandedItems(newValue: objcbool); message 'setAutosaveExpandedItems:';
    function autosaveExpandedItems: objcbool; message 'autosaveExpandedItems';
    procedure insertItemsAtIndexes_inParent_withAnimation (indexes: NSIndexSet; parent: id; animationOptions: NSTableViewAnimationOptions); message 'insertItemsAtIndexes:inParent:withAnimation:'; { available in macos  }
    procedure removeItemsAtIndexes_inParent_withAnimation (indexes: NSIndexSet; parent: id; animationOptions: NSTableViewAnimationOptions); message 'removeItemsAtIndexes:inParent:withAnimation:'; { available in macos  }
    procedure moveItemAtIndex_inParent_toIndex_inParent (fromIndex: NSInteger; oldParent: id; toIndex: NSInteger; newParent: id); message 'moveItemAtIndex:inParent:toIndex:inParent:'; { available in macos  }
    procedure insertRowsAtIndexes_withAnimation (indexes: NSIndexSet; animationOptions: NSTableViewAnimationOptions); message 'insertRowsAtIndexes:withAnimation:';
    procedure removeRowsAtIndexes_withAnimation (indexes: NSIndexSet; animationOptions: NSTableViewAnimationOptions); message 'removeRowsAtIndexes:withAnimation:';
    procedure moveRowAtIndex_toIndex (oldIndex: NSInteger; newIndex: NSInteger); message 'moveRowAtIndex:toIndex:';
    procedure setUserInterfaceLayoutDirection(newValue: NSUserInterfaceLayoutDirection); message 'setUserInterfaceLayoutDirection:'; { available in macos  }
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos  }
    procedure setStronglyReferencesItems(newValue: objcbool); message 'setStronglyReferencesItems:'; { available in macos  }
    function stronglyReferencesItems: objcbool; message 'stronglyReferencesItems'; { available in macos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSOutlineViewDataSourceProtocol = objcprotocol external name 'NSOutlineViewDataSource' (NSObjectProtocol)
  optional
    function outlineView_numberOfChildrenOfItem (outlineView: NSOutlineView; item: id): NSInteger; message 'outlineView:numberOfChildrenOfItem:';
    function outlineView_child_ofItem (outlineView: NSOutlineView; index: NSInteger; item: id): id; message 'outlineView:child:ofItem:';
    function outlineView_isItemExpandable (outlineView: NSOutlineView; item: id): objcbool; message 'outlineView:isItemExpandable:';
    function outlineView_objectValueForTableColumn_byItem (outlineView: NSOutlineView; tableColumn: NSTableColumn; item: id): id; message 'outlineView:objectValueForTableColumn:byItem:';
    procedure outlineView_setObjectValue_forTableColumn_byItem (outlineView: NSOutlineView; object_: id; tableColumn: NSTableColumn; item: id); message 'outlineView:setObjectValue:forTableColumn:byItem:';
    function outlineView_itemForPersistentObject (outlineView: NSOutlineView; object_: id): id; message 'outlineView:itemForPersistentObject:';
    function outlineView_persistentObjectForItem (outlineView: NSOutlineView; item: id): id; message 'outlineView:persistentObjectForItem:';
    procedure outlineView_sortDescriptorsDidChange (outlineView: NSOutlineView; oldDescriptors: NSArray); message 'outlineView:sortDescriptorsDidChange:';
    function outlineView_pasteboardWriterForItem (outlineView: NSOutlineView; item: id): id; message 'outlineView:pasteboardWriterForItem:'; { available in macos  }
    procedure outlineView_draggingSession_willBeginAtPoint_forItems (outlineView: NSOutlineView; session: NSDraggingSession; screenPoint: NSPoint; draggedItems: NSArray); message 'outlineView:draggingSession:willBeginAtPoint:forItems:'; { available in macos  }
    procedure outlineView_draggingSession_endedAtPoint_operation (outlineView: NSOutlineView; session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'outlineView:draggingSession:endedAtPoint:operation:'; { available in macos  }
    function outlineView_writeItems_toPasteboard (outlineView: NSOutlineView; items: NSArray; pasteboard: NSPasteboard): objcbool; message 'outlineView:writeItems:toPasteboard:'; deprecated 'Use -outlineView:pasteboardWriterForItem: instead';
    procedure outlineView_updateDraggingItemsForDrag (outlineView: NSOutlineView; draggingInfo: NSDraggingInfoProtocol); message 'outlineView:updateDraggingItemsForDrag:'; { available in macos  }
    function outlineView_validateDrop_proposedItem_proposedChildIndex (outlineView: NSOutlineView; info: NSDraggingInfoProtocol; item: id; index: NSInteger): NSDragOperation; message 'outlineView:validateDrop:proposedItem:proposedChildIndex:';
    function outlineView_acceptDrop_item_childIndex (outlineView: NSOutlineView; info: NSDraggingInfoProtocol; item: id; index: NSInteger): objcbool; message 'outlineView:acceptDrop:item:childIndex:';
    function outlineView_namesOfPromisedFilesDroppedAtDestination_forDraggedItems (outlineView: NSOutlineView; dropDestination: NSURL; items: NSArray): NSArray; message 'outlineView:namesOfPromisedFilesDroppedAtDestination:forDraggedItems:'; deprecated 'Use NSFilePromiseReceiver objects instead';
  end;

type
  NSOutlineViewDelegateProtocol = objcprotocol external name 'NSOutlineViewDelegate' (NSControlTextEditingDelegateProtocol)
  optional
    function outlineView_viewForTableColumn_item (outlineView: NSOutlineView; tableColumn: NSTableColumn; item: id): NSView; message 'outlineView:viewForTableColumn:item:'; { available in macos  }
    function outlineView_rowViewForItem (outlineView: NSOutlineView; item: id): NSTableRowView; message 'outlineView:rowViewForItem:'; { available in macos  }
    procedure outlineView_didAddRowView_forRow (outlineView: NSOutlineView; rowView: NSTableRowView; row: NSInteger); message 'outlineView:didAddRowView:forRow:'; { available in macos  }
    procedure outlineView_didRemoveRowView_forRow (outlineView: NSOutlineView; rowView: NSTableRowView; row: NSInteger); message 'outlineView:didRemoveRowView:forRow:'; { available in macos  }
    procedure outlineView_willDisplayCell_forTableColumn_item (outlineView: NSOutlineView; cell: id; tableColumn: NSTableColumn; item: id); message 'outlineView:willDisplayCell:forTableColumn:item:';
    function outlineView_shouldEditTableColumn_item (outlineView: NSOutlineView; tableColumn: NSTableColumn; item: id): objcbool; message 'outlineView:shouldEditTableColumn:item:';
    function selectionShouldChangeInOutlineView (outlineView: NSOutlineView): objcbool; message 'selectionShouldChangeInOutlineView:';
    function outlineView_shouldSelectItem (outlineView: NSOutlineView; item: id): objcbool; message 'outlineView:shouldSelectItem:';
    function outlineView_selectionIndexesForProposedSelection (outlineView: NSOutlineView; proposedSelectionIndexes: NSIndexSet): NSIndexSet; message 'outlineView:selectionIndexesForProposedSelection:'; { available in macos  }
    function outlineView_shouldSelectTableColumn (outlineView: NSOutlineView; tableColumn: NSTableColumn): objcbool; message 'outlineView:shouldSelectTableColumn:';
    procedure outlineView_mouseDownInHeaderOfTableColumn (outlineView: NSOutlineView; tableColumn: NSTableColumn); message 'outlineView:mouseDownInHeaderOfTableColumn:';
    procedure outlineView_didClickTableColumn (outlineView: NSOutlineView; tableColumn: NSTableColumn); message 'outlineView:didClickTableColumn:';
    procedure outlineView_didDragTableColumn (outlineView: NSOutlineView; tableColumn: NSTableColumn); message 'outlineView:didDragTableColumn:';
    function outlineView_toolTipForCell_rect_tableColumn_item_mouseLocation (outlineView: NSOutlineView; cell: NSCell; rect: NSRectPointer; tableColumn: NSTableColumn; item: id; mouseLocation: NSPoint): NSString; message 'outlineView:toolTipForCell:rect:tableColumn:item:mouseLocation:';
    function outlineView_heightOfRowByItem (outlineView: NSOutlineView; item: id): CGFloat; message 'outlineView:heightOfRowByItem:';
    function outlineView_tintConfigurationForItem (outlineView: NSOutlineView; item: id): NSTintConfiguration; message 'outlineView:tintConfigurationForItem:'; { available in macos  }
    function outlineView_typeSelectStringForTableColumn_item (outlineView: NSOutlineView; tableColumn: NSTableColumn; item: id): NSString; message 'outlineView:typeSelectStringForTableColumn:item:'; { available in macos  }
    function outlineView_nextTypeSelectMatchFromItem_toItem_forString (outlineView: NSOutlineView; startItem: id; endItem: id; searchString: NSString): id; message 'outlineView:nextTypeSelectMatchFromItem:toItem:forString:'; { available in macos  }
    function outlineView_shouldTypeSelectForEvent_withCurrentSearchString (outlineView: NSOutlineView; event: NSEvent; searchString: NSString): objcbool; message 'outlineView:shouldTypeSelectForEvent:withCurrentSearchString:'; { available in macos  }
    function outlineView_shouldShowCellExpansionForTableColumn_item (outlineView: NSOutlineView; tableColumn: NSTableColumn; item: id): objcbool; message 'outlineView:shouldShowCellExpansionForTableColumn:item:'; { available in macos  }
    function outlineView_shouldTrackCell_forTableColumn_item (outlineView: NSOutlineView; cell: NSCell; tableColumn: NSTableColumn; item: id): objcbool; message 'outlineView:shouldTrackCell:forTableColumn:item:'; { available in macos  }
    function outlineView_dataCellForTableColumn_item (outlineView: NSOutlineView; tableColumn: NSTableColumn; item: id): NSCell; message 'outlineView:dataCellForTableColumn:item:'; { available in macos  }
    function outlineView_isGroupItem (outlineView: NSOutlineView; item: id): objcbool; message 'outlineView:isGroupItem:'; { available in macos  }
    function outlineView_shouldExpandItem (outlineView: NSOutlineView; item: id): objcbool; message 'outlineView:shouldExpandItem:';
    function outlineView_shouldCollapseItem (outlineView: NSOutlineView; item: id): objcbool; message 'outlineView:shouldCollapseItem:';
    procedure outlineView_willDisplayOutlineCell_forTableColumn_item (outlineView: NSOutlineView; cell: id; tableColumn: NSTableColumn; item: id); message 'outlineView:willDisplayOutlineCell:forTableColumn:item:';
    function outlineView_sizeToFitWidthOfColumn (outlineView: NSOutlineView; column: NSInteger): CGFloat; message 'outlineView:sizeToFitWidthOfColumn:'; { available in macos  }
    function outlineView_shouldReorderColumn_toColumn (outlineView: NSOutlineView; columnIndex: NSInteger; newColumnIndex: NSInteger): objcbool; message 'outlineView:shouldReorderColumn:toColumn:'; { available in macos  }
    function outlineView_shouldShowOutlineCellForItem (outlineView: NSOutlineView; item: id): objcbool; message 'outlineView:shouldShowOutlineCellForItem:'; { available in macos  }
    procedure outlineViewSelectionDidChange (notification: NSNotification); message 'outlineViewSelectionDidChange:';
    procedure outlineViewColumnDidMove (notification: NSNotification); message 'outlineViewColumnDidMove:';
    procedure outlineViewColumnDidResize (notification: NSNotification); message 'outlineViewColumnDidResize:';
    procedure outlineViewSelectionIsChanging (notification: NSNotification); message 'outlineViewSelectionIsChanging:';
    procedure outlineViewItemWillExpand (notification: NSNotification); message 'outlineViewItemWillExpand:';
    procedure outlineViewItemDidExpand (notification: NSNotification); message 'outlineViewItemDidExpand:';
    procedure outlineViewItemWillCollapse (notification: NSNotification); message 'outlineViewItemWillCollapse:';
    procedure outlineViewItemDidCollapse (notification: NSNotification); message 'outlineViewItemDidCollapse:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSOutlineViewDisclosureButtonKey: NSUserInterfaceItemIdentifier { available in macos  }; cvar; external;
  NSOutlineViewShowHideButtonKey: NSUserInterfaceItemIdentifier { available in macos  }; cvar; external;
  NSOutlineViewSelectionDidChangeNotification: NSNotificationName; cvar; external;
  NSOutlineViewColumnDidMoveNotification: NSNotificationName; cvar; external;
  NSOutlineViewColumnDidResizeNotification: NSNotificationName; cvar; external;
  NSOutlineViewSelectionIsChangingNotification: NSNotificationName; cvar; external;
  NSOutlineViewItemWillExpandNotification: NSNotificationName; cvar; external;
  NSOutlineViewItemDidExpandNotification: NSNotificationName; cvar; external;
  NSOutlineViewItemWillCollapseNotification: NSNotificationName; cvar; external;
  NSOutlineViewItemDidCollapseNotification: NSNotificationName; cvar; external;
{$endif}

