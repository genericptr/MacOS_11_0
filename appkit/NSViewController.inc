{ Parsed from AppKit.framework NSViewController.h }

{$ifdef CALLBACKS}
type
  NSViewControllerTransitionFromViewControllerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSViewControllerPtr = ^NSViewController;
  NSViewControllerPresentationAnimatorProtocolPtr = ^NSViewControllerPresentationAnimatorProtocol;
{$endif}

{$ifdef TYPES}
type
  NSViewControllerTransitionOptions = NSUInteger;
  NSViewControllerTransitionOptionsPtr = ^NSViewControllerTransitionOptions;

const
  NSViewControllerTransitionNone = $0;
  NSViewControllerTransitionCrossfade = $1;
  NSViewControllerTransitionSlideUp = $10;
  NSViewControllerTransitionSlideDown = $20;
  NSViewControllerTransitionSlideLeft = $40;
  NSViewControllerTransitionSlideRight = $80;
  NSViewControllerTransitionSlideForward = $140;
  NSViewControllerTransitionSlideBackward = $180;
  NSViewControllerTransitionAllowUserInteraction = $1000;
{$endif}

{$ifdef CLASSES}

type
  NSViewController = objcclass external (NSResponder, NSEditorProtocol, NSSeguePerformingProtocol, NSUserInterfaceItemIdentificationProtocol)
  public
    function initWithNibName_bundle (nibNameOrNil: NSNibName; nibBundleOrNil: NSBundle): id; message 'initWithNibName:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function nibName: NSNibName; message 'nibName';
    function nibBundle: NSBundle; message 'nibBundle';
    procedure setRepresentedObject(newValue: id); message 'setRepresentedObject:';
    function representedObject: id; message 'representedObject';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure loadView; message 'loadView';
    procedure commitEditingWithDelegate_didCommitSelector_contextInfo (delegate: id; didCommitSelector: SEL; contextInfo: pointer); message 'commitEditingWithDelegate:didCommitSelector:contextInfo:';
    function commitEditing: objcbool; message 'commitEditing';
    procedure discardEditing; message 'discardEditing';
    procedure viewDidLoad; message 'viewDidLoad'; { available in macos 10.10 }
    function isViewLoaded: objcbool; message 'isViewLoaded'; { available in macos 10.10 }
    procedure viewWillAppear; message 'viewWillAppear'; { available in macos 10.10 }
    procedure viewDidAppear; message 'viewDidAppear'; { available in macos 10.10 }
    procedure viewWillDisappear; message 'viewWillDisappear'; { available in macos 10.10 }
    procedure viewDidDisappear; message 'viewDidDisappear'; { available in macos 10.10 }
    procedure setPreferredContentSize(newValue: NSSize); message 'setPreferredContentSize:'; { available in macos 10.10 }
    function preferredContentSize: NSSize; message 'preferredContentSize'; { available in macos 10.10 }
    procedure updateViewConstraints; message 'updateViewConstraints'; { available in macos 10.10 }
    procedure viewWillLayout; message 'viewWillLayout'; { available in macos 10.10 }
    procedure viewDidLayout; message 'viewDidLayout'; { available in macos 10.10 }

    { Adopted protocols }
    function commitEditingAndReturnError (error: NSErrorPtr): objcbool; message 'commitEditingAndReturnError:'; { available in macos 10.7 }
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    procedure performSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id); message 'performSegueWithIdentifier:sender:'; { available in macos 10.10 }
    procedure prepareForSegue_sender (segue: NSStoryboardSegue; sender: id); message 'prepareForSegue:sender:'; { available in macos 10.10 }
    procedure setIdentifier (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    function shouldPerformSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id): objcbool; message 'shouldPerformSegueWithIdentifier:sender:'; { available in macos 10.10 }
  end;


type
  NSViewControllerPresentation = objccategory external (NSViewController)
    procedure presentViewController_animator (viewController: NSViewController; animator: NSViewControllerPresentationAnimatorProtocol); message 'presentViewController:animator:'; { available in macos 10.10 }
    procedure dismissViewController (viewController: NSViewController); message 'dismissViewController:'; { available in macos 10.10 }
    procedure dismissController (sender: id); message 'dismissController:'; { available in macos 10.10 }
    function presentedViewControllers: NSArray; message 'presentedViewControllers'; { available in macos 10.10 }
    function presentingViewController: NSViewController; message 'presentingViewController'; { available in macos 10.10 }
  end;

