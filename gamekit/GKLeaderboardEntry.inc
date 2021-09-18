{ Parsed from GameKit.framework GKLeaderboardEntry.h }

{$ifdef TYPES}
type
  GKLeaderboardEntryPtr = ^GKLeaderboardEntry;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboardEntry = objcclass external (NSObject)
  public
    function player: GKPlayer; message 'player';
    function rank: NSInteger; message 'rank';
    function score: NSInteger; message 'score';
    function formattedScore: NSString; message 'formattedScore';
    function context: NSUInteger; message 'context';
    function date: NSDate; message 'date';
    function init: id; message 'init';
  end;
{$endif}

