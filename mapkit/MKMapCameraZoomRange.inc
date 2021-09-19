{ Parsed from MapKit.framework MKMapCameraZoomRange.h }

{$ifdef TYPES}
type
  MKMapCameraZoomRangePtr = ^MKMapCameraZoomRange;
{$endif}

{$if defined(MK_SUPPORTS_VIEW_CLASSES)}
{$ifdef EXTERNAL_SYMBOLS}
var
  MKMapCameraZoomDefault: CLLocationDistance { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MKMapCameraZoomRange = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithMinCenterCoordinateDistance_maxCenterCoordinateDistance (minDistance: CLLocationDistance; maxDistance: CLLocationDistance): id; message 'initWithMinCenterCoordinateDistance:maxCenterCoordinateDistance:'; { NS_DESIGNATED_INITIALIZER }
    function initWithMinCenterCoordinateDistance (minDistance: CLLocationDistance): id; message 'initWithMinCenterCoordinateDistance:';
    function initWithMaxCenterCoordinateDistance (maxDistance: CLLocationDistance): id; message 'initWithMaxCenterCoordinateDistance:';
    function minCenterCoordinateDistance: CLLocationDistance; message 'minCenterCoordinateDistance';
    function maxCenterCoordinateDistance: CLLocationDistance; message 'maxCenterCoordinateDistance';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
