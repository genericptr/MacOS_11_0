{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLVisit.h }

{$ifdef TYPES}
type
  CLVisitPtr = ^CLVisit;
{$endif}

{$ifdef CLASSES}

type
  CLVisit = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function arrivalDate: NSDate; message 'arrivalDate';
    function departureDate: NSDate; message 'departureDate';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function horizontalAccuracy: CLLocationAccuracy; message 'horizontalAccuracy';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

