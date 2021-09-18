{ Parsed from CoreLocation.framework CLGeocoder.h }

{$ifdef TYPES}
type
  CLGeocoderPtr = ^CLGeocoder;
{$endif}

{$ifdef TYPES}
type
  CLGeocodeCompletionHandler = reference to procedure (placemarks: NSArray; error: NSError); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  CLGeocoder = objcclass external (NSObject)
  private
    _internal: CLGeocoderInternal;
  public
    function isGeocoding: objcbool; message 'isGeocoding';
    procedure reverseGeocodeLocation_completionHandler (location: CLLocation; completionHandler: CLGeocodeCompletionHandler); message 'reverseGeocodeLocation:completionHandler:';
    procedure reverseGeocodeLocation_preferredLocale_completionHandler (location: CLLocation; locale: NSLocale; completionHandler: CLGeocodeCompletionHandler); message 'reverseGeocodeLocation:preferredLocale:completionHandler:'; { available in macos , ios , watchos , tvos  }
    procedure geocodeAddressDictionary_completionHandler (addressDictionary: NSDictionary; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressDictionary:completionHandler:'; deprecated 'Use -geocodePostalAddress:completionHandler:';
    procedure geocodeAddressString_completionHandler (addressString: NSString; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:completionHandler:';
    procedure geocodeAddressString_inRegion_completionHandler (addressString: NSString; region: CLRegion; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:inRegion:completionHandler:';
    procedure geocodeAddressString_inRegion_preferredLocale_completionHandler (addressString: NSString; region: CLRegion; locale: NSLocale; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:inRegion:preferredLocale:completionHandler:'; { available in macos , ios , watchos , tvos  }
    procedure cancelGeocode; message 'cancelGeocode';
  end;


type
  ContactsAdditions = objccategory external (CLGeocoder)
    procedure geocodePostalAddress_completionHandler (postalAddress: CNPostalAddress; completionHandler: CLGeocodeCompletionHandler); message 'geocodePostalAddress:completionHandler:'; { unavailable in tvos }
    procedure geocodePostalAddress_preferredLocale_completionHandler (postalAddress: CNPostalAddress; locale: NSLocale; completionHandler: CLGeocodeCompletionHandler); message 'geocodePostalAddress:preferredLocale:completionHandler:'; { unavailable in tvos }
  end;
{$endif}

