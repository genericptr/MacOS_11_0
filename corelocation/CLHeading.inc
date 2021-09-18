{ Parsed from CoreLocation.framework CLHeading.h }

{$ifdef TYPES}
type
  CLHeadingPtr = ^CLHeading;
{$endif}

{$ifdef TYPES}
type
  CLHeadingComponentValue = double;
  CLHeadingComponentValuePtr = ^CLHeadingComponentValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCLHeadingFilterNone: CLLocationDegrees; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CLHeading = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: id;
  public
    function magneticHeading: CLLocationDirection; message 'magneticHeading';
    function trueHeading: CLLocationDirection; message 'trueHeading';
    function headingAccuracy: CLLocationDirection; message 'headingAccuracy';
    function x: CLHeadingComponentValue; message 'x';
    function y: CLHeadingComponentValue; message 'y';
    function z: CLHeadingComponentValue; message 'z';
    function timestamp: NSDate; message 'timestamp';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

