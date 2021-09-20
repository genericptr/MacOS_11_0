{ Parsed from Contacts.framework CNPostalAddress.h }

{$ifdef TYPES}
type
  CNPostalAddressPtr = ^CNPostalAddress;
{$endif}

{$ifdef CLASSES}

type
  CNPostalAddress = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function street: NSString; message 'street';
    function subLocality: NSString; message 'subLocality'; { available in 10_12_4, 10_3 }
    function city: NSString; message 'city';
    function subAdministrativeArea: NSString; message 'subAdministrativeArea'; { available in 10_12_4, 10_3 }
    function state: NSString; message 'state';
    function postalCode: NSString; message 'postalCode';
    function country: NSString; message 'country';
    function ISOCountryCode: NSString; message 'ISOCountryCode';
    class function localizedStringForKey (key: NSString): NSString; message 'localizedStringForKey:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNPostalAddressStreetKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNPostalAddressSubLocalityKey: NSString { available in 10_12_4, 10_3 }; cvar; external;
  CNPostalAddressCityKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNPostalAddressSubAdministrativeAreaKey: NSString { available in 10_12_4, 10_3 }; cvar; external;
  CNPostalAddressStateKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNPostalAddressPostalCodeKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNPostalAddressCountryKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNPostalAddressISOCountryCodeKey: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

