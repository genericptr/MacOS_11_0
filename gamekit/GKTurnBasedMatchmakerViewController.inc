{ Parsed from GameKit.framework GKTurnBasedMatchmakerViewController.h }

{$ifdef TYPES}
type
  GKTurnBasedMatchmakerViewControllerPtr = ^GKTurnBasedMatchmakerViewController;
  GKTurnBasedMatchmakerViewControllerDelegateProtocolPtr = ^GKTurnBasedMatchmakerViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  GKTurnBasedMatchmakerViewController = objcclass external (UINavigationController)
  end;
{$endif}

{$else}
{$ifdef CLASSES}

type
  GKTurnBasedMatchmakerViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKTurnBasedMatchmakerViewControllerCategory = objccategory external (GKTurnBasedMatchmakerViewController)
    procedure setTurnBasedMatchmakerDelegate(newValue: id); message 'setTurnBasedMatchmakerDelegate:';
    function turnBasedMatchmakerDelegate: id; message 'turnBasedMatchmakerDelegate';
    procedure setShowExistingMatches(newValue: objcbool); message 'setShowExistingMatches:';
    function showExistingMatches: objcbool; message 'showExistingMatches';
    function initWithMatchRequest (request: GKMatchRequest): id; message 'initWithMatchRequest:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKTurnBasedMatchmakerViewControllerDelegateProtocol = objcprotocol external name 'GKTurnBasedMatchmakerViewControllerDelegate' (NSObjectProtocol)
  required
    procedure turnBasedMatchmakerViewControllerWasCancelled (viewController: GKTurnBasedMatchmakerViewController); message 'turnBasedMatchmakerViewControllerWasCancelled:'; { available in 10_8, 5_0 }
    procedure turnBasedMatchmakerViewController_didFailWithError (viewController: GKTurnBasedMatchmakerViewController; error: NSError); message 'turnBasedMatchmakerViewController:didFailWithError:'; { available in 10_8, 5_0 }
  optional
    procedure turnBasedMatchmakerViewController_didFindMatch (viewController: GKTurnBasedMatchmakerViewController; match: GKTurnBasedMatch); message 'turnBasedMatchmakerViewController:didFindMatch:'; deprecated 'in 10_8, 10_11, 5_0, 9_0, "use GKTurnBasedEventListener player:receivedTurnEventForMatch:didBecomeActive:"';
    procedure turnBasedMatchmakerViewController_playerQuitForMatch (viewController: GKTurnBasedMatchmakerViewController; match: GKTurnBasedMatch); message 'turnBasedMatchmakerViewController:playerQuitForMatch:'; deprecated 'in 10_8, 10_11, 5_0, 9_0, "use GKTurnBasedEventListener player:wantsToQuitMatch:"';
  end;
{$endif}

