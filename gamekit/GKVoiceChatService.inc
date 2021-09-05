{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKVoiceChatService.h }

{$ifdef TYPES}
type
  GKVoiceChatServicePtr = ^GKVoiceChatService;
{$endif}

{$ifdef CLASSES}

type
  GKVoiceChatService = objcclass external (NSObject)
  public
    class function defaultVoiceChatService: GKVoiceChatService; message 'defaultVoiceChatService';
    class function isVoIPAllowed: objcbool; message 'isVoIPAllowed';
    procedure setClient(newValue: GKVoiceChatClientProtocol); message 'setClient:'; deprecated 'in 3_0, 7_0';
    function client: GKVoiceChatClientProtocol; message 'client'; deprecated 'in 3_0, 7_0';
    function startVoiceChatWithParticipantID_error (participantID: NSString; error: NSErrorPtr): objcbool; message 'startVoiceChatWithParticipantID:error:';
    procedure stopVoiceChatWithParticipantID (participantID: NSString); message 'stopVoiceChatWithParticipantID:';
    function acceptCallID_error (callID: NSInteger; error: NSErrorPtr): objcbool; message 'acceptCallID:error:';
    procedure denyCallID (callID: NSInteger); message 'denyCallID:';
    procedure receivedRealTimeData_fromParticipantID (audio: NSData; participantID: NSString); message 'receivedRealTimeData:fromParticipantID:';
    procedure receivedData_fromParticipantID (arbitraryData: NSData; participantID: NSString); message 'receivedData:fromParticipantID:';
    procedure setMicrophoneMuted(newValue: objcbool); message 'setMicrophoneMuted:';
    function isMicrophoneMuted: objcbool; message 'isMicrophoneMuted';
    procedure setRemoteParticipantVolume(newValue: single); message 'setRemoteParticipantVolume:';
    function remoteParticipantVolume: single; message 'remoteParticipantVolume';
    procedure setOutputMeteringEnabled(newValue: objcbool); message 'setOutputMeteringEnabled:';
    function isOutputMeteringEnabled: objcbool; message 'isOutputMeteringEnabled';
    procedure setInputMeteringEnabled(newValue: objcbool); message 'setInputMeteringEnabled:';
    function isInputMeteringEnabled: objcbool; message 'isInputMeteringEnabled';
    function outputMeterLevel: single; message 'outputMeterLevel';
    function inputMeterLevel: single; message 'inputMeterLevel';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKVoiceChatServiceErrorDomain: NSString; cvar; external;
{$endif}

