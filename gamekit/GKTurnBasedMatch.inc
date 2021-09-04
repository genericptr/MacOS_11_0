{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKTurnBasedMatch.h }

{$ifdef CALLBACKS}
type
  GKTurnBasedMatchFindMatchForRequestCallback = reference to procedure (match: GKTurnBasedMatch; error: NSError); cblock; cdecl;
  GKTurnBasedMatchLoadMatchesWithCompletionHandlerCallback = reference to procedure (matches: NSArray; error: NSError); cblock; cdecl;
  GKTurnBasedMatchLoadMatchWithIDCallback = reference to procedure (match: GKTurnBasedMatch; error: NSError); cblock; cdecl;
  GKTurnBasedMatchRematchWithCompletionHandlerCallback = reference to procedure (match: GKTurnBasedMatch; error: NSError); cblock; cdecl;
  GKTurnBasedMatchAcceptInviteWithCompletionHandlerCallback = reference to procedure (match: GKTurnBasedMatch; error: NSError); cblock; cdecl;
  GKTurnBasedMatchDeclineInviteWithCompletionHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchRemoveWithCompletionHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchLoadMatchDataWithCompletionHandlerCallback = reference to procedure (matchData: NSData; error: NSError); cblock; cdecl;
  GKTurnBasedMatchEndTurnWithNextParticipantsCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchParticipantQuitInTurnWithOutcomeCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchParticipantQuitOutOfTurnWithOutcomeCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchEndMatchInTurnWithMatchDataCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchSaveCurrentTurnWithMatchDataCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchSaveMergedMatchDataCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchSendExchangeToParticipantsCallback = reference to procedure (exchange: GKTurnBasedExchange; error: NSError); cblock; cdecl;
  GKTurnBasedMatchSendReminderToParticipantsCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchEndTurnWithNextParticipantCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchCancelWithLocalizableMessageKeyCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKTurnBasedMatchReplyWithLocalizableMessageKeyCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKTurnBasedParticipantPtr = ^GKTurnBasedParticipant;
  GKTurnBasedMatchPtr = ^GKTurnBasedMatch;
  GKTurnBasedExchangePtr = ^GKTurnBasedExchange;
  GKTurnBasedEventHandlerPtr = ^GKTurnBasedEventHandler;
  GKTurnBasedEventListenerProtocolPtr = ^GKTurnBasedEventListenerProtocol;
  GKTurnBasedEventHandlerDelegateProtocolPtr = ^GKTurnBasedEventHandlerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  GKTurnBasedMatchStatus = NSInteger;
  GKTurnBasedMatchStatusPtr = ^GKTurnBasedMatchStatus;

const
  GKTurnBasedMatchStatusUnknown = 0;
  GKTurnBasedMatchStatusOpen = 1;
  GKTurnBasedMatchStatusEnded = 2;
  GKTurnBasedMatchStatusMatching = 3;

type
  GKTurnBasedParticipantStatus = NSInteger;
  GKTurnBasedParticipantStatusPtr = ^GKTurnBasedParticipantStatus;

const
  GKTurnBasedParticipantStatusUnknown = 0;
  GKTurnBasedParticipantStatusInvited = 1;
  GKTurnBasedParticipantStatusDeclined = 2;
  GKTurnBasedParticipantStatusMatching = 3;
  GKTurnBasedParticipantStatusActive = 4;
  GKTurnBasedParticipantStatusDone = 5;

type
  GKTurnBasedMatchOutcome = NSInteger;
  GKTurnBasedMatchOutcomePtr = ^GKTurnBasedMatchOutcome;

const
  GKTurnBasedMatchOutcomeNone = 0;
  GKTurnBasedMatchOutcomeQuit = 1;
  GKTurnBasedMatchOutcomeWon = 2;
  GKTurnBasedMatchOutcomeLost = 3;
  GKTurnBasedMatchOutcomeTied = 4;
  GKTurnBasedMatchOutcomeTimeExpired = 5;
  GKTurnBasedMatchOutcomeFirst = 6;
  GKTurnBasedMatchOutcomeSecond = 7;
  GKTurnBasedMatchOutcomeThird = 8;
  GKTurnBasedMatchOutcomeFourth = 9;
  GKTurnBasedMatchOutcomeCustomRange = $00FF0000;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedParticipant = objcclass external (NSObject)
  public
    function player: GKPlayer; message 'player'; { available in 10_10, 8_0 }
    function lastTurnDate: NSDate; message 'lastTurnDate';
    function status: GKTurnBasedParticipantStatus; message 'status';
    procedure setMatchOutcome(newValue: GKTurnBasedMatchOutcome); message 'setMatchOutcome:';
    function matchOutcome: GKTurnBasedMatchOutcome; message 'matchOutcome';
    function timeoutDate: NSDate; message 'timeoutDate'; { available in 10_8, 6_0 }
  end;


