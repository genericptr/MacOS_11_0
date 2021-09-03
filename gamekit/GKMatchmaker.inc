{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKMatchmaker.h }

{ Types from GKMatchRequest }
{$ifdef TYPES}

type
  GKMatchType = NSUInteger;
type
  GKMatchTypePtr = ^GKMatchType;

const
  GKMatchTypePeerToPeer = 0;
  GKMatchTypeHosted = 1;
  GKMatchTypeTurnBased = 2;
{$endif}


{$ifdef CALLBACKS}
type
  GKMatchmakerRecipientResponseHandlerCallback = reference to function (player: GKPlayer; response: GKInviteRecipientResponse): pointer; cblock; cdecl;
  GKMatchmakerInviteeResponseHandlerCallback = reference to function (playerID: NSString; response: GKInviteeResponse): pointer; cblock; cdecl;
  GKMatchmakerMatchForInviteCallback = reference to function (match: GKMatch; error: NSError): pointer; cblock; cdecl;
  GKMatchmakerFindMatchForRequestCallback = reference to function (match: GKMatch; error: NSError): pointer; cblock; cdecl;
  GKMatchmakerFindPlayersForHostedRequestCallback = reference to function (players: NSArray; error: NSError): pointer; cblock; cdecl;
  GKMatchmakerAddPlayersToMatchCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKMatchmakerQueryPlayerGroupActivityCallback = reference to function (activity: NSInteger; error: NSError): pointer; cblock; cdecl;
  GKMatchmakerQueryActivityWithCompletionHandlerCallback = reference to function (activity: NSInteger; error: NSError): pointer; cblock; cdecl;
  GKMatchmakerStartBrowsingForNearbyPlayersWithHandlerCallback = reference to function (player: GKPlayer; reachable: objcbool): pointer; cblock; cdecl;
  GKMatchmakerInviteHandlerCallback = reference to function (acceptedInvite: GKInvite; playerIDsToInvite: NSArray): pointer; cblock; cdecl;
  GKMatchmakerStartBrowsingForNearbyPlayersWithReachableHandlerCallback = reference to function (playerID: NSString; reachable: objcbool): pointer; cblock; cdecl;
  GKMatchmakerFindPlayersForHostedMatchRequestCallback = reference to function (playerIDs: NSArray; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKMatchRequestPtr = ^GKMatchRequest;
  GKInvitePtr = ^GKInvite;
  GKMatchmakerPtr = ^GKMatchmaker;
  GKInviteEventListenerProtocolPtr = ^GKInviteEventListenerProtocol;
{$endif}

{$ifdef TYPES}
type
  GKInviteRecipientResponse = NSInteger;
  GKInviteRecipientResponsePtr = ^GKInviteRecipientResponse;

const
  GKInviteRecipientResponseAccepted = 0;
  GKInviteRecipientResponseDeclined = 1;
  GKInviteRecipientResponseFailed = 2;
  GKInviteRecipientResponseIncompatible = 3;
  GKInviteRecipientResponseUnableToConnect = 4;
  GKInviteRecipientResponseNoAnswer = 5;
  GKInviteeResponseAccepted = GKInviteRecipientResponseAccepted;
  GKInviteeResponseDeclined = GKInviteRecipientResponseDeclined;
  GKInviteeResponseFailed = GKInviteRecipientResponseFailed;
  GKInviteeResponseIncompatible = GKInviteRecipientResponseIncompatible;
  GKInviteeResponseUnableToConnect = GKInviteRecipientResponseUnableToConnect;
  GKInviteeResponseNoAnswer = GKInviteRecipientResponseNoAnswer;

type
  GKInviteeResponse = GKInviteRecipientResponse { available in 3_0 };
  GKInviteeResponsePtr = ^GKInviteeResponse { available in 3_0 };
{$endif}

{$ifdef CLASSES}

type
  GKMatchRequest = objcclass external (NSObject)
  public
    procedure setMinPlayers(newValue: NSUInteger); message 'setMinPlayers:';
    function minPlayers: NSUInteger; message 'minPlayers';
    procedure setMaxPlayers(newValue: NSUInteger); message 'setMaxPlayers:';
    function maxPlayers: NSUInteger; message 'maxPlayers';
    procedure setPlayerGroup(newValue: NSUInteger); message 'setPlayerGroup:';
    function playerGroup: NSUInteger; message 'playerGroup';
    procedure setPlayerAttributes(newValue: cuint32); message 'setPlayerAttributes:';
    function playerAttributes: cuint32; message 'playerAttributes';
    procedure setRecipients(newValue: NSArray); message 'setRecipients:'; { available in 10_10, 8_0 }
    function recipients: NSArray; message 'recipients'; { available in 10_10, 8_0 }
    procedure setInviteMessage(newValue: NSString); message 'setInviteMessage:'; { available in 10_8, 6_0 }
    function inviteMessage: NSString; message 'inviteMessage'; { available in 10_8, 6_0 }
    procedure setDefaultNumberOfPlayers(newValue: NSUInteger); message 'setDefaultNumberOfPlayers:'; { available in 10_8, 6_0 }
    function defaultNumberOfPlayers: NSUInteger; message 'defaultNumberOfPlayers'; { available in 10_8, 6_0 }
    procedure setRestrictToAutomatch(newValue: objcbool); message 'setRestrictToAutomatch:'; deprecated 'Set the matchmakingMode of GKMatchmakerViewController instead.';
    function restrictToAutomatch: objcbool; message 'restrictToAutomatch'; deprecated 'Set the matchmakingMode of GKMatchmakerViewController instead.';
    procedure setRecipientResponseHandler(newValue: GKMatchmakerRecipientResponseHandlerCallback); message 'setRecipientResponseHandler:'; { available in 10_10, 8_0 }
    function recipientResponseHandler: GKMatchmakerRecipientResponseHandlerCallback; message 'recipientResponseHandler'; { available in 10_10, 8_0 }
    procedure setInviteeResponseHandler(newValue: GKMatchmakerInviteeResponseHandlerCallback); message 'setInviteeResponseHandler:'; deprecated 'in 10_9, 10_10, 6_0, 8_0, "use recipientResponseHandler"';
    function inviteeResponseHandler: GKMatchmakerInviteeResponseHandlerCallback; message 'inviteeResponseHandler'; deprecated 'in 10_9, 10_10, 6_0, 8_0, "use recipientResponseHandler"';
    class function maxPlayersAllowedForMatchOfType (matchType: GKMatchType): NSUInteger; message 'maxPlayersAllowedForMatchOfType:'; { available in 10_9, 6_0 }
    procedure setPlayersToInvite(newValue: NSArray); message 'setPlayersToInvite:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "This property is obsolete, use recipients instead"';
    function playersToInvite: NSArray; message 'playersToInvite'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "This property is obsolete, use recipients instead"';
  end;

type
  GKInvite = objcclass external (NSObject)
  public
    function sender: GKPlayer; message 'sender'; { available in 10_10, 8_0 }
    function isHosted: objcbool; message 'isHosted';
    function playerGroup: NSUInteger; message 'playerGroup'; { available in 10_9, 6_0 }
    function playerAttributes: cuint32; message 'playerAttributes'; { available in 10_9, 6_0 }
    function inviter: NSString; message 'inviter'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "This property is obsolete, use sender instead"';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKInviteEventListenerProtocol = objcprotocol external name 'GKInviteEventListener'
  optional
    procedure player_didAcceptInvite (player: GKPlayer; invite: GKInvite); message 'player:didAcceptInvite:'; { available in 10_10, 7_0 }
    procedure player_didRequestMatchWithRecipients (player: GKPlayer; recipientPlayers: NSArray); message 'player:didRequestMatchWithRecipients:'; { available in 10_10, 8_0 }
    procedure player_didRequestMatchWithPlayers (player: GKPlayer; playerIDsToInvite: NSArray); message 'player:didRequestMatchWithPlayers:'; deprecated 'in 7_0, 8_0, "This method is obsolete.  It will never be invoked its implementation does nothing, use player:didRequestMatchWithRecipients:"';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKMatchmaker = objcclass external (NSObject)
  public
    class function sharedMatchmaker: GKMatchmaker; message 'sharedMatchmaker';
    procedure matchForInvite_completionHandler (invite: GKInvite; completionHandler: GKMatchmakerMatchForInviteCallback); message 'matchForInvite:completionHandler:'; { available in 10_9, 6_0 }
    procedure findMatchForRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: GKMatchmakerFindMatchForRequestCallback); message 'findMatchForRequest:withCompletionHandler:';
    procedure findPlayersForHostedRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: GKMatchmakerFindPlayersForHostedRequestCallback); message 'findPlayersForHostedRequest:withCompletionHandler:'; { available in 10_10, 8_0 }
    procedure addPlayersToMatch_matchRequest_completionHandler (match: GKMatch; matchRequest: GKMatchRequest; completionHandler: GKMatchmakerAddPlayersToMatchCallback); message 'addPlayersToMatch:matchRequest:completionHandler:';
    procedure cancel; message 'cancel';
    procedure cancelPendingInviteToPlayer (player: GKPlayer); message 'cancelPendingInviteToPlayer:'; { available in 10_10, 8_0 }
    procedure finishMatchmakingForMatch (match: GKMatch); message 'finishMatchmakingForMatch:'; { available in 10_9, 6_0 }
    procedure queryPlayerGroupActivity_withCompletionHandler (playerGroup: NSUInteger; completionHandler: GKMatchmakerQueryPlayerGroupActivityCallback); message 'queryPlayerGroupActivity:withCompletionHandler:';
    procedure queryActivityWithCompletionHandler (completionHandler: GKMatchmakerQueryActivityWithCompletionHandlerCallback); message 'queryActivityWithCompletionHandler:';
    procedure startBrowsingForNearbyPlayersWithHandler (reachableHandler: GKMatchmakerStartBrowsingForNearbyPlayersWithHandlerCallback); message 'startBrowsingForNearbyPlayersWithHandler:'; { available in 10_10, 8_0 }
    procedure stopBrowsingForNearbyPlayers; message 'stopBrowsingForNearbyPlayers'; { available in 10_9, 6_0 }
  end;


