{ Parsed from AppKit.framework NSPanGestureRecognizer.h }

{$ifdef TYPES}
type
  NSPanGestureRecognizerPtr = ^NSPanGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSPanGestureRecognizer = objcclass external (NSGestureRecognizer, NSCodingProtocol)
  public
    procedure setButtonMask(newValue: NSUInteger); message 'setButtonMask:';
    function buttonMask: NSUInteger; message 'buttonMask';
    function translationInView (view_: NSView): NSPoint; message 'translationInView:';
    procedure setTranslation_inView (translation: NSPoint; view_: NSView); message 'setTranslation:inView:';
    function velocityInView (view_: NSView): NSPoint; message 'velocityInView:';
    procedure setNumberOfTouchesRequired(newValue: NSInteger); message 'setNumberOfTouchesRequired:'; { available in macos  }
    function numberOfTouchesRequired: NSInteger; message 'numberOfTouchesRequired'; { available in macos  }
  end;
{$endif}

