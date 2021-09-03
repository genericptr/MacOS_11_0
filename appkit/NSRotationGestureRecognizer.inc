{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSRotationGestureRecognizer.h }

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

