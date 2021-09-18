{ Parsed from AppKit.framework NSView.h }

{$ifdef CALLBACKS}
type
  NSViewSortSubviewsUsingFunctionCompareCallback = function (param1: NSView; param2: NSView; param3: pointer): NSComparisonResult; cdecl;
  NSViewShowDefinitionForAttributedStringCallback = reference to function (adjustedRange: NSRange): NSPoint; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSViewPtr = ^NSView;
  NSViewLayerContentScaleDelegateProtocolPtr = ^NSViewLayerContentScaleDelegateProtocol;
  NSViewToolTipOwnerProtocolPtr = ^NSViewToolTipOwnerProtocol;
{$endif}

{$ifdef TYPES}
type
  NSAutoresizingMaskOptions = NSUInteger;
  NSAutoresizingMaskOptionsPtr = ^NSAutoresizingMaskOptions;

const
  NSViewNotSizable = 0;
  NSViewMinXMargin = 1;
  NSViewWidthSizable = 2;
  NSViewMaxXMargin = 4;
  NSViewMinYMargin = 8;
  NSViewHeightSizable = 16;
  NSViewMaxYMargin = 32;

type
  NSBorderType = NSUInteger;
  NSBorderTypePtr = ^NSBorderType;

const
  NSNoBorder = 0;
  NSLineBorder = 1;
  NSBezelBorder = 2;
  NSGrooveBorder = 3;

type
  NSViewLayerContentsRedrawPolicy = NSInteger;
  NSViewLayerContentsRedrawPolicyPtr = ^NSViewLayerContentsRedrawPolicy;

const
  NSViewLayerContentsRedrawNever = 0;
  NSViewLayerContentsRedrawOnSetNeedsDisplay = 1;
  NSViewLayerContentsRedrawDuringViewResize = 2;
  NSViewLayerContentsRedrawBeforeViewResize = 3;
  NSViewLayerContentsRedrawCrossfade = 4 { available in macos  };

type
  NSViewLayerContentsPlacement = NSInteger;
  NSViewLayerContentsPlacementPtr = ^NSViewLayerContentsPlacement;

const
  NSViewLayerContentsPlacementScaleAxesIndependently = 0;
  NSViewLayerContentsPlacementScaleProportionallyToFit = 1;
  NSViewLayerContentsPlacementScaleProportionallyToFill = 2;
  NSViewLayerContentsPlacementCenter = 3;
  NSViewLayerContentsPlacementTop = 4;
  NSViewLayerContentsPlacementTopRight = 5;
  NSViewLayerContentsPlacementRight = 6;
  NSViewLayerContentsPlacementBottomRight = 7;
  NSViewLayerContentsPlacementBottom = 8;
  NSViewLayerContentsPlacementBottomLeft = 9;
  NSViewLayerContentsPlacementLeft = 10;
  NSViewLayerContentsPlacementTopLeft = 11;

type
  NSTrackingRectTag = NSInteger;
  NSTrackingRectTagPtr = ^NSTrackingRectTag;
  NSToolTipTag = NSInteger;
  NSToolTipTagPtr = ^NSToolTipTag;
{$endif}

{$ifdef CLASSES}

