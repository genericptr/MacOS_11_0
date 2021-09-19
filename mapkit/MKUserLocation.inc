{ Parsed from MapKit.framework MKUserLocation.h }

{$ifdef TYPES}
type
  MKUserLocationPtr = ^MKUserLocation;
{$endif}

{$ifdef CLASSES}

type
  MKUserLocation = objcclass external (NSObject, MKAnnotationProtocol)
  public
    function isUpdating: objcbool; message 'isUpdating';
    function location: CLLocation; message 'location';
    function heading: CLHeadingPtr; message 'heading'; { unavailable in tvos } { available in 10_9, 5_0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:';
    function subtitle: NSString; message 'subtitle';

    { Adopted protocols }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in 10_9, 4_0 }
    function subtitle_: NSString; message 'subtitle';
    function title_: NSString; message 'title';
  end;
{$endif}

