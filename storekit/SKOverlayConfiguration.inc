{ Parsed from StoreKit.framework SKOverlayConfiguration.h }

{$ifdef TYPES}
type
  SKOverlayConfigurationPtr = ^SKOverlayConfiguration;
  SKOverlayAppConfigurationPtr = ^SKOverlayAppConfiguration;
  SKOverlayAppClipConfigurationPtr = ^SKOverlayAppClipConfiguration;
{$endif}

{$ifdef TYPES}
type
  SKOverlayPosition = NSInteger;
  SKOverlayPositionPtr = ^SKOverlayPosition;

const
  SKOverlayPositionBottom = 0;
  SKOverlayPositionBottomRaised = 1;
{$endif}

{$ifdef CLASSES}

type
  SKOverlayConfiguration = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;

type
  SKOverlayAppConfiguration = objcclass external (SKOverlayConfiguration)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithAppIdentifier_position (appIdentifier: NSString; position: SKOverlayPosition): id; message 'initWithAppIdentifier:position:'; { NS_DESIGNATED_INITIALIZER }
    procedure setAppIdentifier(newValue: NSString); message 'setAppIdentifier:';
    function appIdentifier: NSString; message 'appIdentifier';
    procedure setCampaignToken(newValue: NSString); message 'setCampaignToken:';
    function campaignToken: NSString; message 'campaignToken';
    procedure setProviderToken(newValue: NSString); message 'setProviderToken:';
    function providerToken: NSString; message 'providerToken';
    procedure setPosition(newValue: SKOverlayPosition); message 'setPosition:';
    function position: SKOverlayPosition; message 'position';
    procedure setUserDismissible(newValue: objcbool); message 'setUserDismissible:';
    function userDismissible: objcbool; message 'userDismissible';
    procedure setAdditionalValue_forKey (value: id; key: NSString); message 'setAdditionalValue:forKey:';
    function additionalValueForKey (key: NSString): id; message 'additionalValueForKey:';
  end;

type
  SKOverlayAppClipConfiguration = objcclass external (SKOverlayConfiguration)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithPosition (position: SKOverlayPosition): id; message 'initWithPosition:'; { NS_DESIGNATED_INITIALIZER }
    procedure setCampaignToken(newValue: NSString); message 'setCampaignToken:';
    function campaignToken: NSString; message 'campaignToken';
    procedure setProviderToken(newValue: NSString); message 'setProviderToken:';
    function providerToken: NSString; message 'providerToken';
    procedure setPosition(newValue: SKOverlayPosition); message 'setPosition:';
    function position: SKOverlayPosition; message 'position';
    procedure setAdditionalValue_forKey (value: id; key: NSString); message 'setAdditionalValue:forKey:';
    function additionalValueForKey (key: NSString): id; message 'additionalValueForKey:';
  end;
{$endif}

