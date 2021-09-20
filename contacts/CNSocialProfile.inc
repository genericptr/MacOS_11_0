{ Parsed from Contacts.framework CNSocialProfile.h }

{$ifdef TYPES}
type
  CNSocialProfilePtr = ^CNSocialProfile;
{$endif}

{$ifdef CLASSES}

type
  CNSocialProfile = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function urlString: NSString; message 'urlString';
    function username: NSString; message 'username';
    function userIdentifier: NSString; message 'userIdentifier';
    function service: NSString; message 'service';
    function initWithUrlString_username_userIdentifier_service (urlString_: NSString; username_: NSString; userIdentifier_: NSString; service_: NSString): id; message 'initWithUrlString:username:userIdentifier:service:';
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
  CNSocialProfileURLStringKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileUsernameKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileUserIdentifierKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceFacebook: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceFlickr: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceLinkedIn: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceMySpace: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceSinaWeibo: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceTencentWeibo: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceTwitter: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceYelp: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNSocialProfileServiceGameCenter: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

