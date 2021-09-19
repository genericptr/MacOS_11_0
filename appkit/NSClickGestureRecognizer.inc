{ Parsed from AppKit.framework NSClickGestureRecognizer.h }

{$ifdef TYPES}
type
  NSClickGestureRecognizerPtr = ^NSClickGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  NSClickGestureRecognizer = objcclass external (NSGestureRecognizer, NSCodingProtocol)
  public
    procedure setButtonMask(newValue: NSUInteger); message 'setButtonMask:';
    function buttonMask: NSUInteger; message 'buttonMask';
    procedure setNumberOfClicksRequired(newValue: NSInteger); message 'setNumberOfClicksRequired:';
    function numberOfClicksRequired: NSInteger; message 'numberOfClicksRequired';
    procedure setNumberOfTouchesRequired(newValue: NSInteger); message 'setNumberOfTouchesRequired:'; { available in macos 10.12.2 }
    function numberOfTouchesRequired: NSInteger; message 'numberOfTouchesRequired'; { available in macos 10.12.2 }
  end;
{$endif}

