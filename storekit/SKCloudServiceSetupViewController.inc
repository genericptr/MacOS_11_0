{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKCloudServiceSetupViewController.h }

{ Types from SKCloudServiceSetupViewController }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  SKCloudServiceSetupViewControllerLoadWithOptionsCallback = reference to function (result_: objcbool; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKCloudServiceSetupViewControllerPtr = ^SKCloudServiceSetupViewController;
  SKCloudServiceSetupViewControllerDelegateProtocolPtr = ^SKCloudServiceSetupViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SKCloudServiceSetupOptionsKey = NSString;
  SKCloudServiceSetupOptionsKeyPtr = ^SKCloudServiceSetupOptionsKey;
  SKCloudServiceSetupAction = NSString;
  SKCloudServiceSetupActionPtr = ^SKCloudServiceSetupAction;
  SKCloudServiceSetupMessageIdentifier = NSString;
  SKCloudServiceSetupMessageIdentifierPtr = ^SKCloudServiceSetupMessageIdentifier;
{$endif}

{$ifdef CLASSES}

type
  SKCloudServiceSetupViewController = objcclass external (NSViewController)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:'; { unavailable in macos }
    function delegate: id; message 'delegate'; { unavailable in macos }
    procedure loadWithOptions_completionHandler (options: NSDictionary; completionHandler: SKCloudServiceSetupViewControllerLoadWithOptionsCallback); message 'loadWithOptions:completionHandler:'; { unavailable in macos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKCloudServiceSetupViewControllerDelegateProtocol = objcprotocol external name 'SKCloudServiceSetupViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure cloudServiceSetupViewControllerDidDismiss (cloudServiceSetupViewController: SKCloudServiceSetupViewController); message 'cloudServiceSetupViewControllerDidDismiss:'; { unavailable in macos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKCloudServiceSetupOptionsActionKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsITunesItemIdentifierKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsAffiliateTokenKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsCampaignTokenKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsMessageIdentifierKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupActionSubscribe: SKCloudServiceSetupAction { unavailable in macos }; cvar; external;
  SKCloudServiceSetupMessageIdentifierJoin: SKCloudServiceSetupMessageIdentifier { unavailable in macos }; cvar; external;
  SKCloudServiceSetupMessageIdentifierConnect: SKCloudServiceSetupMessageIdentifier { unavailable in macos }; cvar; external;
  SKCloudServiceSetupMessageIdentifierAddMusic: SKCloudServiceSetupMessageIdentifier { unavailable in macos }; cvar; external;
  SKCloudServiceSetupMessageIdentifierPlayMusic: SKCloudServiceSetupMessageIdentifier { unavailable in macos }; cvar; external;
{$endif}