type
  NSViewControllerPresentationAndTransitionStyles = objccategory external (NSViewController)
    procedure presentViewControllerAsSheet (viewController: NSViewController); message 'presentViewControllerAsSheet:'; { available in macos 10.10 }
    procedure presentViewControllerAsModalWindow (viewController: NSViewController); message 'presentViewControllerAsModalWindow:'; { available in macos 10.10 }
    procedure presentViewController_asPopoverRelativeToRect_ofView_preferredEdge_behavior (viewController: NSViewController; positioningRect: NSRect; positioningView: NSView; preferredEdge: NSRectEdge; behavior: NSPopoverBehavior); message 'presentViewController:asPopoverRelativeToRect:ofView:preferredEdge:behavior:'; { available in macos 10.10 }
    procedure transitionFromViewController_toViewController_options_completionHandler (fromViewController: NSViewController; toViewController: NSViewController; options: NSViewControllerTransitionOptions; completion: NSViewControllerTransitionFromViewControllerCallback); message 'transitionFromViewController:toViewController:options:completionHandler:'; { available in macos 10.10 }
  end;

type
  NSViewControllerContainer = objccategory external (NSViewController)
    function parentViewController: NSViewController; message 'parentViewController'; { available in macos 10.10 }
    procedure setChildViewControllers(newValue: NSArray); message 'setChildViewControllers:'; { available in macos 10.10 }
    function childViewControllers: NSArray; message 'childViewControllers'; { available in macos 10.10 }
    procedure addChildViewController (childViewController: NSViewController); message 'addChildViewController:'; { available in macos 10.10 }
    procedure removeFromParentViewController; message 'removeFromParentViewController'; { available in macos 10.10 }
    procedure insertChildViewController_atIndex (childViewController: NSViewController; index: NSInteger); message 'insertChildViewController:atIndex:'; { available in macos 10.10 }
    procedure removeChildViewControllerAtIndex (index: NSInteger); message 'removeChildViewControllerAtIndex:'; { available in macos 10.10 }
    procedure preferredContentSizeDidChangeForViewController (viewController: NSViewController); message 'preferredContentSizeDidChangeForViewController:'; { available in macos 10.10 }
    procedure viewWillTransitionToSize (newSize: NSSize); message 'viewWillTransitionToSize:'; { available in macos 10.10 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSViewControllerPresentationAnimatorProtocol = objcprotocol external name 'NSViewControllerPresentationAnimator' (NSObjectProtocol)
  required
    procedure animatePresentationOfViewController_fromViewController (viewController: NSViewController; fromViewController: NSViewController); message 'animatePresentationOfViewController:fromViewController:'; { available in macos 10.10 }
    procedure animateDismissalOfViewController_fromViewController (viewController: NSViewController; fromViewController: NSViewController); message 'animateDismissalOfViewController:fromViewController:'; { available in macos 10.10 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSViewControllerStoryboardingMethods = objccategory external (NSViewController)
    function storyboard: NSStoryboard; message 'storyboard'; { available in macos 10.10 }
  end;

type
  NSExtensionAdditions = objccategory external (NSViewController)
    function extensionContext: NSExtensionContext; message 'extensionContext'; { available in macos 10.10 }
    procedure setSourceItemView(newValue: NSView); message 'setSourceItemView:'; { available in macos 10.10 }
    function sourceItemView: NSView; message 'sourceItemView'; { available in macos 10.10 }
    procedure setPreferredScreenOrigin(newValue: NSPoint); message 'setPreferredScreenOrigin:'; { available in macos 10.10 }
    function preferredScreenOrigin: NSPoint; message 'preferredScreenOrigin'; { available in macos 10.10 }
    function preferredMinimumSize: NSSize; message 'preferredMinimumSize'; { available in macos 10.10 }
    function preferredMaximumSize: NSSize; message 'preferredMaximumSize'; { available in macos 10.10 }
  end;
{$endif}

