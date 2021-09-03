{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKGameSessionEventListener.h }

{$ifdef TYPES}
type
  GKGameSessionEventListenerProtocolPtr = ^GKGameSessionEventListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKGameSessionEventListenerProtocol = objcprotocol external name 'GKGameSessionEventListener' (NSObjectProtocol)
  optional
    procedure session_didAddPlayer (session: GKGameSession; player: GKCloudPlayer); message 'session:didAddPlayer:';
    procedure session_didRemovePlayer (session: GKGameSession; player: GKCloudPlayer); message 'session:didRemovePlayer:';
    procedure session_player_didChangeConnectionState (session: GKGameSession; player: GKCloudPlayer; newState: GKConnectionState); message 'session:player:didChangeConnectionState:';
    procedure session_player_didSaveData (session: GKGameSession; player: GKCloudPlayer; data: NSData); message 'session:player:didSaveData:';
    procedure session_didReceiveData_fromPlayer (session: GKGameSession; data: NSData; player: GKCloudPlayer); message 'session:didReceiveData:fromPlayer:';
    procedure session_didReceiveMessage_withData_fromPlayer (session: GKGameSession; message_: NSString; data: NSData; player: GKCloudPlayer); message 'session:didReceiveMessage:withData:fromPlayer:';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKGameSessionEventListener = objccategory external (GKGameSession)
    class procedure addEventListener (listener: NSObjectPtr); message 'addEventListener:';
    class procedure removeEventListener (listener: NSObjectPtr); message 'removeEventListener:';
  end;
{$endif}