type
  NSView = objcclass external (NSResponder, NSAnimatablePropertyContainerProtocol, NSUserInterfaceItemIdentificationProtocol, NSDraggingDestinationProtocol, NSAppearanceCustomizationProtocol, NSAccessibilityElementProtocol, NSAccessibilityProtocol)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function window: NSWindow; message 'window';
    function superview: NSView; message 'superview';
    procedure setSubviews(newValue: NSArray); message 'setSubviews:';
    function subviews: NSArray; message 'subviews';
    function isDescendantOf (view: NSView): objcbool; message 'isDescendantOf:';
    function ancestorSharedWithView (view: NSView): NSView; message 'ancestorSharedWithView:';
    function opaqueAncestor: NSView; message 'opaqueAncestor';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    function isHiddenOrHasHiddenAncestor: objcbool; message 'isHiddenOrHasHiddenAncestor';
    procedure getRectsBeingDrawn_count (rects: NSRectPtr; count: NSIntegerPtr); message 'getRectsBeingDrawn:count:';
    function needsToDrawRect (rect: NSRect): objcbool; message 'needsToDrawRect:';
    function wantsDefaultClipping: objcbool; message 'wantsDefaultClipping';
    procedure viewDidHide; message 'viewDidHide'; { available in macos  }
    procedure viewDidUnhide; message 'viewDidUnhide'; { available in macos  }
    procedure addSubview (view: NSView); message 'addSubview:';
    procedure addSubview_positioned_relativeTo (view: NSView; place: NSWindowOrderingMode; otherView: NSView); message 'addSubview:positioned:relativeTo:';
    procedure sortSubviewsUsingFunction_context (compare: NSViewSortSubviewsUsingFunctionCompareCallback; context: pointer); message 'sortSubviewsUsingFunction:context:';
    procedure viewWillMoveToWindow (newWindow: NSWindow); message 'viewWillMoveToWindow:';
    procedure viewDidMoveToWindow; message 'viewDidMoveToWindow';
    procedure viewWillMoveToSuperview (newSuperview: NSView); message 'viewWillMoveToSuperview:';
    procedure viewDidMoveToSuperview; message 'viewDidMoveToSuperview';
    procedure didAddSubview (subview: NSView); message 'didAddSubview:';
    procedure willRemoveSubview (subview: NSView); message 'willRemoveSubview:';
    procedure removeFromSuperview; message 'removeFromSuperview';
    procedure replaceSubview_with (oldView: NSView; newView: NSView); message 'replaceSubview:with:';
    procedure removeFromSuperviewWithoutNeedingDisplay; message 'removeFromSuperviewWithoutNeedingDisplay';
    procedure viewDidChangeBackingProperties; message 'viewDidChangeBackingProperties'; { available in macos  }
    procedure setPostsFrameChangedNotifications(newValue: objcbool); message 'setPostsFrameChangedNotifications:';
    function postsFrameChangedNotifications: objcbool; message 'postsFrameChangedNotifications';
    procedure resizeSubviewsWithOldSize (oldSize: NSSize); message 'resizeSubviewsWithOldSize:';
    procedure resizeWithOldSuperviewSize (oldSize: NSSize); message 'resizeWithOldSuperviewSize:';
    procedure setAutoresizesSubviews(newValue: objcbool); message 'setAutoresizesSubviews:';
    function autoresizesSubviews: objcbool; message 'autoresizesSubviews';
    procedure setAutoresizingMask(newValue: NSAutoresizingMaskOptions); message 'setAutoresizingMask:';
    function autoresizingMask: NSAutoresizingMaskOptions; message 'autoresizingMask';
    procedure setFrameOrigin (newOrigin: NSPoint); message 'setFrameOrigin:';
    procedure setFrameSize (newSize: NSSize); message 'setFrameSize:';
    procedure setFrame(newValue: NSRect); message 'setFrame:';
    function frame: NSRect; message 'frame';
    procedure setFrameRotation(newValue: CGFloat); message 'setFrameRotation:';
    function frameRotation: CGFloat; message 'frameRotation';
    procedure setFrameCenterRotation(newValue: CGFloat); message 'setFrameCenterRotation:'; { available in macos  }
    function frameCenterRotation: CGFloat; message 'frameCenterRotation'; { available in macos  }
    procedure setBoundsOrigin (newOrigin: NSPoint); message 'setBoundsOrigin:';
    procedure setBoundsSize (newSize: NSSize); message 'setBoundsSize:';
    procedure setBoundsRotation(newValue: CGFloat); message 'setBoundsRotation:';
    function boundsRotation: CGFloat; message 'boundsRotation';
    procedure translateOriginToPoint (translation: NSPoint); message 'translateOriginToPoint:';
    procedure scaleUnitSquareToSize (newUnitSize: NSSize); message 'scaleUnitSquareToSize:';
    procedure rotateByAngle (angle: CGFloat); message 'rotateByAngle:';
    procedure setBounds(newValue: NSRect); message 'setBounds:';
    function bounds: NSRect; message 'bounds';
    function isFlipped: objcbool; message 'isFlipped';
    function isRotatedFromBase: objcbool; message 'isRotatedFromBase';
    function isRotatedOrScaledFromBase: objcbool; message 'isRotatedOrScaledFromBase';
    function isOpaque: objcbool; message 'isOpaque';
    function convertPoint_fromView (point: NSPoint; view: NSView): NSPoint; message 'convertPoint:fromView:';
    function convertPoint_toView (point: NSPoint; view: NSView): NSPoint; message 'convertPoint:toView:';
    function convertSize_fromView (size: NSSize; view: NSView): NSSize; message 'convertSize:fromView:';
    function convertSize_toView (size: NSSize; view: NSView): NSSize; message 'convertSize:toView:';
    function convertRect_fromView (rect: NSRect; view: NSView): NSRect; message 'convertRect:fromView:';
    function convertRect_toView (rect: NSRect; view: NSView): NSRect; message 'convertRect:toView:';
    function backingAlignedRect_options (rect: NSRect; options: NSAlignmentOptions): NSRect; message 'backingAlignedRect:options:'; { available in macos  }
    function centerScanRect (rect: NSRect): NSRect; message 'centerScanRect:';
    function convertPointToBacking (point: NSPoint): NSPoint; message 'convertPointToBacking:'; { available in macos  }
    function convertPointFromBacking (point: NSPoint): NSPoint; message 'convertPointFromBacking:'; { available in macos  }
    function convertSizeToBacking (size: NSSize): NSSize; message 'convertSizeToBacking:'; { available in macos  }
    function convertSizeFromBacking (size: NSSize): NSSize; message 'convertSizeFromBacking:'; { available in macos  }
    function convertRectToBacking (rect: NSRect): NSRect; message 'convertRectToBacking:'; { available in macos  }
    function convertRectFromBacking (rect: NSRect): NSRect; message 'convertRectFromBacking:'; { available in macos  }
    function convertPointToLayer (point: NSPoint): NSPoint; message 'convertPointToLayer:'; { available in macos  }
    function convertPointFromLayer (point: NSPoint): NSPoint; message 'convertPointFromLayer:'; { available in macos  }
    function convertSizeToLayer (size: NSSize): NSSize; message 'convertSizeToLayer:'; { available in macos  }
    function convertSizeFromLayer (size: NSSize): NSSize; message 'convertSizeFromLayer:'; { available in macos  }
    function convertRectToLayer (rect: NSRect): NSRect; message 'convertRectToLayer:'; { available in macos  }
    function convertRectFromLayer (rect: NSRect): NSRect; message 'convertRectFromLayer:'; { available in macos  }
    procedure setCanDrawConcurrently(newValue: objcbool); message 'setCanDrawConcurrently:'; { available in macos  }
    function canDrawConcurrently: objcbool; message 'canDrawConcurrently'; { available in macos  }
    function canDraw: objcbool; message 'canDraw'; deprecated 'If a view needs display, -drawRect: or -updateLayer will be called automatically when the view is able to draw.  To check whether a view is in a window, call -window.  To check whether a view is hidden, call -isHiddenOrHasHiddenAncestor.';
    procedure setNeedsDisplayInRect (invalidRect: NSRect); message 'setNeedsDisplayInRect:';
    procedure setNeedsDisplay(newValue: objcbool); message 'setNeedsDisplay:';
    function needsDisplay: objcbool; message 'needsDisplay';
    procedure lockFocus; message 'lockFocus'; deprecated 'To draw, subclass NSView and implement -drawRect:; AppKit''s automatic deferred display mechanism will call -drawRect: as necessary to display the view.';
    procedure unlockFocus; message 'unlockFocus'; deprecated 'To draw, subclass NSView and implement -drawRect:; AppKit''s automatic deferred display mechanism will call -drawRect: as necessary to display the view.';
    function lockFocusIfCanDraw: objcbool; message 'lockFocusIfCanDraw'; deprecated 'To draw, subclass NSView and implement -drawRect:; AppKit''s automatic deferred display mechanism will call -drawRect: as necessary to display the view.';
    function lockFocusIfCanDrawInContext (context: NSGraphicsContext): objcbool; message 'lockFocusIfCanDrawInContext:'; deprecated 'Use -[NSView displayRectIgnoringOpacity:inContext:] to draw a view subtree into a graphics context.';
    class function focusView: NSView; message 'focusView';
    function visibleRect: NSRect; message 'visibleRect';
    procedure display; message 'display';
    procedure displayIfNeeded; message 'displayIfNeeded';
    procedure displayIfNeededIgnoringOpacity; message 'displayIfNeededIgnoringOpacity';
    procedure displayRect (rect: NSRect); message 'displayRect:';
    procedure displayIfNeededInRect (rect: NSRect); message 'displayIfNeededInRect:';
    procedure displayRectIgnoringOpacity (rect: NSRect); message 'displayRectIgnoringOpacity:';
    procedure displayIfNeededInRectIgnoringOpacity (rect: NSRect); message 'displayIfNeededInRectIgnoringOpacity:';
    procedure drawRect (dirtyRect: NSRect); message 'drawRect:';
    procedure displayRectIgnoringOpacity_inContext (rect: NSRect; context: NSGraphicsContext); message 'displayRectIgnoringOpacity:inContext:';
    function bitmapImageRepForCachingDisplayInRect (rect: NSRect): NSBitmapImageRep; message 'bitmapImageRepForCachingDisplayInRect:';
    procedure cacheDisplayInRect_toBitmapImageRep (rect: NSRect; bitmapImageRep: NSBitmapImageRep); message 'cacheDisplayInRect:toBitmapImageRep:';
    procedure viewWillDraw; message 'viewWillDraw'; { available in macos  }
    procedure scrollPoint (point: NSPoint); message 'scrollPoint:';
    function scrollRectToVisible (rect: NSRect): objcbool; message 'scrollRectToVisible:';
    function autoscroll (event: NSEvent): objcbool; message 'autoscroll:';
    function adjustScroll (newVisible: NSRect): NSRect; message 'adjustScroll:';
    procedure scrollRect_by (rect: NSRect; delta: NSSize); message 'scrollRect:by:'; deprecated 'Use NSScrollView to achieve scrolling views.';
    procedure translateRectsNeedingDisplayInRect_by (clipRect: NSRect; delta: NSSize); message 'translateRectsNeedingDisplayInRect:by:'; { available in macos  }
    function hitTest (point: NSPoint): NSView; message 'hitTest:';
    function mouse_inRect (point: NSPoint; rect: NSRect): objcbool; message 'mouse:inRect:';
    function viewWithTag (tag: NSInteger): NSView; message 'viewWithTag:';
    function tag: NSInteger; message 'tag';
    function performKeyEquivalent (event: NSEvent): objcbool; message 'performKeyEquivalent:';
    function acceptsFirstMouse (event: NSEvent): objcbool; message 'acceptsFirstMouse:';
    function shouldDelayWindowOrderingForEvent (event: NSEvent): objcbool; message 'shouldDelayWindowOrderingForEvent:';
    function needsPanelToBecomeKey: objcbool; message 'needsPanelToBecomeKey';
    function mouseDownCanMoveWindow: objcbool; message 'mouseDownCanMoveWindow';
    procedure setAcceptsTouchEvents(newValue: objcbool); message 'setAcceptsTouchEvents:'; deprecated 'Use allowedTouchTypes instead';
    function acceptsTouchEvents: objcbool; message 'acceptsTouchEvents'; deprecated 'Use allowedTouchTypes instead';
    procedure setWantsRestingTouches(newValue: objcbool); message 'setWantsRestingTouches:'; { available in macos  }
    function wantsRestingTouches: objcbool; message 'wantsRestingTouches'; { available in macos  }
    procedure addCursorRect_cursor (rect: NSRect; object_: NSCursor); message 'addCursorRect:cursor:';
    procedure removeCursorRect_cursor (rect: NSRect; object_: NSCursor); message 'removeCursorRect:cursor:';
    procedure discardCursorRects; message 'discardCursorRects';
    procedure resetCursorRects; message 'resetCursorRects';
    function addTrackingRect_owner_userData_assumeInside (rect: NSRect; owner: id; data: pointer; flag: objcbool): NSTrackingRectTag; message 'addTrackingRect:owner:userData:assumeInside:';
    procedure removeTrackingRect (tag_: NSTrackingRectTag); message 'removeTrackingRect:';
    function makeBackingLayer: CALayer; message 'makeBackingLayer'; { available in macos  }
    procedure setLayerContentsRedrawPolicy(newValue: NSViewLayerContentsRedrawPolicy); message 'setLayerContentsRedrawPolicy:'; { available in macos  }
    function layerContentsRedrawPolicy: NSViewLayerContentsRedrawPolicy; message 'layerContentsRedrawPolicy'; { available in macos  }
    procedure setLayerContentsPlacement(newValue: NSViewLayerContentsPlacement); message 'setLayerContentsPlacement:'; { available in macos  }
    function layerContentsPlacement: NSViewLayerContentsPlacement; message 'layerContentsPlacement'; { available in macos  }
    procedure setWantsLayer(newValue: objcbool); message 'setWantsLayer:'; { available in macos  }
    function wantsLayer: objcbool; message 'wantsLayer'; { available in macos  }
    procedure setLayer(newValue: CALayer); message 'setLayer:'; { available in macos  }
    function layer: CALayer; message 'layer'; { available in macos  }
    function wantsUpdateLayer: objcbool; message 'wantsUpdateLayer'; { available in macos  }
    procedure updateLayer; message 'updateLayer'; { available in macos  }
    procedure setCanDrawSubviewsIntoLayer(newValue: objcbool); message 'setCanDrawSubviewsIntoLayer:'; { available in macos  }
    function canDrawSubviewsIntoLayer: objcbool; message 'canDrawSubviewsIntoLayer'; { available in macos  }
    procedure layoutSubtreeIfNeeded; message 'layoutSubtreeIfNeeded'; { available in macos  }
    procedure layout; message 'layout'; { available in macos  }
    procedure setNeedsLayout(newValue: objcbool); message 'setNeedsLayout:'; { available in macos  }
    function needsLayout: objcbool; message 'needsLayout'; { available in macos  }
    procedure setAlphaValue(newValue: CGFloat); message 'setAlphaValue:'; { available in macos  }
    function alphaValue: CGFloat; message 'alphaValue'; { available in macos  }
    procedure setLayerUsesCoreImageFilters(newValue: objcbool); message 'setLayerUsesCoreImageFilters:'; { available in macos  }
    function layerUsesCoreImageFilters: objcbool; message 'layerUsesCoreImageFilters'; { available in macos  }
    procedure setBackgroundFilters(newValue: NSArray); message 'setBackgroundFilters:'; { available in macos  }
    function backgroundFilters: NSArray; message 'backgroundFilters'; { available in macos  }
    procedure setCompositingFilter(newValue: CIFilter); message 'setCompositingFilter:'; { available in macos  }
    function compositingFilter: CIFilter; message 'compositingFilter'; { available in macos  }
    procedure setContentFilters(newValue: NSArray); message 'setContentFilters:'; { available in macos  }
    function contentFilters: NSArray; message 'contentFilters'; { available in macos  }
    procedure setShadow(newValue: NSShadow); message 'setShadow:'; { available in macos  }
    function shadow: NSShadow; message 'shadow'; { available in macos  }
    procedure addTrackingArea (trackingArea: NSTrackingArea); message 'addTrackingArea:'; { available in macos  }
    procedure removeTrackingArea (trackingArea: NSTrackingArea); message 'removeTrackingArea:'; { available in macos  }
    function trackingAreas: NSArray; message 'trackingAreas'; { available in macos  }
    procedure updateTrackingAreas; message 'updateTrackingAreas'; { available in macos  }
    procedure setPostsBoundsChangedNotifications(newValue: objcbool); message 'setPostsBoundsChangedNotifications:';
    function postsBoundsChangedNotifications: objcbool; message 'postsBoundsChangedNotifications';
    function enclosingScrollView: NSScrollView; message 'enclosingScrollView';
    function menuForEvent (event: NSEvent): NSMenu; message 'menuForEvent:';
    class function defaultMenu: NSMenu; message 'defaultMenu';
    procedure willOpenMenu_withEvent (menu_: NSMenu; event: NSEvent); message 'willOpenMenu:withEvent:'; { available in macos  }
    procedure didCloseMenu_withEvent (menu_: NSMenu; event: NSEvent); message 'didCloseMenu:withEvent:'; { available in macos  }
    procedure setToolTip(newValue: NSString); message 'setToolTip:';
    function toolTip: NSString; message 'toolTip';
    function addToolTipRect_owner_userData (rect: NSRect; owner: id; data: pointer): NSToolTipTag; message 'addToolTipRect:owner:userData:';
    procedure removeToolTip (tag_: NSToolTipTag); message 'removeToolTip:';
    procedure removeAllToolTips; message 'removeAllToolTips';
    procedure viewWillStartLiveResize; message 'viewWillStartLiveResize';
    procedure viewDidEndLiveResize; message 'viewDidEndLiveResize';
    function inLiveResize: objcbool; message 'inLiveResize';
    function preservesContentDuringLiveResize: objcbool; message 'preservesContentDuringLiveResize';
    function rectPreservedDuringLiveResize: NSRect; message 'rectPreservedDuringLiveResize';
    procedure getRectsExposedDuringLiveResize_count (exposedRects: NSRectPtr { 4 element array of NSRect }; count: NSIntegerPtr); message 'getRectsExposedDuringLiveResize:count:';
    function inputContext: NSTextInputContext; message 'inputContext'; { available in macos  }
    function rectForSmartMagnificationAtPoint_inRect (location: NSPoint; visibleRect_: NSRect): NSRect; message 'rectForSmartMagnificationAtPoint:inRect:'; { available in macos  }
    procedure setUserInterfaceLayoutDirection(newValue: NSUserInterfaceLayoutDirection); message 'setUserInterfaceLayoutDirection:'; { available in macos  }
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos  }
    procedure prepareForReuse; message 'prepareForReuse'; { available in macos  }
    class function isCompatibleWithResponsiveScrolling: objcbool; message 'isCompatibleWithResponsiveScrolling'; { available in macos  }
    procedure prepareContentInRect (rect: NSRect); message 'prepareContentInRect:'; { available in macos  }
    procedure setPreparedContentRect(newValue: NSRect); message 'setPreparedContentRect:'; { available in macos  }
    function preparedContentRect: NSRect; message 'preparedContentRect'; { available in macos  }
    function allowsVibrancy: objcbool; message 'allowsVibrancy'; { available in macos  }
    procedure viewDidChangeEffectiveAppearance; message 'viewDidChangeEffectiveAppearance'; { available in macos  }

    { Adopted protocols }
    function accessibilityActivationPoint: NSPoint; message 'accessibilityActivationPoint'; { available in macos  }
    function accessibilityAllowedValues: NSArray; message 'accessibilityAllowedValues'; { available in macos  }
    function accessibilityApplicationFocusedUIElement: id; message 'accessibilityApplicationFocusedUIElement'; { available in macos  }
    function accessibilityAttributedStringForRange (range: NSRange): NSAttributedString; message 'accessibilityAttributedStringForRange:'; { available in macos  }
    function accessibilityCancelButton: id; message 'accessibilityCancelButton'; { available in macos  }
    function accessibilityCellForColumn_row (column: NSInteger; row: NSInteger): id; message 'accessibilityCellForColumn:row:'; { available in macos  }
    function accessibilityChildren: NSArray; message 'accessibilityChildren'; { available in macos  }
    function accessibilityChildrenInNavigationOrder: NSArray; message 'accessibilityChildrenInNavigationOrder'; { available in macos  }
    function accessibilityClearButton: id; message 'accessibilityClearButton'; { available in macos  }
    function accessibilityCloseButton: id; message 'accessibilityCloseButton'; { available in macos  }
    function accessibilityColumnCount: NSInteger; message 'accessibilityColumnCount'; { available in macos  }
    function accessibilityColumnHeaderUIElements: NSArray; message 'accessibilityColumnHeaderUIElements'; { available in macos  }
    function accessibilityColumnIndexRange: NSRange; message 'accessibilityColumnIndexRange'; { available in macos  }
    function accessibilityColumns: NSArray; message 'accessibilityColumns'; { available in macos  }
    function accessibilityColumnTitles: NSArray; message 'accessibilityColumnTitles'; { available in macos  }
    function accessibilityContents: NSArray; message 'accessibilityContents'; { available in macos  }
    function accessibilityCriticalValue: id; message 'accessibilityCriticalValue'; { available in macos  }
    function accessibilityCustomActions: NSArray; message 'accessibilityCustomActions'; { available in macos  }
    function accessibilityCustomRotors: NSArray; message 'accessibilityCustomRotors'; { available in macos  }
    function accessibilityDecrementButton: id; message 'accessibilityDecrementButton'; { available in macos  }
    function accessibilityDefaultButton: id; message 'accessibilityDefaultButton'; { available in macos  }
    function accessibilityDisclosedByRow: id; message 'accessibilityDisclosedByRow'; { available in macos  }
    function accessibilityDisclosedRows: id; message 'accessibilityDisclosedRows'; { available in macos  }
    function accessibilityDisclosureLevel: NSInteger; message 'accessibilityDisclosureLevel'; { available in macos  }
    function accessibilityDocument: NSString; message 'accessibilityDocument'; { available in macos  }
    function accessibilityExtrasMenuBar: id; message 'accessibilityExtrasMenuBar'; { available in macos  }
    function accessibilityFilename: NSString; message 'accessibilityFilename'; { available in macos  }
    function accessibilityFocusedWindow: id; message 'accessibilityFocusedWindow'; { available in macos  }
    function accessibilityFrame: NSRect; message 'accessibilityFrame';
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:'; { available in macos  }
    function accessibilityFullScreenButton: id; message 'accessibilityFullScreenButton'; { available in macos  }
    function accessibilityGrowArea: id; message 'accessibilityGrowArea'; { available in macos  }
    function accessibilityHandles: NSArray; message 'accessibilityHandles'; { available in macos  }
    function accessibilityHeader: id; message 'accessibilityHeader'; { available in macos  }
    function accessibilityHelp: NSString; message 'accessibilityHelp'; { available in macos  }
    function accessibilityHorizontalScrollBar: id; message 'accessibilityHorizontalScrollBar'; { available in macos  }
    function accessibilityHorizontalUnitDescription: NSString; message 'accessibilityHorizontalUnitDescription'; { available in macos  }
    function accessibilityHorizontalUnits: NSAccessibilityUnits; message 'accessibilityHorizontalUnits'; { available in macos  }
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
    function accessibilityIncrementButton: id; message 'accessibilityIncrementButton'; { available in macos  }
    function accessibilityIndex: NSInteger; message 'accessibilityIndex'; { available in macos  }
    function accessibilityInsertionPointLineNumber: NSInteger; message 'accessibilityInsertionPointLineNumber'; { available in macos  }
    function accessibilityLabel: NSString; message 'accessibilityLabel'; { available in macos  }
    function accessibilityLabelUIElements: NSArray; message 'accessibilityLabelUIElements'; { available in macos  }
    function accessibilityLabelValue: single; message 'accessibilityLabelValue'; { available in macos  }
    function accessibilityLayoutPointForScreenPoint (point: NSPoint): NSPoint; message 'accessibilityLayoutPointForScreenPoint:'; { available in macos  }
    function accessibilityLayoutSizeForScreenSize (size: NSSize): NSSize; message 'accessibilityLayoutSizeForScreenSize:'; { available in macos  }
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:'; { available in macos  }
    function accessibilityLinkedUIElements: NSArray; message 'accessibilityLinkedUIElements'; { available in macos  }
    function accessibilityMainWindow: id; message 'accessibilityMainWindow'; { available in macos  }
    function accessibilityMarkerGroupUIElement: id; message 'accessibilityMarkerGroupUIElement'; { available in macos  }
    function accessibilityMarkerTypeDescription: NSString; message 'accessibilityMarkerTypeDescription'; { available in macos  }
    function accessibilityMarkerUIElements: NSArray; message 'accessibilityMarkerUIElements'; { available in macos  }
    function accessibilityMarkerValues: id; message 'accessibilityMarkerValues'; { available in macos  }
    function accessibilityMaxValue: id; message 'accessibilityMaxValue'; { available in macos  }
    function accessibilityMenuBar: id; message 'accessibilityMenuBar'; { available in macos  }
    function accessibilityMinimizeButton: id; message 'accessibilityMinimizeButton'; { available in macos  }
    function accessibilityMinValue: id; message 'accessibilityMinValue'; { available in macos  }
    function accessibilityNextContents: NSArray; message 'accessibilityNextContents'; { available in macos  }
    function accessibilityNumberOfCharacters: NSInteger; message 'accessibilityNumberOfCharacters'; { available in macos  }
    function accessibilityOrientation: NSAccessibilityOrientation; message 'accessibilityOrientation'; { available in macos  }
    function accessibilityOverflowButton: id; message 'accessibilityOverflowButton'; { available in macos  }
    function accessibilityParent: id; message 'accessibilityParent';
    function accessibilityPerformCancel: objcbool; message 'accessibilityPerformCancel'; { available in macos  }
    function accessibilityPerformConfirm: objcbool; message 'accessibilityPerformConfirm'; { available in macos  }
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement'; { available in macos  }
    function accessibilityPerformDelete: objcbool; message 'accessibilityPerformDelete'; { available in macos  }
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement'; { available in macos  }
    function accessibilityPerformPick: objcbool; message 'accessibilityPerformPick'; { available in macos  }
    function accessibilityPerformPress: objcbool; message 'accessibilityPerformPress'; { available in macos  }
    function accessibilityPerformRaise: objcbool; message 'accessibilityPerformRaise'; { available in macos  }
    function accessibilityPerformShowAlternateUI: objcbool; message 'accessibilityPerformShowAlternateUI'; { available in macos  }
    function accessibilityPerformShowDefaultUI: objcbool; message 'accessibilityPerformShowDefaultUI'; { available in macos  }
    function accessibilityPerformShowMenu: objcbool; message 'accessibilityPerformShowMenu'; { available in macos  }
    function accessibilityPlaceholderValue: NSString; message 'accessibilityPlaceholderValue'; { available in macos  }
    function accessibilityPreviousContents: NSArray; message 'accessibilityPreviousContents'; { available in macos  }
    function accessibilityProxy: id; message 'accessibilityProxy'; { available in macos  }
    function accessibilityRangeForIndex (index: NSInteger): NSRange; message 'accessibilityRangeForIndex:'; { available in macos  }
    function accessibilityRangeForLine (line: NSInteger): NSRange; message 'accessibilityRangeForLine:'; { available in macos  }
    function accessibilityRangeForPosition (point: NSPoint): NSRange; message 'accessibilityRangeForPosition:'; { available in macos  }
    function accessibilityRole: NSAccessibilityRole; message 'accessibilityRole'; { available in macos  }
    function accessibilityRoleDescription: NSString; message 'accessibilityRoleDescription'; { available in macos  }
    function accessibilityRowCount: NSInteger; message 'accessibilityRowCount'; { available in macos  }
    function accessibilityRowHeaderUIElements: NSArray; message 'accessibilityRowHeaderUIElements'; { available in macos  }
    function accessibilityRowIndexRange: NSRange; message 'accessibilityRowIndexRange'; { available in macos  }
    function accessibilityRows: NSArray; message 'accessibilityRows'; { available in macos  }
    function accessibilityRTFForRange (range: NSRange): NSData; message 'accessibilityRTFForRange:'; { available in macos  }
    function accessibilityRulerMarkerType: NSAccessibilityRulerMarkerType; message 'accessibilityRulerMarkerType'; { available in macos  }
    function accessibilityScreenPointForLayoutPoint (point: NSPoint): NSPoint; message 'accessibilityScreenPointForLayoutPoint:'; { available in macos  }
    function accessibilityScreenSizeForLayoutSize (size: NSSize): NSSize; message 'accessibilityScreenSizeForLayoutSize:'; { available in macos  }
    function accessibilitySearchButton: id; message 'accessibilitySearchButton'; { available in macos  }
    function accessibilitySearchMenu: id; message 'accessibilitySearchMenu'; { available in macos  }
    function accessibilitySelectedCells: NSArray; message 'accessibilitySelectedCells'; { available in macos  }
    function accessibilitySelectedChildren: NSArray; message 'accessibilitySelectedChildren'; { available in macos  }
    function accessibilitySelectedColumns: NSArray; message 'accessibilitySelectedColumns'; { available in macos  }
    function accessibilitySelectedRows: NSArray; message 'accessibilitySelectedRows'; { available in macos  }
    function accessibilitySelectedText: NSString; message 'accessibilitySelectedText'; { available in macos  }
    function accessibilitySelectedTextRange: NSRange; message 'accessibilitySelectedTextRange'; { available in macos  }
    function accessibilitySelectedTextRanges: NSArray; message 'accessibilitySelectedTextRanges'; { available in macos  }
    function accessibilityServesAsTitleForUIElements: NSArray; message 'accessibilityServesAsTitleForUIElements'; { available in macos  }
    function accessibilitySharedCharacterRange: NSRange; message 'accessibilitySharedCharacterRange'; { available in macos  }
    function accessibilitySharedFocusElements: NSArray; message 'accessibilitySharedFocusElements'; { available in macos  }
    function accessibilitySharedTextUIElements: NSArray; message 'accessibilitySharedTextUIElements'; { available in macos  }
    function accessibilityShownMenu: id; message 'accessibilityShownMenu'; { available in macos  }
    function accessibilitySortDirection: NSAccessibilitySortDirection; message 'accessibilitySortDirection'; { available in macos  }
    function accessibilitySplitters: NSArray; message 'accessibilitySplitters'; { available in macos  }
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:'; { available in macos  }
    function accessibilityStyleRangeForIndex (index: NSInteger): NSRange; message 'accessibilityStyleRangeForIndex:'; { available in macos  }
    function accessibilitySubrole: NSAccessibilitySubrole; message 'accessibilitySubrole'; { available in macos  }
    function accessibilityTabs: NSArray; message 'accessibilityTabs'; { available in macos  }
    function accessibilityTitle: NSString; message 'accessibilityTitle'; { available in macos  }
    function accessibilityTitleUIElement: id; message 'accessibilityTitleUIElement'; { available in macos  }
    function accessibilityToolbarButton: id; message 'accessibilityToolbarButton'; { available in macos  }
    function accessibilityTopLevelUIElement: id; message 'accessibilityTopLevelUIElement'; { available in macos  }
    function accessibilityUnitDescription: NSString; message 'accessibilityUnitDescription'; { available in macos  }
    function accessibilityUnits: NSAccessibilityUnits; message 'accessibilityUnits'; { available in macos  }
    function accessibilityURL: NSURL; message 'accessibilityURL'; { available in macos  }
    function accessibilityValue: id; message 'accessibilityValue'; { available in macos  }
    function accessibilityValueDescription: NSString; message 'accessibilityValueDescription'; { available in macos  }
    function accessibilityVerticalScrollBar: id; message 'accessibilityVerticalScrollBar'; { available in macos  }
    function accessibilityVerticalUnitDescription: NSString; message 'accessibilityVerticalUnitDescription'; { available in macos  }
    function accessibilityVerticalUnits: NSAccessibilityUnits; message 'accessibilityVerticalUnits'; { available in macos  }
    function accessibilityVisibleCells: NSArray; message 'accessibilityVisibleCells'; { available in macos  }
    function accessibilityVisibleCharacterRange: NSRange; message 'accessibilityVisibleCharacterRange'; { available in macos  }
    function accessibilityVisibleChildren: NSArray; message 'accessibilityVisibleChildren'; { available in macos  }
    function accessibilityVisibleColumns: NSArray; message 'accessibilityVisibleColumns'; { available in macos  }
    function accessibilityVisibleRows: NSArray; message 'accessibilityVisibleRows'; { available in macos  }
    function accessibilityWarningValue: id; message 'accessibilityWarningValue'; { available in macos  }
    function accessibilityWindow: id; message 'accessibilityWindow'; { available in macos  }
    function accessibilityWindows: NSArray; message 'accessibilityWindows'; { available in macos  }
    function accessibilityZoomButton: id; message 'accessibilityZoomButton'; { available in macos  }
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos  }
    function animations: NSDictionary; message 'animations'; { available in macos  }
    function animator: id; message 'animator'; { available in macos  }
    function appearance: NSAppearance; message 'appearance'; { available in macos  }
    procedure concludeDragOperation (sender: NSDraggingInfoProtocol); message 'concludeDragOperation:';
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos  }
    procedure draggingEnded (sender: NSDraggingInfoProtocol); message 'draggingEnded:';
    function draggingEntered (sender: NSDraggingInfoProtocol): NSDragOperation; message 'draggingEntered:';
    procedure draggingExited (sender: NSDraggingInfoProtocol); message 'draggingExited:';
    function draggingUpdated (sender: NSDraggingInfoProtocol): NSDragOperation; message 'draggingUpdated:';
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos  }
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible'; { available in macos  }
    function isAccessibilityDisclosed: objcbool; message 'isAccessibilityDisclosed'; { available in macos  }
    function isAccessibilityEdited: objcbool; message 'isAccessibilityEdited'; { available in macos  }
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement'; { available in macos  }
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled'; { available in macos  }
    function isAccessibilityExpanded: objcbool; message 'isAccessibilityExpanded'; { available in macos  }
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused';
    function isAccessibilityFrontmost: objcbool; message 'isAccessibilityFrontmost'; { available in macos  }
    function isAccessibilityHidden: objcbool; message 'isAccessibilityHidden'; { available in macos  }
    function isAccessibilityMain: objcbool; message 'isAccessibilityMain'; { available in macos  }
    function isAccessibilityMinimized: objcbool; message 'isAccessibilityMinimized'; { available in macos  }
    function isAccessibilityModal: objcbool; message 'isAccessibilityModal'; { available in macos  }
    function isAccessibilityOrderedByRow: objcbool; message 'isAccessibilityOrderedByRow'; { available in macos  }
    function isAccessibilityProtectedContent: objcbool; message 'isAccessibilityProtectedContent'; { available in macos  }
    function isAccessibilityRequired: objcbool; message 'isAccessibilityRequired'; { available in macos  }
    function isAccessibilitySelected: objcbool; message 'isAccessibilitySelected'; { available in macos  }
    function isAccessibilitySelectorAllowed (selector: SEL): objcbool; message 'isAccessibilitySelectorAllowed:'; { available in macos  }
    function performDragOperation (sender: NSDraggingInfoProtocol): objcbool; message 'performDragOperation:';
    function prepareForDragOperation (sender: NSDraggingInfoProtocol): objcbool; message 'prepareForDragOperation:';
    procedure setAccessibilityActivationPoint (newValue: NSPoint); message 'setAccessibilityActivationPoint:'; { available in macos  }
    procedure setAccessibilityAllowedValues (newValue: NSArray); message 'setAccessibilityAllowedValues:'; { available in macos  }
    procedure setAccessibilityAlternateUIVisible (newValue: objcbool); message 'setAccessibilityAlternateUIVisible:'; { available in macos  }
    procedure setAccessibilityApplicationFocusedUIElement (newValue: id); message 'setAccessibilityApplicationFocusedUIElement:'; { available in macos  }
    procedure setAccessibilityCancelButton (newValue: id); message 'setAccessibilityCancelButton:'; { available in macos  }
    procedure setAccessibilityChildren (newValue: NSArray); message 'setAccessibilityChildren:'; { available in macos  }
    procedure setAccessibilityChildrenInNavigationOrder (newValue: NSArray); message 'setAccessibilityChildrenInNavigationOrder:'; { available in macos  }
    procedure setAccessibilityClearButton (newValue: id); message 'setAccessibilityClearButton:'; { available in macos  }
    procedure setAccessibilityCloseButton (newValue: id); message 'setAccessibilityCloseButton:'; { available in macos  }
    procedure setAccessibilityColumnCount (newValue: NSInteger); message 'setAccessibilityColumnCount:'; { available in macos  }
    procedure setAccessibilityColumnHeaderUIElements (newValue: NSArray); message 'setAccessibilityColumnHeaderUIElements:'; { available in macos  }
    procedure setAccessibilityColumnIndexRange (newValue: NSRange); message 'setAccessibilityColumnIndexRange:'; { available in macos  }
    procedure setAccessibilityColumns (newValue: NSArray); message 'setAccessibilityColumns:'; { available in macos  }
    procedure setAccessibilityColumnTitles (newValue: NSArray); message 'setAccessibilityColumnTitles:'; { available in macos  }
    procedure setAccessibilityContents (newValue: NSArray); message 'setAccessibilityContents:'; { available in macos  }
    procedure setAccessibilityCriticalValue (newValue: id); message 'setAccessibilityCriticalValue:'; { available in macos  }
    procedure setAccessibilityCustomActions (newValue: NSArray); message 'setAccessibilityCustomActions:'; { available in macos  }
    procedure setAccessibilityCustomRotors (newValue: NSArray); message 'setAccessibilityCustomRotors:'; { available in macos  }
    procedure setAccessibilityDecrementButton (newValue: id); message 'setAccessibilityDecrementButton:'; { available in macos  }
    procedure setAccessibilityDefaultButton (newValue: id); message 'setAccessibilityDefaultButton:'; { available in macos  }
    procedure setAccessibilityDisclosed (newValue: objcbool); message 'setAccessibilityDisclosed:'; { available in macos  }
    procedure setAccessibilityDisclosedByRow (newValue: id); message 'setAccessibilityDisclosedByRow:'; { available in macos  }
    procedure setAccessibilityDisclosedRows (newValue: id); message 'setAccessibilityDisclosedRows:'; { available in macos  }
    procedure setAccessibilityDisclosureLevel (newValue: NSInteger); message 'setAccessibilityDisclosureLevel:'; { available in macos  }
    procedure setAccessibilityDocument (newValue: NSString); message 'setAccessibilityDocument:'; { available in macos  }
    procedure setAccessibilityEdited (newValue: objcbool); message 'setAccessibilityEdited:'; { available in macos  }
    procedure setAccessibilityElement (newValue: objcbool); message 'setAccessibilityElement:'; { available in macos  }
    procedure setAccessibilityEnabled (newValue: objcbool); message 'setAccessibilityEnabled:'; { available in macos  }
    procedure setAccessibilityExpanded (newValue: objcbool); message 'setAccessibilityExpanded:'; { available in macos  }
    procedure setAccessibilityExtrasMenuBar (newValue: id); message 'setAccessibilityExtrasMenuBar:'; { available in macos  }
    procedure setAccessibilityFilename (newValue: NSString); message 'setAccessibilityFilename:'; { available in macos  }
    procedure setAccessibilityFocused (newValue: objcbool); message 'setAccessibilityFocused:'; { available in macos  }
    procedure setAccessibilityFocusedWindow (newValue: id); message 'setAccessibilityFocusedWindow:'; { available in macos  }
    procedure setAccessibilityFrame (newValue: NSRect); message 'setAccessibilityFrame:'; { available in macos  }
    procedure setAccessibilityFrontmost (newValue: objcbool); message 'setAccessibilityFrontmost:'; { available in macos  }
    procedure setAccessibilityFullScreenButton (newValue: id); message 'setAccessibilityFullScreenButton:'; { available in macos  }
    procedure setAccessibilityGrowArea (newValue: id); message 'setAccessibilityGrowArea:'; { available in macos  }
    procedure setAccessibilityHandles (newValue: NSArray); message 'setAccessibilityHandles:'; { available in macos  }
    procedure setAccessibilityHeader (newValue: id); message 'setAccessibilityHeader:'; { available in macos  }
    procedure setAccessibilityHelp (newValue: NSString); message 'setAccessibilityHelp:'; { available in macos  }
    procedure setAccessibilityHidden (newValue: objcbool); message 'setAccessibilityHidden:'; { available in macos  }
    procedure setAccessibilityHorizontalScrollBar (newValue: id); message 'setAccessibilityHorizontalScrollBar:'; { available in macos  }
    procedure setAccessibilityHorizontalUnitDescription (newValue: NSString); message 'setAccessibilityHorizontalUnitDescription:'; { available in macos  }
    procedure setAccessibilityHorizontalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityHorizontalUnits:'; { available in macos  }
    procedure setAccessibilityIdentifier (newValue: NSString); message 'setAccessibilityIdentifier:'; { available in macos  }
    procedure setAccessibilityIncrementButton (newValue: id); message 'setAccessibilityIncrementButton:'; { available in macos  }
    procedure setAccessibilityIndex (newValue: NSInteger); message 'setAccessibilityIndex:'; { available in macos  }
    procedure setAccessibilityInsertionPointLineNumber (newValue: NSInteger); message 'setAccessibilityInsertionPointLineNumber:'; { available in macos  }
    procedure setAccessibilityLabel (newValue: NSString); message 'setAccessibilityLabel:'; { available in macos  }
    procedure setAccessibilityLabelUIElements (newValue: NSArray); message 'setAccessibilityLabelUIElements:'; { available in macos  }
    procedure setAccessibilityLabelValue (newValue: single); message 'setAccessibilityLabelValue:'; { available in macos  }
    procedure setAccessibilityLinkedUIElements (newValue: NSArray); message 'setAccessibilityLinkedUIElements:'; { available in macos  }
    procedure setAccessibilityMain (newValue: objcbool); message 'setAccessibilityMain:'; { available in macos  }
    procedure setAccessibilityMainWindow (newValue: id); message 'setAccessibilityMainWindow:'; { available in macos  }
    procedure setAccessibilityMarkerGroupUIElement (newValue: id); message 'setAccessibilityMarkerGroupUIElement:'; { available in macos  }
    procedure setAccessibilityMarkerTypeDescription (newValue: NSString); message 'setAccessibilityMarkerTypeDescription:'; { available in macos  }
    procedure setAccessibilityMarkerUIElements (newValue: NSArray); message 'setAccessibilityMarkerUIElements:'; { available in macos  }
    procedure setAccessibilityMarkerValues (newValue: id); message 'setAccessibilityMarkerValues:'; { available in macos  }
    procedure setAccessibilityMaxValue (newValue: id); message 'setAccessibilityMaxValue:'; { available in macos  }
    procedure setAccessibilityMenuBar (newValue: id); message 'setAccessibilityMenuBar:'; { available in macos  }
    procedure setAccessibilityMinimizeButton (newValue: id); message 'setAccessibilityMinimizeButton:'; { available in macos  }
    procedure setAccessibilityMinimized (newValue: objcbool); message 'setAccessibilityMinimized:'; { available in macos  }
    procedure setAccessibilityMinValue (newValue: id); message 'setAccessibilityMinValue:'; { available in macos  }
    procedure setAccessibilityModal (newValue: objcbool); message 'setAccessibilityModal:'; { available in macos  }
    procedure setAccessibilityNextContents (newValue: NSArray); message 'setAccessibilityNextContents:'; { available in macos  }
    procedure setAccessibilityNumberOfCharacters (newValue: NSInteger); message 'setAccessibilityNumberOfCharacters:'; { available in macos  }
    procedure setAccessibilityOrderedByRow (newValue: objcbool); message 'setAccessibilityOrderedByRow:'; { available in macos  }
    procedure setAccessibilityOrientation (newValue: NSAccessibilityOrientation); message 'setAccessibilityOrientation:'; { available in macos  }
    procedure setAccessibilityOverflowButton (newValue: id); message 'setAccessibilityOverflowButton:'; { available in macos  }
    procedure setAccessibilityParent (newValue: id); message 'setAccessibilityParent:'; { available in macos  }
    procedure setAccessibilityPlaceholderValue (newValue: NSString); message 'setAccessibilityPlaceholderValue:'; { available in macos  }
    procedure setAccessibilityPreviousContents (newValue: NSArray); message 'setAccessibilityPreviousContents:'; { available in macos  }
    procedure setAccessibilityProtectedContent (newValue: objcbool); message 'setAccessibilityProtectedContent:'; { available in macos  }
    procedure setAccessibilityProxy (newValue: id); message 'setAccessibilityProxy:'; { available in macos  }
    procedure setAccessibilityRequired (newValue: objcbool); message 'setAccessibilityRequired:'; { available in macos  }
    procedure setAccessibilityRole (newValue: NSAccessibilityRole); message 'setAccessibilityRole:'; { available in macos  }
    procedure setAccessibilityRoleDescription (newValue: NSString); message 'setAccessibilityRoleDescription:'; { available in macos  }
    procedure setAccessibilityRowCount (newValue: NSInteger); message 'setAccessibilityRowCount:'; { available in macos  }
    procedure setAccessibilityRowHeaderUIElements (newValue: NSArray); message 'setAccessibilityRowHeaderUIElements:'; { available in macos  }
    procedure setAccessibilityRowIndexRange (newValue: NSRange); message 'setAccessibilityRowIndexRange:'; { available in macos  }
    procedure setAccessibilityRows (newValue: NSArray); message 'setAccessibilityRows:'; { available in macos  }
    procedure setAccessibilityRulerMarkerType (newValue: NSAccessibilityRulerMarkerType); message 'setAccessibilityRulerMarkerType:'; { available in macos  }
    procedure setAccessibilitySearchButton (newValue: id); message 'setAccessibilitySearchButton:'; { available in macos  }
    procedure setAccessibilitySearchMenu (newValue: id); message 'setAccessibilitySearchMenu:'; { available in macos  }
    procedure setAccessibilitySelected (newValue: objcbool); message 'setAccessibilitySelected:'; { available in macos  }
    procedure setAccessibilitySelectedCells (newValue: NSArray); message 'setAccessibilitySelectedCells:'; { available in macos  }
    procedure setAccessibilitySelectedChildren (newValue: NSArray); message 'setAccessibilitySelectedChildren:'; { available in macos  }
    procedure setAccessibilitySelectedColumns (newValue: NSArray); message 'setAccessibilitySelectedColumns:'; { available in macos  }
    procedure setAccessibilitySelectedRows (newValue: NSArray); message 'setAccessibilitySelectedRows:'; { available in macos  }
    procedure setAccessibilitySelectedText (newValue: NSString); message 'setAccessibilitySelectedText:'; { available in macos  }
    procedure setAccessibilitySelectedTextRange (newValue: NSRange); message 'setAccessibilitySelectedTextRange:'; { available in macos  }
    procedure setAccessibilitySelectedTextRanges (newValue: NSArray); message 'setAccessibilitySelectedTextRanges:'; { available in macos  }
    procedure setAccessibilityServesAsTitleForUIElements (newValue: NSArray); message 'setAccessibilityServesAsTitleForUIElements:'; { available in macos  }
    procedure setAccessibilitySharedCharacterRange (newValue: NSRange); message 'setAccessibilitySharedCharacterRange:'; { available in macos  }
    procedure setAccessibilitySharedFocusElements (newValue: NSArray); message 'setAccessibilitySharedFocusElements:'; { available in macos  }
    procedure setAccessibilitySharedTextUIElements (newValue: NSArray); message 'setAccessibilitySharedTextUIElements:'; { available in macos  }
    procedure setAccessibilityShownMenu (newValue: id); message 'setAccessibilityShownMenu:'; { available in macos  }
    procedure setAccessibilitySortDirection (newValue: NSAccessibilitySortDirection); message 'setAccessibilitySortDirection:'; { available in macos  }
    procedure setAccessibilitySplitters (newValue: NSArray); message 'setAccessibilitySplitters:'; { available in macos  }
    procedure setAccessibilitySubrole (newValue: NSAccessibilitySubrole); message 'setAccessibilitySubrole:'; { available in macos  }
    procedure setAccessibilityTabs (newValue: NSArray); message 'setAccessibilityTabs:'; { available in macos  }
    procedure setAccessibilityTitle (newValue: NSString); message 'setAccessibilityTitle:'; { available in macos  }
    procedure setAccessibilityTitleUIElement (newValue: id); message 'setAccessibilityTitleUIElement:'; { available in macos  }
    procedure setAccessibilityToolbarButton (newValue: id); message 'setAccessibilityToolbarButton:'; { available in macos  }
    procedure setAccessibilityTopLevelUIElement (newValue: id); message 'setAccessibilityTopLevelUIElement:'; { available in macos  }
    procedure setAccessibilityUnitDescription (newValue: NSString); message 'setAccessibilityUnitDescription:'; { available in macos  }
    procedure setAccessibilityUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityUnits:'; { available in macos  }
    procedure setAccessibilityURL (newValue: NSURL); message 'setAccessibilityURL:'; { available in macos  }
    procedure setAccessibilityValue (newValue: id); message 'setAccessibilityValue:'; { available in macos  }
    procedure setAccessibilityValueDescription (newValue: NSString); message 'setAccessibilityValueDescription:'; { available in macos  }
    procedure setAccessibilityVerticalScrollBar (newValue: id); message 'setAccessibilityVerticalScrollBar:'; { available in macos  }
    procedure setAccessibilityVerticalUnitDescription (newValue: NSString); message 'setAccessibilityVerticalUnitDescription:'; { available in macos  }
    procedure setAccessibilityVerticalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityVerticalUnits:'; { available in macos  }
    procedure setAccessibilityVisibleCells (newValue: NSArray); message 'setAccessibilityVisibleCells:'; { available in macos  }
    procedure setAccessibilityVisibleCharacterRange (newValue: NSRange); message 'setAccessibilityVisibleCharacterRange:'; { available in macos  }
    procedure setAccessibilityVisibleChildren (newValue: NSArray); message 'setAccessibilityVisibleChildren:'; { available in macos  }
    procedure setAccessibilityVisibleColumns (newValue: NSArray); message 'setAccessibilityVisibleColumns:'; { available in macos  }
    procedure setAccessibilityVisibleRows (newValue: NSArray); message 'setAccessibilityVisibleRows:'; { available in macos  }
    procedure setAccessibilityWarningValue (newValue: id); message 'setAccessibilityWarningValue:'; { available in macos  }
    procedure setAccessibilityWindow (newValue: id); message 'setAccessibilityWindow:'; { available in macos  }
    procedure setAccessibilityWindows (newValue: NSArray); message 'setAccessibilityWindows:'; { available in macos  }
    procedure setAccessibilityZoomButton (newValue: id); message 'setAccessibilityZoomButton:'; { available in macos  }
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos  }
    procedure setAppearance (newValue: NSAppearance); message 'setAppearance:'; { available in macos  }
    procedure setIdentifier (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    procedure updateDraggingItemsForDrag (sender: NSDraggingInfoProtocol); message 'updateDraggingItemsForDrag:'; { available in macos  }
    function wantsPeriodicDraggingUpdates: objcbool; message 'wantsPeriodicDraggingUpdates';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSViewLayerContentScaleDelegateProtocol = objcprotocol external name 'NSViewLayerContentScaleDelegate' (NSObjectProtocol)
  optional
    function layer_shouldInheritContentsScale_fromWindow (layer: CALayer; newScale: CGFloat; window: NSWindow): objcbool; message 'layer:shouldInheritContentsScale:fromWindow:'; { available in macos  }
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSLayerDelegateContentsScaleUpdating = objccategory external (NSObject)
    function layer_shouldInheritContentsScale_fromWindow (layer: CALayer; newScale: CGFloat; window: NSWindow): objcbool; message 'layer:shouldInheritContentsScale:fromWindow:'; deprecated 'This is now a method of the NSViewLayerContentScaleDelegate protocol.';
  end;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  NSViewToolTipOwnerProtocol = objcprotocol external name 'NSViewToolTipOwner' (NSObjectProtocol)
    function view_stringForToolTip_point_userData (view: NSView; tag: NSToolTipTag; point: NSPoint; data: pointer): NSString; message 'view:stringForToolTip:point:userData:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSToolTipOwner = objccategory external (NSObject)
    function view_stringForToolTip_point_userData (view: NSView; tag: NSToolTipTag; point: NSPoint; data: pointer): NSString; message 'view:stringForToolTip:point:userData:'; deprecated 'This is now a method of the NSViewToolTipOwner protocol.';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSView_NSKeyboardUI = objccategory external name 'NSKeyboardUI' (NSView)
    procedure setNextKeyView(newValue: NSView); message 'setNextKeyView:';
    function nextKeyView: NSView; message 'nextKeyView';
    function previousKeyView: NSView; message 'previousKeyView';
    function nextValidKeyView: NSView; message 'nextValidKeyView';
    function previousValidKeyView: NSView; message 'previousValidKeyView';
    function canBecomeKeyView: objcbool; message 'canBecomeKeyView';
    procedure setKeyboardFocusRingNeedsDisplayInRect (rect: NSRect); message 'setKeyboardFocusRingNeedsDisplayInRect:';
    procedure setFocusRingType(newValue: NSFocusRingType); message 'setFocusRingType:';
    function focusRingType: NSFocusRingType; message 'focusRingType';
    class function defaultFocusRingType: NSFocusRingType; message 'defaultFocusRingType';
    procedure drawFocusRingMask; message 'drawFocusRingMask'; { available in macos  }
    function focusRingMaskBounds: NSRect; message 'focusRingMaskBounds'; { available in macos  }
    procedure noteFocusRingMaskChanged; message 'noteFocusRingMaskChanged'; { available in macos  }
  end;

type
  NSPrinting = objccategory external (NSView)
    procedure writeEPSInsideRect_toPasteboard (rect: NSRect; pasteboard: NSPasteboard); message 'writeEPSInsideRect:toPasteboard:';
    function dataWithEPSInsideRect (rect: NSRect): NSData; message 'dataWithEPSInsideRect:';
    procedure writePDFInsideRect_toPasteboard (rect: NSRect; pasteboard: NSPasteboard); message 'writePDFInsideRect:toPasteboard:';
    function dataWithPDFInsideRect (rect: NSRect): NSData; message 'dataWithPDFInsideRect:';
    procedure print (sender: id); message 'print:';
    function knowsPageRange (range: NSRangePointer): objcbool; message 'knowsPageRange:';
    function heightAdjustLimit: CGFloat; message 'heightAdjustLimit';
    function widthAdjustLimit: CGFloat; message 'widthAdjustLimit';
    procedure adjustPageWidthNew_left_right_limit (newRight: CGFloatPtr; oldLeft: CGFloat; oldRight: CGFloat; rightLimit: CGFloat); message 'adjustPageWidthNew:left:right:limit:';
    procedure adjustPageHeightNew_top_bottom_limit (newBottom: CGFloatPtr; oldTop: CGFloat; oldBottom: CGFloat; bottomLimit: CGFloat); message 'adjustPageHeightNew:top:bottom:limit:';
    function rectForPage (page: NSInteger): NSRect; message 'rectForPage:';
    function locationOfPrintRect (rect: NSRect): NSPoint; message 'locationOfPrintRect:';
    procedure drawPageBorderWithSize (borderSize: NSSize); message 'drawPageBorderWithSize:';
    function pageHeader: NSAttributedString; message 'pageHeader';
    function pageFooter: NSAttributedString; message 'pageFooter';
    procedure drawSheetBorderWithSize (borderSize: NSSize); message 'drawSheetBorderWithSize:'; deprecated 'This is never invoked and the NSView implementation does nothing';
    function printJobTitle: NSString; message 'printJobTitle';
    procedure beginDocument; message 'beginDocument';
    procedure endDocument; message 'endDocument';
    procedure beginPageInRect_atPlacement (rect: NSRect; location: NSPoint); message 'beginPageInRect:atPlacement:';
    procedure endPage; message 'endPage';
  end;

type
  NSView_NSDrag = objccategory external name 'NSDrag' (NSView)
    function beginDraggingSessionWithItems_event_source (items: NSArray; event: NSEvent; source: NSDraggingSourceProtocol): NSDraggingSession; message 'beginDraggingSessionWithItems:event:source:'; { available in macos  }
    function registeredDraggedTypes: NSArray; message 'registeredDraggedTypes';
    procedure registerForDraggedTypes (newTypes: NSArray); message 'registerForDraggedTypes:';
    procedure unregisterDraggedTypes; message 'unregisterDraggedTypes';
  end;
{$endif}

{$ifdef TYPES}
type
  NSViewFullScreenModeOptionKey = NSString;
  NSViewFullScreenModeOptionKeyPtr = ^NSViewFullScreenModeOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFullScreenModeAllScreens: NSViewFullScreenModeOptionKey { available in macos  }; cvar; external;
  NSFullScreenModeSetting: NSViewFullScreenModeOptionKey { available in macos  }; cvar; external;
  NSFullScreenModeWindowLevel: NSViewFullScreenModeOptionKey { available in macos  }; cvar; external;
  NSFullScreenModeApplicationPresentationOptions: NSViewFullScreenModeOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFullScreenMode = objccategory external (NSView)
    function enterFullScreenMode_withOptions (screen: NSScreen; options: NSDictionary): objcbool; message 'enterFullScreenMode:withOptions:'; { available in macos  }
    procedure exitFullScreenModeWithOptions (options: NSDictionary); message 'exitFullScreenModeWithOptions:'; { available in macos  }
    function isInFullScreenMode: objcbool; message 'isInFullScreenMode'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSDefinitionOptionKey = NSString;
  NSDefinitionOptionKeyPtr = ^NSDefinitionOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDefinitionPresentationTypeKey: NSDefinitionOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSDefinitionPresentationType = NSString;
  NSDefinitionPresentationTypePtr = ^NSDefinitionPresentationType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDefinitionPresentationTypeOverlay: NSDefinitionPresentationType { available in macos  }; cvar; external;
  NSDefinitionPresentationTypeDictionaryApplication: NSDefinitionPresentationType { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDefinition = objccategory external (NSView)
    procedure showDefinitionForAttributedString_atPoint (attrString: NSAttributedString; textBaselineOrigin: NSPoint); message 'showDefinitionForAttributedString:atPoint:'; { available in macos  }
    procedure showDefinitionForAttributedString_range_options_baselineOriginProvider (attrString: NSAttributedString; targetRange: NSRange; options: NSDictionary; originProvider: NSViewShowDefinitionForAttributedStringCallback); message 'showDefinitionForAttributedString:range:options:baselineOriginProvider:'; { available in macos  }
  end;

type
  NSFindIndicator = objccategory external (NSView)
    function isDrawingFindIndicator: objcbool; message 'isDrawingFindIndicator'; { available in macos  }
  end;

type
  NSView_NSGestureRecognizer = objccategory external name 'NSGestureRecognizer' (NSView)
    procedure setGestureRecognizers(newValue: NSArray); message 'setGestureRecognizers:'; { available in macos  }
    function gestureRecognizers: NSArray; message 'gestureRecognizers'; { available in macos  }
    procedure addGestureRecognizer (gestureRecognizer: NSGestureRecognizer); message 'addGestureRecognizer:'; { available in macos  }
    procedure removeGestureRecognizer (gestureRecognizer: NSGestureRecognizer); message 'removeGestureRecognizer:'; { available in macos  }
  end;

type
  NSView_NSTouchBar = objccategory external name 'NSTouchBar' (NSView)
    procedure setAllowedTouchTypes(newValue: NSTouchTypeMask); message 'setAllowedTouchTypes:'; { available in macos  }
    function allowedTouchTypes: NSTouchTypeMask; message 'allowedTouchTypes'; { available in macos  }
  end;

type
  NSSafeAreas = objccategory external (NSView)
    function safeAreaInsets: NSEdgeInsets; message 'safeAreaInsets'; { available in macos  }
    procedure setAdditionalSafeAreaInsets(newValue: NSEdgeInsets); message 'setAdditionalSafeAreaInsets:'; { available in macos  }
    function additionalSafeAreaInsets: NSEdgeInsets; message 'additionalSafeAreaInsets'; { available in macos  }
    function safeAreaLayoutGuide: NSLayoutGuide; message 'safeAreaLayoutGuide'; { available in macos  }
    function safeAreaRect: NSRect; message 'safeAreaRect'; { available in macos  }
    function layoutMarginsGuide: NSLayoutGuide; message 'layoutMarginsGuide'; { available in macos  }
  end;

type
  NSView_NSDeprecated = objccategory external name 'NSDeprecated' (NSView)
    procedure dragImage_at_offset_event_pasteboard_source_slideBack (image: NSImage; viewLocation: NSPoint; initialOffset: NSSize; event: NSEvent; pboard: NSPasteboard; sourceObj: id; slideFlag: objcbool); message 'dragImage:at:offset:event:pasteboard:source:slideBack:'; deprecated 'Use -beginDraggingSessionWithItems:event:source: instead';
    function dragFile_fromRect_slideBack_event (filename: NSString; rect: NSRect; flag: objcbool; event: NSEvent): objcbool; message 'dragFile:fromRect:slideBack:event:'; deprecated 'Use -beginDraggingSessionWithItems:event:source: instead';
    function dragPromisedFilesOfTypes_fromRect_source_slideBack_event (typeArray: NSArray; rect: NSRect; sourceObject: id; flag: objcbool; event: NSEvent): objcbool; message 'dragPromisedFilesOfTypes:fromRect:source:slideBack:event:'; deprecated 'Use -beginDraggingSessionWithItems:event:source: with an NSFilePromiseProvider instead';
    function convertPointToBase (point: NSPoint): NSPoint; message 'convertPointToBase:'; deprecated;
    function convertPointFromBase (point: NSPoint): NSPoint; message 'convertPointFromBase:'; deprecated;
    function convertSizeToBase (size: NSSize): NSSize; message 'convertSizeToBase:'; deprecated;
    function convertSizeFromBase (size: NSSize): NSSize; message 'convertSizeFromBase:'; deprecated;
    function convertRectToBase (rect: NSRect): NSRect; message 'convertRectToBase:'; deprecated;
    function convertRectFromBase (rect: NSRect): NSRect; message 'convertRectFromBase:'; deprecated;
    function performMnemonic (string_: NSString): objcbool; message 'performMnemonic:'; deprecated 'This has always returned NO and had no effect on macOS';
    function shouldDrawColor: objcbool; message 'shouldDrawColor'; deprecated 'This method no longer does anything';
    function gState: NSInteger; message 'gState'; deprecated;
    procedure allocateGState; message 'allocateGState'; deprecated;
    procedure releaseGState; message 'releaseGState'; deprecated;
    procedure setUpGState; message 'setUpGState'; deprecated;
    procedure renewGState; message 'renewGState'; deprecated;
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSViewFrameDidChangeNotification: NSNotificationName; cvar; external;
  NSViewFocusDidChangeNotification: NSNotificationName deprecated; cvar; external;
  NSViewBoundsDidChangeNotification: NSNotificationName; cvar; external;
  NSViewGlobalFrameDidChangeNotification: NSNotificationName deprecated 'Use NSOpenGLView instead.'; cvar; external;
  NSViewDidUpdateTrackingAreasNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

