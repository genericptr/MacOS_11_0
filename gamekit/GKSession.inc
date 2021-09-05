{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKSession.h }

{$ifdef TYPES}
type
  GKSessionPtr = ^GKSession;
{$endif}

{$ifdef CLASSES}

type
  GKSession = objcclass external (NSObject)
  private
    _session: id;
  public
    function initWithSessionID_displayName_sessionMode (sessionID: NSString; name: NSString; mode: GKSessionMode): id; message 'initWithSessionID:displayName:sessionMode:'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
    procedure setDelegate(newValue: GKSessionDelegateProtocol); message 'setDelegate:'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
    function delegate: GKSessionDelegateProtocol; message 'delegate'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
    function sessionID: NSString; message 'sessionID';
    function displayName: NSString; message 'displayName';
    function sessionMode: GKSessionMode; message 'sessionMode'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
    function peerID: NSString; message 'peerID';
    procedure setAvailable(newValue: objcbool); message 'setAvailable:';
    function isAvailable: objcbool; message 'isAvailable';
    procedure setDisconnectTimeout(newValue: NSTimeInterval); message 'setDisconnectTimeout:';
    function disconnectTimeout: NSTimeInterval; message 'disconnectTimeout';
    function displayNameForPeer (peerID_: NSString): NSString; message 'displayNameForPeer:';
    function sendData_toPeers_withDataMode_error (data: NSData; peers: NSArray; mode: GKSendDataMode; error: NSErrorPtr): objcbool; message 'sendData:toPeers:withDataMode:error:'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
    function sendDataToAllPeers_withDataMode_error (data: NSData; mode: GKSendDataMode; error: NSErrorPtr): objcbool; message 'sendDataToAllPeers:withDataMode:error:'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
    procedure setDataReceiveHandler_withContext (handler: id; context: pointer); message 'setDataReceiveHandler:withContext:';
    procedure connectToPeer_withTimeout (peerID_: NSString; timeout: NSTimeInterval); message 'connectToPeer:withTimeout:';
    procedure cancelConnectToPeer (peerID_: NSString); message 'cancelConnectToPeer:';
    function acceptConnectionFromPeer_error (peerID_: NSString; error: NSErrorPtr): objcbool; message 'acceptConnectionFromPeer:error:';
    procedure denyConnectionFromPeer (peerID_: NSString); message 'denyConnectionFromPeer:';
    procedure disconnectPeerFromAllPeers (peerID_: NSString); message 'disconnectPeerFromAllPeers:';
    procedure disconnectFromAllPeers; message 'disconnectFromAllPeers';
    function peersWithConnectionState (state: GKPeerConnectionState): NSArray; message 'peersWithConnectionState:'; deprecated 'in 10_8, 10_10, 3_0, 7_0';
  end;
{$endif}

