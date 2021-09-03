{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKChallengesViewController.h }

{$ifdef TYPES}
type
  GKChallengesViewControllerPtr = ^GKChallengesViewController;
  GKChallengesViewControllerDelegateProtocolPtr = ^GKChallengesViewControllerDelegateProtocol;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  GKChallengesViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  private
    _internal1, _internal2, _internal3, _internal4: id;
  public
    procedure setChallengeDelegate(newValue: id); message 'setChallengeDelegate:';
    function challengeDelegate: id; message 'challengeDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKChallengesViewControllerDelegateProtocol = objcprotocol external name 'GKChallengesViewControllerDelegate'
  required
    procedure challengesViewControllerDidFinish (viewController: GKChallengesViewController); message 'challengesViewControllerDidFinish:';
  end;
{$endif}

{$endif}
