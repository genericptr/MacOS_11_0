{ Parsed from GameKit.framework GKMatchmakerViewController.h }

{ Types from GKMatchmakerViewController }
{$ifdef TYPES}

{$endif}


{ Types from GKMatchmakerViewController_Obsoleted }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKMatchmakerViewControllerPtr = ^GKMatchmakerViewController;
  GKMatchmakerViewControllerDelegateProtocolPtr = ^GKMatchmakerViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  GKMatchmakingMode = NSInteger;
  GKMatchmakingModePtr = ^GKMatchmakingMode;

const
  GKMatchmakingModeDefault = 0;
  GKMatchmakingModeNearbyOnly = 1;
  GKMatchmakingModeAutomatchOnly = 2;
{$endif}

{$ifdef CLASSES}

type
  GKMatchmakerViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  public
    procedure setMatchmakerDelegate(newValue: GKMatchmakerViewControllerDelegateProtocol); message 'setMatchmakerDelegate:';
    function matchmakerDelegate: GKMatchmakerViewControllerDelegateProtocol; message 'matchmakerDelegate';
    function matchRequest: GKMatchRequest; message 'matchRequest';
    procedure setHosted(newValue: objcbool); message 'setHosted:';
    function isHosted: objcbool; message 'isHosted';
    procedure setMatchmakingMode(newValue: GKMatchmakingMode); message 'setMatchmakingMode:';
    function matchmakingMode: GKMatchmakingMode; message 'matchmakingMode';
    function initWithMatchRequest (request: GKMatchRequest): id; message 'initWithMatchRequest:';
    function initWithInvite (invite: GKInvite): id; message 'initWithInvite:';
    procedure addPlayersToMatch (match: GKMatch); message 'addPlayersToMatch:'; { available in macos 10.8, ios 5.0 }
    procedure setHostedPlayer_didConnect (player: GKPlayer; connected: objcbool); message 'setHostedPlayer:didConnect:'; { available in macos 10.10, ios 8.0 }
    procedure setDefaultInvitationMessage(newValue: NSString); message 'setDefaultInvitationMessage:'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
    function defaultInvitationMessage: NSString; message 'defaultInvitationMessage'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
  end;


type
  GKMatchmakerViewController_Obsoleted = objccategory external name 'Obsoleted' (GKMatchmakerViewController)
    procedure setHostedPlayer_connected (playerID: NSString; connected: objcbool); message 'setHostedPlayer:connected:'; deprecated 'in 10_8, 10_10, 5_0, 8_0, "This is never invoked and its implementation does nothing, use setHostedPlayer:didConnect:"';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setHostedPlayerReady (playerID: NSString); message 'setHostedPlayerReady:'; deprecated 'in NA, NA, 4_1, 5_0, "This is never invoked and its implementation does nothing, use setHostedPlayer:connected: instead"';
    {$endif}
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKMatchmakerViewControllerDelegateProtocol = objcprotocol external name 'GKMatchmakerViewControllerDelegate' (NSObjectProtocol)
  required
    procedure matchmakerViewControllerWasCancelled (viewController: GKMatchmakerViewController); message 'matchmakerViewControllerWasCancelled:'; { available in macos 10.8, ios 4.1 }
    procedure matchmakerViewController_didFailWithError (viewController: GKMatchmakerViewController; error: NSError); message 'matchmakerViewController:didFailWithError:'; { available in macos 10.8, ios 4.1 }
  optional
    procedure matchmakerViewController_didFindMatch (viewController: GKMatchmakerViewController; match: GKMatch); message 'matchmakerViewController:didFindMatch:'; { available in macos 10.8, ios 4.1 }
    procedure matchmakerViewController_didFindHostedPlayers (viewController: GKMatchmakerViewController; players: NSArray); message 'matchmakerViewController:didFindHostedPlayers:'; { available in macos 10.10, ios 8.0 }
    procedure matchmakerViewController_hostedPlayerDidAccept (viewController: GKMatchmakerViewController; player: GKPlayer); message 'matchmakerViewController:hostedPlayerDidAccept:'; { available in macos 10.10, ios 8.0 }
    procedure matchmakerViewController_didFindPlayers (viewController: GKMatchmakerViewController; playerIDs: NSArray); message 'matchmakerViewController:didFindPlayers:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "This is never invoked and its implementation does nothing, use matchmakerViewController:didFindHostedPlayers:"';
    procedure matchmakerViewController_didReceiveAcceptFromHostedPlayer (viewController: GKMatchmakerViewController; playerID: NSString); message 'matchmakerViewController:didReceiveAcceptFromHostedPlayer:'; deprecated 'in 10_8, 10_10, 5_0, 8_0, "This is never invoked and its implementation does nothing, use matchmakerViewController:hostedPlayerDidAccept:"';
  end;
{$endif}

