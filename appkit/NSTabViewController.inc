{ Parsed from AppKit.framework NSTabViewController.h }

{$ifdef TYPES}
type
  NSTabViewControllerPtr = ^NSTabViewController;
{$endif}

{$ifdef TYPES}
type
  NSTabViewControllerTabStyle = NSInteger;
  NSTabViewControllerTabStylePtr = ^NSTabViewControllerTabStyle;

const
  NSTabViewControllerTabStyleSegmentedControlOnTop = 0;
  NSTabViewControllerTabStyleSegmentedControlOnBottom = 1;
  NSTabViewControllerTabStyleToolbar = 2;
  NSTabViewControllerTabStyleUnspecified = -1;
{$endif}

{$ifdef CLASSES}

type
  NSTabViewController = objcclass external (NSViewController, NSTabViewDelegateProtocol, NSToolbarDelegateProtocol)
  public
    procedure setTabStyle(newValue: NSTabViewControllerTabStyle); message 'setTabStyle:';
    function tabStyle: NSTabViewControllerTabStyle; message 'tabStyle';
    procedure setTabView(newValue: NSTabView); message 'setTabView:';
    function tabView: NSTabView; message 'tabView';
    procedure setTransitionOptions(newValue: NSViewControllerTransitionOptions); message 'setTransitionOptions:';
    function transitionOptions: NSViewControllerTransitionOptions; message 'transitionOptions';
    procedure setCanPropagateSelectedChildViewControllerTitle(newValue: objcbool); message 'setCanPropagateSelectedChildViewControllerTitle:';
    function canPropagateSelectedChildViewControllerTitle: objcbool; message 'canPropagateSelectedChildViewControllerTitle';
    procedure setTabViewItems(newValue: NSArray); message 'setTabViewItems:';
    function tabViewItems: NSArray; message 'tabViewItems';
    procedure setSelectedTabViewItemIndex(newValue: NSInteger); message 'setSelectedTabViewItemIndex:';
    function selectedTabViewItemIndex: NSInteger; message 'selectedTabViewItemIndex';
    procedure addTabViewItem (tabViewItem: NSTabViewItem); message 'addTabViewItem:';
    procedure insertTabViewItem_atIndex (tabViewItem: NSTabViewItem; index: NSInteger); message 'insertTabViewItem:atIndex:';
    procedure removeTabViewItem (tabViewItem: NSTabViewItem); message 'removeTabViewItem:';
    function tabViewItemForViewController (viewController: NSViewController): NSTabViewItem; message 'tabViewItemForViewController:';
    procedure viewDidLoad; message 'viewDidLoad'; { NS_REQUIRES_SUPER }
    procedure tabView_willSelectTabViewItem (tabView_: NSTabView; tabViewItem: NSTabViewItem); message 'tabView:willSelectTabViewItem:'; { NS_REQUIRES_SUPER }
    procedure tabView_didSelectTabViewItem (tabView_: NSTabView; tabViewItem: NSTabViewItem); message 'tabView:didSelectTabViewItem:'; { NS_REQUIRES_SUPER }
    function tabView_shouldSelectTabViewItem (tabView_: NSTabView; tabViewItem: NSTabViewItem): objcbool; message 'tabView:shouldSelectTabViewItem:'; { NS_REQUIRES_SUPER }
    function toolbar_itemForItemIdentifier_willBeInsertedIntoToolbar (toolbar: NSToolbar; itemIdentifier: NSToolbarItemIdentifier; flag: objcbool): NSToolbarItem; message 'toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:'; { NS_REQUIRES_SUPER }
    function toolbarDefaultItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarDefaultItemIdentifiers:'; { NS_REQUIRES_SUPER }
    function toolbarAllowedItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarAllowedItemIdentifiers:'; { NS_REQUIRES_SUPER }
    function toolbarSelectableItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarSelectableItemIdentifiers:'; { NS_REQUIRES_SUPER }

    { Adopted protocols }
    procedure tabViewDidChangeNumberOfTabViewItems (tabView: NSTabView); message 'tabViewDidChangeNumberOfTabViewItems:';
    procedure toolbarDidRemoveItem (notification: NSNotification); message 'toolbarDidRemoveItem:';
    procedure toolbarWillAddItem (notification: NSNotification); message 'toolbarWillAddItem:';
  end;
{$endif}

