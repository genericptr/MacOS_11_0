{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKChallengeEventHandler.h }

{$ifdef TYPES}
type
  GKChallengeEventHandlerPtr = ^GKChallengeEventHandler;
  GKChallengeEventHandlerDelegateProtocolPtr = ^GKChallengeEventHandlerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKChallengeEventHandlerDelegateProtocol = objcprotocol external name 'GKChallengeEventHandlerDelegate' (NSObjectProtocol)
  optional
    procedure localPlayerDidSelectChallenge (challenge: GKChallenge); message 'localPlayerDidSelectChallenge:';
    function shouldShowBannerForLocallyReceivedChallenge (challenge: GKChallenge): objcbool; message 'shouldShowBannerForLocallyReceivedChallenge:';
    procedure localPlayerDidReceiveChallenge (challenge: GKChallenge); message 'localPlayerDidReceiveChallenge:';
    function shouldShowBannerForLocallyCompletedChallenge (challenge: GKChallenge): objcbool; message 'shouldShowBannerForLocallyCompletedChallenge:';
    procedure localPlayerDidCompleteChallenge (challenge: GKChallenge); message 'localPlayerDidCompleteChallenge:';
    function shouldShowBannerForRemotelyCompletedChallenge (challenge: GKChallenge): objcbool; message 'shouldShowBannerForRemotelyCompletedChallenge:';
    procedure remotePlayerDidCompleteChallenge (challenge: GKChallenge); message 'remotePlayerDidCompleteChallenge:';
  end;
{$endif}

{$if  not defined(TARGET_OS_WATCH)}
{$ifdef CLASSES}

type
  GKChallengeEventHandler = objcclass external (NSObject)
  public
    class function challengeEventHandler: GKChallengeEventHandler; message 'challengeEventHandler'; deprecated 'in 10_8, 10_10, 6_0, 7_0';
    procedure setDelegate(newValue: id); message 'setDelegate:'; deprecated 'in 10_8, 10_10, 6_0, 7_0';
    function delegate: id; message 'delegate'; deprecated 'in 10_8, 10_10, 6_0, 7_0';
  end;
{$endif}

{$endif}