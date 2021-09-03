{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBManager.h }

{ Types from CBManager }
{$ifdef TYPES}

type
  CBManagerAuthorization = NSInteger;
type
  CBManagerAuthorizationPtr = ^CBManagerAuthorization;

const
  CBManagerAuthorizationNotDetermined = 0;
  CBManagerAuthorizationRestricted = 1;
  CBManagerAuthorizationDenied = 2;
  CBManagerAuthorizationAllowedAlways = 3;

type
  CBManagerState = NSInteger;
  CBManagerStatePtr = ^CBManagerState;

const
  CBManagerStateUnknown = 0;
  CBManagerStateResetting = 1;
  CBManagerStateUnsupported = 2;
  CBManagerStateUnauthorized = 3;
  CBManagerStatePoweredOff = 4;
  CBManagerStatePoweredOn = 5;
{$endif}


{$ifdef TYPES}
type
  CBManagerPtr = ^CBManager;
{$endif}

{$ifdef CLASSES}

type
  CBManager = objcclass external (NSObject)
  private
  public
    function state: CBManagerState; message 'state';
    function authorization: CBManagerAuthorization; message 'authorization'; deprecated 'replace with CBManager.authorization';
    class function authorization_: CBManagerAuthorization; message 'authorization'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

