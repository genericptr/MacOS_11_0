{ Parsed from AppKit.framework NSCollectionView.h }

{$ifdef CALLBACKS}
type
  NSCollectionViewPerformBatchUpdatesCallback = reference to procedure; cblock; cdecl;
  NSCollectionViewEnumerateIndexPathsWithOptionsCallback = reference to procedure (indexPath: NSIndexPath; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSCollectionViewItemPtr = ^NSCollectionViewItem;
  NSCollectionViewPtr = ^NSCollectionView;
  NSCollectionViewElementProtocolPtr = ^NSCollectionViewElementProtocol;
  NSCollectionViewSectionHeaderViewProtocolPtr = ^NSCollectionViewSectionHeaderViewProtocol;
  NSCollectionViewDataSourceProtocolPtr = ^NSCollectionViewDataSourceProtocol;
  NSCollectionViewPrefetchingProtocolPtr = ^NSCollectionViewPrefetchingProtocol;
  NSCollectionViewDelegateProtocolPtr = ^NSCollectionViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSCollectionViewDropOperation = NSInteger;
  NSCollectionViewDropOperationPtr = ^NSCollectionViewDropOperation;

const
  NSCollectionViewDropOn = 0;
  NSCollectionViewDropBefore = 1;

type
  NSCollectionViewItemHighlightState = NSInteger;
  NSCollectionViewItemHighlightStatePtr = ^NSCollectionViewItemHighlightState;

const
  NSCollectionViewItemHighlightNone = 0;
  NSCollectionViewItemHighlightForSelection = 1;
  NSCollectionViewItemHighlightForDeselection = 2;
  NSCollectionViewItemHighlightAsDropTarget = 3;

type
  NSCollectionViewScrollPosition = NSUInteger;
  NSCollectionViewScrollPositionPtr = ^NSCollectionViewScrollPosition;

const
  NSCollectionViewScrollPositionNone = 0;
  NSCollectionViewScrollPositionTop = 1 shl 0;
  NSCollectionViewScrollPositionCenteredVertically = 1 shl 1;
  NSCollectionViewScrollPositionBottom = 1 shl 2;
  NSCollectionViewScrollPositionNearestHorizontalEdge = 1 shl 9;
  NSCollectionViewScrollPositionLeft = 1 shl 3;
  NSCollectionViewScrollPositionCenteredHorizontally = 1 shl 4;
  NSCollectionViewScrollPositionRight = 1 shl 5;
  NSCollectionViewScrollPositionLeadingEdge = 1 shl 6;
  NSCollectionViewScrollPositionTrailingEdge = 1 shl 7;
  NSCollectionViewScrollPositionNearestVerticalEdge = 1 shl 8;

type
  NSCollectionViewSupplementaryElementKind = NSString;
  NSCollectionViewSupplementaryElementKindPtr = ^NSCollectionViewSupplementaryElementKind;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCollectionViewElementProtocol = objcprotocol external name 'NSCollectionViewElement' (NSObjectProtocol, NSUserInterfaceItemIdentificationProtocol)
  optional
    procedure prepareForReuse; message 'prepareForReuse'; { available in macos 10.11 }
    procedure applyLayoutAttributes (layoutAttributes: NSCollectionViewLayoutAttributes); message 'applyLayoutAttributes:'; { available in macos 10.11 }
    procedure willTransitionFromLayout_toLayout (oldLayout: NSCollectionViewLayout; newLayout: NSCollectionViewLayout); message 'willTransitionFromLayout:toLayout:'; { available in macos 10.11 }
    procedure didTransitionFromLayout_toLayout (oldLayout: NSCollectionViewLayout; newLayout: NSCollectionViewLayout); message 'didTransitionFromLayout:toLayout:'; { available in macos 10.11 }
    function preferredLayoutAttributesFittingAttributes (layoutAttributes: NSCollectionViewLayoutAttributes): NSCollectionViewLayoutAttributes; message 'preferredLayoutAttributesFittingAttributes:'; { available in macos 10.11 }
  end;

type
  NSCollectionViewSectionHeaderViewProtocol = objcprotocol external name 'NSCollectionViewSectionHeaderView' (NSCollectionViewElementProtocol)
  optional
    procedure setSectionCollapseButton(newValue: NSButton); message 'setSectionCollapseButton:'; { available in macos 10.12 }
    function sectionCollapseButton: NSButton; message 'sectionCollapseButton'; { available in macos 10.12 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewItem = objcclass external (NSViewController, NSCopyingProtocol, NSCollectionViewElementProtocol)
  public
    function collectionView: NSCollectionView; message 'collectionView';
    procedure setSelected(newValue: objcbool); message 'setSelected:';
    function isSelected: objcbool; message 'isSelected';
    procedure setHighlightState(newValue: NSCollectionViewItemHighlightState); message 'setHighlightState:'; { available in macos 10.11 }
    function highlightState: NSCollectionViewItemHighlightState; message 'highlightState'; { available in macos 10.11 }
    procedure setImageView(newValue: NSImageView); message 'setImageView:'; { available in macos 10.7 }
    function imageView: NSImageView; message 'imageView'; { available in macos 10.7 }
    procedure setTextField(newValue: NSTextField); message 'setTextField:'; { available in macos 10.7 }
    function textField: NSTextField; message 'textField'; { available in macos 10.7 }
    function draggingImageComponents: NSArray; message 'draggingImageComponents'; { available in macos 10.7 }

    { Adopted protocols }
    procedure applyLayoutAttributes (layoutAttributes: NSCollectionViewLayoutAttributes); message 'applyLayoutAttributes:'; { available in macos 10.11 }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure didTransitionFromLayout_toLayout (oldLayout: NSCollectionViewLayout; newLayout: NSCollectionViewLayout); message 'didTransitionFromLayout:toLayout:'; { available in macos 10.11 }
    function preferredLayoutAttributesFittingAttributes (layoutAttributes: NSCollectionViewLayoutAttributes): NSCollectionViewLayoutAttributes; message 'preferredLayoutAttributesFittingAttributes:'; { available in macos 10.11 }
    procedure prepareForReuse; message 'prepareForReuse'; { available in macos 10.11 }
    procedure willTransitionFromLayout_toLayout (oldLayout: NSCollectionViewLayout; newLayout: NSCollectionViewLayout); message 'willTransitionFromLayout:toLayout:'; { available in macos 10.11 }
  end;

type
  NSCollectionView = objcclass external (NSView, NSDraggingSourceProtocol, NSDraggingDestinationProtocol)
  public
    procedure setDataSource(newValue: NSCollectionViewDataSourceProtocol); message 'setDataSource:'; { available in macos 10.11 }
    function dataSource: NSCollectionViewDataSourceProtocol; message 'dataSource'; { available in macos 10.11 }
    procedure setPrefetchDataSource(newValue: NSCollectionViewPrefetchingProtocol); message 'setPrefetchDataSource:'; { available in macos 10.13 }
    function prefetchDataSource: NSCollectionViewPrefetchingProtocol; message 'prefetchDataSource'; { available in macos 10.13 }
    procedure setContent(newValue: NSArray); message 'setContent:';
    function content: NSArray; message 'content';
    procedure reloadData; message 'reloadData'; { available in macos 10.11 }
    procedure setDelegate(newValue: NSCollectionViewDelegateProtocol); message 'setDelegate:';
    function delegate: NSCollectionViewDelegateProtocol; message 'delegate';
    procedure setBackgroundView(newValue: NSView); message 'setBackgroundView:'; { available in macos 10.11 }
    function backgroundView: NSView; message 'backgroundView'; { available in macos 10.11 }
    procedure setBackgroundViewScrollsWithContent(newValue: objcbool); message 'setBackgroundViewScrollsWithContent:'; { available in macos 10.12 }
    function backgroundViewScrollsWithContent: objcbool; message 'backgroundViewScrollsWithContent'; { available in macos 10.12 }
    procedure setCollectionViewLayout(newValue: NSCollectionViewLayout); message 'setCollectionViewLayout:'; { available in macos 10.11 }
    function collectionViewLayout: NSCollectionViewLayout; message 'collectionViewLayout'; { available in macos 10.11 }
    function layoutAttributesForItemAtIndexPath (indexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'layoutAttributesForItemAtIndexPath:'; { available in macos 10.11 }
    function layoutAttributesForSupplementaryElementOfKind_atIndexPath (kind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'layoutAttributesForSupplementaryElementOfKind:atIndexPath:'; { available in macos 10.11 }
    function frameForItemAtIndex (index: NSUInteger): NSRect; message 'frameForItemAtIndex:'; { available in macos 10.6 }
    function frameForItemAtIndex_withNumberOfItems (index: NSUInteger; numberOfItems: NSUInteger): NSRect; message 'frameForItemAtIndex:withNumberOfItems:'; { available in macos 10.7 }
    procedure setBackgroundColors(newValue: NSArray); message 'setBackgroundColors:';
    function backgroundColors: NSArray; message 'backgroundColors';
    function numberOfSections: NSInteger; message 'numberOfSections'; { available in macos 10.11 }
    function numberOfItemsInSection (section: NSInteger): NSInteger; message 'numberOfItemsInSection:'; { available in macos 10.11 }
    function isFirstResponder: objcbool; message 'isFirstResponder';
    procedure setSelectable(newValue: objcbool); message 'setSelectable:';
    function isSelectable: objcbool; message 'isSelectable';
    procedure setAllowsEmptySelection(newValue: objcbool); message 'setAllowsEmptySelection:'; { available in macos 10.11 }
    function allowsEmptySelection: objcbool; message 'allowsEmptySelection'; { available in macos 10.11 }
    procedure setAllowsMultipleSelection(newValue: objcbool); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    procedure setSelectionIndexes(newValue: NSIndexSet); message 'setSelectionIndexes:';
    function selectionIndexes: NSIndexSet; message 'selectionIndexes';
    procedure setSelectionIndexPaths(newValue: NSSet); message 'setSelectionIndexPaths:'; { available in macos 10.11 }
    function selectionIndexPaths: NSSet; message 'selectionIndexPaths'; { available in macos 10.11 }
    procedure selectItemsAtIndexPaths_scrollPosition (indexPaths: NSSet; scrollPosition: NSCollectionViewScrollPosition); message 'selectItemsAtIndexPaths:scrollPosition:'; { available in macos 10.11 }
    procedure deselectItemsAtIndexPaths (indexPaths: NSSet); message 'deselectItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure selectAll (sender: id); message 'selectAll:';
    procedure deselectAll (sender: id); message 'deselectAll:';
    procedure registerClass_forItemWithIdentifier (itemClass: pobjc_class; identifier: NSUserInterfaceItemIdentifier); message 'registerClass:forItemWithIdentifier:'; { available in macos 10.11 }
    procedure registerNib_forItemWithIdentifier (nib: NSNib; identifier: NSUserInterfaceItemIdentifier); message 'registerNib:forItemWithIdentifier:'; { available in macos 10.11 }
    procedure registerClass_forSupplementaryViewOfKind_withIdentifier (viewClass: pobjc_class; kind: NSCollectionViewSupplementaryElementKind; identifier: NSUserInterfaceItemIdentifier); message 'registerClass:forSupplementaryViewOfKind:withIdentifier:'; { available in macos 10.11 }
    procedure registerNib_forSupplementaryViewOfKind_withIdentifier (nib: NSNib; kind: NSCollectionViewSupplementaryElementKind; identifier: NSUserInterfaceItemIdentifier); message 'registerNib:forSupplementaryViewOfKind:withIdentifier:'; { available in macos 10.11 }
    function makeItemWithIdentifier_forIndexPath (identifier: NSUserInterfaceItemIdentifier; indexPath: NSIndexPath): NSCollectionViewItem; message 'makeItemWithIdentifier:forIndexPath:'; { available in macos 10.11 }
    function makeSupplementaryViewOfKind_withIdentifier_forIndexPath (elementKind: NSCollectionViewSupplementaryElementKind; identifier: NSUserInterfaceItemIdentifier; indexPath: NSIndexPath): NSView; message 'makeSupplementaryViewOfKind:withIdentifier:forIndexPath:'; { available in macos 10.11 }
    function itemAtIndex (index: NSUInteger): NSCollectionViewItem; message 'itemAtIndex:'; { available in macos 10.6 }
    function itemAtIndexPath (indexPath: NSIndexPath): NSCollectionViewItem; message 'itemAtIndexPath:'; { available in macos 10.11 }
    function visibleItems: NSArray; message 'visibleItems'; { available in macos 10.11 }
    function indexPathsForVisibleItems: NSSet; message 'indexPathsForVisibleItems'; { available in macos 10.11 }
    function indexPathForItem (item: NSCollectionViewItem): NSIndexPath; message 'indexPathForItem:'; { available in macos 10.11 }
    function indexPathForItemAtPoint (point: NSPoint): NSIndexPath; message 'indexPathForItemAtPoint:'; { available in macos 10.11 }
    function supplementaryViewForElementKind_atIndexPath (elementKind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath): NSView; message 'supplementaryViewForElementKind:atIndexPath:'; { available in macos 10.11 }
    function visibleSupplementaryViewsOfKind (elementKind: NSCollectionViewSupplementaryElementKind): NSArray; message 'visibleSupplementaryViewsOfKind:'; { available in macos 10.11 }
    function indexPathsForVisibleSupplementaryElementsOfKind (elementKind: NSCollectionViewSupplementaryElementKind): NSSet; message 'indexPathsForVisibleSupplementaryElementsOfKind:'; { available in macos 10.11 }
    procedure insertSections (sections: NSIndexSet); message 'insertSections:'; { available in macos 10.11 }
    procedure deleteSections (sections: NSIndexSet); message 'deleteSections:'; { available in macos 10.11 }
    procedure reloadSections (sections: NSIndexSet); message 'reloadSections:'; { available in macos 10.11 }
    procedure moveSection_toSection (section: NSInteger; newSection: NSInteger); message 'moveSection:toSection:'; { available in macos 10.11 }
    procedure insertItemsAtIndexPaths (indexPaths: NSSet); message 'insertItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure deleteItemsAtIndexPaths (indexPaths: NSSet); message 'deleteItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure reloadItemsAtIndexPaths (indexPaths: NSSet); message 'reloadItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure moveItemAtIndexPath_toIndexPath (indexPath: NSIndexPath; newIndexPath: NSIndexPath); message 'moveItemAtIndexPath:toIndexPath:'; { available in macos 10.11 }
    procedure performBatchUpdates_completionHandler (updates: NSCollectionViewPerformBatchUpdatesCallback; completionHandler: NSCollectionViewPerformBatchUpdatesCallback); message 'performBatchUpdates:completionHandler:'; { available in macos 10.11 }
    procedure toggleSectionCollapse (sender: id); message 'toggleSectionCollapse:'; { available in macos 10.12 }
    procedure scrollToItemsAtIndexPaths_scrollPosition (indexPaths: NSSet; scrollPosition: NSCollectionViewScrollPosition); message 'scrollToItemsAtIndexPaths:scrollPosition:'; { available in macos 10.11 }
    procedure setDraggingSourceOperationMask_forLocal (dragOperationMask: NSDragOperation; localDestination: objcbool); message 'setDraggingSourceOperationMask:forLocal:'; { available in macos 10.6 }
    function draggingImageForItemsAtIndexPaths_withEvent_offset (indexPaths: NSSet; event: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'draggingImageForItemsAtIndexPaths:withEvent:offset:'; { available in macos 10.11 }
    function draggingImageForItemsAtIndexes_withEvent_offset (indexes: NSIndexSet; event: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'draggingImageForItemsAtIndexes:withEvent:offset:'; { available in macos 10.6 }

    { Adopted protocols }
    procedure draggingSession_endedAtPoint_operation (session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'draggingSession:endedAtPoint:operation:';
    procedure draggingSession_movedToPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:movedToPoint:';
    function draggingSession_sourceOperationMaskForDraggingContext (session: NSDraggingSession; context: NSDraggingContext): NSDragOperation; message 'draggingSession:sourceOperationMaskForDraggingContext:';
    procedure draggingSession_willBeginAtPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:willBeginAtPoint:';
    function ignoreModifierKeysForDraggingSession (session: NSDraggingSession): objcbool; message 'ignoreModifierKeysForDraggingSession:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCollectionViewDataSourceProtocol = objcprotocol external name 'NSCollectionViewDataSource' (NSObjectProtocol)
  required
    function collectionView_numberOfItemsInSection (collectionView: NSCollectionView; section: NSInteger): NSInteger; message 'collectionView:numberOfItemsInSection:'; { available in macos 10.11 }
    function collectionView_itemForRepresentedObjectAtIndexPath (collectionView: NSCollectionView; indexPath: NSIndexPath): NSCollectionViewItem; message 'collectionView:itemForRepresentedObjectAtIndexPath:'; { available in macos 10.11 }
  optional
    function numberOfSectionsInCollectionView (collectionView: NSCollectionView): NSInteger; message 'numberOfSectionsInCollectionView:'; { available in macos 10.11 }
    function collectionView_viewForSupplementaryElementOfKind_atIndexPath (collectionView: NSCollectionView; kind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath): NSView; message 'collectionView:viewForSupplementaryElementOfKind:atIndexPath:';
  end;

type
  NSCollectionViewPrefetchingProtocol = objcprotocol external name 'NSCollectionViewPrefetching' (NSObjectProtocol)
  required
    procedure collectionView_prefetchItemsAtIndexPaths (collectionView: NSCollectionView; indexPaths: NSArray); message 'collectionView:prefetchItemsAtIndexPaths:';
  optional
    procedure collectionView_cancelPrefetchingForItemsAtIndexPaths (collectionView: NSCollectionView; indexPaths: NSArray); message 'collectionView:cancelPrefetchingForItemsAtIndexPaths:';
  end;

type
  NSCollectionViewDelegateProtocol = objcprotocol external name 'NSCollectionViewDelegate' (NSObjectProtocol)
  optional
    function collectionView_canDragItemsAtIndexPaths_withEvent (collectionView: NSCollectionView; indexPaths: NSSet; event: NSEvent): objcbool; message 'collectionView:canDragItemsAtIndexPaths:withEvent:'; { available in macos 10.11 }
    function collectionView_canDragItemsAtIndexes_withEvent (collectionView: NSCollectionView; indexes: NSIndexSet; event: NSEvent): objcbool; message 'collectionView:canDragItemsAtIndexes:withEvent:'; { available in macos 10.6 }
    function collectionView_writeItemsAtIndexPaths_toPasteboard (collectionView: NSCollectionView; indexPaths: NSSet; pasteboard: NSPasteboard): objcbool; message 'collectionView:writeItemsAtIndexPaths:toPasteboard:'; deprecated 'Use -collectionView:pasteboardWriterForItemAtIndexPath: instead';
    function collectionView_writeItemsAtIndexes_toPasteboard (collectionView: NSCollectionView; indexes: NSIndexSet; pasteboard: NSPasteboard): objcbool; message 'collectionView:writeItemsAtIndexes:toPasteboard:'; deprecated 'Use -collectionView:pasteboardWriterForItemAtIndexPath: instead';
    function collectionView_namesOfPromisedFilesDroppedAtDestination_forDraggedItemsAtIndexPaths (collectionView: NSCollectionView; dropURL: NSURL; indexPaths: NSSet): NSArray; message 'collectionView:namesOfPromisedFilesDroppedAtDestination:forDraggedItemsAtIndexPaths:'; deprecated 'Use NSFilePromiseReceiver objects instead';
    function collectionView_namesOfPromisedFilesDroppedAtDestination_forDraggedItemsAtIndexes (collectionView: NSCollectionView; dropURL: NSURL; indexes: NSIndexSet): NSArray; message 'collectionView:namesOfPromisedFilesDroppedAtDestination:forDraggedItemsAtIndexes:'; deprecated 'Use NSFilePromiseReceiver objects instead';
    function collectionView_draggingImageForItemsAtIndexPaths_withEvent_offset (collectionView: NSCollectionView; indexPaths: NSSet; event: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'collectionView:draggingImageForItemsAtIndexPaths:withEvent:offset:'; { available in macos 10.11 }
    function collectionView_draggingImageForItemsAtIndexes_withEvent_offset (collectionView: NSCollectionView; indexes: NSIndexSet; event: NSEvent; dragImageOffset: NSPointPointer): NSImage; message 'collectionView:draggingImageForItemsAtIndexes:withEvent:offset:'; { available in macos 10.6 }
    function collectionView_validateDrop_proposedIndexPath_dropOperation (collectionView: NSCollectionView; draggingInfo: NSDraggingInfoProtocol; proposedDropIndexPath: NSIndexPathPtr; proposedDropOperation: NSCollectionViewDropOperationPtr): NSDragOperation; message 'collectionView:validateDrop:proposedIndexPath:dropOperation:'; { available in macos 10.11 }
    function collectionView_validateDrop_proposedIndex_dropOperation (collectionView: NSCollectionView; draggingInfo: NSDraggingInfoProtocol; proposedDropIndex: NSIntegerPtr; proposedDropOperation: NSCollectionViewDropOperationPtr): NSDragOperation; message 'collectionView:validateDrop:proposedIndex:dropOperation:'; { available in macos 10.6 }
    function collectionView_acceptDrop_indexPath_dropOperation (collectionView: NSCollectionView; draggingInfo: NSDraggingInfoProtocol; indexPath: NSIndexPath; dropOperation: NSCollectionViewDropOperation): objcbool; message 'collectionView:acceptDrop:indexPath:dropOperation:'; { available in macos 10.11 }
    function collectionView_acceptDrop_index_dropOperation (collectionView: NSCollectionView; draggingInfo: NSDraggingInfoProtocol; index: NSInteger; dropOperation: NSCollectionViewDropOperation): objcbool; message 'collectionView:acceptDrop:index:dropOperation:'; { available in macos 10.6 }
    function collectionView_pasteboardWriterForItemAtIndexPath (collectionView: NSCollectionView; indexPath: NSIndexPath): id; message 'collectionView:pasteboardWriterForItemAtIndexPath:'; { available in macos 10.11 }
    function collectionView_pasteboardWriterForItemAtIndex (collectionView: NSCollectionView; index: NSUInteger): id; message 'collectionView:pasteboardWriterForItemAtIndex:';
    procedure collectionView_draggingSession_willBeginAtPoint_forItemsAtIndexPaths (collectionView: NSCollectionView; session: NSDraggingSession; screenPoint: NSPoint; indexPaths: NSSet); message 'collectionView:draggingSession:willBeginAtPoint:forItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure collectionView_draggingSession_willBeginAtPoint_forItemsAtIndexes (collectionView: NSCollectionView; session: NSDraggingSession; screenPoint: NSPoint; indexes: NSIndexSet); message 'collectionView:draggingSession:willBeginAtPoint:forItemsAtIndexes:';
    procedure collectionView_draggingSession_endedAtPoint_dragOperation (collectionView: NSCollectionView; session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'collectionView:draggingSession:endedAtPoint:dragOperation:';
    procedure collectionView_updateDraggingItemsForDrag (collectionView: NSCollectionView; draggingInfo: NSDraggingInfoProtocol); message 'collectionView:updateDraggingItemsForDrag:';
    function collectionView_shouldChangeItemsAtIndexPaths_toHighlightState (collectionView: NSCollectionView; indexPaths: NSSet; highlightState: NSCollectionViewItemHighlightState): NSSet; message 'collectionView:shouldChangeItemsAtIndexPaths:toHighlightState:'; { available in macos 10.11 }
    procedure collectionView_didChangeItemsAtIndexPaths_toHighlightState (collectionView: NSCollectionView; indexPaths: NSSet; highlightState: NSCollectionViewItemHighlightState); message 'collectionView:didChangeItemsAtIndexPaths:toHighlightState:'; { available in macos 10.11 }
    function collectionView_shouldSelectItemsAtIndexPaths (collectionView: NSCollectionView; indexPaths: NSSet): NSSet; message 'collectionView:shouldSelectItemsAtIndexPaths:'; { available in macos 10.11 }
    function collectionView_shouldDeselectItemsAtIndexPaths (collectionView: NSCollectionView; indexPaths: NSSet): NSSet; message 'collectionView:shouldDeselectItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure collectionView_didSelectItemsAtIndexPaths (collectionView: NSCollectionView; indexPaths: NSSet); message 'collectionView:didSelectItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure collectionView_didDeselectItemsAtIndexPaths (collectionView: NSCollectionView; indexPaths: NSSet); message 'collectionView:didDeselectItemsAtIndexPaths:'; { available in macos 10.11 }
    procedure collectionView_willDisplayItem_forRepresentedObjectAtIndexPath (collectionView: NSCollectionView; item: NSCollectionViewItem; indexPath: NSIndexPath); message 'collectionView:willDisplayItem:forRepresentedObjectAtIndexPath:'; { available in macos 10.11 }
    procedure collectionView_willDisplaySupplementaryView_forElementKind_atIndexPath (collectionView: NSCollectionView; view: NSView; elementKind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath); message 'collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:'; { available in macos 10.11 }
    procedure collectionView_didEndDisplayingItem_forRepresentedObjectAtIndexPath (collectionView: NSCollectionView; item: NSCollectionViewItem; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingItem:forRepresentedObjectAtIndexPath:'; { available in macos 10.11 }
    procedure collectionView_didEndDisplayingSupplementaryView_forElementOfKind_atIndexPath (collectionView: NSCollectionView; view: NSView; elementKind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:'; { available in macos 10.11 }
    function collectionView_transitionLayoutForOldLayout_newLayout (collectionView: NSCollectionView; fromLayout: NSCollectionViewLayout; toLayout: NSCollectionViewLayout): NSCollectionViewTransitionLayout; message 'collectionView:transitionLayoutForOldLayout:newLayout:'; { available in macos 10.11 }
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSIndexPath_NSCollectionViewAdditions = objccategory external name 'NSCollectionViewAdditions' (NSIndexPath)
    class function indexPathForItem_inSection (item: NSInteger; section: NSInteger): NSIndexPath; message 'indexPathForItem:inSection:'; { available in macos 10.11 }
    function item: NSInteger; message 'item'; { available in macos 10.11 }
    function section: NSInteger; message 'section'; { available in macos 10.11 }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSCollectionViewAdditions = objccategory external (NSSet)
    class function setWithCollectionViewIndexPath (indexPath: NSIndexPath): id; message 'setWithCollectionViewIndexPath:'; { available in macos 10.11 }
    class function setWithCollectionViewIndexPaths (indexPaths: NSArray): id; message 'setWithCollectionViewIndexPaths:'; { available in macos 10.11 }
    procedure enumerateIndexPathsWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSCollectionViewEnumerateIndexPathsWithOptionsCallback); message 'enumerateIndexPathsWithOptions:usingBlock:'; { available in macos 10.11 }
  end;

type
  NSCollectionView_NSDeprecated = objccategory external name 'NSDeprecated' (NSCollectionView)
    function newItemForRepresentedObject (object_: id): NSCollectionViewItem; message 'newItemForRepresentedObject:'; deprecated 'Use -[NSCollectionViewDataSource collectionView:itemForRepresentedObjectAtIndexPath:] instead';
    procedure setItemPrototype(newValue: NSCollectionViewItem); message 'setItemPrototype:'; deprecated 'Use -registerNib:forItemWithIdentifier: or -registerClass:forItemWithIdentifier: instead.';
    function itemPrototype: NSCollectionViewItem; message 'itemPrototype'; deprecated 'Use -registerNib:forItemWithIdentifier: or -registerClass:forItemWithIdentifier: instead.';
    procedure setMaxNumberOfRows(newValue: NSUInteger); message 'setMaxNumberOfRows:'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its maximumNumberOfRows instead';
    function maxNumberOfRows: NSUInteger; message 'maxNumberOfRows'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its maximumNumberOfRows instead';
    procedure setMaxNumberOfColumns(newValue: NSUInteger); message 'setMaxNumberOfColumns:'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its maximumNumberOfColumns instead';
    function maxNumberOfColumns: NSUInteger; message 'maxNumberOfColumns'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its maximumNumberOfColumns instead';
    procedure setMinItemSize(newValue: NSSize); message 'setMinItemSize:'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its minimumItemSize instead';
    function minItemSize: NSSize; message 'minItemSize'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its minimumItemSize instead';
    procedure setMaxItemSize(newValue: NSSize); message 'setMaxItemSize:'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its maximumItemSize instead';
    function maxItemSize: NSSize; message 'maxItemSize'; deprecated 'Use NSCollectionViewGridLayout as the receiver''s collectionViewLayout, setting its maximumItemSize instead';
  end;
{$endif}

