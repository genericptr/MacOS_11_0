{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKGameSessionSharingViewController.h }

{$ifdef TYPES}
type
  GKGameSessionSharingViewControllerPtr = ^GKGameSessionSharingViewController;
  GKGameSessionSharingViewControllerDelegateProtocolPtr = ^GKGameSessionSharingViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_TV)}
{$ifdef CLASSES}

type
  GKGameSessionSharingViewController = objcclass external (UIViewController)
  public
    function session: GKGameSession; message 'session';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function initWithSession (session_: GKGameSession): id; message 'initWithSession:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKGameSessionSharingViewControllerDelegateProtocol = objcprotocol external name 'GKGameSessionSharingViewControllerDelegate' (NSObjectProtocol)
    procedure sharingViewController_didFinishWithError (viewController: GKGameSessionSharingViewController; error: NSError); message 'sharingViewController:didFinishWithError:';
  end;
{$endif}

{$endif}
