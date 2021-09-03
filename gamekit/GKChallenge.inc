{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKChallenge.h }

{ Types from GKScore_GKChallengeUI }
{$ifdef TYPES}

{$endif}


{ Types from GKLeaderboardEntry_GKChallengeUI }
{$ifdef TYPES}

{$endif}


{ Types from GKChallengeUI }
{$ifdef TYPES}

{$endif}


{ Types from GKScore_GKChallengeObsoletedUI }
{$ifdef TYPES}

{$endif}


{ Types from GKChallengeObsoletedUI }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  GKChallengeLoadReceivedChallengesWithCompletionHandlerCallback = reference to function (challenges: NSArray; error: NSError): pointer; cblock; cdecl;
  GKChallengeReportScoresCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKChallengeReportLeaderboardScoresCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKChallengeSelectChallengeablePlayersCallback = reference to function (challengeablePlayers: NSArray; error: NSError): pointer; cblock; cdecl;
  GKChallengeReportAchievementsCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKChallengeSelectChallengeablePlayerIDsCallback = reference to function (challengeablePlayerIDs: NSArray; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKChallengePtr = ^GKChallenge;
  GKScoreChallengePtr = ^GKScoreChallenge;
  GKAchievementChallengePtr = ^GKAchievementChallenge;
{$endif}

{$ifdef TYPES}
type
  GKChallengeState = NSInteger;
  GKChallengeStatePtr = ^GKChallengeState;

const
  GKChallengeStateInvalid = 0;
  GKChallengeStatePending = 1;
  GKChallengeStateCompleted = 2;
  GKChallengeStateDeclined = 3;
{$endif}

{$ifdef CLASSES}

type
  GKChallenge = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadReceivedChallengesWithCompletionHandler (completionHandler: GKChallengeLoadReceivedChallengesWithCompletionHandlerCallback); message 'loadReceivedChallengesWithCompletionHandler:';
    procedure decline; message 'decline';
    function issuingPlayer: GKPlayer; message 'issuingPlayer'; { available in 10_10, 8_0 }
    function receivingPlayer: GKPlayer; message 'receivingPlayer'; { available in 10_10, 8_0 }
    function state: GKChallengeState; message 'state';
    function issueDate: NSDate; message 'issueDate';
    function completionDate: NSDate; message 'completionDate';
    function message_: NSString; message 'message';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  GKChallenge_Obsoleted = objccategory external name 'Obsoleted' (GKChallenge)
    function issuingPlayerID: NSString; message 'issuingPlayerID'; deprecated 'in 10_8, 10_10, 6_0, 8_0, " This property is obsolete, Use issuingPlayer instead"';
    function receivingPlayerID: NSString; message 'receivingPlayerID'; deprecated 'in 10_8, 10_10, 6_0, 8_0, " This property is obsolete, Use receivingPlayer instead"';
  end;


type
  GKScoreChallenge = objcclass external (GKChallenge)
  public
    function score: GKScore; message 'score';
  end;

type
  GKAchievementChallenge = objcclass external (GKChallenge)
  public
    function achievement: GKAchievement; message 'achievement';
  end;
{$endif}

{$if  not defined(TARGET_OS_WATCH)}
{$ifdef CLASSES}

type
  GKScore_GKChallenge = objccategory external name 'GKChallenge' (GKScore)
    class procedure reportScores_withEligibleChallenges_withCompletionHandler (scores: NSArray; challenges: NSArray; completionHandler: GKChallengeReportScoresCallback); message 'reportScores:withEligibleChallenges:withCompletionHandler:'; deprecated 'in 10_10, 11_0, 6_0, 14_0, "pass GKLeaderboardScore to reportLeaderboardScores:withEligibleChallenges:withCompletionHandler instead"';
    class procedure reportLeaderboardScores_withEligibleChallenges_withCompletionHandler (scores: NSArray; challenges: NSArray; completionHandler: GKChallengeReportLeaderboardScoresCallback); message 'reportLeaderboardScores:withEligibleChallenges:withCompletionHandler:'; { available in 11_0, 14_0 }
  end;

type
  GKAchievement_GKChallenge = objccategory external name 'GKChallenge' (GKAchievement)
    procedure selectChallengeablePlayers_withCompletionHandler (players: NSArray; completionHandler: GKChallengeSelectChallengeablePlayersCallback); message 'selectChallengeablePlayers:withCompletionHandler:'; { available in 10_10, 8_0 }
    class procedure reportAchievements_withEligibleChallenges_withCompletionHandler (achievements: NSArray; challenges: NSArray; completionHandler: GKChallengeReportAchievementsCallback); message 'reportAchievements:withEligibleChallenges:withCompletionHandler:'; { available in 10_10, 7_0 }
  end;

type
  GKScore_GKChallengeObsoleted = objccategory external name 'GKChallengeObsoleted' (GKScore)
    procedure issueChallengeToPlayers_message (playerIDs: NSArray; message_: NSString); message 'issueChallengeToPlayers:message:'; deprecated 'in 10_8, 10_10, 6_0, 7_0, "This is never invoked and its implementation does nothing, pass GKPlayers to challengeComposeControllerWithMessage:players:completionHandler: and present the view controller instead"';
  end;

type
  GKChallengeObsoleted = objccategory external (GKAchievement)
    procedure issueChallengeToPlayers_message (playerIDs: NSArray; message_: NSString); message 'issueChallengeToPlayers:message:'; deprecated 'in 10_8, 10_10, 6_0, 7_0, "This is never invoked and its implementation does nothing, pass GKPlayers to challengeComposeControllerWithMessage:players:completionHandler: and present the view controller instead"';
    procedure selectChallengeablePlayerIDs_withCompletionHandler (playerIDs: NSArray; completionHandler: GKChallengeSelectChallengeablePlayerIDsCallback); message 'selectChallengeablePlayerIDs:withCompletionHandler:'; deprecated 'in 10_8, 10_10, 6_0, 8_0, "This is never invoked and its implementation does nothing, pass GKPlayers to selectChallengeablePlayers:"';
  end;
{$endif}

{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  GKChallengeComposeCompletionBlock = reference to function (composeController: UIViewController; didIssueChallenge: objcbool; sentPlayerIDs: NSArray): pointer; cblock; cdecl;
{$endif}

{$else}
{$ifdef TYPES}
type
  GKChallengeComposeCompletionBlock = reference to function (composeController: NSViewController; didIssueChallenge: objcbool; sentPlayerIDs: NSArray): pointer; cblock; cdecl;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKScore_GKChallengeUI = objccategory external name 'GKChallengeUI' (GKScore)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: NSString; players: NSArray; completionHandler: GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 8_0 }
    {$else}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: NSString; players: NSArray; completionHandler: GKChallengeComposeCompletionBlock): NSViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 10_10 }
    {$endif}
  end;

