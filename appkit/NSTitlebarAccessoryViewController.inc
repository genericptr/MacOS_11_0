{ Parsed from AppKit.framework NSTitlebarAccessoryViewController.h }

{ Types from NSTitlebarAccessoryViewController }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSTitlebarAccessoryViewControllerPtr = ^NSTitlebarAccessoryViewController;
{$endif}

{$ifdef CLASSES}

type
  NSTitlebarAccessoryViewController = objcclass external (NSViewController, NSAnimationDelegateProtocol, NSAnimatablePropertyContainerProtocol)
  public
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLayoutAttribute(newValue: NSLayoutAttribute); message 'setLayoutAttribute:';
    function layoutAttribute: NSLayoutAttribute; message 'layoutAttribute';
    {$endif}
    procedure setFullScreenMinHeight(newValue: CGFloat); message 'setFullScreenMinHeight:';
    function fullScreenMinHeight: CGFloat; message 'fullScreenMinHeight';
    procedure setHidden(newValue: objcbool); message 'setHidden:'; { available in macos 10.12 }
    function isHidden: objcbool; message 'isHidden'; { available in macos 10.12 }
    procedure setAutomaticallyAdjustsSize(newValue: objcbool); message 'setAutomaticallyAdjustsSize:'; { available in macos 11.0 }
    function automaticallyAdjustsSize: objcbool; message 'automaticallyAdjustsSize'; { available in macos 11.0 }
    procedure viewWillAppear; message 'viewWillAppear'; { NS_REQUIRES_SUPER }
    procedure viewDidAppear; message 'viewDidAppear'; { NS_REQUIRES_SUPER }
    procedure viewDidDisappear; message 'viewDidDisappear'; { NS_REQUIRES_SUPER }

    { Adopted protocols }
    procedure animation_didReachProgressMark (animation: NSAnimation; progress: NSAnimationProgress); message 'animation:didReachProgressMark:';
    function animation_valueForProgress (animation: NSAnimation; progress: NSAnimationProgress): single; message 'animation:valueForProgress:';
    procedure animationDidEnd (animation: NSAnimation); message 'animationDidEnd:';
    procedure animationDidStop (animation: NSAnimation); message 'animationDidStop:';
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos 10.5 }
    function animations: NSDictionary; message 'animations'; { available in macos 10.5 }
    function animationShouldStart (animation: NSAnimation): objcbool; message 'animationShouldStart:';
    function animator: id; message 'animator'; { available in macos 10.5 }
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos 10.5 }
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos 10.5 }
  end;
{$endif}

