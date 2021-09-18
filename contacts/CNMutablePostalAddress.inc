{ Parsed from Contacts.framework CNMutablePostalAddress.h }

{$ifdef TYPES}
type
  CNMutablePostalAddressPtr = ^CNMutablePostalAddress;
{$endif}

{$ifdef CLASSES}

type
  CNMutablePostalAddress = objcclass external (CNPostalAddress)
  public
    procedure setStreet(newValue: NSString); message 'setStreet:';
    function street: NSString; message 'street';
    procedure setSubLocality(newValue: NSString); message 'setSubLocality:'; { available in 10_12_4, 10_3 }
    function subLocality: NSString; message 'subLocality'; { available in 10_12_4, 10_3 }
    procedure setCity(newValue: NSString); message 'setCity:';
    function city: NSString; message 'city';
    procedure setSubAdministrativeArea(newValue: NSString); message 'setSubAdministrativeArea:'; { available in 10_12_4, 10_3 }
    function subAdministrativeArea: NSString; message 'subAdministrativeArea'; { available in 10_12_4, 10_3 }
    procedure setState(newValue: NSString); message 'setState:';
    function state: NSString; message 'state';
    procedure setPostalCode(newValue: NSString); message 'setPostalCode:';
    function postalCode: NSString; message 'postalCode';
    procedure setCountry(newValue: NSString); message 'setCountry:';
    function country: NSString; message 'country';
    procedure setISOCountryCode(newValue: NSString); message 'setISOCountryCode:';
    function ISOCountryCode: NSString; message 'ISOCountryCode';
  end;
{$endif}