type
  GKLeaderboardEntry_GKChallengeUI = objccategory external name 'GKChallengeUI' (GKLeaderboardEntry)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: NSString; players: NSArray; completionHandler: GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in ios , tvos , watchos  }
    {$else}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: NSString; players: NSArray; completionHandler: GKChallengeComposeCompletionBlock): NSViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in macos  }
    {$endif}
  end;

type
  GKChallengeUI = objccategory external (GKAchievement)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: NSString; players: NSArray; completionHandler: GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 8_0 }
    {$else}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: NSString; players: NSArray; completionHandler: GKChallengeComposeCompletionBlock): NSViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 10_10 }
    {$endif}
  end;

type
  GKScore_GKChallengeObsoletedUI = objccategory external name 'GKChallengeObsoletedUI' (GKScore)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithPlayers_message_completionHandler (playerIDs: NSArray; message_: NSString; completionHandler: GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithPlayers:message:completionHandler:'; deprecated 'in 7_0, 8_0, "This is never invoked and its implementation does nothing, pass GKPlayers to challengeComposeControllerWithMessage:players: instead"';
    {$endif}
  end;

type
  GKChallengeObsoletedUI = objccategory external (GKAchievement)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithPlayers_message_completionHandler (playerIDs: NSArray; message_: NSString; completionHandler: GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithPlayers:message:completionHandler:'; deprecated 'in 7_0, 8_0, "This is never invoked and its implementation does nothing, pass GKPlayers to challengeComposeControllerWithMessage:players: instead"';
    {$endif}
  end;
{$endif}