type
  GKTurnBasedParticipant_Obsoleted = objccategory external name 'Obsoleted' (GKTurnBasedParticipant)
    function playerID: NSString; message 'playerID'; deprecated 'in 10_8, 10_10, 5_0, 8_0, "use player"';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKTurnBasedEventListenerProtocol = objcprotocol external name 'GKTurnBasedEventListener'
  optional
    procedure player_didRequestMatchWithOtherPlayers (player: GKPlayer; playersToInvite: NSArray); message 'player:didRequestMatchWithOtherPlayers:'; { unavailable in watchos }
    procedure player_receivedTurnEventForMatch_didBecomeActive (player: GKPlayer; match: GKTurnBasedMatch; didBecomeActive: objcbool); message 'player:receivedTurnEventForMatch:didBecomeActive:'; { available in 10_10, 7_0 }
    procedure player_matchEnded (player: GKPlayer; match: GKTurnBasedMatch); message 'player:matchEnded:';
    procedure player_receivedExchangeRequest_forMatch (player: GKPlayer; exchange: GKTurnBasedExchange; match: GKTurnBasedMatch); message 'player:receivedExchangeRequest:forMatch:'; { available in 10_10, 7_0 }
    procedure player_receivedExchangeCancellation_forMatch (player: GKPlayer; exchange: GKTurnBasedExchange; match: GKTurnBasedMatch); message 'player:receivedExchangeCancellation:forMatch:'; { available in 10_10, 7_0 }
    procedure player_receivedExchangeReplies_forCompletedExchange_forMatch (player: GKPlayer; replies: NSArray; exchange: GKTurnBasedExchange; match: GKTurnBasedMatch); message 'player:receivedExchangeReplies:forCompletedExchange:forMatch:'; { available in 10_10, 7_0 }
    procedure player_wantsToQuitMatch (player: GKPlayer; match: GKTurnBasedMatch); message 'player:wantsToQuitMatch:'; { available in 10_11, 9_0 }
    procedure player_didRequestMatchWithPlayers (player: GKPlayer; playerIDsToInvite: NSArray); message 'player:didRequestMatchWithPlayers:'; deprecated 'in 7_0, 8_0, "use didRequestMatchWithOtherPlayers"';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKTurnTimeoutDefault: NSTimeInterval { available in 10_9, 6_0 }; cvar; external;
  GKTurnTimeoutNone: NSTimeInterval { available in 10_9, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedMatch = objcclass external (NSObject)
  public
    function matchID: NSString; message 'matchID';
    function creationDate: NSDate; message 'creationDate';
    function participants: NSArray; message 'participants';
    function status: GKTurnBasedMatchStatus; message 'status';
    function currentParticipant: GKTurnBasedParticipant; message 'currentParticipant';
    function matchData: NSData; message 'matchData';
    procedure setLocalizableMessageWithKey_arguments (key: NSString; arguments: NSArray); message 'setLocalizableMessageWithKey:arguments:'; { available in 10_10, 7_0 }
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    function matchDataMaximumSize: NSUInteger; message 'matchDataMaximumSize'; { available in 10_8, 6_0 }
    function exchanges: NSArray; message 'exchanges'; { available in 10_10, 7_0 }
    function activeExchanges: NSArray; message 'activeExchanges'; { available in 10_10, 7_0 }
    function completedExchanges: NSArray; message 'completedExchanges'; { available in 10_10, 7_0 }
    function exchangeDataMaximumSize: NSUInteger; message 'exchangeDataMaximumSize'; { available in 10_10, 7_0 }
    function exchangeMaxInitiatedExchangesPerPlayer: NSUInteger; message 'exchangeMaxInitiatedExchangesPerPlayer'; { available in 10_10, 7_0 }
    class procedure findMatchForRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: GKTurnBasedMatchFindMatchForRequestCallback); message 'findMatchForRequest:withCompletionHandler:';
    class procedure loadMatchesWithCompletionHandler (completionHandler: GKTurnBasedMatchLoadMatchesWithCompletionHandlerCallback); message 'loadMatchesWithCompletionHandler:';
    class procedure loadMatchWithID_withCompletionHandler (matchID_: NSString; completionHandler: GKTurnBasedMatchLoadMatchWithIDCallback); message 'loadMatchWithID:withCompletionHandler:'; { available in 10_8, 5_0 }
    procedure rematchWithCompletionHandler (completionHandler: GKTurnBasedMatchRematchWithCompletionHandlerCallback); message 'rematchWithCompletionHandler:'; { available in 10_9, 6_0 }
    procedure acceptInviteWithCompletionHandler (completionHandler: GKTurnBasedMatchAcceptInviteWithCompletionHandlerCallback); message 'acceptInviteWithCompletionHandler:'; { available in 10_8, 5_0 }
    procedure declineInviteWithCompletionHandler (completionHandler: GKTurnBasedMatchDeclineInviteWithCompletionHandlerCallback); message 'declineInviteWithCompletionHandler:'; { available in 10_8, 5_0 }
    procedure removeWithCompletionHandler (completionHandler: GKTurnBasedMatchRemoveWithCompletionHandlerCallback); message 'removeWithCompletionHandler:';
    procedure loadMatchDataWithCompletionHandler (completionHandler: GKTurnBasedMatchLoadMatchDataWithCompletionHandlerCallback); message 'loadMatchDataWithCompletionHandler:';
    procedure endTurnWithNextParticipants_turnTimeout_matchData_completionHandler (nextParticipants: NSArray; timeout: NSTimeInterval; matchData_: NSData; completionHandler: GKTurnBasedMatchEndTurnWithNextParticipantsCallback); message 'endTurnWithNextParticipants:turnTimeout:matchData:completionHandler:'; { available in 10_9, 6_0 }
    procedure participantQuitInTurnWithOutcome_nextParticipants_turnTimeout_matchData_completionHandler (matchOutcome: GKTurnBasedMatchOutcome; nextParticipants: NSArray; timeout: NSTimeInterval; matchData_: NSData; completionHandler: GKTurnBasedMatchParticipantQuitInTurnWithOutcomeCallback); message 'participantQuitInTurnWithOutcome:nextParticipants:turnTimeout:matchData:completionHandler:'; { available in 10_9, 6_0 }
    procedure participantQuitOutOfTurnWithOutcome_withCompletionHandler (matchOutcome: GKTurnBasedMatchOutcome; completionHandler: GKTurnBasedMatchParticipantQuitOutOfTurnWithOutcomeCallback); message 'participantQuitOutOfTurnWithOutcome:withCompletionHandler:';
    procedure endMatchInTurnWithMatchData_completionHandler (matchData_: NSData; completionHandler: GKTurnBasedMatchEndMatchInTurnWithMatchDataCallback); message 'endMatchInTurnWithMatchData:completionHandler:';
    procedure endMatchInTurnWithMatchData_scores_achievements_completionHandler (matchData_: NSData; scores: NSArray; achievements: NSArray; completionHandler: GKTurnBasedMatchEndMatchInTurnWithMatchDataCallback); message 'endMatchInTurnWithMatchData:scores:achievements:completionHandler:'; deprecated 'in 10_10, 11_0, 6_0, 14_0, "pass GKLeaderboardScore to endMatchInTurnWithMatchData:scores:completionHandler instead"';
    procedure endMatchInTurnWithMatchData_leaderboardScores_achievements_completionHandler (matchData_: NSData; scores: NSArray; achievements: NSArray; completionHandler: GKTurnBasedMatchEndMatchInTurnWithMatchDataCallback); message 'endMatchInTurnWithMatchData:leaderboardScores:achievements:completionHandler:'; { available in 11_0, 14_0 }
    procedure saveCurrentTurnWithMatchData_completionHandler (matchData_: NSData; completionHandler: GKTurnBasedMatchSaveCurrentTurnWithMatchDataCallback); message 'saveCurrentTurnWithMatchData:completionHandler:'; { available in 10_8, 6_0 }
    procedure saveMergedMatchData_withResolvedExchanges_completionHandler (matchData_: NSData; exchanges_: NSArray; completionHandler: GKTurnBasedMatchSaveMergedMatchDataCallback); message 'saveMergedMatchData:withResolvedExchanges:completionHandler:'; { available in 10_10, 7_0 }
    procedure sendExchangeToParticipants_data_localizableMessageKey_arguments_timeout_completionHandler (participants_: NSArray; data: NSData; key: NSString; arguments: NSArray; timeout: NSTimeInterval; completionHandler: GKTurnBasedMatchSendExchangeToParticipantsCallback); message 'sendExchangeToParticipants:data:localizableMessageKey:arguments:timeout:completionHandler:'; { available in 10_10, 7_0 }
    procedure sendReminderToParticipants_localizableMessageKey_arguments_completionHandler (participants_: NSArray; key: NSString; arguments: NSArray; completionHandler: GKTurnBasedMatchSendReminderToParticipantsCallback); message 'sendReminderToParticipants:localizableMessageKey:arguments:completionHandler:'; { available in 10_10, 7_0 }
    procedure endTurnWithNextParticipant_matchData_completionHandler (nextParticipant: GKTurnBasedParticipant; matchData_: NSData; completionHandler: GKTurnBasedMatchEndTurnWithNextParticipantCallback); message 'endTurnWithNextParticipant:matchData:completionHandler:'; deprecated 'in 10_8, 10_9, 5_0, 6_0, "Use endTurnWithNextParticipants:... instead"';
    procedure participantQuitInTurnWithOutcome_nextParticipant_matchData_completionHandler (matchOutcome: GKTurnBasedMatchOutcome; nextParticipant: GKTurnBasedParticipant; matchData_: NSData; completionHandler: GKTurnBasedMatchParticipantQuitInTurnWithOutcomeCallback); message 'participantQuitInTurnWithOutcome:nextParticipant:matchData:completionHandler:'; deprecated 'in 10_8, 10_9, 5_0, 6_0, "Use participantQuitInTurnWithOutcome:nextParticipants:turnTimeout:... instead"';
  end;
{$endif}

