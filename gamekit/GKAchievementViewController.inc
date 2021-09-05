{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKAchievementViewController.h }

{$ifdef TYPES}
type
  GKAchievementViewControllerPtr = ^GKAchievementViewController;
  GKAchievementViewControllerDelegateProtocolPtr = ^GKAchievementViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  GKAchievementViewController = objcclass external (GKGameCenterViewController)
  public
    procedure setAchievementDelegate(newValue: GKAchievementViewControllerDelegateProtocol); message 'setAchievementDelegate:';
    function achievementDelegate: GKAchievementViewControllerDelegateProtocol; message 'achievementDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKAchievementViewControllerDelegateProtocol = objcprotocol external name 'GKAchievementViewControllerDelegate' (NSObjectProtocol)
  required
    procedure achievementViewControllerDidFinish (viewController: GKAchievementViewController); message 'achievementViewControllerDidFinish:';
  end;
{$endif}

