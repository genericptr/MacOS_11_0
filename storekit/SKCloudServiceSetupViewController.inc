{ Parsed from StoreKit.framework SKCloudServiceSetupViewController.h }

{ Types from SKCloudServiceSetupViewController }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  SKCloudServiceSetupViewControllerLoadWithOptionsCallback = reference to procedure (result_: objcbool; error: NSError); cblock; cdecl;
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
    procedure setDelegate(newValue: SKCloudServiceSetupViewControllerDelegateProtocol); message 'setDelegate:'; { unavailable in macos } { available in ios 10.1 }
    function delegate: SKCloudServiceSetupViewControllerDelegateProtocol; message 'delegate'; { unavailable in macos } { available in ios 10.1 }
    procedure loadWithOptions_completionHandler (options: NSDictionary; completionHandler: SKCloudServiceSetupViewControllerLoadWithOptionsCallback); message 'loadWithOptions:completionHandler:'; { unavailable in macos } { available in ios 10.1 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKCloudServiceSetupViewControllerDelegateProtocol = objcprotocol external name 'SKCloudServiceSetupViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure cloudServiceSetupViewControllerDidDismiss (cloudServiceSetupViewController: SKCloudServiceSetupViewController); message 'cloudServiceSetupViewControllerDidDismiss:'; { unavailable in macos } { available in ios 10.1 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKCloudServiceSetupOptionsActionKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsITunesItemIdentifierKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsAffiliateTokenKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsCampaignTokenKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupOptionsMessageIdentifierKey: SKCloudServiceSetupOptionsKey; cvar; external;
  SKCloudServiceSetupActionSubscribe: SKCloudServiceSetupAction { unavailable in macos } { available in ios 10.1 }; cvar; external;
  SKCloudServiceSetupMessageIdentifierJoin: SKCloudServiceSetupMessageIdentifier { unavailable in macos } { available in ios 11.0 }; cvar; external;
  SKCloudServiceSetupMessageIdentifierConnect: SKCloudServiceSetupMessageIdentifier { unavailable in macos } { available in ios 11.0 }; cvar; external;
  SKCloudServiceSetupMessageIdentifierAddMusic: SKCloudServiceSetupMessageIdentifier { unavailable in macos } { available in ios 11.0 }; cvar; external;
  SKCloudServiceSetupMessageIdentifierPlayMusic: SKCloudServiceSetupMessageIdentifier { unavailable in macos } { available in ios 11.0 }; cvar; external;
{$endif}

