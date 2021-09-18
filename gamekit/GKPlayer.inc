{ Parsed from GameKit.framework GKPlayer.h }

{ Types from GKPlayer_UI }
{$ifdef TYPES}

type
  GKPhotoSize = NSInteger;
type
  GKPhotoSizePtr = ^GKPhotoSize;

const
  GKPhotoSizeSmall = 0;
  GKPhotoSizeNormal = 1;

{$endif}


{$ifdef CALLBACKS}
type
  GKPlayerLoadPhotoForSizeCallback = reference to procedure (photo: UIImage; error: NSError); cblock; cdecl;
  GKPlayerLoadPlayersForIdentifiersCallback = reference to procedure (players: NSArray; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKPlayerPtr = ^GKPlayer;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKPlayerIDNoLongerAvailable: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKPlayer = objcclass external (GKBasePlayer)
  public
    function scopedIDsArePersistent: objcbool; message 'scopedIDsArePersistent'; { unavailable in watchos }
    function gamePlayerID: NSString; message 'gamePlayerID'; { unavailable in watchos }
    function teamPlayerID: NSString; message 'teamPlayerID'; { unavailable in watchos }
    function displayName: NSString; message 'displayName'; { available in 10_8, 6_0 }
    function alias: NSString; message 'alias';
    class function anonymousGuestPlayerWithIdentifier (guestIdentifier: NSString): id; message 'anonymousGuestPlayerWithIdentifier:'; { available in 10_11, 9_0 }
    function guestIdentifier: NSString; message 'guestIdentifier'; { available in 10_11, 9_0 }
    function isInvitable: objcbool; message 'isInvitable'; { available in ios , macos , tvos  }
  end;


type
  GKPlayer_UI = objccategory external name 'UI' (GKPlayer)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadPhotoForSize_withCompletionHandler (size: GKPhotoSize; completionHandler: GKPlayerLoadPhotoForSizeCallback); message 'loadPhotoForSize:withCompletionHandler:'; { available in 10_8, 5_0 }
    {$else}
    procedure loadPhotoForSize_withCompletionHandler (size: GKPhotoSize; completionHandler: GKPlayerLoadPhotoForSizeCallback); message 'loadPhotoForSize:withCompletionHandler:'; { available in 10_8, 5_0 }
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKPlayerDidChangeNotificationName: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKPlayer_Deprecated = objccategory external name 'Deprecated' (GKPlayer)
    function isFriend: objcbool; message 'isFriend'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "use -[GKLocalPlayer loadFriendPlayers...]"';
    function playerID: NSString; message 'playerID'; deprecated 'in  "use the teamPlayerID property to identify a player",,,';
    class procedure loadPlayersForIdentifiers_withCompletionHandler (identifiers: NSArray; completionHandler: GKPlayerLoadPlayersForIdentifiersCallback); message 'loadPlayersForIdentifiers:withCompletionHandler:'; deprecated 'in  "use GKLocalPlayer.loadFriendsWithIdentifiers to load a friend''s GKPlayer object.",,,, ';
  end;
{$endif}

