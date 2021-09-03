{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSViewController.h }

{$ifdef CALLBACKS}
type
  NSViewControllerTransitionFromViewControllerCallback = reference to function : pointer; cblock; cdecl;
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
    procedure viewDidLoad; message 'viewDidLoad'; { available in macos  }
    function isViewLoaded: objcbool; message 'isViewLoaded'; { available in macos  }
    procedure viewWillAppear; message 'viewWillAppear'; { available in macos  }
    procedure viewDidAppear; message 'viewDidAppear'; { available in macos  }
    procedure viewWillDisappear; message 'viewWillDisappear'; { available in macos  }
    procedure viewDidDisappear; message 'viewDidDisappear'; { available in macos  }
    procedure setPreferredContentSize(newValue: NSSize); message 'setPreferredContentSize:'; { available in macos  }
    function preferredContentSize: NSSize; message 'preferredContentSize'; { available in macos  }
    procedure updateViewConstraints; message 'updateViewConstraints'; { available in macos  }
    procedure viewWillLayout; message 'viewWillLayout'; { available in macos  }
    procedure viewDidLayout; message 'viewDidLayout'; { available in macos  }

    { Adopted protocols }
    function commitEditingAndReturnError (error: NSErrorPtr): objcbool; message 'commitEditingAndReturnError:'; { available in macos  }
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    procedure performSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id); message 'performSegueWithIdentifier:sender:'; { available in macos  }
    procedure prepareForSegue_sender (segue: NSStoryboardSegue; sender: id); message 'prepareForSegue:sender:'; { available in macos  }
    procedure setIdentifier (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    function shouldPerformSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id): objcbool; message 'shouldPerformSegueWithIdentifier:sender:'; { available in macos  }
  end;


type
  NSViewControllerPresentation = objccategory external (NSViewController)
    procedure presentViewController_animator (viewController: NSViewController; animator: id); message 'presentViewController:animator:'; { available in macos  }
    procedure dismissViewController (viewController: NSViewController); message 'dismissViewController:'; { available in macos  }
    procedure dismissController (sender: id); message 'dismissController:'; { available in macos  }
    function presentedViewControllers: NSArray; message 'presentedViewControllers'; { available in macos  }
    function presentingViewController: NSViewController; message 'presentingViewController'; { available in macos  }
  end;

type
  NSViewControllerPresentationAndTransitionStyles = objccategory external (NSViewController)
    procedure presentViewControllerAsSheet (viewController: NSViewController); message 'presentViewControllerAsSheet:'; { available in macos  }
    procedure presentViewControllerAsModalWindow (viewController: NSViewController); message 'presentViewControllerAsModalWindow:'; { available in macos  }
    procedure presentViewController_asPopoverRelativeToRect_ofView_preferredEdge_behavior (viewController: NSViewController; positioningRect: NSRect; positioningView: NSView; preferredEdge: NSRectEdge; behavior: NSPopoverBehavior); message 'presentViewController:asPopoverRelativeToRect:ofView:preferredEdge:behavior:'; { available in macos  }
    procedure transitionFromViewController_toViewController_options_completionHandler (fromViewController: NSViewController; toViewController: NSViewController; options: NSViewControllerTransitionOptions; completion: NSViewControllerTransitionFromViewControllerCallback); message 'transitionFromViewController:toViewController:options:completionHandler:'; { available in macos  }
  end;

type
  NSViewControllerContainer = objccategory external (NSViewController)
    function parentViewController: NSViewController; message 'parentViewController'; { available in macos  }
    procedure setChildViewControllers(newValue: NSArray); message 'setChildViewControllers:'; { available in macos  }
    function childViewControllers: NSArray; message 'childViewControllers'; { available in macos  }
    procedure addChildViewController (childViewController: NSViewController); message 'addChildViewController:'; { available in macos  }
    procedure removeFromParentViewController; message 'removeFromParentViewController'; { available in macos  }
    procedure insertChildViewController_atIndex (childViewController: NSViewController; index: NSInteger); message 'insertChildViewController:atIndex:'; { available in macos  }
    procedure removeChildViewControllerAtIndex (index: NSInteger); message 'removeChildViewControllerAtIndex:'; { available in macos  }
    procedure preferredContentSizeDidChangeForViewController (viewController: NSViewController); message 'preferredContentSizeDidChangeForViewController:'; { available in macos  }
    procedure viewWillTransitionToSize (newSize: NSSize); message 'viewWillTransitionToSize:'; { available in macos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSViewControllerPresentationAnimatorProtocol = objcprotocol external name 'NSViewControllerPresentationAnimator' (NSObjectProtocol)
  required
    procedure animatePresentationOfViewController_fromViewController (viewController: NSViewController; fromViewController: NSViewController); message 'animatePresentationOfViewController:fromViewController:'; { available in macos  }
    procedure animateDismissalOfViewController_fromViewController (viewController: NSViewController; fromViewController: NSViewController); message 'animateDismissalOfViewController:fromViewController:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSViewControllerStoryboardingMethods = objccategory external (NSViewController)
    function storyboard: NSStoryboard; message 'storyboard'; { available in macos  }
  end;

type
  NSExtensionAdditions = objccategory external (NSViewController)
    function extensionContext: NSExtensionContext; message 'extensionContext'; { available in macos  }
    procedure setSourceItemView(newValue: NSView); message 'setSourceItemView:'; { available in macos  }
    function sourceItemView: NSView; message 'sourceItemView'; { available in macos  }
    procedure setPreferredScreenOrigin(newValue: NSPoint); message 'setPreferredScreenOrigin:'; { available in macos  }
    function preferredScreenOrigin: NSPoint; message 'preferredScreenOrigin'; { available in macos  }
    function preferredMinimumSize: NSSize; message 'preferredMinimumSize'; { available in macos  }
    function preferredMaximumSize: NSSize; message 'preferredMaximumSize'; { available in macos  }
  end;
{$endif}

