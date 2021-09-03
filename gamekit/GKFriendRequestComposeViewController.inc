{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKFriendRequestComposeViewController.h }

{$ifdef TYPES}
type
  GKFriendRequestComposeViewControllerPtr = ^GKFriendRequestComposeViewController;
  GKFriendRequestComposeViewControllerDelegateProtocolPtr = ^GKFriendRequestComposeViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (UINavigationController)
  end;
{$endif}

{$else}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewControllerCategory = objccategory external (GKFriendRequestComposeViewController)
    class function maxNumberOfRecipients: NSUInteger; message 'maxNumberOfRecipients';
    procedure setMessage (message_: NSString); message 'setMessage:';
    procedure addRecipientPlayers (players: NSArray); message 'addRecipientPlayers:'; { available in 10_10, 8_0 }
    procedure addRecipientsWithPlayerIDs (playerIDs: NSArray); message 'addRecipientsWithPlayerIDs:'; deprecated 'in 10_8, 10_10, 4_2, 8_0, "use addRecipientPlayers:"';
    procedure addRecipientsWithEmailAddresses (emailAddresses: NSArray); message 'addRecipientsWithEmailAddresses:';
    procedure setComposeViewDelegate(newValue: id); message 'setComposeViewDelegate:'; deprecated 'in 10_8, 10_12, 4_2, 10_0';
    function composeViewDelegate: id; message 'composeViewDelegate'; deprecated 'in 10_8, 10_12, 4_2, 10_0';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKFriendRequestComposeViewControllerDelegateProtocol = objcprotocol external name 'GKFriendRequestComposeViewControllerDelegate'
    procedure friendRequestComposeViewControllerDidFinish (viewController: GKFriendRequestComposeViewController); message 'friendRequestComposeViewControllerDidFinish:'; deprecated 'in 10_8, 10_12, 4_2, 10_0';
  end;
{$endif}

