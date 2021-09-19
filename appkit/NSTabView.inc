{ Parsed from AppKit.framework NSTabView.h }

{$ifdef TYPES}
type
  NSTabViewPtr = ^NSTabView;
  NSTabViewDelegateProtocolPtr = ^NSTabViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumberWithDirectionalTabs = 631.0;

type
  NSTabViewType = NSUInteger;
  NSTabViewTypePtr = ^NSTabViewType;

const
  NSTopTabsBezelBorder = 0;
  NSLeftTabsBezelBorder = 1;
  NSBottomTabsBezelBorder = 2;
  NSRightTabsBezelBorder = 3;
  NSNoTabsBezelBorder = 4;
  NSNoTabsLineBorder = 5;
  NSNoTabsNoBorder = 6;

type
  NSTabPosition = NSUInteger;
  NSTabPositionPtr = ^NSTabPosition;

const
  NSTabPositionNone = 0;
  NSTabPositionTop = 1;
  NSTabPositionLeft = 2;
  NSTabPositionBottom = 3;
  NSTabPositionRight = 4;

type
  NSTabViewBorderType = NSUInteger;
  NSTabViewBorderTypePtr = ^NSTabViewBorderType;

const
  NSTabViewBorderTypeNone = 0;
  NSTabViewBorderTypeLine = 1;
  NSTabViewBorderTypeBezel = 2;
{$endif}

{$ifdef CLASSES}

type
  NSTabView = objcclass external (NSView)
  public
    procedure selectTabViewItem (tabViewItem: NSTabViewItem); message 'selectTabViewItem:';
    procedure selectTabViewItemAtIndex (index: NSInteger); message 'selectTabViewItemAtIndex:';
    procedure selectTabViewItemWithIdentifier (identifier: id); message 'selectTabViewItemWithIdentifier:';
    procedure takeSelectedTabViewItemFromSender (sender: id); message 'takeSelectedTabViewItemFromSender:';
    procedure selectFirstTabViewItem (sender: id); message 'selectFirstTabViewItem:';
    procedure selectLastTabViewItem (sender: id); message 'selectLastTabViewItem:';
    procedure selectNextTabViewItem (sender: id); message 'selectNextTabViewItem:';
    procedure selectPreviousTabViewItem (sender: id); message 'selectPreviousTabViewItem:';
    function selectedTabViewItem: NSTabViewItem; message 'selectedTabViewItem';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setTabViewType(newValue: NSTabViewType); message 'setTabViewType:';
    function tabViewType: NSTabViewType; message 'tabViewType';
    procedure setTabPosition(newValue: NSTabPosition); message 'setTabPosition:'; { available in macos 10.12 }
    function tabPosition: NSTabPosition; message 'tabPosition'; { available in macos 10.12 }
    procedure setTabViewBorderType(newValue: NSTabViewBorderType); message 'setTabViewBorderType:'; { available in macos 10.12 }
    function tabViewBorderType: NSTabViewBorderType; message 'tabViewBorderType'; { available in macos 10.12 }
    procedure setTabViewItems(newValue: NSArray); message 'setTabViewItems:';
    function tabViewItems: NSArray; message 'tabViewItems';
    procedure setAllowsTruncatedLabels(newValue: objcbool); message 'setAllowsTruncatedLabels:';
    function allowsTruncatedLabels: objcbool; message 'allowsTruncatedLabels';
    function minimumSize: NSSize; message 'minimumSize';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setControlSize(newValue: NSControlSize); message 'setControlSize:';
    function controlSize: NSControlSize; message 'controlSize';
    procedure addTabViewItem (tabViewItem: NSTabViewItem); message 'addTabViewItem:';
    procedure insertTabViewItem_atIndex (tabViewItem: NSTabViewItem; index: NSInteger); message 'insertTabViewItem:atIndex:';
    procedure removeTabViewItem (tabViewItem: NSTabViewItem); message 'removeTabViewItem:';
    procedure setDelegate(newValue: NSTabViewDelegateProtocol); message 'setDelegate:';
    function delegate: NSTabViewDelegateProtocol; message 'delegate';
    function tabViewItemAtPoint (point: NSPoint): NSTabViewItem; message 'tabViewItemAtPoint:';
    function contentRect: NSRect; message 'contentRect';
    function numberOfTabViewItems: NSInteger; message 'numberOfTabViewItems';
    function indexOfTabViewItem (tabViewItem: NSTabViewItem): NSInteger; message 'indexOfTabViewItem:';
    function tabViewItemAtIndex (index: NSInteger): NSTabViewItem; message 'tabViewItemAtIndex:';
    function indexOfTabViewItemWithIdentifier (identifier: id): NSInteger; message 'indexOfTabViewItemWithIdentifier:';
    procedure setControlTint(newValue: NSControlTint); message 'setControlTint:'; deprecated 'The controlTint property is not respected on 10.14 and later.';
    function controlTint: NSControlTint; message 'controlTint'; deprecated 'The controlTint property is not respected on 10.14 and later.';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTabViewDelegateProtocol = objcprotocol external name 'NSTabViewDelegate' (NSObjectProtocol)
  optional
    function tabView_shouldSelectTabViewItem (tabView: NSTabView; tabViewItem: NSTabViewItem): objcbool; message 'tabView:shouldSelectTabViewItem:';
    procedure tabView_willSelectTabViewItem (tabView: NSTabView; tabViewItem: NSTabViewItem); message 'tabView:willSelectTabViewItem:';
    procedure tabView_didSelectTabViewItem (tabView: NSTabView; tabViewItem: NSTabViewItem); message 'tabView:didSelectTabViewItem:';
    procedure tabViewDidChangeNumberOfTabViewItems (tabView: NSTabView); message 'tabViewDidChangeNumberOfTabViewItems:';
  end;
{$endif}

