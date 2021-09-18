{ Parsed from AppKit.framework NSSplitViewController.h }

{$ifdef TYPES}
type
  NSSplitViewControllerPtr = ^NSSplitViewController;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSplitViewControllerAutomaticDimension: CGFloat { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSplitViewController = objcclass external (NSViewController, NSSplitViewDelegateProtocol, NSUserInterfaceValidationsProtocol)
  public
    procedure setSplitView(newValue: NSSplitView); message 'setSplitView:';
    function splitView: NSSplitView; message 'splitView';
    procedure setSplitViewItems(newValue: NSArray); message 'setSplitViewItems:';
    function splitViewItems: NSArray; message 'splitViewItems';
    procedure addSplitViewItem (splitViewItem: NSSplitViewItem); message 'addSplitViewItem:';
    procedure insertSplitViewItem_atIndex (splitViewItem: NSSplitViewItem; index: NSInteger); message 'insertSplitViewItem:atIndex:';
    procedure removeSplitViewItem (splitViewItem: NSSplitViewItem); message 'removeSplitViewItem:';
    function splitViewItemForViewController (viewController: NSViewController): NSSplitViewItem; message 'splitViewItemForViewController:';
    procedure setMinimumThicknessForInlineSidebars(newValue: CGFloat); message 'setMinimumThicknessForInlineSidebars:'; { available in macos  }
    function minimumThicknessForInlineSidebars: CGFloat; message 'minimumThicknessForInlineSidebars'; { available in macos  }
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:'; { available in macos  }
    procedure viewDidLoad; message 'viewDidLoad'; { NS_REQUIRES_SUPER }
    function splitView_canCollapseSubview (splitView_: NSSplitView; subview: NSView): objcbool; message 'splitView:canCollapseSubview:'; { NS_REQUIRES_SUPER }
    function splitView_shouldCollapseSubview_forDoubleClickOnDividerAtIndex (splitView_: NSSplitView; subview: NSView; dividerIndex: NSInteger): objcbool; message 'splitView:shouldCollapseSubview:forDoubleClickOnDividerAtIndex:'; deprecated 'NSSplitView no longer supports collapsing sections via double-click. This delegate method is never called, and NSSplitViewController''s implementation always returns NO.';
    function splitView_shouldHideDividerAtIndex (splitView_: NSSplitView; dividerIndex: NSInteger): objcbool; message 'splitView:shouldHideDividerAtIndex:'; { NS_REQUIRES_SUPER }
    function splitView_effectiveRect_forDrawnRect_ofDividerAtIndex (splitView_: NSSplitView; proposedEffectiveRect: NSRect; drawnRect: NSRect; dividerIndex: NSInteger): NSRect; message 'splitView:effectiveRect:forDrawnRect:ofDividerAtIndex:'; { NS_REQUIRES_SUPER }
    function splitView_additionalEffectiveRectOfDividerAtIndex (splitView_: NSSplitView; dividerIndex: NSInteger): NSRect; message 'splitView:additionalEffectiveRectOfDividerAtIndex:'; { NS_REQUIRES_SUPER }

    { Adopted protocols }
    function splitView_constrainMaxCoordinate_ofSubviewAt (splitView: NSSplitView; proposedMaximumPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainMaxCoordinate:ofSubviewAt:';
    function splitView_constrainMinCoordinate_ofSubviewAt (splitView: NSSplitView; proposedMinimumPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainMinCoordinate:ofSubviewAt:';
    function splitView_constrainSplitPosition_ofSubviewAt (splitView: NSSplitView; proposedPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainSplitPosition:ofSubviewAt:';
    procedure splitView_resizeSubviewsWithOldSize (splitView: NSSplitView; oldSize: NSSize); message 'splitView:resizeSubviewsWithOldSize:';
    function splitView_shouldAdjustSizeOfSubview (splitView: NSSplitView; view: NSView): objcbool; message 'splitView:shouldAdjustSizeOfSubview:'; { available in macos  }
    procedure splitViewDidResizeSubviews (notification: NSNotification); message 'splitViewDidResizeSubviews:';
    procedure splitViewWillResizeSubviews (notification: NSNotification); message 'splitViewWillResizeSubviews:';
  end;


type
  NSSplitViewControllerToggleSidebarAction = objccategory external (NSSplitViewController)
    procedure toggleSidebar (sender: id); message 'toggleSidebar:'; { available in macos  }
  end;
{$endif}

