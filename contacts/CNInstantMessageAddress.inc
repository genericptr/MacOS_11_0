{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNInstantMessageAddress.h }

{$ifdef TYPES}
type
  CNInstantMessageAddressPtr = ^CNInstantMessageAddress;
{$endif}

{$ifdef CLASSES}

type
  CNInstantMessageAddress = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function username: NSString; message 'username';
    function service: NSString; message 'service';
    function initWithUsername_service (username_: NSString; service_: NSString): id; message 'initWithUsername:service:';
    class function localizedStringForKey (key: NSString): NSString; message 'localizedStringForKey:';
    class function localizedStringForService (service_: NSString): NSString; message 'localizedStringForService:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNInstantMessageAddressUsernameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageAddressServiceKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceAIM: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceFacebook: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceGaduGadu: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceGoogleTalk: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceICQ: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceJabber: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceMSN: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceQQ: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceSkype: NSString { available in 10_11, 9_0 }; cvar; external;
  CNInstantMessageServiceYahoo: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

