{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKLeaderboardScore.h }

{$ifdef TYPES}
type
  GKLeaderboardScorePtr = ^GKLeaderboardScore;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboardScore = objcclass external (NSObject)
  public
    procedure setPlayer(newValue: GKPlayer); message 'setPlayer:';
    function player: GKPlayer; message 'player';
    procedure setValue(newValue: NSInteger); message 'setValue:';
    function value: NSInteger; message 'value';
    procedure setContext(newValue: NSUInteger); message 'setContext:';
    function context: NSUInteger; message 'context';
    procedure setLeaderboardID(newValue: NSString); message 'setLeaderboardID:';
    function leaderboardID: NSString; message 'leaderboardID';
  end;
{$endif}

