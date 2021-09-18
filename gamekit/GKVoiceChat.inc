{ Parsed from GameKit.framework GKVoiceChat.h }

{$ifdef CALLBACKS}
type
  GKVoiceChatPlayerVoiceChatStateDidChangeHandlerCallback = reference to procedure (player: GKPlayer; state: GKVoiceChatPlayerState); cblock; cdecl;
  GKVoiceChatPlayerStateUpdateHandlerCallback = reference to procedure (playerID: NSString; state: GKVoiceChatPlayerState); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKVoiceChatPtr = ^GKVoiceChat;
{$endif}

{$ifdef TYPES}
type
  GKVoiceChatPlayerState = NSInteger;
  GKVoiceChatPlayerStatePtr = ^GKVoiceChatPlayerState;

const
  GKVoiceChatPlayerConnected = 0;
  GKVoiceChatPlayerDisconnected = 1;
  GKVoiceChatPlayerSpeaking = 2;
  GKVoiceChatPlayerSilent = 3;
  GKVoiceChatPlayerConnecting = 4;
{$endif}

{$ifdef CLASSES}

type
  GKVoiceChat = objcclass external (NSObject)
  public
    procedure start; message 'start';
    procedure stop; message 'stop';
    procedure setPlayer_muted (player: GKPlayer; isMuted: objcbool); message 'setPlayer:muted:'; { available in 10_10, 8_0 }
    procedure setPlayerVoiceChatStateDidChangeHandler(newValue: GKVoiceChatPlayerVoiceChatStateDidChangeHandlerCallback); message 'setPlayerVoiceChatStateDidChangeHandler:'; { available in 10_10, 8_0 }
    function playerVoiceChatStateDidChangeHandler: GKVoiceChatPlayerVoiceChatStateDidChangeHandlerCallback; message 'playerVoiceChatStateDidChangeHandler'; { available in 10_10, 8_0 }
    function name: NSString; message 'name';
    procedure setActive(newValue: objcbool); message 'setActive:';
    function isActive: objcbool; message 'isActive';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    function players: NSArray; message 'players'; { available in 10_10, 8_0 }
    class function isVoIPAllowed: objcbool; message 'isVoIPAllowed';
  end;


type
  Deprecated = objccategory external (GKVoiceChat)
    procedure setPlayerStateUpdateHandler(newValue: GKVoiceChatPlayerStateUpdateHandlerCallback); message 'setPlayerStateUpdateHandler:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "use setPlayerVoiceChatStateDidChangeHandler:"';
    function playerStateUpdateHandler: GKVoiceChatPlayerStateUpdateHandlerCallback; message 'playerStateUpdateHandler'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "use setPlayerVoiceChatStateDidChangeHandler:"';
  end;

type
  Obsoleted = objccategory external (GKVoiceChat)
    function playerIDs: NSArray; message 'playerIDs'; deprecated 'in 10_8, 10_10, 5_0, 8_0, "use players"';
    procedure setMute_forPlayer (isMuted: objcbool; playerID: NSString); message 'setMute:forPlayer:'; deprecated 'in 10_8, 10_10, 5_0, 8_0, "This is never invoked and its implementation does nothing, use setPlayer:muted:"';
  end;
{$endif}

