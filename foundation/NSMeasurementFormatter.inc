{ Parsed from Foundation.framework NSMeasurementFormatter.h }

{$ifdef TYPES}
type
  NSMeasurementFormatterPtr = ^NSMeasurementFormatter;
{$endif}

{$ifdef TYPES}
type
  NSMeasurementFormatterUnitOptions = NSUInteger;
  NSMeasurementFormatterUnitOptionsPtr = ^NSMeasurementFormatterUnitOptions;

const
  NSMeasurementFormatterUnitOptionsProvidedUnit = 1 shl 0;
  NSMeasurementFormatterUnitOptionsNaturalScale = 1 shl 1;
  NSMeasurementFormatterUnitOptionsTemperatureWithoutUnit = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSMeasurementFormatter = objcclass external (NSFormatter, NSSecureCodingProtocol)
  private
    _formatter: pointer;
  public
    procedure setUnitOptions(newValue: NSMeasurementFormatterUnitOptions); message 'setUnitOptions:';
    function unitOptions: NSMeasurementFormatterUnitOptions; message 'unitOptions';
    procedure setUnitStyle(newValue: NSFormattingUnitStyle); message 'setUnitStyle:';
    function unitStyle: NSFormattingUnitStyle; message 'unitStyle';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setNumberFormatter(newValue: NSNumberFormatter); message 'setNumberFormatter:';
    function numberFormatter: NSNumberFormatter; message 'numberFormatter';
    function stringFromMeasurement (measurement: NSMeasurement): NSString; message 'stringFromMeasurement:';
    function stringFromUnit (unit_: NSUnit): NSString; message 'stringFromUnit:';

    { Adopted protocols }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

