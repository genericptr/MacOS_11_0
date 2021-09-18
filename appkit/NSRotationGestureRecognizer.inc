{ Parsed from AppKit.framework NSRotationGestureRecognizer.h }

{$ifdef TYPES}
type
  NSRotationGestureRecognizerPtr = ^NSRotationGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSRotationGestureRecognizer = objcclass external (NSGestureRecognizer)
  public
    procedure setRotation(newValue: CGFloat); message 'setRotation:';
    function rotation: CGFloat; message 'rotation';
    procedure setRotationInDegrees(newValue: CGFloat); message 'setRotationInDegrees:';
    function rotationInDegrees: CGFloat; message 'rotationInDegrees';
  end;
{$endif}

