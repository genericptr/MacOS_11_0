{ Parsed from AppKit.framework NSSplitView.h }

{ Types from NSSplitView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSSplitViewPtr = ^NSSplitView;
  NSSplitViewDelegateProtocolPtr = ^NSSplitViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSSplitViewAutosaveName = NSString;
  NSSplitViewAutosaveNamePtr = ^NSSplitViewAutosaveName;
  NSSplitViewDividerStyle = NSInteger;
  NSSplitViewDividerStylePtr = ^NSSplitViewDividerStyle;

const
  NSSplitViewDividerStyleThick = 1;
  NSSplitViewDividerStyleThin = 2;
  NSSplitViewDividerStylePaneSplitter = 3 { available in macos 10.6 };
{$endif}

{$ifdef CLASSES}

type
  NSSplitView = objcclass external (NSView)
  public
    procedure setVertical(newValue: objcbool); message 'setVertical:';
    function isVertical: objcbool; message 'isVertical';
    procedure setDividerStyle(newValue: NSSplitViewDividerStyle); message 'setDividerStyle:'; { available in macos 10.5 }
    function dividerStyle: NSSplitViewDividerStyle; message 'dividerStyle'; { available in macos 10.5 }
    procedure setAutosaveName(newValue: NSSplitViewAutosaveName); message 'setAutosaveName:'; { available in macos 10.5 }
    function autosaveName: NSSplitViewAutosaveName; message 'autosaveName'; { available in macos 10.5 }
    procedure setDelegate(newValue: NSSplitViewDelegateProtocol); message 'setDelegate:';
    function delegate: NSSplitViewDelegateProtocol; message 'delegate';
    procedure drawDividerInRect (rect: NSRect); message 'drawDividerInRect:';
    function dividerColor: NSColor; message 'dividerColor'; { available in macos 10.5 }
    function dividerThickness: CGFloat; message 'dividerThickness';
    procedure adjustSubviews; message 'adjustSubviews';
    function isSubviewCollapsed (subview: NSView): objcbool; message 'isSubviewCollapsed:';
    function minPossiblePositionOfDividerAtIndex (dividerIndex: NSInteger): CGFloat; message 'minPossiblePositionOfDividerAtIndex:'; { available in macos 10.5 }
    function maxPossiblePositionOfDividerAtIndex (dividerIndex: NSInteger): CGFloat; message 'maxPossiblePositionOfDividerAtIndex:'; { available in macos 10.5 }
    procedure setPosition_ofDividerAtIndex (position: CGFloat; dividerIndex: NSInteger); message 'setPosition:ofDividerAtIndex:'; { available in macos 10.5 }
    {$if  not defined(TARGET_OS_IPHONE)}
    function holdingPriorityForSubviewAtIndex (subviewIndex: NSInteger): NSLayoutPriority; message 'holdingPriorityForSubviewAtIndex:'; { available in macos 10.8 }
    procedure setHoldingPriority_forSubviewAtIndex (priority: NSLayoutPriority; subviewIndex: NSInteger); message 'setHoldingPriority:forSubviewAtIndex:'; { available in macos 10.8 }
    {$endif}
  end;


type
  NSSplitViewArrangedSubviews = objccategory external (NSSplitView)
    procedure setArrangesAllSubviews(newValue: objcbool); message 'setArrangesAllSubviews:'; { available in macos 10.11 }
    function arrangesAllSubviews: objcbool; message 'arrangesAllSubviews'; { available in macos 10.11 }
    function arrangedSubviews: NSArray; message 'arrangedSubviews'; { available in macos 10.11 }
    procedure addArrangedSubview (view: NSView); message 'addArrangedSubview:'; { available in macos 10.11 }
    procedure insertArrangedSubview_atIndex (view: NSView; index: NSInteger); message 'insertArrangedSubview:atIndex:'; { available in macos 10.11 }
    procedure removeArrangedSubview (view: NSView); message 'removeArrangedSubview:'; { available in macos 10.11 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSplitViewDelegateProtocol = objcprotocol external name 'NSSplitViewDelegate' (NSObjectProtocol)
  optional
    function splitView_canCollapseSubview (splitView: NSSplitView; subview: NSView): objcbool; message 'splitView:canCollapseSubview:';
    function splitView_shouldCollapseSubview_forDoubleClickOnDividerAtIndex (splitView: NSSplitView; subview: NSView; dividerIndex: NSInteger): objcbool; message 'splitView:shouldCollapseSubview:forDoubleClickOnDividerAtIndex:'; deprecated 'NSSplitView no longer supports collapsing sections via double-click. This delegate method is never called.';
    function splitView_constrainMinCoordinate_ofSubviewAt (splitView: NSSplitView; proposedMinimumPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainMinCoordinate:ofSubviewAt:';
    function splitView_constrainMaxCoordinate_ofSubviewAt (splitView: NSSplitView; proposedMaximumPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainMaxCoordinate:ofSubviewAt:';
    function splitView_constrainSplitPosition_ofSubviewAt (splitView: NSSplitView; proposedPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainSplitPosition:ofSubviewAt:';
    procedure splitView_resizeSubviewsWithOldSize (splitView: NSSplitView; oldSize: NSSize); message 'splitView:resizeSubviewsWithOldSize:';
    function splitView_shouldAdjustSizeOfSubview (splitView: NSSplitView; view: NSView): objcbool; message 'splitView:shouldAdjustSizeOfSubview:'; { available in macos 10.6 }
    function splitView_shouldHideDividerAtIndex (splitView: NSSplitView; dividerIndex: NSInteger): objcbool; message 'splitView:shouldHideDividerAtIndex:'; { available in macos 10.5 }
    function splitView_effectiveRect_forDrawnRect_ofDividerAtIndex (splitView: NSSplitView; proposedEffectiveRect: NSRect; drawnRect: NSRect; dividerIndex: NSInteger): NSRect; message 'splitView:effectiveRect:forDrawnRect:ofDividerAtIndex:'; { available in macos 10.5 }
    function splitView_additionalEffectiveRectOfDividerAtIndex (splitView: NSSplitView; dividerIndex: NSInteger): NSRect; message 'splitView:additionalEffectiveRectOfDividerAtIndex:'; { available in macos 10.5 }
    procedure splitViewWillResizeSubviews (notification: NSNotification); message 'splitViewWillResizeSubviews:';
    procedure splitViewDidResizeSubviews (notification: NSNotification); message 'splitViewDidResizeSubviews:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSplitViewWillResizeSubviewsNotification: NSNotificationName; cvar; external;
  NSSplitViewDidResizeSubviewsNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSplitView_NSDeprecated = objccategory external name 'NSDeprecated' (NSSplitView)
    procedure setIsPaneSplitter (flag: objcbool); message 'setIsPaneSplitter:'; deprecated;
    function isPaneSplitter: objcbool; message 'isPaneSplitter'; deprecated;
  end;
{$endif}

