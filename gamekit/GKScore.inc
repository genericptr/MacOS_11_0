{ Parsed from GameKit.framework GKScore.h }

{$ifdef CALLBACKS}
type
  GKScoreReportScoresCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKScoreReportScoreWithCompletionHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKScorePtr = ^GKScore;
{$endif}

{$ifdef CLASSES}

type
  GKScore = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    function initWithLeaderboardIdentifier (identifier: NSString): id; message 'initWithLeaderboardIdentifier:';
    function initWithLeaderboardIdentifier_player (identifier: NSString; player: GKPlayer): id; message 'initWithLeaderboardIdentifier:player:'; { available in macos 10.10, ios 8.0 } { available in 3_0 }
    procedure setValue(newValue: cint64); message 'setValue:';
    function value: cint64; message 'value';
    function formattedValue: NSString; message 'formattedValue';
    procedure setLeaderboardIdentifier(newValue: NSString); message 'setLeaderboardIdentifier:'; { available in macos 10.10, ios 7.0 } { available in 3_0 }
    function leaderboardIdentifier: NSString; message 'leaderboardIdentifier'; { available in macos 10.10, ios 7.0 } { available in 3_0 }
    procedure setContext(newValue: cuint64); message 'setContext:'; { available in macos 10.8, ios 5.0 } { available in 3_0 }
    function context: cuint64; message 'context'; { available in macos 10.8, ios 5.0 } { available in 3_0 }
    function date: NSDate; message 'date';
    function player: GKPlayer; message 'player'; { available in macos 10.10, ios 8.0 } { available in 3_0 }
    function rank: NSInteger; message 'rank';
    procedure setShouldSetDefaultLeaderboard(newValue: objcbool); message 'setShouldSetDefaultLeaderboard:'; { available in macos 10.8, ios 5.0 } { available in 3_0 }
    function shouldSetDefaultLeaderboard: objcbool; message 'shouldSetDefaultLeaderboard'; { available in macos 10.8, ios 5.0 } { available in 3_0 }
    class procedure reportScores_withCompletionHandler (scores: NSArray; completionHandler: GKScoreReportScoresCallback); message 'reportScores:withCompletionHandler:'; { available in macos 10.8, ios 6.0 } { available in 3_0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  GKScore_Deprecated = objccategory external name 'Deprecated' (GKScore)
    procedure reportScoreWithCompletionHandler (completionHandler: GKScoreReportScoreWithCompletionHandlerCallback); message 'reportScoreWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use +reportScores:withCompletionhandler: instead"';
    function initWithCategory (category: NSString): id; message 'initWithCategory:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use initWithLeaderboardIdentifier: instead"';
    procedure setCategory(newValue: NSString); message 'setCategory:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use leaderboardIdentifier instead"';
    function category: NSString; message 'category'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use leaderboardIdentifier instead"';
  end;

type
  GKScore_Obsoleted = objccategory external name 'Obsoleted' (GKScore)
    function initWithLeaderboardIdentifier_forPlayer (identifier: NSString; playerID: NSString): id; message 'initWithLeaderboardIdentifier:forPlayer:'; deprecated 'in 7_0, 8_0, "This is never invoked and its implementation does nothing, use initWithLeaderboardIdentifier:player:"';
    function playerID: NSString; message 'playerID'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "use player instead"';
  end;
{$endif}

