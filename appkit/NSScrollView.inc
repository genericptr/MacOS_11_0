{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSScrollView.h }

{$ifdef TYPES}
type
  NSScrollViewPtr = ^NSScrollView;
{$endif}

{$ifdef TYPES}
type
  NSScrollElasticity = NSInteger;
  NSScrollElasticityPtr = ^NSScrollElasticity;

const
  NSScrollElasticityAutomatic = 0;
  NSScrollElasticityNone = 1;
  NSScrollElasticityAllowed = 2;
{$endif}

{$ifdef CLASSES}

type
  NSScrollView = objcclass external (NSView, NSTextFinderBarContainerProtocol)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function frameSizeForContentSize_horizontalScrollerClass_verticalScrollerClass_borderType_controlSize_scrollerStyle (cSize: NSSize; horizontalScrollerClass: pobjc_class; verticalScrollerClass: pobjc_class; type_: NSBorderType; controlSize: NSControlSize; scrollerStyle: NSScrollerStyle): NSSize; message 'frameSizeForContentSize:horizontalScrollerClass:verticalScrollerClass:borderType:controlSize:scrollerStyle:'; { available in macos  }
    class function contentSizeForFrameSize_horizontalScrollerClass_verticalScrollerClass_borderType_controlSize_scrollerStyle (fSize: NSSize; horizontalScrollerClass: pobjc_class; verticalScrollerClass: pobjc_class; type_: NSBorderType; controlSize: NSControlSize; scrollerStyle: NSScrollerStyle): NSSize; message 'contentSizeForFrameSize:horizontalScrollerClass:verticalScrollerClass:borderType:controlSize:scrollerStyle:'; { available in macos  }
    class function frameSizeForContentSize_hasHorizontalScroller_hasVerticalScroller_borderType (cSize: NSSize; hFlag: objcbool; vFlag: objcbool; type_: NSBorderType): NSSize; message 'frameSizeForContentSize:hasHorizontalScroller:hasVerticalScroller:borderType:'; deprecated 'Use +frameSizeForContentSize:horizontalScrollerClass:verticalScrollerClass:borderType:controlSize:scrollerStyle: instead';
    class function contentSizeForFrameSize_hasHorizontalScroller_hasVerticalScroller_borderType (fSize: NSSize; hFlag: objcbool; vFlag: objcbool; type_: NSBorderType): NSSize; message 'contentSizeForFrameSize:hasHorizontalScroller:hasVerticalScroller:borderType:'; deprecated '+contentSizeForFrameSize:horizontalScrollerClass:verticalScrollerClass:borderType:controlSize:scrollerStyle: instead';
    function documentVisibleRect: NSRect; message 'documentVisibleRect';
    function contentSize: NSSize; message 'contentSize';
    procedure setDocumentView(newValue: NSView); message 'setDocumentView:';
    function documentView: NSView; message 'documentView';
    procedure setContentView(newValue: NSClipView); message 'setContentView:';
    function contentView: NSClipView; message 'contentView';
    procedure setDocumentCursor(newValue: NSCursor); message 'setDocumentCursor:';
    function documentCursor: NSCursor; message 'documentCursor';
    procedure setBorderType(newValue: NSBorderType); message 'setBorderType:';
    function borderType: NSBorderType; message 'borderType';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setHasVerticalScroller(newValue: objcbool); message 'setHasVerticalScroller:';
    function hasVerticalScroller: objcbool; message 'hasVerticalScroller';
    procedure setHasHorizontalScroller(newValue: objcbool); message 'setHasHorizontalScroller:';
    function hasHorizontalScroller: objcbool; message 'hasHorizontalScroller';
    procedure setVerticalScroller(newValue: NSScroller); message 'setVerticalScroller:';
    function verticalScroller: NSScroller; message 'verticalScroller';
    procedure setHorizontalScroller(newValue: NSScroller); message 'setHorizontalScroller:';
    function horizontalScroller: NSScroller; message 'horizontalScroller';
    procedure setAutohidesScrollers(newValue: objcbool); message 'setAutohidesScrollers:';
    function autohidesScrollers: objcbool; message 'autohidesScrollers';
    procedure setHorizontalLineScroll(newValue: CGFloat); message 'setHorizontalLineScroll:';
    function horizontalLineScroll: CGFloat; message 'horizontalLineScroll';
    procedure setVerticalLineScroll(newValue: CGFloat); message 'setVerticalLineScroll:';
    function verticalLineScroll: CGFloat; message 'verticalLineScroll';
    procedure setLineScroll(newValue: CGFloat); message 'setLineScroll:';
    function lineScroll: CGFloat; message 'lineScroll';
    procedure setHorizontalPageScroll(newValue: CGFloat); message 'setHorizontalPageScroll:';
    function horizontalPageScroll: CGFloat; message 'horizontalPageScroll';
    procedure setVerticalPageScroll(newValue: CGFloat); message 'setVerticalPageScroll:';
    function verticalPageScroll: CGFloat; message 'verticalPageScroll';
    procedure setPageScroll(newValue: CGFloat); message 'setPageScroll:';
    function pageScroll: CGFloat; message 'pageScroll';
    procedure setScrollsDynamically(newValue: objcbool); message 'setScrollsDynamically:';
    function scrollsDynamically: objcbool; message 'scrollsDynamically';
    procedure tile; message 'tile';
    procedure reflectScrolledClipView (cView: NSClipView); message 'reflectScrolledClipView:';
    procedure scrollWheel (event: NSEvent); message 'scrollWheel:';
    procedure setScrollerStyle(newValue: NSScrollerStyle); message 'setScrollerStyle:'; { available in macos  }
    function scrollerStyle: NSScrollerStyle; message 'scrollerStyle'; { available in macos  }
    procedure setScrollerKnobStyle(newValue: NSScrollerKnobStyle); message 'setScrollerKnobStyle:'; { available in macos  }
    function scrollerKnobStyle: NSScrollerKnobStyle; message 'scrollerKnobStyle'; { available in macos  }
    procedure flashScrollers; message 'flashScrollers'; { available in macos  }
    procedure setHorizontalScrollElasticity(newValue: NSScrollElasticity); message 'setHorizontalScrollElasticity:'; { available in macos  }
    function horizontalScrollElasticity: NSScrollElasticity; message 'horizontalScrollElasticity'; { available in macos  }
    procedure setVerticalScrollElasticity(newValue: NSScrollElasticity); message 'setVerticalScrollElasticity:'; { available in macos  }
    function verticalScrollElasticity: NSScrollElasticity; message 'verticalScrollElasticity'; { available in macos  }
    procedure setUsesPredominantAxisScrolling(newValue: objcbool); message 'setUsesPredominantAxisScrolling:'; { available in macos  }
    function usesPredominantAxisScrolling: objcbool; message 'usesPredominantAxisScrolling'; { available in macos  }
    procedure setAllowsMagnification(newValue: objcbool); message 'setAllowsMagnification:'; { available in macos  }
    function allowsMagnification: objcbool; message 'allowsMagnification'; { available in macos  }
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:'; { available in macos  }
    function magnification: CGFloat; message 'magnification'; { available in macos  }
    procedure setMaxMagnification(newValue: CGFloat); message 'setMaxMagnification:'; { available in macos  }
    function maxMagnification: CGFloat; message 'maxMagnification'; { available in macos  }
    procedure setMinMagnification(newValue: CGFloat); message 'setMinMagnification:'; { available in macos  }
    function minMagnification: CGFloat; message 'minMagnification'; { available in macos  }
    procedure magnifyToFitRect (rect: NSRect); message 'magnifyToFitRect:'; { available in macos  }
    procedure setMagnification_centeredAtPoint (magnification_: CGFloat; point: NSPoint); message 'setMagnification:centeredAtPoint:'; { available in macos  }
    procedure addFloatingSubview_forAxis (view: NSView; axis: NSEventGestureAxis); message 'addFloatingSubview:forAxis:'; { available in macos  }
    procedure setAutomaticallyAdjustsContentInsets(newValue: objcbool); message 'setAutomaticallyAdjustsContentInsets:'; { available in macos  }
    function automaticallyAdjustsContentInsets: objcbool; message 'automaticallyAdjustsContentInsets'; { available in macos  }
    procedure setContentInsets(newValue: NSEdgeInsets); message 'setContentInsets:'; { available in macos  }
    function contentInsets: NSEdgeInsets; message 'contentInsets'; { available in macos  }
    procedure setScrollerInsets(newValue: NSEdgeInsets); message 'setScrollerInsets:'; { available in macos  }
    function scrollerInsets: NSEdgeInsets; message 'scrollerInsets'; { available in macos  }

    { Adopted protocols }
    function findBarView: NSView; message 'findBarView';
    procedure findBarViewDidChangeHeight; message 'findBarViewDidChangeHeight';
    function isFindBarVisible: objcbool; message 'isFindBarVisible';
    procedure setFindBarView (newValue: NSView); message 'setFindBarView:';
    procedure setFindBarVisible (newValue: objcbool); message 'setFindBarVisible:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSScrollViewWillStartLiveMagnifyNotification: NSNotificationName { available in macos  }; cvar; external;
  NSScrollViewDidEndLiveMagnifyNotification: NSNotificationName { available in macos  }; cvar; external;
  NSScrollViewWillStartLiveScrollNotification: NSNotificationName { available in macos  }; cvar; external;
  NSScrollViewDidLiveScrollNotification: NSNotificationName { available in macos  }; cvar; external;
  NSScrollViewDidEndLiveScrollNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSRulerSupport = objccategory external (NSScrollView)
    class procedure setRulerViewClass(newValue: pobjc_class); message 'setRulerViewClass:';
    class function rulerViewClass: pobjc_class; message 'rulerViewClass';
    procedure setRulersVisible(newValue: objcbool); message 'setRulersVisible:';
    function rulersVisible: objcbool; message 'rulersVisible';
    procedure setHasHorizontalRuler(newValue: objcbool); message 'setHasHorizontalRuler:';
    function hasHorizontalRuler: objcbool; message 'hasHorizontalRuler';
    procedure setHasVerticalRuler(newValue: objcbool); message 'setHasVerticalRuler:';
    function hasVerticalRuler: objcbool; message 'hasVerticalRuler';
    procedure setHorizontalRulerView(newValue: NSRulerView); message 'setHorizontalRulerView:';
    function horizontalRulerView: NSRulerView; message 'horizontalRulerView';
    procedure setVerticalRulerView(newValue: NSRulerView); message 'setVerticalRulerView:';
    function verticalRulerView: NSRulerView; message 'verticalRulerView';
  end;
{$endif}

{$ifdef TYPES}
type
  NSScrollViewFindBarPosition = NSInteger;
  NSScrollViewFindBarPositionPtr = ^NSScrollViewFindBarPosition;

const
  NSScrollViewFindBarPositionAboveHorizontalRuler = 0;
  NSScrollViewFindBarPositionAboveContent = 1;
  NSScrollViewFindBarPositionBelowContent = 2;
{$endif}

{$ifdef CLASSES}

type
  NSFindBarSupport = objccategory external (NSScrollView)
    procedure setFindBarPosition(newValue: NSScrollViewFindBarPosition); message 'setFindBarPosition:'; { available in macos  }
    function findBarPosition: NSScrollViewFindBarPosition; message 'findBarPosition'; { available in macos  }
  end;
{$endif}

