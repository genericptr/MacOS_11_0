{ Parsed from GameKit.framework GKSavedGameListener.h }

{$ifdef TYPES}
type
  GKSavedGameListenerProtocolPtr = ^GKSavedGameListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKSavedGameListenerProtocol = objcprotocol external name 'GKSavedGameListener' (NSObjectProtocol)
  optional
    procedure player_didModifySavedGame (player: GKPlayer; savedGame: GKSavedGame); message 'player:didModifySavedGame:'; { available in macos 10.10, ios 8.0 }
    procedure player_hasConflictingSavedGames (player: GKPlayer; savedGames: NSArray); message 'player:hasConflictingSavedGames:'; { available in macos 10.10, ios 8.0 }
  end;
{$endif}

