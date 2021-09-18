{ Parsed from AppKit.framework NSAlignmentFeedbackFilter.h }

{$ifdef TYPES}
type
  NSAlignmentFeedbackFilterPtr = ^NSAlignmentFeedbackFilter;
  NSAlignmentFeedbackTokenProtocolPtr = ^NSAlignmentFeedbackTokenProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAlignmentFeedbackTokenProtocol = objcprotocol external name 'NSAlignmentFeedbackToken' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  NSAlignmentFeedbackFilter = objcclass external (NSObject)
  public
    class function inputEventMask: NSEventMask; message 'inputEventMask';
    procedure updateWithEvent (event: NSEvent); message 'updateWithEvent:';
    procedure updateWithPanRecognizer (panRecognizer: NSPanGestureRecognizer); message 'updateWithPanRecognizer:';
    function alignmentFeedbackTokenForMovementInView_previousPoint_alignedPoint_defaultPoint (view: NSView; previousPoint: NSPoint; alignedPoint: NSPoint; defaultPoint: NSPoint): id; message 'alignmentFeedbackTokenForMovementInView:previousPoint:alignedPoint:defaultPoint:';
    function alignmentFeedbackTokenForHorizontalMovementInView_previousX_alignedX_defaultX (view: NSView; previousX: CGFloat; alignedX: CGFloat; defaultX: CGFloat): id; message 'alignmentFeedbackTokenForHorizontalMovementInView:previousX:alignedX:defaultX:';
    function alignmentFeedbackTokenForVerticalMovementInView_previousY_alignedY_defaultY (view: NSView; previousY: CGFloat; alignedY: CGFloat; defaultY: CGFloat): id; message 'alignmentFeedbackTokenForVerticalMovementInView:previousY:alignedY:defaultY:';
    procedure performFeedback_performanceTime (alignmentFeedbackTokens: NSArray; performanceTime: NSHapticFeedbackPerformanceTime); message 'performFeedback:performanceTime:';
  end;
{$endif}

