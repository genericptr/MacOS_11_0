{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSLengthFormatter.h }

{$ifdef TYPES}
type
  NSLengthFormatterPtr = ^NSLengthFormatter;
{$endif}

{$ifdef TYPES}
type
  NSLengthFormatterUnit = NSInteger;
  NSLengthFormatterUnitPtr = ^NSLengthFormatterUnit;

const
  NSLengthFormatterUnitMillimeter = 8;
  NSLengthFormatterUnitCentimeter = 9;
  NSLengthFormatterUnitMeter = 11;
  NSLengthFormatterUnitKilometer = 14;
  NSLengthFormatterUnitInch = 5 shl 8;
  NSLengthFormatterUnitFoot = 5 shl 8;
  NSLengthFormatterUnitYard = 5 shl 8;
  NSLengthFormatterUnitMile = 5 shl 8;
{$endif}

{$ifdef CLASSES}

type
  NSLengthFormatter = objcclass external (NSFormatter)
  private
    _formatter: pointer;
    _isForPersonHeight: objcbool;
    _reserved:array[0..1] of pointer;
  public
    procedure setNumberFormatter(newValue: NSNumberFormatter); message 'setNumberFormatter:';
    function numberFormatter: NSNumberFormatter; message 'numberFormatter';
    procedure setUnitStyle(newValue: NSFormattingUnitStyle); message 'setUnitStyle:';
    function unitStyle: NSFormattingUnitStyle; message 'unitStyle';
    procedure setForPersonHeightUse(newValue: objcbool); message 'setForPersonHeightUse:';
    function isForPersonHeightUse: objcbool; message 'isForPersonHeightUse';
    function stringFromValue_unit (value: double; unit_: NSLengthFormatterUnit): NSString; message 'stringFromValue:unit:';
    function stringFromMeters (numberInMeters: double): NSString; message 'stringFromMeters:';
    function unitStringFromValue_unit (value: double; unit_: NSLengthFormatterUnit): NSString; message 'unitStringFromValue:unit:';
    function unitStringFromMeters_usedUnit (numberInMeters: double; unitp: NSLengthFormatterUnitPtr): NSString; message 'unitStringFromMeters:usedUnit:';
    function getObjectValue_forString_errorDescription (obj: idPtr; string_: NSString; error: NSStringPtr): objcbool; message 'getObjectValue:forString:errorDescription:';
  end;
{$endif}

