{ Parsed from AppKit.framework NSMagnificationGestureRecognizer.h }

{$ifdef TYPES}
type
  NSMagnificationGestureRecognizerPtr = ^NSMagnificationGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSMagnificationGestureRecognizer = objcclass external (NSGestureRecognizer)
  public
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:';
    function magnification: CGFloat; message 'magnification';
  end;
{$endif}

