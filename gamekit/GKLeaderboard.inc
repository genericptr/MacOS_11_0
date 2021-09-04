{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKLeaderboard.h }

{ Types from GKLeaderboard_UI }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  GKLeaderboardLoadLeaderboardsWithIDsCallback = reference to procedure (leaderboards: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardLoadPreviousOccurrenceWithCompletionHandlerCallback = reference to procedure (leaderboard: GKLeaderboard; error: NSError); cblock; cdecl;
  GKLeaderboardSubmitScoreCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKLeaderboardLoadEntriesForPlayerScopeCallback = reference to procedure (localPlayerEntry: GKLeaderboardEntry; entries: NSArray; totalPlayerCount: NSInteger; error: NSError); cblock; cdecl;
  GKLeaderboardLoadEntriesForPlayersCallback = reference to procedure (localPlayerEntry: GKLeaderboardEntry; entries: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardLoadCategoriesWithCompletionHandlerCallback = reference to procedure (categories: NSArray; titles: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardSetDefaultLeaderboardCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKLeaderboardLoadScoresWithCompletionHandlerCallback = reference to procedure (scores: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardLoadLeaderboardsWithCompletionHandlerCallback = reference to procedure (leaderboards: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardLoadImageWithCompletionHandlerCallback = reference to procedure (image: UIImage; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKLeaderboardPtr = ^GKLeaderboard;
{$endif}

{$ifdef TYPES}
type
  GKLeaderboardTimeScope = NSInteger;
  GKLeaderboardTimeScopePtr = ^GKLeaderboardTimeScope;

const
  GKLeaderboardTimeScopeToday = 0;
  GKLeaderboardTimeScopeWeek = 1;
  GKLeaderboardTimeScopeAllTime = 2;

type
  GKLeaderboardPlayerScope = NSInteger;
  GKLeaderboardPlayerScopePtr = ^GKLeaderboardPlayerScope;

const
  GKLeaderboardPlayerScopeGlobal = 0;
  GKLeaderboardPlayerScopeFriendsOnly = 1;

type
  GKLeaderboardType = NSInteger;
  GKLeaderboardTypePtr = ^GKLeaderboardType;

const
  GKLeaderboardTypeClassic = 0;
  GKLeaderboardTypeRecurring = 1;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboard = objcclass external (NSObject)
  public
    function title: NSString; message 'title';
    function groupIdentifier: NSString; message 'groupIdentifier'; { available in 10_9, 6_0 }
    function baseLeaderboardID: NSString; message 'baseLeaderboardID'; { available in ios , macos , tvos , watchos  }
    function type_: GKLeaderboardType; message 'type'; { available in ios , macos , tvos , watchos  }
    function startDate: NSDate; message 'startDate'; { available in ios , macos , tvos , watchos  }
    function nextStartDate: NSDate; message 'nextStartDate'; { available in ios , macos , tvos , watchos  }
    function duration: NSTimeInterval; message 'duration'; { available in ios , macos , tvos , watchos  }
    class procedure loadLeaderboardsWithIDs_completionHandler (leaderboardIDs: NSArray; completionHandler: GKLeaderboardLoadLeaderboardsWithIDsCallback); message 'loadLeaderboardsWithIDs:completionHandler:';
    procedure loadPreviousOccurrenceWithCompletionHandler (completionHandler: GKLeaderboardLoadPreviousOccurrenceWithCompletionHandlerCallback); message 'loadPreviousOccurrenceWithCompletionHandler:'; { available in ios , macos , tvos , watchos  }
    class procedure submitScore_context_player_leaderboardIDs_completionHandler (score: NSInteger; context: NSUInteger; player: GKPlayer; leaderboardIDs: NSArray; completionHandler: GKLeaderboardSubmitScoreCallback); message 'submitScore:context:player:leaderboardIDs:completionHandler:'; { available in ios , macos , tvos , watchos  }
    procedure submitScore_context_player_completionHandler (score: NSInteger; context: NSUInteger; player: GKPlayer; completionHandler: GKLeaderboardSubmitScoreCallback); message 'submitScore:context:player:completionHandler:'; { available in ios , macos , tvos , watchos  }
    procedure loadEntriesForPlayerScope_timeScope_range_completionHandler (playerScope: GKLeaderboardPlayerScope; timeScope: GKLeaderboardTimeScope; range: NSRange; completionHandler: GKLeaderboardLoadEntriesForPlayerScopeCallback); message 'loadEntriesForPlayerScope:timeScope:range:completionHandler:'; { available in ios , macos , tvos , watchos  }
    procedure loadEntriesForPlayers_timeScope_completionHandler (players: NSArray; timeScope: GKLeaderboardTimeScope; completionHandler: GKLeaderboardLoadEntriesForPlayersCallback); message 'loadEntriesForPlayers:timeScope:completionHandler:'; { available in ios , macos , tvos , watchos  }
  end;


type
  GKLeaderboard_Deprecated = objccategory external name 'Deprecated' (GKLeaderboard)
    procedure setCategory(newValue: NSString); message 'setCategory:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use identifier instead"';
    function category: NSString; message 'category'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use identifier instead"';
    function initWithPlayerIDs (playerIDs: NSArray): id; message 'initWithPlayerIDs:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "Use initWithPlayers: instead"';
    class procedure loadCategoriesWithCompletionHandler (completionHandler: GKLeaderboardLoadCategoriesWithCompletionHandlerCallback); message 'loadCategoriesWithCompletionHandler:'; deprecated 'in 10_8, 10_9, 4_1, 6_0, "Use loadLeaderboardsWithIDs:completionHandler: instead"';
    class procedure setDefaultLeaderboard_withCompletionHandler (leaderboardIdentifier: NSString; completionHandler: GKLeaderboardSetDefaultLeaderboardCallback); message 'setDefaultLeaderboard:withCompletionHandler:'; deprecated 'in 10_8, 10_10, 5_0, 7_0,"Use setDefaultLeaderboardIdentifier:completionHandler: on GKLocalPlayer instead"';
    procedure setTimeScope(newValue: GKLeaderboardTimeScope); message 'setTimeScope:'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    function timeScope: GKLeaderboardTimeScope; message 'timeScope'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    procedure setPlayerScope(newValue: GKLeaderboardPlayerScope); message 'setPlayerScope:'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    function playerScope: GKLeaderboardPlayerScope; message 'playerScope'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    function identifier: NSString; message 'identifier'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    procedure setRange(newValue: NSRange); message 'setRange:'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    function range: NSRange; message 'range'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: instead.';
    function scores: NSArray; message 'scores'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: to obtain scores.';
    function maxRange: NSUInteger; message 'maxRange'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: method to obtain the size of the leaderboard.';
    function localPlayerScore: GKScore; message 'localPlayerScore'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: method to obtain scores.';
    function isLoading: objcbool; message 'isLoading'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler: method to obtain scores.';
    function init: id; message 'init'; deprecated 'Do not instantiate GKLeaderboard directly. Use class method loadLeaderboardsWithIDs:completionHandler: to get the leaderboards.';
    function initWithPlayers (players: NSArray): id; message 'initWithPlayers:'; deprecated 'Use instance method loadEntriesForPlayers:timeScope:completionHandler: instead.';
    procedure loadScoresWithCompletionHandler (completionHandler: GKLeaderboardLoadScoresWithCompletionHandlerCallback); message 'loadScoresWithCompletionHandler:'; deprecated 'Use loadEntriesForPlayerScope:timeScope:range:completionHandler:.';
    class procedure loadLeaderboardsWithCompletionHandler (completionHandler: GKLeaderboardLoadLeaderboardsWithCompletionHandlerCallback); message 'loadLeaderboardsWithCompletionHandler:'; deprecated 'Use class method loadLeaderboardsWithIDs:completionHandler:';
  end;

type
  GKLeaderboard_UI = objccategory external name 'UI' (GKLeaderboard)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadImageWithCompletionHandler (completionHandler: GKLeaderboardLoadImageWithCompletionHandlerCallback); message 'loadImageWithCompletionHandler:'; { available in 10_8, 7_0 }
    {$else}
    procedure loadImageWithCompletionHandler (completionHandler: GKLeaderboardLoadImageWithCompletionHandlerCallback); message 'loadImageWithCompletionHandler:'; { available in 10_8, 7_0 }
    {$endif}
  end;
{$endif}

