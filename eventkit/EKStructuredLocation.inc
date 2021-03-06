{ Parsed from EventKit.framework EKStructuredLocation.h }

{$ifdef TYPES}
type
  EKStructuredLocationPtr = ^EKStructuredLocation;
{$endif}

{$ifdef CLASSES}

type
  EKStructuredLocation = objcclass external (EKObject, NSCopyingProtocol)
  public
    class function locationWithTitle (title: NSString): id; message 'locationWithTitle:';
    class function locationWithMapItem (mapItem: MKMapItem): id; message 'locationWithMapItem:'; { available in macos 10.11, ios 9.0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setGeoLocation(newValue: CLLocationPtr); message 'setGeoLocation:';
    function geoLocation: CLLocationPtr; message 'geoLocation';
    procedure setRadius(newValue: double); message 'setRadius:';
    function radius: double; message 'radius';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

