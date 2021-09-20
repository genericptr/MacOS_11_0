{ Parsed from MapKit.framework MKPlacemark.h }

{$ifdef TYPES}
type
  MKPlacemarkPtr = ^MKPlacemark;
{$endif}

{$ifdef CLASSES}

type
  MKPlacemark = objcclass external (CLPlacemark, MKAnnotationProtocol)
  public
    function initWithCoordinate (coordinate: CLLocationCoordinate2D): id; message 'initWithCoordinate:'; { available in macos 10.12, ios 10.0 } { available in 10_0 }
    function initWithCoordinate_addressDictionary (coordinate: CLLocationCoordinate2D; addressDictionary: NSDictionary): id; message 'initWithCoordinate:addressDictionary:';
    function initWithCoordinate_postalAddress (coordinate: CLLocationCoordinate2D; postalAddress: CNPostalAddress): id; message 'initWithCoordinate:postalAddress:'; { available in macos 10.12, ios 10.0 } { available in 3_0 }
    function countryCode: NSString; message 'countryCode';

    { Adopted protocols }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in macos 10.9, ios 4.0 }
    function subtitle: NSString; message 'subtitle';
    function title: NSString; message 'title';
  end;
{$endif}

