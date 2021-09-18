{ Parsed from MapKit.framework MKMapCameraBoundary.h }

{$ifdef TYPES}
type
  MKMapCameraBoundaryPtr = ^MKMapCameraBoundary;
{$endif}

{$if defined(MK_SUPPORTS_VIEW_CLASSES)}
{$ifdef CLASSES}

type
  MKMapCameraBoundary = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithMapRect (mapRect: MKMapRect): id; message 'initWithMapRect:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoordinateRegion (region: MKCoordinateRegion): id; message 'initWithCoordinateRegion:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function mapRect: MKMapRect; message 'mapRect';
    function region: MKCoordinateRegion; message 'region';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
