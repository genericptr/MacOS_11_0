{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKLocalPlayer.h }

{ Types from GKLocalPlayer }
{$ifdef TYPES}

{$endif}


{ Types from UI }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  GKLocalPlayerAuthenticateHandlerCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadRecentPlayersWithCompletionHandlerCallback = reference to function (recentPlayers: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadChallengableFriendsWithCompletionHandlerCallback = reference to function (challengableFriends: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerSetDefaultLeaderboardIdentifierCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadDefaultLeaderboardIdentifierWithCompletionHandlerCallback = reference to function (leaderboardIdentifier: NSString; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerFetchItemsForIdentityVerificationSignatureCallback = reference to function (publicKeyURL: NSURL; signature: NSData; salt: NSData; timestamp: cuint64; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerSetDefaultLeaderboardCategoryIDCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadDefaultLeaderboardCategoryIDWithCompletionHandlerCallback = reference to function (categoryID: NSString; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerAuthenticateWithCompletionHandlerCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadFriendPlayersWithCompletionHandlerCallback = reference to function (friendPlayers: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerGenerateIdentityVerificationSignatureWithCompletionHandlerCallback = reference to function (publicKeyUrl: NSURL; signature: NSData; salt: NSData; timestamp: cuint64; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadFriendsWithCompletionHandlerCallback = reference to function (friendIDs: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadFriendsAuthorizationStatusCallback = reference to function (authorizationStatus: GKFriendsAuthorizationStatus; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadFriendsCallback = reference to function (friends: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLocalPlayerLoadFriendsWithIdentifiersCallback = reference to function (friends: NSArray; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKLocalPlayerPtr = ^GKLocalPlayer;
  GKLocalPlayerListenerProtocolPtr = ^GKLocalPlayerListenerProtocol;
{$endif}

{$ifdef CLASSES}

type
  GKLocalPlayer = objcclass external (GKPlayer)
  public
    class function local: GKLocalPlayer; message 'local'; { unavailable in watchos }
    class function localPlayer: GKLocalPlayer; message 'localPlayer';
    function isAuthenticated: objcbool; message 'isAuthenticated';
    function isUnderage: objcbool; message 'isUnderage';
    function isMultiplayerGamingRestricted: objcbool; message 'isMultiplayerGamingRestricted'; { unavailable in watchos }
    function isPersonalizedCommunicationRestricted: objcbool; message 'isPersonalizedCommunicationRestricted'; { unavailable in watchos }
    {$if defined(TARGET_OS_WATCH)}
    procedure setAuthenticateHandler(newValue: GKLocalPlayerAuthenticateHandlerCallback); message 'setAuthenticateHandler:'; { available in 3_0 }
    function authenticateHandler: GKLocalPlayerAuthenticateHandlerCallback; message 'authenticateHandler'; { available in 3_0 }
    {$endif}
    procedure loadRecentPlayersWithCompletionHandler (completionHandler: GKLocalPlayerLoadRecentPlayersWithCompletionHandlerCallback); message 'loadRecentPlayersWithCompletionHandler:'; { available in 10_11, 10_0 }
    procedure loadChallengableFriendsWithCompletionHandler (completionHandler: GKLocalPlayerLoadChallengableFriendsWithCompletionHandlerCallback); message 'loadChallengableFriendsWithCompletionHandler:';
    procedure setDefaultLeaderboardIdentifier_completionHandler (leaderboardIdentifier: NSString; completionHandler: GKLocalPlayerSetDefaultLeaderboardIdentifierCallback); message 'setDefaultLeaderboardIdentifier:completionHandler:'; { available in 10_10, 7_0 }
    procedure loadDefaultLeaderboardIdentifierWithCompletionHandler (completionHandler: GKLocalPlayerLoadDefaultLeaderboardIdentifierWithCompletionHandlerCallback); message 'loadDefaultLeaderboardIdentifierWithCompletionHandler:'; { available in 10_10, 7_0 }
    procedure fetchItemsForIdentityVerificationSignature (completionHandler: GKLocalPlayerFetchItemsForIdentityVerificationSignatureCallback); message 'fetchItemsForIdentityVerificationSignature:'; { available in ios , macos , tvos , watchos  }
  end;
{$endif}

{$if defined(TARGET_OS_WATCH)}
{$ifdef PROTOCOLS}

type
  GKLocalPlayerListenerProtocol = objcprotocol external name 'GKLocalPlayerListener' (GKChallengeListenerProtocol, GKInviteEventListenerProtocol, GKTurnBasedEventListenerProtocol)
  end;
{$endif}

{$elseif defined(TARGET_OS_TV)}
{$ifdef PROTOCOLS}

type
  GKLocalPlayerListenerProtocol = objcprotocol external name 'GKLocalPlayerListener' (GKChallengeListenerProtocol, GKInviteEventListenerProtocol, GKTurnBasedEventListenerProtocol)
  end;
{$endif}

{$else}
{$ifdef PROTOCOLS}

type
  GKLocalPlayerListenerProtocol = objcprotocol external name 'GKLocalPlayerListener' (GKChallengeListenerProtocol, GKInviteEventListenerProtocol, GKTurnBasedEventListenerProtocol, GKSavedGameListenerProtocol)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKLocalPlayerEvents = objccategory external (GKLocalPlayer)
    procedure registerListener (listener: id); message 'registerListener:'; { available in 10_10, 7_0 }
    procedure unregisterListener (listener: id); message 'unregisterListener:'; { available in 10_10, 7_0 }
    procedure unregisterAllListeners; message 'unregisterAllListeners'; { available in 10_10, 7_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKPlayerAuthenticationDidChangeNotificationName: NSNotificationName { available in 10_8, 4_1 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKLocalPlayer_Deprecated = objccategory external name 'Deprecated' (GKLocalPlayer)
    procedure setDefaultLeaderboardCategoryID_completionHandler (categoryID: NSString; completionHandler: GKLocalPlayerSetDefaultLeaderboardCategoryIDCallback); message 'setDefaultLeaderboardCategoryID:completionHandler:'; deprecated 'in 10_8, 10_10, 6_0, 7_0,"Use setDefaultLeaderboardIdentifier:completionHandler: instead"';
    procedure loadDefaultLeaderboardCategoryIDWithCompletionHandler (completionHandler: GKLocalPlayerLoadDefaultLeaderboardCategoryIDWithCompletionHandlerCallback); message 'loadDefaultLeaderboardCategoryIDWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 6_0, 7_0,"Use loadDefaultLeaderboardIdentifierWithCompletionHandler: instead"';
    procedure authenticateWithCompletionHandler (completionHandler: GKLocalPlayerAuthenticateWithCompletionHandlerCallback); message 'authenticateWithCompletionHandler:'; deprecated 'in 10_8, 10_8, 4_1, 6_0, "Set the authenticateHandler instead"';
    procedure loadFriendPlayersWithCompletionHandler (completionHandler: GKLocalPlayerLoadFriendPlayersWithCompletionHandlerCallback); message 'loadFriendPlayersWithCompletionHandler:'; deprecated 'in 10_10, 10_11, 8_0, 10_0';
    procedure generateIdentityVerificationSignatureWithCompletionHandler (completionHandler: GKLocalPlayerGenerateIdentityVerificationSignatureWithCompletionHandlerCallback); message 'generateIdentityVerificationSignatureWithCompletionHandler:'; deprecated 'API deprecated. Use fetchItemsForIdentityVerificationSignature: and the teamPlayerID value to verify a user identity.';
  end;

type
  GKLocalPlayer_Obsoleted = objccategory external name 'Obsoleted' (GKLocalPlayer)
    procedure loadFriendsWithCompletionHandler (completionHandler: GKLocalPlayerLoadFriendsWithCompletionHandlerCallback); message 'loadFriendsWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "This is never invoked and its implementation does nothing, use loadRecentPlayersWithCompletionHandler: instead"';
    function friends: NSArray; message 'friends'; deprecated 'in 10_8, 10_10, 4_1, 8_0, " This property is obsolete, Use loadFriendPlayersWithCompletionHandler: instead"';
  end;
{$endif}

{$ifdef TYPES}
type
  GKFriendsAuthorizationStatus = NSInteger;
  GKFriendsAuthorizationStatusPtr = ^GKFriendsAuthorizationStatus;

const
  GKFriendsAuthorizationStatusNotDetermined = 0;
  GKFriendsAuthorizationStatusRestricted = 1;
  GKFriendsAuthorizationStatusDenied = 2;
  GKFriendsAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  FriendsList = objccategory external (GKLocalPlayer)
    procedure loadFriendsAuthorizationStatus (completionHandler: GKLocalPlayerLoadFriendsAuthorizationStatusCallback); message 'loadFriendsAuthorizationStatus:'; { available in ios , macos , tvos , watchos  }
    procedure loadFriends (completionHandler: GKLocalPlayerLoadFriendsCallback); message 'loadFriends:'; { available in ios , macos , tvos , watchos  }
    procedure loadFriendsWithIdentifiers_completionHandler (identifiers: NSArray; completionHandler: GKLocalPlayerLoadFriendsWithIdentifiersCallback); message 'loadFriendsWithIdentifiers:completionHandler:'; { available in ios , macos , tvos , watchos  }
  end;

type
  UI = objccategory external (GKLocalPlayer)
    {$if defined(TARGET_OS_WATCH)}
    {$elseif defined(TARGET_OS_IPHONE)}
    procedure setAuthenticateHandler(newValue: GKLocalPlayerAuthenticateHandlerCallback); message 'setAuthenticateHandler:'; { available in 6_0 }
    function authenticateHandler: GKLocalPlayerAuthenticateHandlerCallback; message 'authenticateHandler'; { available in 6_0 }
    {$else}
    procedure setAuthenticateHandler_(newValue: GKLocalPlayerAuthenticateHandlerCallback); message 'setAuthenticateHandler:'; { available in 10_9 }
    function authenticateHandler_: GKLocalPlayerAuthenticateHandlerCallback; message 'authenticateHandler'; { available in 10_9 }
    {$endif}
  end;
{$endif}

