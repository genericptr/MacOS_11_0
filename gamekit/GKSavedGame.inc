{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKSavedGame.h }

{$ifdef CALLBACKS}
type
  GKSavedGameLoadDataWithCompletionHandlerCallback = reference to function (data: NSData; error: NSError): pointer; cblock; cdecl;
  GKSavedGameFetchSavedGamesWithCompletionHandlerCallback = reference to function (savedGames: NSArray; error: NSError): pointer; cblock; cdecl;
  GKSavedGameSaveGameDataCallback = reference to function (savedGame: GKSavedGame; error: NSError): pointer; cblock; cdecl;
  GKSavedGameDeleteSavedGamesWithNameCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKSavedGameResolveConflictingSavedGamesCallback = reference to function (savedGames: NSArray; error: NSError): pointer; cblock; cdecl;
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
