{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSGestureRecognizer.h }

{$ifdef TYPES}
type
  NSGestureRecognizerPtr = ^NSGestureRecognizer;
  NSGestureRecognizerDelegateProtocolPtr = ^NSGestureRecognizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSGestureRecognizerState = NSInteger;
  NSGestureRecognizerStatePtr = ^NSGestureRecognizerState;

const
  NSGestureRecognizerStatePossible = 0;
  NSGestureRecognizerStateBegan = 1;
  NSGestureRecognizerStateChanged = 2;
  NSGestureRecognizerStateEnded = 3;
  NSGestureRecognizerStateCancelled = 4;
  NSGestureRecognizerStateFailed = 5;
  NSGestureRecognizerStateRecognized = NSGestureRecognizerStateEnded;
{$endif}

{$ifdef CLASSES}

type
  NSGestureRecognizer = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithTarget_action (target: id; action: SEL): id; message 'initWithTarget:action:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    function state: NSGestureRecognizerState; message 'state';
    procedure setDelegate(newValue: NSGestureRecognizerDelegateProtocol); message 'setDelegate:';
    function delegate: NSGestureRecognizerDelegateProtocol; message 'delegate';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    function view: NSView; message 'view';
    procedure setPressureConfiguration(newValue: NSPressureConfiguration); message 'setPressureConfiguration:'; { available in macos  }
    function pressureConfiguration: NSPressureConfiguration; message 'pressureConfiguration'; { available in macos  }
    procedure setDelaysPrimaryMouseButtonEvents(newValue: objcbool); message 'setDelaysPrimaryMouseButtonEvents:';
    function delaysPrimaryMouseButtonEvents: objcbool; message 'delaysPrimaryMouseButtonEvents';
    procedure setDelaysSecondaryMouseButtonEvents(newValue: objcbool); message 'setDelaysSecondaryMouseButtonEvents:';
    function delaysSecondaryMouseButtonEvents: objcbool; message 'delaysSecondaryMouseButtonEvents';
    procedure setDelaysOtherMouseButtonEvents(newValue: objcbool); message 'setDelaysOtherMouseButtonEvents:';
    function delaysOtherMouseButtonEvents: objcbool; message 'delaysOtherMouseButtonEvents';
    procedure setDelaysKeyEvents(newValue: objcbool); message 'setDelaysKeyEvents:';
    function delaysKeyEvents: objcbool; message 'delaysKeyEvents';
    procedure setDelaysMagnificationEvents(newValue: objcbool); message 'setDelaysMagnificationEvents:';
    function delaysMagnificationEvents: objcbool; message 'delaysMagnificationEvents';
    procedure setDelaysRotationEvents(newValue: objcbool); message 'setDelaysRotationEvents:';
    function delaysRotationEvents: objcbool; message 'delaysRotationEvents';
    function locationInView (view_: NSView): NSPoint; message 'locationInView:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;


type
  NSGestureRecognizer_NSTouchBar = objccategory external name 'NSTouchBar' (NSGestureRecognizer)
    procedure setAllowedTouchTypes(newValue: NSTouchTypeMask); message 'setAllowedTouchTypes:'; { available in macos  }
    function allowedTouchTypes: NSTouchTypeMask; message 'allowedTouchTypes'; { available in macos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSGestureRecognizerDelegateProtocol = objcprotocol external name 'NSGestureRecognizerDelegate' (NSObjectProtocol)
  optional
    function gestureRecognizer_shouldAttemptToRecognizeWithEvent (gestureRecognizer: NSGestureRecognizer; event: NSEvent): objcbool; message 'gestureRecognizer:shouldAttemptToRecognizeWithEvent:'; { available in macos  }
    function gestureRecognizerShouldBegin (gestureRecognizer: NSGestureRecognizer): objcbool; message 'gestureRecognizerShouldBegin:';
    function gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer (gestureRecognizer: NSGestureRecognizer; otherGestureRecognizer: NSGestureRecognizer): objcbool; message 'gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:';
    function gestureRecognizer_shouldRequireFailureOfGestureRecognizer (gestureRecognizer: NSGestureRecognizer; otherGestureRecognizer: NSGestureRecognizer): objcbool; message 'gestureRecognizer:shouldRequireFailureOfGestureRecognizer:';
    function gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer (gestureRecognizer: NSGestureRecognizer; otherGestureRecognizer: NSGestureRecognizer): objcbool; message 'gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:';
    function gestureRecognizer_shouldReceiveTouch (gestureRecognizer: NSGestureRecognizer; touch: NSTouch): objcbool; message 'gestureRecognizer:shouldReceiveTouch:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSSubclassUse = objccategory external (NSGestureRecognizer)
    procedure setState(newValue: NSGestureRecognizerState); message 'setState:';
    function state: NSGestureRecognizerState; message 'state';
    procedure reset; message 'reset';
    function canPreventGestureRecognizer (preventedGestureRecognizer: NSGestureRecognizer): objcbool; message 'canPreventGestureRecognizer:';
    function canBePreventedByGestureRecognizer (preventingGestureRecognizer: NSGestureRecognizer): objcbool; message 'canBePreventedByGestureRecognizer:';
    function shouldRequireFailureOfGestureRecognizer (otherGestureRecognizer: NSGestureRecognizer): objcbool; message 'shouldRequireFailureOfGestureRecognizer:';
    function shouldBeRequiredToFailByGestureRecognizer (otherGestureRecognizer: NSGestureRecognizer): objcbool; message 'shouldBeRequiredToFailByGestureRecognizer:';
    procedure mouseDown (event: NSEvent); message 'mouseDown:';
    procedure rightMouseDown (event: NSEvent); message 'rightMouseDown:';
    procedure otherMouseDown (event: NSEvent); message 'otherMouseDown:';
    procedure mouseUp (event: NSEvent); message 'mouseUp:';
    procedure rightMouseUp (event: NSEvent); message 'rightMouseUp:';
    procedure otherMouseUp (event: NSEvent); message 'otherMouseUp:';
    procedure mouseDragged (event: NSEvent); message 'mouseDragged:';
    procedure rightMouseDragged (event: NSEvent); message 'rightMouseDragged:';
    procedure otherMouseDragged (event: NSEvent); message 'otherMouseDragged:';
    procedure keyDown (event: NSEvent); message 'keyDown:';
    procedure keyUp (event: NSEvent); message 'keyUp:';
    procedure flagsChanged (event: NSEvent); message 'flagsChanged:';
    procedure tabletPoint (event: NSEvent); message 'tabletPoint:';
    procedure magnifyWithEvent (event: NSEvent); message 'magnifyWithEvent:';
    procedure rotateWithEvent (event: NSEvent); message 'rotateWithEvent:';
    procedure pressureChangeWithEvent (event: NSEvent); message 'pressureChangeWithEvent:'; { available in macos  }
    procedure touchesBeganWithEvent (event: NSEvent); message 'touchesBeganWithEvent:'; { available in macos  }
    procedure touchesMovedWithEvent (event: NSEvent); message 'touchesMovedWithEvent:'; { available in macos  }
    procedure touchesEndedWithEvent (event: NSEvent); message 'touchesEndedWithEvent:'; { available in macos  }
    procedure touchesCancelledWithEvent (event: NSEvent); message 'touchesCancelledWithEvent:'; { available in macos  }
  end;
{$endif}

