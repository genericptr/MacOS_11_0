{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSClipView.h }

{$ifdef TYPES}
type
  NSClipViewPtr = ^NSClipView;
{$endif}

{$ifdef CLASSES}

type
  NSClipView = objcclass external (NSView)
  public
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setDocumentView(newValue: NSView); message 'setDocumentView:';
    function documentView: NSView; message 'documentView';
    function documentRect: NSRect; message 'documentRect';
    procedure setDocumentCursor(newValue: NSCursor); message 'setDocumentCursor:';
    function documentCursor: NSCursor; message 'documentCursor';
    function documentVisibleRect: NSRect; message 'documentVisibleRect';
    procedure viewFrameChanged (notification: NSNotification); message 'viewFrameChanged:';
    procedure viewBoundsChanged (notification: NSNotification); message 'viewBoundsChanged:';
    function autoscroll (event: NSEvent): objcbool; message 'autoscroll:';
    procedure scrollToPoint (newOrigin: NSPoint); message 'scrollToPoint:';
    function constrainBoundsRect (proposedBounds: NSRect): NSRect; message 'constrainBoundsRect:'; { available in macos  }
    procedure setContentInsets(newValue: NSEdgeInsets); message 'setContentInsets:'; { available in macos  }
    function contentInsets: NSEdgeInsets; message 'contentInsets'; { available in macos  }
    procedure setAutomaticallyAdjustsContentInsets(newValue: objcbool); message 'setAutomaticallyAdjustsContentInsets:'; { available in macos  }
    function automaticallyAdjustsContentInsets: objcbool; message 'automaticallyAdjustsContentInsets'; { available in macos  }
  end;


type
  NSClipViewSuperview = objccategory external (NSView)
    procedure reflectScrolledClipView (clipView: NSClipView); message 'reflectScrolledClipView:';
    procedure scrollClipView_toPoint (clipView: NSClipView; point: NSPoint); message 'scrollClipView:toPoint:';
  end;

type
  NSClipViewCategory = objccategory external (NSClipView)
    function constrainScrollPoint (newOrigin: NSPoint): NSPoint; message 'constrainScrollPoint:'; deprecated 'Use -constrainBoundsRect: instead.';
    procedure setCopiesOnScroll(newValue: objcbool); message 'setCopiesOnScroll:'; deprecated 'Setting this property has no effect.  NSClipView will always minimize the area of the document view that is invalidated.  To force invalidation of the document view, use -[NSView setNeedsDisplayInRect:].';
    function copiesOnScroll: objcbool; message 'copiesOnScroll'; deprecated 'Setting this property has no effect.  NSClipView will always minimize the area of the document view that is invalidated.  To force invalidation of the document view, use -[NSView setNeedsDisplayInRect:].';
  end;
{$endif}

