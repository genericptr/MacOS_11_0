{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSClickGestureRecognizer.h }

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
    procedure setNumberOfTouchesRequired(newValue: NSInteger); message 'setNumberOfTouchesRequired:'; { available in macos  }
    function numberOfTouchesRequired: NSInteger; message 'numberOfTouchesRequired'; { available in macos  }
  end;
{$endif}

