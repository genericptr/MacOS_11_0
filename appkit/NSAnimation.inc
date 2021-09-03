{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAnimation.h }

{$ifdef TYPES}
type
  NSAnimationPtr = ^NSAnimation;
  NSViewAnimationPtr = ^NSViewAnimation;
  NSAnimationDelegateProtocolPtr = ^NSAnimationDelegateProtocol;
  NSAnimatablePropertyContainerProtocolPtr = ^NSAnimatablePropertyContainerProtocol;
{$endif}

{$ifdef TYPES}
type
  NSAnimationCurve = NSUInteger;
  NSAnimationCurvePtr = ^NSAnimationCurve;

const
  NSAnimationEaseInOut = 0;
  NSAnimationEaseIn = 1;
  NSAnimationEaseOut = 2;
  NSAnimationLinear = 3;

type
  NSAnimationBlockingMode = NSUInteger;
  NSAnimationBlockingModePtr = ^NSAnimationBlockingMode;

const
  NSAnimationBlocking = 0;
  NSAnimationNonblocking = 1;
  NSAnimationNonblockingThreaded = 2;

type
  NSAnimationProgress = single;
  NSAnimationProgressPtr = ^NSAnimationProgress;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAnimationProgressMarkNotification: NSNotificationName; cvar; external;
  NSAnimationProgressMark: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAnimation = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithDuration_animationCurve (duration: NSTimeInterval; animationCurve: NSAnimationCurve): id; message 'initWithDuration:animationCurve:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure startAnimation; message 'startAnimation';
    procedure stopAnimation; message 'stopAnimation';
    function isAnimating: objcbool; message 'isAnimating';
    procedure setCurrentProgress(newValue: NSAnimationProgress); message 'setCurrentProgress:';
    function currentProgress: NSAnimationProgress; message 'currentProgress';
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setAnimationBlockingMode(newValue: NSAnimationBlockingMode); message 'setAnimationBlockingMode:';
    function animationBlockingMode: NSAnimationBlockingMode; message 'animationBlockingMode';
    procedure setFrameRate(newValue: single); message 'setFrameRate:';
    function frameRate: single; message 'frameRate';
    procedure setAnimationCurve(newValue: NSAnimationCurve); message 'setAnimationCurve:';
    function animationCurve: NSAnimationCurve; message 'animationCurve';
    function currentValue: single; message 'currentValue';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setProgressMarks(newValue: NSArray); message 'setProgressMarks:';
    function progressMarks: NSArray; message 'progressMarks';
    procedure addProgressMark (progressMark: NSAnimationProgress); message 'addProgressMark:';
    procedure removeProgressMark (progressMark: NSAnimationProgress); message 'removeProgressMark:';
    procedure startWhenAnimation_reachesProgress (animation: NSAnimation; startProgress: NSAnimationProgress); message 'startWhenAnimation:reachesProgress:';
    procedure stopWhenAnimation_reachesProgress (animation: NSAnimation; stopProgress: NSAnimationProgress); message 'stopWhenAnimation:reachesProgress:';
    procedure clearStartAnimation; message 'clearStartAnimation';
    procedure clearStopAnimation; message 'clearStopAnimation';
    function runLoopModesForAnimating: NSArray; message 'runLoopModesForAnimating';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAnimationDelegateProtocol = objcprotocol external name 'NSAnimationDelegate' (NSObjectProtocol)
  optional
    function animationShouldStart (animation: NSAnimation): objcbool; message 'animationShouldStart:';
    procedure animationDidStop (animation: NSAnimation); message 'animationDidStop:';
    procedure animationDidEnd (animation: NSAnimation); message 'animationDidEnd:';
    function animation_valueForProgress (animation: NSAnimation; progress: NSAnimationProgress): single; message 'animation:valueForProgress:';
    procedure animation_didReachProgressMark (animation: NSAnimation; progress: NSAnimationProgress); message 'animation:didReachProgressMark:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSViewAnimationKey = NSString;
  NSViewAnimationKeyPtr = ^NSViewAnimationKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSViewAnimationTargetKey: NSViewAnimationKey; cvar; external;
  NSViewAnimationStartFrameKey: NSViewAnimationKey; cvar; external;
  NSViewAnimationEndFrameKey: NSViewAnimationKey; cvar; external;
  NSViewAnimationEffectKey: NSViewAnimationKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSViewAnimationEffectName = NSString;
  NSViewAnimationEffectNamePtr = ^NSViewAnimationEffectName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSViewAnimationFadeInEffect: NSViewAnimationEffectName; cvar; external;
  NSViewAnimationFadeOutEffect: NSViewAnimationEffectName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSViewAnimation = objcclass external (NSAnimation)
  public
    function initWithViewAnimations (viewAnimations: NSArray): id; message 'initWithViewAnimations:';
    procedure setViewAnimations(newValue: NSArray); message 'setViewAnimations:';
    function viewAnimations: NSArray; message 'viewAnimations';
  end;
{$endif}

{$ifdef TYPES}
type
  NSAnimatablePropertyKey = NSString;
  NSAnimatablePropertyKeyPtr = ^NSAnimatablePropertyKey;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAnimatablePropertyContainerProtocol = objcprotocol external name 'NSAnimatablePropertyContainer'
    function animator: id; message 'animator'; { available in macos  }
    procedure setAnimations(newValue: NSDictionary); message 'setAnimations:'; { available in macos  }
    function animations: NSDictionary; message 'animations'; { available in macos  }
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos  }
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAnimationTriggerOrderIn: NSAnimatablePropertyKey { available in macos  }; cvar; external;
  NSAnimationTriggerOrderOut: NSAnimatablePropertyKey { available in macos  }; cvar; external;
{$endif}

