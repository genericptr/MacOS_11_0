{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSMagnificationGestureRecognizer.h }

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

