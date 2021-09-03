{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPressGestureRecognizer.h }

{$ifdef TYPES}
type
  NSPressGestureRecognizerPtr = ^NSPressGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSPressGestureRecognizer = objcclass external (NSGestureRecognizer, NSCodingProtocol)
  public
    procedure setButtonMask(newValue: NSUInteger); message 'setButtonMask:';
    function buttonMask: NSUInteger; message 'buttonMask';
    procedure setMinimumPressDuration(newValue: NSTimeInterval); message 'setMinimumPressDuration:';
    function minimumPressDuration: NSTimeInterval; message 'minimumPressDuration';
    procedure setAllowableMovement(newValue: CGFloat); message 'setAllowableMovement:';
    function allowableMovement: CGFloat; message 'allowableMovement';
    procedure setNumberOfTouchesRequired(newValue: NSInteger); message 'setNumberOfTouchesRequired:'; { available in macos  }
    function numberOfTouchesRequired: NSInteger; message 'numberOfTouchesRequired'; { available in macos  }
  end;
{$endif}

