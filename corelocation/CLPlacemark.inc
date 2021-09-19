{ Parsed from CoreLocation.framework CLPlacemark.h }

{$ifdef TYPES}
type
  CLPlacemarkPtr = ^CLPlacemark;
{$endif}

{$ifdef CLASSES}

type
  CLPlacemark = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: CLPlacemarkInternal;
  public
    function initWithPlacemark (placemark: CLPlacemark): id; message 'initWithPlacemark:';
    function location: CLLocation; message 'location';
    function region: CLRegion; message 'region';
    function timeZone: NSTimeZone; message 'timeZone'; { available in 10_11,9_0 }
    function addressDictionary: NSDictionary; message 'addressDictionary'; deprecated 'Use @properties';
    function name: NSString; message 'name';
    function thoroughfare: NSString; message 'thoroughfare';
    function subThoroughfare: NSString; message 'subThoroughfare';
    function locality: NSString; message 'locality';
    function subLocality: NSString; message 'subLocality';
    function administrativeArea: NSString; message 'administrativeArea';
    function subAdministrativeArea: NSString; message 'subAdministrativeArea';
    function postalCode: NSString; message 'postalCode';
    function ISOcountryCode: NSString; message 'ISOcountryCode';
    function country: NSString; message 'country';
    function inlandWater: NSString; message 'inlandWater';
    function ocean: NSString; message 'ocean';
    function areasOfInterest: NSArray; message 'areasOfInterest';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  CLPlacemark_ContactsAdditions = objccategory external name 'ContactsAdditions' (CLPlacemark)
    function postalAddress: CNPostalAddress; message 'postalAddress'; { unavailable in tvos } { available in macos 10.13, ios 11.0, watchos 4.0 }
  end;
{$endif}

