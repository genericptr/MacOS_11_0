{ Parsed from AppKit.framework NSPressGestureRecognizer.h }

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
    procedure setNumberOfTouchesRequired(newValue: NSInteger); message 'setNumberOfTouchesRequired:'; { available in macos 10.12.2 }
    function numberOfTouchesRequired: NSInteger; message 'numberOfTouchesRequired'; { available in macos 10.12.2 }
  end;
{$endif}

