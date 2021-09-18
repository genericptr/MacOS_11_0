{ Parsed from GameKit.framework GKBasePlayer.h }

{$ifdef TYPES}
type
  GKBasePlayerPtr = ^GKBasePlayer;
{$endif}

{$ifdef CLASSES}

type
  GKBasePlayer = objcclass external (NSObject)
  public
    function playerID: NSString; message 'playerID';
    function displayName: NSString; message 'displayName';
  end;
{$endif}

