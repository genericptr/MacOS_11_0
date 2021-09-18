{ Parsed from GameKit.framework GKSavedGame.h }

{$ifdef CALLBACKS}
type
  GKSavedGameLoadDataWithCompletionHandlerCallback = reference to procedure (data: NSData; error: NSError); cblock; cdecl;
  GKSavedGameFetchSavedGamesWithCompletionHandlerCallback = reference to procedure (savedGames: NSArray; error: NSError); cblock; cdecl;
  GKSavedGameSaveGameDataCallback = reference to procedure (savedGame: GKSavedGame; error: NSError); cblock; cdecl;
  GKSavedGameDeleteSavedGamesWithNameCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKSavedGameResolveConflictingSavedGamesCallback = reference to procedure (savedGames: NSArray; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKSavedGamePtr = ^GKSavedGame;
{$endif}

{$ifdef CLASSES}

type
  GKSavedGame = objcclass external (NSObject, NSCopyingProtocol)
  public
    function name: NSString; message 'name'; { available in 10_10, 8_0 }
    function deviceName: NSString; message 'deviceName'; { available in 10_10, 8_0 }
    function modificationDate: NSDate; message 'modificationDate'; { available in 10_10, 8_0 }
    procedure loadDataWithCompletionHandler (handler: GKSavedGameLoadDataWithCompletionHandlerCallback); message 'loadDataWithCompletionHandler:'; { available in 10_10, 8_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$if  not defined(TARGET_OS_WATCH) and not defined(TARGET_OS_TV)}
{$ifdef CLASSES}

type
  GKLocalPlayer_GKSavedGame = objccategory external name 'GKSavedGame' (GKLocalPlayer)
    procedure fetchSavedGamesWithCompletionHandler (handler: GKSavedGameFetchSavedGamesWithCompletionHandlerCallback); message 'fetchSavedGamesWithCompletionHandler:'; { available in 10_10, 8_0 }
    procedure saveGameData_withName_completionHandler (data: NSData; name: NSString; handler: GKSavedGameSaveGameDataCallback); message 'saveGameData:withName:completionHandler:'; { available in 10_10, 8_0 }
    procedure deleteSavedGamesWithName_completionHandler (name: NSString; handler: GKSavedGameDeleteSavedGamesWithNameCallback); message 'deleteSavedGamesWithName:completionHandler:'; { available in 10_10, 8_0 }
    procedure resolveConflictingSavedGames_withData_completionHandler (conflictingSavedGames: NSArray; data: NSData; handler: GKSavedGameResolveConflictingSavedGamesCallback); message 'resolveConflictingSavedGames:withData:completionHandler:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$endif}
