{ Parsed from AppKit.framework NSPageController.h }

{$ifdef TYPES}
type
  NSPageControllerPtr = ^NSPageController;
  NSPageControllerDelegateProtocolPtr = ^NSPageControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSPageControllerObjectIdentifier = NSString;
  NSPageControllerObjectIdentifierPtr = ^NSPageControllerObjectIdentifier;
  NSPageControllerTransitionStyle = NSInteger;
  NSPageControllerTransitionStylePtr = ^NSPageControllerTransitionStyle;

const
  NSPageControllerTransitionStyleStackHistory = 0;
  NSPageControllerTransitionStyleStackBook = 1;
  NSPageControllerTransitionStyleHorizontalStrip = 2;
{$endif}

{$ifdef CLASSES}

type
  NSPageController = objcclass external (NSViewController, NSAnimatablePropertyContainerProtocol, NSCodingProtocol)
  public
    procedure setDelegate(newValue: NSPageControllerDelegateProtocol); message 'setDelegate:';
    function delegate: NSPageControllerDelegateProtocol; message 'delegate';
    function selectedViewController: NSViewController; message 'selectedViewController';
    procedure setTransitionStyle(newValue: NSPageControllerTransitionStyle); message 'setTransitionStyle:';
    function transitionStyle: NSPageControllerTransitionStyle; message 'transitionStyle';
    procedure setArrangedObjects(newValue: NSArray); message 'setArrangedObjects:';
    function arrangedObjects: NSArray; message 'arrangedObjects';
    procedure setSelectedIndex(newValue: NSInteger); message 'setSelectedIndex:';
    function selectedIndex: NSInteger; message 'selectedIndex';
    procedure navigateForwardToObject (object_: id); message 'navigateForwardToObject:';
    procedure completeTransition; message 'completeTransition';
    procedure navigateBack (sender: id); message 'navigateBack:';
    procedure navigateForward (sender: id); message 'navigateForward:';
    procedure takeSelectedIndexFrom (sender: id); message 'takeSelectedIndexFrom:';

    { Adopted protocols }
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos 10.5 }
    function animations: NSDictionary; message 'animations'; { available in macos 10.5 }
    function animator: id; message 'animator'; { available in macos 10.5 }
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos 10.5 }
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos 10.5 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPageControllerDelegateProtocol = objcprotocol external name 'NSPageControllerDelegate' (NSObjectProtocol)
  required
  optional
    function pageController_identifierForObject (pageController: NSPageController; object_: id): NSPageControllerObjectIdentifier; message 'pageController:identifierForObject:';
    function pageController_viewControllerForIdentifier (pageController: NSPageController; identifier: NSPageControllerObjectIdentifier): NSViewController; message 'pageController:viewControllerForIdentifier:';
    function pageController_frameForObject (pageController: NSPageController; object_: id): NSRect; message 'pageController:frameForObject:';
    procedure pageController_prepareViewController_withObject (pageController: NSPageController; viewController: NSViewController; object_: id); message 'pageController:prepareViewController:withObject:';
    procedure pageController_didTransitionToObject (pageController: NSPageController; object_: id); message 'pageController:didTransitionToObject:';
    procedure pageControllerWillStartLiveTransition (pageController: NSPageController); message 'pageControllerWillStartLiveTransition:';
    procedure pageControllerDidEndLiveTransition (pageController: NSPageController); message 'pageControllerDidEndLiveTransition:';
  end;
{$endif}

