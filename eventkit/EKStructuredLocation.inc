{ Parsed from EventKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/EventKit.framework/Headers/EKStructuredLocation.h }

{$ifdef TYPES}
type
  EKStructuredLocationPtr = ^EKStructuredLocation;
{$endif}

{$ifdef CLASSES}

type
  EKStructuredLocation = objcclass external (EKObject, NSCopyingProtocol)
  public
    class function locationWithTitle (title: NSString): id; message 'locationWithTitle:';
    class function locationWithMapItem (mapItem: MKMapItem): id; message 'locationWithMapItem:'; { available in 10_11, 9_0 }
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