type
  GKDeprecated = objccategory external (GKMatchmaker)
    procedure setInviteHandler(newValue: GKMatchmakerInviteHandlerCallback); message 'setInviteHandler:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use registerListener on GKLocalPlayer to register an object that implements the GKInviteEventListenerProtocol instead"';
    function inviteHandler: GKMatchmakerInviteHandlerCallback; message 'inviteHandler'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use registerListener on GKLocalPlayer to register an object that implements the GKInviteEventListenerProtocol instead"';
  end;

type
  GKMatchmaker_Obsoleted = objccategory external name 'Obsoleted' (GKMatchmaker)
    procedure startBrowsingForNearbyPlayersWithReachableHandler (reachableHandler: GKMatchmakerStartBrowsingForNearbyPlayersWithReachableHandlerCallback); message 'startBrowsingForNearbyPlayersWithReachableHandler:'; deprecated 'in 10_9, 10_10, 6_0, 8_0, "This is never invoked and its implementation does nothing, Use startBrowsingForNearbyPlayersWithHandler: instead"';
    procedure cancelInviteToPlayer (playerID: NSString); message 'cancelInviteToPlayer:'; deprecated 'in 10_9, 10_10, 6_0, 8_0, "This is never invoked and its implementation does nothing, use cancelPendingInviteToPlayer:"';
    procedure findPlayersForHostedMatchRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: GKMatchmakerFindPlayersForHostedMatchRequestCallback); message 'findPlayersForHostedMatchRequest:withCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "This is never invoked and its implementation does nothing, use findPlayersForHostedRequest:"';
  end;
{$endif}

