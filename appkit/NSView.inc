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
  NSViewLayerContentsRedrawCrossfade = 4 { available in macos 10.9 };

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
    procedure viewDidHide; message 'viewDidHide'; { available in macos 10.5 }
    procedure viewDidUnhide; message 'viewDidUnhide'; { available in macos 10.5 }
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
    procedure viewDidChangeBackingProperties; message 'viewDidChangeBackingProperties'; { available in macos 10.7 }
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
    procedure setFrameCenterRotation(newValue: CGFloat); message 'setFrameCenterRotation:'; { available in macos 10.5 }
    function frameCenterRotation: CGFloat; message 'frameCenterRotation'; { available in macos 10.5 }
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
    function backingAlignedRect_options (rect: NSRect; options: NSAlignmentOptions): NSRect; message 'backingAlignedRect:options:'; { available in macos 10.7 }
    function centerScanRect (rect: NSRect): NSRect; message 'centerScanRect:';
    function convertPointToBacking (point: NSPoint): NSPoint; message 'convertPointToBacking:'; { available in macos 10.7 }
    function convertPointFromBacking (point: NSPoint): NSPoint; message 'convertPointFromBacking:'; { available in macos 10.7 }
    function convertSizeToBacking (size: NSSize): NSSize; message 'convertSizeToBacking:'; { available in macos 10.7 }
    function convertSizeFromBacking (size: NSSize): NSSize; message 'convertSizeFromBacking:'; { available in macos 10.7 }
    function convertRectToBacking (rect: NSRect): NSRect; message 'convertRectToBacking:'; { available in macos 10.7 }
    function convertRectFromBacking (rect: NSRect): NSRect; message 'convertRectFromBacking:'; { available in macos 10.7 }
    function convertPointToLayer (point: NSPoint): NSPoint; message 'convertPointToLayer:'; { available in macos 10.7 }
    function convertPointFromLayer (point: NSPoint): NSPoint; message 'convertPointFromLayer:'; { available in macos 10.7 }
    function convertSizeToLayer (size: NSSize): NSSize; message 'convertSizeToLayer:'; { available in macos 10.7 }
    function convertSizeFromLayer (size: NSSize): NSSize; message 'convertSizeFromLayer:'; { available in macos 10.7 }
    function convertRectToLayer (rect: NSRect): NSRect; message 'convertRectToLayer:'; { available in macos 10.7 }
    function convertRectFromLayer (rect: NSRect): NSRect; message 'convertRectFromLayer:'; { available in macos 10.7 }
    procedure setCanDrawConcurrently(newValue: objcbool); message 'setCanDrawConcurrently:'; { available in macos 10.6 }
    function canDrawConcurrently: objcbool; message 'canDrawConcurrently'; { available in macos 10.6 }
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
    procedure viewWillDraw; message 'viewWillDraw'; { available in macos 10.5 }
    procedure scrollPoint (point: NSPoint); message 'scrollPoint:';
    function scrollRectToVisible (rect: NSRect): objcbool; message 'scrollRectToVisible:';
    function autoscroll (event: NSEvent): objcbool; message 'autoscroll:';
    function adjustScroll (newVisible: NSRect): NSRect; message 'adjustScroll:';
    procedure scrollRect_by (rect: NSRect; delta: NSSize); message 'scrollRect:by:'; deprecated 'Use NSScrollView to achieve scrolling views.';
    procedure translateRectsNeedingDisplayInRect_by (clipRect: NSRect; delta: NSSize); message 'translateRectsNeedingDisplayInRect:by:'; { available in macos 10.5 }
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
    procedure setWantsRestingTouches(newValue: objcbool); message 'setWantsRestingTouches:'; { available in macos 10.6 }
    function wantsRestingTouches: objcbool; message 'wantsRestingTouches'; { available in macos 10.6 }
    procedure addCursorRect_cursor (rect: NSRect; object_: NSCursor); message 'addCursorRect:cursor:';
    procedure removeCursorRect_cursor (rect: NSRect; object_: NSCursor); message 'removeCursorRect:cursor:';
    procedure discardCursorRects; message 'discardCursorRects';
    procedure resetCursorRects; message 'resetCursorRects';
    function addTrackingRect_owner_userData_assumeInside (rect: NSRect; owner: id; data: pointer; flag: objcbool): NSTrackingRectTag; message 'addTrackingRect:owner:userData:assumeInside:';
    procedure removeTrackingRect (tag_: NSTrackingRectTag); message 'removeTrackingRect:';
    function makeBackingLayer: CALayer; message 'makeBackingLayer'; { available in macos 10.6 }
    procedure setLayerContentsRedrawPolicy(newValue: NSViewLayerContentsRedrawPolicy); message 'setLayerContentsRedrawPolicy:'; { available in macos 10.6 }
    function layerContentsRedrawPolicy: NSViewLayerContentsRedrawPolicy; message 'layerContentsRedrawPolicy'; { available in macos 10.6 }
    procedure setLayerContentsPlacement(newValue: NSViewLayerContentsPlacement); message 'setLayerContentsPlacement:'; { available in macos 10.6 }
    function layerContentsPlacement: NSViewLayerContentsPlacement; message 'layerContentsPlacement'; { available in macos 10.6 }
    procedure setWantsLayer(newValue: objcbool); message 'setWantsLayer:'; { available in macos 10.5 }
    function wantsLayer: objcbool; message 'wantsLayer'; { available in macos 10.5 }
    procedure setLayer(newValue: CALayer); message 'setLayer:'; { available in macos 10.5 }
    function layer: CALayer; message 'layer'; { available in macos 10.5 }
    function wantsUpdateLayer: objcbool; message 'wantsUpdateLayer'; { available in macos 10.8 }
    procedure updateLayer; message 'updateLayer'; { available in macos 10.8 }
    procedure setCanDrawSubviewsIntoLayer(newValue: objcbool); message 'setCanDrawSubviewsIntoLayer:'; { available in macos 10.9 }
    function canDrawSubviewsIntoLayer: objcbool; message 'canDrawSubviewsIntoLayer'; { available in macos 10.9 }
    procedure layoutSubtreeIfNeeded; message 'layoutSubtreeIfNeeded'; { available in macos 10.7 }
    procedure layout; message 'layout'; { available in macos 10.7 }
    procedure setNeedsLayout(newValue: objcbool); message 'setNeedsLayout:'; { available in macos 10.7 }
    function needsLayout: objcbool; message 'needsLayout'; { available in macos 10.7 }
    procedure setAlphaValue(newValue: CGFloat); message 'setAlphaValue:'; { available in macos 10.5 }
    function alphaValue: CGFloat; message 'alphaValue'; { available in macos 10.5 }
    procedure setLayerUsesCoreImageFilters(newValue: objcbool); message 'setLayerUsesCoreImageFilters:'; { available in macos 10.9 }
    function layerUsesCoreImageFilters: objcbool; message 'layerUsesCoreImageFilters'; { available in macos 10.9 }
    procedure setBackgroundFilters(newValue: NSArray); message 'setBackgroundFilters:'; { available in macos 10.5 }
    function backgroundFilters: NSArray; message 'backgroundFilters'; { available in macos 10.5 }
    procedure setCompositingFilter(newValue: CIFilter); message 'setCompositingFilter:'; { available in macos 10.5 }
    function compositingFilter: CIFilter; message 'compositingFilter'; { available in macos 10.5 }
    procedure setContentFilters(newValue: NSArray); message 'setContentFilters:'; { available in macos 10.5 }
    function contentFilters: NSArray; message 'contentFilters'; { available in macos 10.5 }
    procedure setShadow(newValue: NSShadow); message 'setShadow:'; { available in macos 10.5 }
    function shadow: NSShadow; message 'shadow'; { available in macos 10.5 }
    procedure addTrackingArea (trackingArea: NSTrackingArea); message 'addTrackingArea:'; { available in macos 10.5 }
    procedure removeTrackingArea (trackingArea: NSTrackingArea); message 'removeTrackingArea:'; { available in macos 10.5 }
    function trackingAreas: NSArray; message 'trackingAreas'; { available in macos 10.5 }
    procedure updateTrackingAreas; message 'updateTrackingAreas'; { available in macos 10.5 }
    procedure setPostsBoundsChangedNotifications(newValue: objcbool); message 'setPostsBoundsChangedNotifications:';
    function postsBoundsChangedNotifications: objcbool; message 'postsBoundsChangedNotifications';
    function enclosingScrollView: NSScrollView; message 'enclosingScrollView';
    function menuForEvent (event: NSEvent): NSMenu; message 'menuForEvent:';
    class function defaultMenu: NSMenu; message 'defaultMenu';
    procedure willOpenMenu_withEvent (menu_: NSMenu; event: NSEvent); message 'willOpenMenu:withEvent:'; { available in macos 10.11 }
    procedure didCloseMenu_withEvent (menu_: NSMenu; event: NSEvent); message 'didCloseMenu:withEvent:'; { available in macos 10.11 }
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
    function inputContext: NSTextInputContext; message 'inputContext'; { available in macos 10.6 }
    function rectForSmartMagnificationAtPoint_inRect (location: NSPoint; visibleRect_: NSRect): NSRect; message 'rectForSmartMagnificationAtPoint:inRect:'; { available in macos 10.8 }
    procedure setUserInterfaceLayoutDirection(newValue: NSUserInterfaceLayoutDirection); message 'setUserInterfaceLayoutDirection:'; { available in macos 10.8 }
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos 10.8 }
    procedure prepareForReuse; message 'prepareForReuse'; { available in macos 10.7 }
    class function isCompatibleWithResponsiveScrolling: objcbool; message 'isCompatibleWithResponsiveScrolling'; { available in macos 10.9 }
    procedure prepareContentInRect (rect: NSRect); message 'prepareContentInRect:'; { available in macos 10.9 }
    procedure setPreparedContentRect(newValue: NSRect); message 'setPreparedContentRect:'; { available in macos 10.9 }
    function preparedContentRect: NSRect; message 'preparedContentRect'; { available in macos 10.9 }
    function allowsVibrancy: objcbool; message 'allowsVibrancy'; { available in macos 10.10 }
    procedure viewDidChangeEffectiveAppearance; message 'viewDidChangeEffectiveAppearance'; { available in macos 10.14 }

    { Adopted protocols }
    function accessibilityActivationPoint: NSPoint; message 'accessibilityActivationPoint'; { available in macos 10.10 }
    function accessibilityAllowedValues: NSArray; message 'accessibilityAllowedValues'; { available in macos 10.10 }
    function accessibilityApplicationFocusedUIElement: id; message 'accessibilityApplicationFocusedUIElement'; { available in macos 10.10 }
    function accessibilityAttributedStringForRange (range: NSRange): NSAttributedString; message 'accessibilityAttributedStringForRange:'; { available in macos 10.10 }
    function accessibilityCancelButton: id; message 'accessibilityCancelButton'; { available in macos 10.10 }
    function accessibilityCellForColumn_row (column: NSInteger; row: NSInteger): id; message 'accessibilityCellForColumn:row:'; { available in macos 10.10 }
    function accessibilityChildren: NSArray; message 'accessibilityChildren'; { available in macos 10.10 }
    function accessibilityChildrenInNavigationOrder: NSArray; message 'accessibilityChildrenInNavigationOrder'; { available in macos 10.13 }
    function accessibilityClearButton: id; message 'accessibilityClearButton'; { available in macos 10.10 }
    function accessibilityCloseButton: id; message 'accessibilityCloseButton'; { available in macos 10.10 }
    function accessibilityColumnCount: NSInteger; message 'accessibilityColumnCount'; { available in macos 10.10 }
    function accessibilityColumnHeaderUIElements: NSArray; message 'accessibilityColumnHeaderUIElements'; { available in macos 10.10 }
    function accessibilityColumnIndexRange: NSRange; message 'accessibilityColumnIndexRange'; { available in macos 10.10 }
    function accessibilityColumns: NSArray; message 'accessibilityColumns'; { available in macos 10.10 }
    function accessibilityColumnTitles: NSArray; message 'accessibilityColumnTitles'; { available in macos 10.10 }
    function accessibilityContents: NSArray; message 'accessibilityContents'; { available in macos 10.10 }
    function accessibilityCriticalValue: id; message 'accessibilityCriticalValue'; { available in macos 10.10 }
    function accessibilityCustomActions: NSArray; message 'accessibilityCustomActions'; { available in macos 10.13 }
    function accessibilityCustomRotors: NSArray; message 'accessibilityCustomRotors'; { available in macos 10.13 }
    function accessibilityDecrementButton: id; message 'accessibilityDecrementButton'; { available in macos 10.10 }
    function accessibilityDefaultButton: id; message 'accessibilityDefaultButton'; { available in macos 10.10 }
    function accessibilityDisclosedByRow: id; message 'accessibilityDisclosedByRow'; { available in macos 10.10 }
    function accessibilityDisclosedRows: id; message 'accessibilityDisclosedRows'; { available in macos 10.10 }
    function accessibilityDisclosureLevel: NSInteger; message 'accessibilityDisclosureLevel'; { available in macos 10.10 }
    function accessibilityDocument: NSString; message 'accessibilityDocument'; { available in macos 10.10 }
    function accessibilityExtrasMenuBar: id; message 'accessibilityExtrasMenuBar'; { available in macos 10.10 }
    function accessibilityFilename: NSString; message 'accessibilityFilename'; { available in macos 10.10 }
    function accessibilityFocusedWindow: id; message 'accessibilityFocusedWindow'; { available in macos 10.10 }
    function accessibilityFrame: NSRect; message 'accessibilityFrame';
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:'; { available in macos 10.10 }
    function accessibilityFullScreenButton: id; message 'accessibilityFullScreenButton'; { available in macos 10.10 }
    function accessibilityGrowArea: id; message 'accessibilityGrowArea'; { available in macos 10.10 }
    function accessibilityHandles: NSArray; message 'accessibilityHandles'; { available in macos 10.10 }
    function accessibilityHeader: id; message 'accessibilityHeader'; { available in macos 10.10 }
    function accessibilityHelp: NSString; message 'accessibilityHelp'; { available in macos 10.10 }
    function accessibilityHorizontalScrollBar: id; message 'accessibilityHorizontalScrollBar'; { available in macos 10.10 }
    function accessibilityHorizontalUnitDescription: NSString; message 'accessibilityHorizontalUnitDescription'; { available in macos 10.10 }
    function accessibilityHorizontalUnits: NSAccessibilityUnits; message 'accessibilityHorizontalUnits'; { available in macos 10.10 }
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
    function accessibilityIncrementButton: id; message 'accessibilityIncrementButton'; { available in macos 10.10 }
    function accessibilityIndex: NSInteger; message 'accessibilityIndex'; { available in macos 10.10 }
    function accessibilityInsertionPointLineNumber: NSInteger; message 'accessibilityInsertionPointLineNumber'; { available in macos 10.10 }
    function accessibilityLabel: NSString; message 'accessibilityLabel'; { available in macos 10.10 }
    function accessibilityLabelUIElements: NSArray; message 'accessibilityLabelUIElements'; { available in macos 10.10 }
    function accessibilityLabelValue: single; message 'accessibilityLabelValue'; { available in macos 10.10 }
    function accessibilityLayoutPointForScreenPoint (point: NSPoint): NSPoint; message 'accessibilityLayoutPointForScreenPoint:'; { available in macos 10.10 }
    function accessibilityLayoutSizeForScreenSize (size: NSSize): NSSize; message 'accessibilityLayoutSizeForScreenSize:'; { available in macos 10.10 }
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:'; { available in macos 10.10 }
    function accessibilityLinkedUIElements: NSArray; message 'accessibilityLinkedUIElements'; { available in macos 10.10 }
    function accessibilityMainWindow: id; message 'accessibilityMainWindow'; { available in macos 10.10 }
    function accessibilityMarkerGroupUIElement: id; message 'accessibilityMarkerGroupUIElement'; { available in macos 10.10 }
    function accessibilityMarkerTypeDescription: NSString; message 'accessibilityMarkerTypeDescription'; { available in macos 10.10 }
    function accessibilityMarkerUIElements: NSArray; message 'accessibilityMarkerUIElements'; { available in macos 10.10 }
    function accessibilityMarkerValues: id; message 'accessibilityMarkerValues'; { available in macos 10.10 }
    function accessibilityMaxValue: id; message 'accessibilityMaxValue'; { available in macos 10.10 }
    function accessibilityMenuBar: id; message 'accessibilityMenuBar'; { available in macos 10.10 }
    function accessibilityMinimizeButton: id; message 'accessibilityMinimizeButton'; { available in macos 10.10 }
    function accessibilityMinValue: id; message 'accessibilityMinValue'; { available in macos 10.10 }
    function accessibilityNextContents: NSArray; message 'accessibilityNextContents'; { available in macos 10.10 }
    function accessibilityNumberOfCharacters: NSInteger; message 'accessibilityNumberOfCharacters'; { available in macos 10.10 }
    function accessibilityOrientation: NSAccessibilityOrientation; message 'accessibilityOrientation'; { available in macos 10.10 }
    function accessibilityOverflowButton: id; message 'accessibilityOverflowButton'; { available in macos 10.10 }
    function accessibilityParent: id; message 'accessibilityParent';
    function accessibilityPerformCancel: objcbool; message 'accessibilityPerformCancel'; { available in macos 10.10 }
    function accessibilityPerformConfirm: objcbool; message 'accessibilityPerformConfirm'; { available in macos 10.10 }
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement'; { available in macos 10.10 }
    function accessibilityPerformDelete: objcbool; message 'accessibilityPerformDelete'; { available in macos 10.10 }
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement'; { available in macos 10.10 }
    function accessibilityPerformPick: objcbool; message 'accessibilityPerformPick'; { available in macos 10.10 }
    function accessibilityPerformPress: objcbool; message 'accessibilityPerformPress'; { available in macos 10.10 }
    function accessibilityPerformRaise: objcbool; message 'accessibilityPerformRaise'; { available in macos 10.10 }
    function accessibilityPerformShowAlternateUI: objcbool; message 'accessibilityPerformShowAlternateUI'; { available in macos 10.10 }
    function accessibilityPerformShowDefaultUI: objcbool; message 'accessibilityPerformShowDefaultUI'; { available in macos 10.10 }
    function accessibilityPerformShowMenu: objcbool; message 'accessibilityPerformShowMenu'; { available in macos 10.10 }
    function accessibilityPlaceholderValue: NSString; message 'accessibilityPlaceholderValue'; { available in macos 10.10 }
    function accessibilityPreviousContents: NSArray; message 'accessibilityPreviousContents'; { available in macos 10.10 }
    function accessibilityProxy: id; message 'accessibilityProxy'; { available in macos 10.10 }
    function accessibilityRangeForIndex (index: NSInteger): NSRange; message 'accessibilityRangeForIndex:'; { available in macos 10.10 }
    function accessibilityRangeForLine (line: NSInteger): NSRange; message 'accessibilityRangeForLine:'; { available in macos 10.10 }
    function accessibilityRangeForPosition (point: NSPoint): NSRange; message 'accessibilityRangeForPosition:'; { available in macos 10.10 }
    function accessibilityRole: NSAccessibilityRole; message 'accessibilityRole'; { available in macos 10.10 }
    function accessibilityRoleDescription: NSString; message 'accessibilityRoleDescription'; { available in macos 10.10 }
    function accessibilityRowCount: NSInteger; message 'accessibilityRowCount'; { available in macos 10.10 }
    function accessibilityRowHeaderUIElements: NSArray; message 'accessibilityRowHeaderUIElements'; { available in macos 10.10 }
    function accessibilityRowIndexRange: NSRange; message 'accessibilityRowIndexRange'; { available in macos 10.10 }
    function accessibilityRows: NSArray; message 'accessibilityRows'; { available in macos 10.10 }
    function accessibilityRTFForRange (range: NSRange): NSData; message 'accessibilityRTFForRange:'; { available in macos 10.10 }
    function accessibilityRulerMarkerType: NSAccessibilityRulerMarkerType; message 'accessibilityRulerMarkerType'; { available in macos 10.10 }
    function accessibilityScreenPointForLayoutPoint (point: NSPoint): NSPoint; message 'accessibilityScreenPointForLayoutPoint:'; { available in macos 10.10 }
    function accessibilityScreenSizeForLayoutSize (size: NSSize): NSSize; message 'accessibilityScreenSizeForLayoutSize:'; { available in macos 10.10 }
    function accessibilitySearchButton: id; message 'accessibilitySearchButton'; { available in macos 10.10 }
    function accessibilitySearchMenu: id; message 'accessibilitySearchMenu'; { available in macos 10.10 }
    function accessibilitySelectedCells: NSArray; message 'accessibilitySelectedCells'; { available in macos 10.10 }
    function accessibilitySelectedChildren: NSArray; message 'accessibilitySelectedChildren'; { available in macos 10.10 }
    function accessibilitySelectedColumns: NSArray; message 'accessibilitySelectedColumns'; { available in macos 10.10 }
    function accessibilitySelectedRows: NSArray; message 'accessibilitySelectedRows'; { available in macos 10.10 }
    function accessibilitySelectedText: NSString; message 'accessibilitySelectedText'; { available in macos 10.10 }
    function accessibilitySelectedTextRange: NSRange; message 'accessibilitySelectedTextRange'; { available in macos 10.10 }
    function accessibilitySelectedTextRanges: NSArray; message 'accessibilitySelectedTextRanges'; { available in macos 10.10 }
    function accessibilityServesAsTitleForUIElements: NSArray; message 'accessibilityServesAsTitleForUIElements'; { available in macos 10.10 }
    function accessibilitySharedCharacterRange: NSRange; message 'accessibilitySharedCharacterRange'; { available in macos 10.10 }
    function accessibilitySharedFocusElements: NSArray; message 'accessibilitySharedFocusElements'; { available in macos 10.10 }
    function accessibilitySharedTextUIElements: NSArray; message 'accessibilitySharedTextUIElements'; { available in macos 10.10 }
    function accessibilityShownMenu: id; message 'accessibilityShownMenu'; { available in macos 10.10 }
    function accessibilitySortDirection: NSAccessibilitySortDirection; message 'accessibilitySortDirection'; { available in macos 10.10 }
    function accessibilitySplitters: NSArray; message 'accessibilitySplitters'; { available in macos 10.10 }
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:'; { available in macos 10.10 }
    function accessibilityStyleRangeForIndex (index: NSInteger): NSRange; message 'accessibilityStyleRangeForIndex:'; { available in macos 10.10 }
    function accessibilitySubrole: NSAccessibilitySubrole; message 'accessibilitySubrole'; { available in macos 10.10 }
    function accessibilityTabs: NSArray; message 'accessibilityTabs'; { available in macos 10.10 }
    function accessibilityTitle: NSString; message 'accessibilityTitle'; { available in macos 10.10 }
    function accessibilityTitleUIElement: id; message 'accessibilityTitleUIElement'; { available in macos 10.10 }
    function accessibilityToolbarButton: id; message 'accessibilityToolbarButton'; { available in macos 10.10 }
    function accessibilityTopLevelUIElement: id; message 'accessibilityTopLevelUIElement'; { available in macos 10.10 }
    function accessibilityUnitDescription: NSString; message 'accessibilityUnitDescription'; { available in macos 10.10 }
    function accessibilityUnits: NSAccessibilityUnits; message 'accessibilityUnits'; { available in macos 10.10 }
    function accessibilityURL: NSURL; message 'accessibilityURL'; { available in macos 10.10 }
    function accessibilityValue: id; message 'accessibilityValue'; { available in macos 10.10 }
    function accessibilityValueDescription: NSString; message 'accessibilityValueDescription'; { available in macos 10.10 }
    function accessibilityVerticalScrollBar: id; message 'accessibilityVerticalScrollBar'; { available in macos 10.10 }
    function accessibilityVerticalUnitDescription: NSString; message 'accessibilityVerticalUnitDescription'; { available in macos 10.10 }
    function accessibilityVerticalUnits: NSAccessibilityUnits; message 'accessibilityVerticalUnits'; { available in macos 10.10 }
    function accessibilityVisibleCells: NSArray; message 'accessibilityVisibleCells'; { available in macos 10.10 }
    function accessibilityVisibleCharacterRange: NSRange; message 'accessibilityVisibleCharacterRange'; { available in macos 10.10 }
    function accessibilityVisibleChildren: NSArray; message 'accessibilityVisibleChildren'; { available in macos 10.10 }
    function accessibilityVisibleColumns: NSArray; message 'accessibilityVisibleColumns'; { available in macos 10.10 }
    function accessibilityVisibleRows: NSArray; message 'accessibilityVisibleRows'; { available in macos 10.10 }
    function accessibilityWarningValue: id; message 'accessibilityWarningValue'; { available in macos 10.10 }
    function accessibilityWindow: id; message 'accessibilityWindow'; { available in macos 10.10 }
    function accessibilityWindows: NSArray; message 'accessibilityWindows'; { available in macos 10.10 }
    function accessibilityZoomButton: id; message 'accessibilityZoomButton'; { available in macos 10.10 }
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos 10.5 }
    function animations: NSDictionary; message 'animations'; { available in macos 10.5 }
    function animator: id; message 'animator'; { available in macos 10.5 }
    function appearance: NSAppearance; message 'appearance'; { available in macos 10.9 }
    procedure concludeDragOperation (sender: NSDraggingInfoProtocol); message 'concludeDragOperation:';
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos 10.5 }
    procedure draggingEnded (sender: NSDraggingInfoProtocol); message 'draggingEnded:';
    function draggingEntered (sender: NSDraggingInfoProtocol): NSDragOperation; message 'draggingEntered:';
    procedure draggingExited (sender: NSDraggingInfoProtocol); message 'draggingExited:';
    function draggingUpdated (sender: NSDraggingInfoProtocol): NSDragOperation; message 'draggingUpdated:';
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos 10.9 }
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible'; { available in macos 10.10 }
    function isAccessibilityDisclosed: objcbool; message 'isAccessibilityDisclosed'; { available in macos 10.10 }
    function isAccessibilityEdited: objcbool; message 'isAccessibilityEdited'; { available in macos 10.10 }
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement'; { available in macos 10.10 }
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled'; { available in macos 10.10 }
    function isAccessibilityExpanded: objcbool; message 'isAccessibilityExpanded'; { available in macos 10.10 }
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused';
    function isAccessibilityFrontmost: objcbool; message 'isAccessibilityFrontmost'; { available in macos 10.10 }
    function isAccessibilityHidden: objcbool; message 'isAccessibilityHidden'; { available in macos 10.10 }
    function isAccessibilityMain: objcbool; message 'isAccessibilityMain'; { available in macos 10.10 }
    function isAccessibilityMinimized: objcbool; message 'isAccessibilityMinimized'; { available in macos 10.10 }
    function isAccessibilityModal: objcbool; message 'isAccessibilityModal'; { available in macos 10.10 }
    function isAccessibilityOrderedByRow: objcbool; message 'isAccessibilityOrderedByRow'; { available in macos 10.10 }
    function isAccessibilityProtectedContent: objcbool; message 'isAccessibilityProtectedContent'; { available in macos 10.10 }
    function isAccessibilityRequired: objcbool; message 'isAccessibilityRequired'; { available in macos 10.12 }
    function isAccessibilitySelected: objcbool; message 'isAccessibilitySelected'; { available in macos 10.10 }
    function isAccessibilitySelectorAllowed (selector: SEL): objcbool; message 'isAccessibilitySelectorAllowed:'; { available in macos 10.10 }
    function performDragOperation (sender: NSDraggingInfoProtocol): objcbool; message 'performDragOperation:';
    function prepareForDragOperation (sender: NSDraggingInfoProtocol): objcbool; message 'prepareForDragOperation:';
    procedure setAccessibilityActivationPoint (newValue: NSPoint); message 'setAccessibilityActivationPoint:'; { available in macos 10.10 }
    procedure setAccessibilityAllowedValues (newValue: NSArray); message 'setAccessibilityAllowedValues:'; { available in macos 10.10 }
    procedure setAccessibilityAlternateUIVisible (newValue: objcbool); message 'setAccessibilityAlternateUIVisible:'; { available in macos 10.10 }
    procedure setAccessibilityApplicationFocusedUIElement (newValue: id); message 'setAccessibilityApplicationFocusedUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityCancelButton (newValue: id); message 'setAccessibilityCancelButton:'; { available in macos 10.10 }
    procedure setAccessibilityChildren (newValue: NSArray); message 'setAccessibilityChildren:'; { available in macos 10.10 }
    procedure setAccessibilityChildrenInNavigationOrder (newValue: NSArray); message 'setAccessibilityChildrenInNavigationOrder:'; { available in macos 10.13 }
    procedure setAccessibilityClearButton (newValue: id); message 'setAccessibilityClearButton:'; { available in macos 10.10 }
    procedure setAccessibilityCloseButton (newValue: id); message 'setAccessibilityCloseButton:'; { available in macos 10.10 }
    procedure setAccessibilityColumnCount (newValue: NSInteger); message 'setAccessibilityColumnCount:'; { available in macos 10.10 }
    procedure setAccessibilityColumnHeaderUIElements (newValue: NSArray); message 'setAccessibilityColumnHeaderUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityColumnIndexRange (newValue: NSRange); message 'setAccessibilityColumnIndexRange:'; { available in macos 10.10 }
    procedure setAccessibilityColumns (newValue: NSArray); message 'setAccessibilityColumns:'; { available in macos 10.10 }
    procedure setAccessibilityColumnTitles (newValue: NSArray); message 'setAccessibilityColumnTitles:'; { available in macos 10.10 }
    procedure setAccessibilityContents (newValue: NSArray); message 'setAccessibilityContents:'; { available in macos 10.10 }
    procedure setAccessibilityCriticalValue (newValue: id); message 'setAccessibilityCriticalValue:'; { available in macos 10.10 }
    procedure setAccessibilityCustomActions (newValue: NSArray); message 'setAccessibilityCustomActions:'; { available in macos 10.13 }
    procedure setAccessibilityCustomRotors (newValue: NSArray); message 'setAccessibilityCustomRotors:'; { available in macos 10.13 }
    procedure setAccessibilityDecrementButton (newValue: id); message 'setAccessibilityDecrementButton:'; { available in macos 10.10 }
    procedure setAccessibilityDefaultButton (newValue: id); message 'setAccessibilityDefaultButton:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosed (newValue: objcbool); message 'setAccessibilityDisclosed:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosedByRow (newValue: id); message 'setAccessibilityDisclosedByRow:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosedRows (newValue: id); message 'setAccessibilityDisclosedRows:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosureLevel (newValue: NSInteger); message 'setAccessibilityDisclosureLevel:'; { available in macos 10.10 }
    procedure setAccessibilityDocument (newValue: NSString); message 'setAccessibilityDocument:'; { available in macos 10.10 }
    procedure setAccessibilityEdited (newValue: objcbool); message 'setAccessibilityEdited:'; { available in macos 10.10 }
    procedure setAccessibilityElement (newValue: objcbool); message 'setAccessibilityElement:'; { available in macos 10.10 }
    procedure setAccessibilityEnabled (newValue: objcbool); message 'setAccessibilityEnabled:'; { available in macos 10.10 }
    procedure setAccessibilityExpanded (newValue: objcbool); message 'setAccessibilityExpanded:'; { available in macos 10.10 }
    procedure setAccessibilityExtrasMenuBar (newValue: id); message 'setAccessibilityExtrasMenuBar:'; { available in macos 10.10 }
    procedure setAccessibilityFilename (newValue: NSString); message 'setAccessibilityFilename:'; { available in macos 10.10 }
    procedure setAccessibilityFocused (newValue: objcbool); message 'setAccessibilityFocused:'; { available in macos 10.10 }
    procedure setAccessibilityFocusedWindow (newValue: id); message 'setAccessibilityFocusedWindow:'; { available in macos 10.10 }
    procedure setAccessibilityFrame (newValue: NSRect); message 'setAccessibilityFrame:'; { available in macos 10.10 }
    procedure setAccessibilityFrontmost (newValue: objcbool); message 'setAccessibilityFrontmost:'; { available in macos 10.10 }
    procedure setAccessibilityFullScreenButton (newValue: id); message 'setAccessibilityFullScreenButton:'; { available in macos 10.10 }
    procedure setAccessibilityGrowArea (newValue: id); message 'setAccessibilityGrowArea:'; { available in macos 10.10 }
    procedure setAccessibilityHandles (newValue: NSArray); message 'setAccessibilityHandles:'; { available in macos 10.10 }
    procedure setAccessibilityHeader (newValue: id); message 'setAccessibilityHeader:'; { available in macos 10.10 }
    procedure setAccessibilityHelp (newValue: NSString); message 'setAccessibilityHelp:'; { available in macos 10.10 }
    procedure setAccessibilityHidden (newValue: objcbool); message 'setAccessibilityHidden:'; { available in macos 10.10 }
    procedure setAccessibilityHorizontalScrollBar (newValue: id); message 'setAccessibilityHorizontalScrollBar:'; { available in macos 10.10 }
    procedure setAccessibilityHorizontalUnitDescription (newValue: NSString); message 'setAccessibilityHorizontalUnitDescription:'; { available in macos 10.10 }
    procedure setAccessibilityHorizontalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityHorizontalUnits:'; { available in macos 10.10 }
    procedure setAccessibilityIdentifier (newValue: NSString); message 'setAccessibilityIdentifier:'; { available in macos 10.10 }
    procedure setAccessibilityIncrementButton (newValue: id); message 'setAccessibilityIncrementButton:'; { available in macos 10.10 }
    procedure setAccessibilityIndex (newValue: NSInteger); message 'setAccessibilityIndex:'; { available in macos 10.10 }
    procedure setAccessibilityInsertionPointLineNumber (newValue: NSInteger); message 'setAccessibilityInsertionPointLineNumber:'; { available in macos 10.10 }
    procedure setAccessibilityLabel (newValue: NSString); message 'setAccessibilityLabel:'; { available in macos 10.10 }
    procedure setAccessibilityLabelUIElements (newValue: NSArray); message 'setAccessibilityLabelUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityLabelValue (newValue: single); message 'setAccessibilityLabelValue:'; { available in macos 10.10 }
    procedure setAccessibilityLinkedUIElements (newValue: NSArray); message 'setAccessibilityLinkedUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityMain (newValue: objcbool); message 'setAccessibilityMain:'; { available in macos 10.10 }
    procedure setAccessibilityMainWindow (newValue: id); message 'setAccessibilityMainWindow:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerGroupUIElement (newValue: id); message 'setAccessibilityMarkerGroupUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerTypeDescription (newValue: NSString); message 'setAccessibilityMarkerTypeDescription:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerUIElements (newValue: NSArray); message 'setAccessibilityMarkerUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerValues (newValue: id); message 'setAccessibilityMarkerValues:'; { available in macos 10.10 }
    procedure setAccessibilityMaxValue (newValue: id); message 'setAccessibilityMaxValue:'; { available in macos 10.10 }
    procedure setAccessibilityMenuBar (newValue: id); message 'setAccessibilityMenuBar:'; { available in macos 10.10 }
    procedure setAccessibilityMinimizeButton (newValue: id); message 'setAccessibilityMinimizeButton:'; { available in macos 10.10 }
    procedure setAccessibilityMinimized (newValue: objcbool); message 'setAccessibilityMinimized:'; { available in macos 10.10 }
    procedure setAccessibilityMinValue (newValue: id); message 'setAccessibilityMinValue:'; { available in macos 10.10 }
    procedure setAccessibilityModal (newValue: objcbool); message 'setAccessibilityModal:'; { available in macos 10.10 }
    procedure setAccessibilityNextContents (newValue: NSArray); message 'setAccessibilityNextContents:'; { available in macos 10.10 }
    procedure setAccessibilityNumberOfCharacters (newValue: NSInteger); message 'setAccessibilityNumberOfCharacters:'; { available in macos 10.10 }
    procedure setAccessibilityOrderedByRow (newValue: objcbool); message 'setAccessibilityOrderedByRow:'; { available in macos 10.10 }
    procedure setAccessibilityOrientation (newValue: NSAccessibilityOrientation); message 'setAccessibilityOrientation:'; { available in macos 10.10 }
    procedure setAccessibilityOverflowButton (newValue: id); message 'setAccessibilityOverflowButton:'; { available in macos 10.10 }
    procedure setAccessibilityParent (newValue: id); message 'setAccessibilityParent:'; { available in macos 10.10 }
    procedure setAccessibilityPlaceholderValue (newValue: NSString); message 'setAccessibilityPlaceholderValue:'; { available in macos 10.10 }
    procedure setAccessibilityPreviousContents (newValue: NSArray); message 'setAccessibilityPreviousContents:'; { available in macos 10.10 }
    procedure setAccessibilityProtectedContent (newValue: objcbool); message 'setAccessibilityProtectedContent:'; { available in macos 10.10 }
    procedure setAccessibilityProxy (newValue: id); message 'setAccessibilityProxy:'; { available in macos 10.10 }
    procedure setAccessibilityRequired (newValue: objcbool); message 'setAccessibilityRequired:'; { available in macos 10.12 }
    procedure setAccessibilityRole (newValue: NSAccessibilityRole); message 'setAccessibilityRole:'; { available in macos 10.10 }
    procedure setAccessibilityRoleDescription (newValue: NSString); message 'setAccessibilityRoleDescription:'; { available in macos 10.10 }
    procedure setAccessibilityRowCount (newValue: NSInteger); message 'setAccessibilityRowCount:'; { available in macos 10.10 }
    procedure setAccessibilityRowHeaderUIElements (newValue: NSArray); message 'setAccessibilityRowHeaderUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityRowIndexRange (newValue: NSRange); message 'setAccessibilityRowIndexRange:'; { available in macos 10.10 }
    procedure setAccessibilityRows (newValue: NSArray); message 'setAccessibilityRows:'; { available in macos 10.10 }
    procedure setAccessibilityRulerMarkerType (newValue: NSAccessibilityRulerMarkerType); message 'setAccessibilityRulerMarkerType:'; { available in macos 10.10 }
    procedure setAccessibilitySearchButton (newValue: id); message 'setAccessibilitySearchButton:'; { available in macos 10.10 }
    procedure setAccessibilitySearchMenu (newValue: id); message 'setAccessibilitySearchMenu:'; { available in macos 10.10 }
    procedure setAccessibilitySelected (newValue: objcbool); message 'setAccessibilitySelected:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedCells (newValue: NSArray); message 'setAccessibilitySelectedCells:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedChildren (newValue: NSArray); message 'setAccessibilitySelectedChildren:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedColumns (newValue: NSArray); message 'setAccessibilitySelectedColumns:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedRows (newValue: NSArray); message 'setAccessibilitySelectedRows:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedText (newValue: NSString); message 'setAccessibilitySelectedText:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedTextRange (newValue: NSRange); message 'setAccessibilitySelectedTextRange:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedTextRanges (newValue: NSArray); message 'setAccessibilitySelectedTextRanges:'; { available in macos 10.10 }
    procedure setAccessibilityServesAsTitleForUIElements (newValue: NSArray); message 'setAccessibilityServesAsTitleForUIElements:'; { available in macos 10.10 }
    procedure setAccessibilitySharedCharacterRange (newValue: NSRange); message 'setAccessibilitySharedCharacterRange:'; { available in macos 10.10 }
    procedure setAccessibilitySharedFocusElements (newValue: NSArray); message 'setAccessibilitySharedFocusElements:'; { available in macos 10.10 }
    procedure setAccessibilitySharedTextUIElements (newValue: NSArray); message 'setAccessibilitySharedTextUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityShownMenu (newValue: id); message 'setAccessibilityShownMenu:'; { available in macos 10.10 }
    procedure setAccessibilitySortDirection (newValue: NSAccessibilitySortDirection); message 'setAccessibilitySortDirection:'; { available in macos 10.10 }
    procedure setAccessibilitySplitters (newValue: NSArray); message 'setAccessibilitySplitters:'; { available in macos 10.10 }
    procedure setAccessibilitySubrole (newValue: NSAccessibilitySubrole); message 'setAccessibilitySubrole:'; { available in macos 10.10 }
    procedure setAccessibilityTabs (newValue: NSArray); message 'setAccessibilityTabs:'; { available in macos 10.10 }
    procedure setAccessibilityTitle (newValue: NSString); message 'setAccessibilityTitle:'; { available in macos 10.10 }
    procedure setAccessibilityTitleUIElement (newValue: id); message 'setAccessibilityTitleUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityToolbarButton (newValue: id); message 'setAccessibilityToolbarButton:'; { available in macos 10.10 }
    procedure setAccessibilityTopLevelUIElement (newValue: id); message 'setAccessibilityTopLevelUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityUnitDescription (newValue: NSString); message 'setAccessibilityUnitDescription:'; { available in macos 10.10 }
    procedure setAccessibilityUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityUnits:'; { available in macos 10.10 }
    procedure setAccessibilityURL (newValue: NSURL); message 'setAccessibilityURL:'; { available in macos 10.10 }
    procedure setAccessibilityValue (newValue: id); message 'setAccessibilityValue:'; { available in macos 10.10 }
    procedure setAccessibilityValueDescription (newValue: NSString); message 'setAccessibilityValueDescription:'; { available in macos 10.10 }
    procedure setAccessibilityVerticalScrollBar (newValue: id); message 'setAccessibilityVerticalScrollBar:'; { available in macos 10.10 }
    procedure setAccessibilityVerticalUnitDescription (newValue: NSString); message 'setAccessibilityVerticalUnitDescription:'; { available in macos 10.10 }
    procedure setAccessibilityVerticalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityVerticalUnits:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleCells (newValue: NSArray); message 'setAccessibilityVisibleCells:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleCharacterRange (newValue: NSRange); message 'setAccessibilityVisibleCharacterRange:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleChildren (newValue: NSArray); message 'setAccessibilityVisibleChildren:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleColumns (newValue: NSArray); message 'setAccessibilityVisibleColumns:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleRows (newValue: NSArray); message 'setAccessibilityVisibleRows:'; { available in macos 10.10 }
    procedure setAccessibilityWarningValue (newValue: id); message 'setAccessibilityWarningValue:'; { available in macos 10.10 }
    procedure setAccessibilityWindow (newValue: id); message 'setAccessibilityWindow:'; { available in macos 10.10 }
    procedure setAccessibilityWindows (newValue: NSArray); message 'setAccessibilityWindows:'; { available in macos 10.10 }
    procedure setAccessibilityZoomButton (newValue: id); message 'setAccessibilityZoomButton:'; { available in macos 10.10 }
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos 10.5 }
    procedure setAppearance (newValue: NSAppearance); message 'setAppearance:'; { available in macos 10.9 }
    procedure setIdentifier (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    procedure updateDraggingItemsForDrag (sender: NSDraggingInfoProtocol); message 'updateDraggingItemsForDrag:'; { available in macos 10.7 }
    function wantsPeriodicDraggingUpdates: objcbool; message 'wantsPeriodicDraggingUpdates';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSViewLayerContentScaleDelegateProtocol = objcprotocol external name 'NSViewLayerContentScaleDelegate' (NSObjectProtocol)
  optional
    function layer_shouldInheritContentsScale_fromWindow (layer: CALayer; newScale: CGFloat; window: NSWindow): objcbool; message 'layer:shouldInheritContentsScale:fromWindow:'; { available in macos 10.7 }
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
    procedure drawFocusRingMask; message 'drawFocusRingMask'; { available in macos 10.7 }
    function focusRingMaskBounds: NSRect; message 'focusRingMaskBounds'; { available in macos 10.7 }
    procedure noteFocusRingMaskChanged; message 'noteFocusRingMaskChanged'; { available in macos 10.7 }
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
    function beginDraggingSessionWithItems_event_source (items: NSArray; event: NSEvent; source: NSDraggingSourceProtocol): NSDraggingSession; message 'beginDraggingSessionWithItems:event:source:'; { available in macos 10.7 }
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
  NSFullScreenModeAllScreens: NSViewFullScreenModeOptionKey { available in macos 10.5 }; cvar; external;
  NSFullScreenModeSetting: NSViewFullScreenModeOptionKey { available in macos 10.5 }; cvar; external;
  NSFullScreenModeWindowLevel: NSViewFullScreenModeOptionKey { available in macos 10.5 }; cvar; external;
  NSFullScreenModeApplicationPresentationOptions: NSViewFullScreenModeOptionKey { available in macos 10.5 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFullScreenMode = objccategory external (NSView)
    function enterFullScreenMode_withOptions (screen: NSScreen; options: NSDictionary): objcbool; message 'enterFullScreenMode:withOptions:'; { available in macos 10.5 }
    procedure exitFullScreenModeWithOptions (options: NSDictionary); message 'exitFullScreenModeWithOptions:'; { available in macos 10.5 }
    function isInFullScreenMode: objcbool; message 'isInFullScreenMode'; { available in macos 10.5 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSDefinitionOptionKey = NSString;
  NSDefinitionOptionKeyPtr = ^NSDefinitionOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDefinitionPresentationTypeKey: NSDefinitionOptionKey { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSDefinitionPresentationType = NSString;
  NSDefinitionPresentationTypePtr = ^NSDefinitionPresentationType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDefinitionPresentationTypeOverlay: NSDefinitionPresentationType { available in macos 10.6 }; cvar; external;
  NSDefinitionPresentationTypeDictionaryApplication: NSDefinitionPresentationType { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDefinition = objccategory external (NSView)
    procedure showDefinitionForAttributedString_atPoint (attrString: NSAttributedString; textBaselineOrigin: NSPoint); message 'showDefinitionForAttributedString:atPoint:'; { available in macos 10.6 }
    procedure showDefinitionForAttributedString_range_options_baselineOriginProvider (attrString: NSAttributedString; targetRange: NSRange; options: NSDictionary; originProvider: NSViewShowDefinitionForAttributedStringCallback); message 'showDefinitionForAttributedString:range:options:baselineOriginProvider:'; { available in macos 10.6 }
  end;

type
  NSFindIndicator = objccategory external (NSView)
    function isDrawingFindIndicator: objcbool; message 'isDrawingFindIndicator'; { available in macos 10.7 }
  end;

type
  NSView_NSGestureRecognizer = objccategory external name 'NSGestureRecognizer' (NSView)
    procedure setGestureRecognizers(newValue: NSArray); message 'setGestureRecognizers:'; { available in macos 10.10 }
    function gestureRecognizers: NSArray; message 'gestureRecognizers'; { available in macos 10.10 }
    procedure addGestureRecognizer (gestureRecognizer: NSGestureRecognizer); message 'addGestureRecognizer:'; { available in macos 10.10 }
    procedure removeGestureRecognizer (gestureRecognizer: NSGestureRecognizer); message 'removeGestureRecognizer:'; { available in macos 10.10 }
  end;

type
  NSView_NSTouchBar = objccategory external name 'NSTouchBar' (NSView)
    procedure setAllowedTouchTypes(newValue: NSTouchTypeMask); message 'setAllowedTouchTypes:'; { available in macos 10.12.2 }
    function allowedTouchTypes: NSTouchTypeMask; message 'allowedTouchTypes'; { available in macos 10.12.2 }
  end;

type
  NSSafeAreas = objccategory external (NSView)
    function safeAreaInsets: NSEdgeInsets; message 'safeAreaInsets'; { available in macos 11.0 }
    procedure setAdditionalSafeAreaInsets(newValue: NSEdgeInsets); message 'setAdditionalSafeAreaInsets:'; { available in macos 11.0 }
    function additionalSafeAreaInsets: NSEdgeInsets; message 'additionalSafeAreaInsets'; { available in macos 11.0 }
    function safeAreaLayoutGuide: NSLayoutGuide; message 'safeAreaLayoutGuide'; { available in macos 11.0 }
    function safeAreaRect: NSRect; message 'safeAreaRect'; { available in macos 11.0 }
    function layoutMarginsGuide: NSLayoutGuide; message 'layoutMarginsGuide'; { available in macos 11.0 }
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
  NSViewDidUpdateTrackingAreasNotification: NSNotificationName { available in macos 10.5 }; cvar; external;
{$endif}