{$ifdef TYPES}
type
  GKTurnBasedExchangeStatus = cint8;
  GKTurnBasedExchangeStatusPtr = ^GKTurnBasedExchangeStatus;

const
  GKTurnBasedExchangeStatusUnknown = 0;
  GKTurnBasedExchangeStatusActive = 1;
  GKTurnBasedExchangeStatusComplete = 2;
  GKTurnBasedExchangeStatusResolved = 3;
  GKTurnBasedExchangeStatusCanceled = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKExchangeTimeoutDefault: NSTimeInterval { available in 10_10, 7_0 }; cvar; external;
  GKExchangeTimeoutNone: NSTimeInterval { available in 10_10, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedExchange = objcclass external (NSObject)
  public
    function exchangeID: NSString; message 'exchangeID';
    function sender: GKTurnBasedParticipant; message 'sender';
    function recipients: NSArray; message 'recipients';
    function status: GKTurnBasedExchangeStatus; message 'status';
    function message_: NSString; message 'message';
    function data: NSData; message 'data';
    function sendDate: NSDate; message 'sendDate';
    function timeoutDate: NSDate; message 'timeoutDate';
    function completionDate: NSDate; message 'completionDate';
    function replies: NSArray; message 'replies';
    procedure cancelWithLocalizableMessageKey_arguments_completionHandler (key: NSString; arguments: NSArray; completionHandler: GKTurnBasedMatchCancelWithLocalizableMessageKeyCallback); message 'cancelWithLocalizableMessageKey:arguments:completionHandler:'; { available in 10_10, 7_0 }
    procedure replyWithLocalizableMessageKey_arguments_data_completionHandler (key: NSString; arguments: NSArray; data_: NSData; completionHandler: GKTurnBasedMatchReplyWithLocalizableMessageKeyCallback); message 'replyWithLocalizableMessageKey:arguments:data:completionHandler:'; { available in 10_10, 7_0 }
    function recipient: GKTurnBasedParticipant; message 'recipient';
    function replyDate: NSDate; message 'replyDate'; { available in 10_10, 8_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKTurnBasedEventHandlerDelegateProtocol = objcprotocol external name 'GKTurnBasedEventHandlerDelegate'
    procedure handleInviteFromGameCenter (playersToInvite: NSArray); message 'handleInviteFromGameCenter:'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
    procedure handleTurnEventForMatch_didBecomeActive (match: GKTurnBasedMatch; didBecomeActive: objcbool); message 'handleTurnEventForMatch:didBecomeActive:'; deprecated 'in 10_9, 10_10, 6_0, 7_0';
  optional
    procedure handleTurnEventForMatch (match: GKTurnBasedMatch); message 'handleTurnEventForMatch:'; deprecated 'in 10_8, 10_9, 5_0, 7_0';
    procedure handleMatchEnded (match: GKTurnBasedMatch); message 'handleMatchEnded:'; deprecated 'in 10_8, 10_10, 6_0, 7_0';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedEventHandler = objcclass external (NSObject)
  public
    class function sharedTurnBasedEventHandler: GKTurnBasedEventHandler; message 'sharedTurnBasedEventHandler'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
    procedure setDelegate(newValue: NSObjectPtr); message 'setDelegate:'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
    function delegate: NSObjectPtr; message 'delegate'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
  end;
{$endif}

