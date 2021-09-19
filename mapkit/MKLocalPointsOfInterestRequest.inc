{ Parsed from MapKit.framework MKLocalPointsOfInterestRequest.h }

{$ifdef TYPES}
type
  MKLocalPointsOfInterestRequestPtr = ^MKLocalPointsOfInterestRequest;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKPointsOfInterestRequestMaxRadius: CLLocationDistance { unavailable in watchos } { available in ios 14.0, macos 11.0, tvos 14.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MKLocalPointsOfInterestRequest = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init';
    function initWithCenterCoordinate_radius (coordinate: CLLocationCoordinate2D; radius: CLLocationDistance): id; message 'initWithCenterCoordinate:radius:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoordinateRegion (region: MKCoordinateRegion): id; message 'initWithCoordinateRegion:'; { NS_DESIGNATED_INITIALIZER }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function radius: CLLocationDistance; message 'radius';
    function region: MKCoordinateRegion; message 'region';
    procedure setPointOfInterestFilter(newValue: MKPointOfInterestFilter); message 'setPointOfInterestFilter:';
    function pointOfInterestFilter: MKPointOfInterestFilter; message 'pointOfInterestFilter';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

