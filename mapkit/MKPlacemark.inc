{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKPlacemark.h }

{$ifdef TYPES}
type
  MKPlacemarkPtr = ^MKPlacemark;
{$endif}

{$ifdef CLASSES}

type
  MKPlacemark = objcclass external (CLPlacemark, MKAnnotationProtocol)
  public
    function initWithCoordinate (coordinate: CLLocationCoordinate2D): id; message 'initWithCoordinate:'; { available in 10_12, 10_0 }
    function initWithCoordinate_addressDictionary (coordinate: CLLocationCoordinate2D; addressDictionary: NSDictionary): id; message 'initWithCoordinate:addressDictionary:';
    function initWithCoordinate_postalAddress (coordinate: CLLocationCoordinate2D; postalAddress: CNPostalAddress): id; message 'initWithCoordinate:postalAddress:'; { available in 10_12, 10_0 }
    function countryCode: NSString; message 'countryCode';

    { Adopted protocols }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in 10_9, 4_0 }
    function subtitle: NSString; message 'subtitle';
    function title: NSString; message 'title';
  end;
{$endif}

