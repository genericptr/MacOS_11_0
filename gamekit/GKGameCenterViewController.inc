{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKGameCenterViewController.h }

{$ifdef TYPES}
type
  GKGameCenterViewControllerPtr = ^GKGameCenterViewController;
  GKGameCenterControllerDelegateProtocolPtr = ^GKGameCenterControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  GKGameCenterViewControllerState = NSInteger;
  GKGameCenterViewControllerStatePtr = ^GKGameCenterViewControllerState;

const
  GKGameCenterViewControllerStateDefault = -1;
  GKGameCenterViewControllerStateLeaderboards = 0;
  GKGameCenterViewControllerStateAchievements = 1;
  GKGameCenterViewControllerStateChallenges = 2;
  GKGameCenterViewControllerStateLocalPlayerProfile = 3;
  GKGameCenterViewControllerStateDashboard = 4;
{$endif}

{$if defined(TARGET_OS_IPHONE)defined(interface)defined(GKGameCenterViewController)defined(UINavigationController)}

{$else}
{$ifdef CLASSES}

type
  GKGameCenterViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKGameCenterViewControllerCategory = objccategory external (GKGameCenterViewController)
    procedure setGameCenterDelegate(newValue: id); message 'setGameCenterDelegate:';
    function gameCenterDelegate: id; message 'gameCenterDelegate';
    function initWithState (state: GKGameCenterViewControllerState): id; message 'initWithState:'; { unavailable in watchos }
    function initWithLeaderboardID_playerScope_timeScope (leaderboardID: NSString; playerScope: GKLeaderboardPlayerScope; timeScope: GKLeaderboardTimeScope): id; message 'initWithLeaderboardID:playerScope:timeScope:'; { unavailable in watchos }
    function initWithLeaderboard_playerScope (leaderboard: GKLeaderboard; playerScope: GKLeaderboardPlayerScope): id; message 'initWithLeaderboard:playerScope:'; { unavailable in watchos }
    function initWithAchievementID (achievementID: NSString): id; message 'initWithAchievementID:'; { unavailable in watchos }
  end;

type
  GKGameCenterViewController_Deprecated = objccategory external name 'Deprecated' (GKGameCenterViewController)
    procedure setViewState(newValue: GKGameCenterViewControllerState); message 'setViewState:'; deprecated 'Use -initWithState: instead';
    function viewState: GKGameCenterViewControllerState; message 'viewState'; deprecated 'Use -initWithState: instead';
    procedure setLeaderboardTimeScope(newValue: GKLeaderboardTimeScope); message 'setLeaderboardTimeScope:'; deprecated 'Use -initWithLeaderboard: instead';
    function leaderboardTimeScope: GKLeaderboardTimeScope; message 'leaderboardTimeScope'; deprecated 'Use -initWithLeaderboard: instead';
    procedure setLeaderboardIdentifier(newValue: NSString); message 'setLeaderboardIdentifier:'; deprecated 'Use -initWithLeaderboard: instead';
    function leaderboardIdentifier: NSString; message 'leaderboardIdentifier'; deprecated 'Use -initWithLeaderboard: instead';
    procedure setLeaderboardCategory(newValue: NSString); message 'setLeaderboardCategory:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "GKGameCenterViewController''s leaderboardCategory property is deprecated. Use -initWithLeaderboard: instead"';
    function leaderboardCategory: NSString; message 'leaderboardCategory'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "GKGameCenterViewController''s leaderboardCategory property is deprecated. Use -initWithLeaderboard: instead"';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKGameCenterControllerDelegateProtocol = objcprotocol external name 'GKGameCenterControllerDelegate' (NSObjectProtocol)
    procedure gameCenterViewControllerDidFinish (gameCenterViewController: GKGameCenterViewController); message 'gameCenterViewControllerDidFinish:'; { available in 10_9, 6_0 }
  end;
{$endif}

