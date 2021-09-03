{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSMeasurement.h }

{$ifdef TYPES}
type
  NSMeasurementPtr = ^NSMeasurement;
{$endif}

{$ifdef CLASSES}

type
  NSMeasurement = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _unit: NSUnit;
    _doubleValue: double;
  public
    function unit_: NSUnit; message 'unit';
    function doubleValue: double; message 'doubleValue';
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithDoubleValue_unit (doubleValue_: double; unit_: NSUnit): id; message 'initWithDoubleValue:unit:'; { NS_DESIGNATED_INITIALIZER }
    function canBeConvertedToUnit (unit_: NSUnit): objcbool; message 'canBeConvertedToUnit:';
    function measurementByConvertingToUnit (unit_: NSUnit): NSMeasurement; message 'measurementByConvertingToUnit:';
    function measurementByAddingMeasurement (measurement: NSMeasurement): NSMeasurement; message 'measurementByAddingMeasurement:';
    function measurementBySubtractingMeasurement (measurement: NSMeasurement): NSMeasurement; message 'measurementBySubtractingMeasurement:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

