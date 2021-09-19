{ Parsed from Foundation.framework NSByteCountFormatter.h }

{$ifdef TYPES}
type
  NSByteCountFormatterPtr = ^NSByteCountFormatter;
{$endif}

{$ifdef TYPES}
type
  NSByteCountFormatterUnits = NSUInteger;
  NSByteCountFormatterUnitsPtr = ^NSByteCountFormatterUnits;

const
  NSByteCountFormatterUseDefault = 0;
  NSByteCountFormatterUseBytes = 1 shl 0;
  NSByteCountFormatterUseKB = 1 shl 1;
  NSByteCountFormatterUseMB = 1 shl 2;
  NSByteCountFormatterUseGB = 1 shl 3;
  NSByteCountFormatterUseTB = 1 shl 4;
  NSByteCountFormatterUsePB = 1 shl 5;
  NSByteCountFormatterUseEB = 1 shl 6;
  NSByteCountFormatterUseZB = 1 shl 7;
  NSByteCountFormatterUseYBOrHigher = $0FF shl 8;
  NSByteCountFormatterUseAll = $0FFFF;

type
  NSByteCountFormatterCountStyle = NSInteger;
  NSByteCountFormatterCountStylePtr = ^NSByteCountFormatterCountStyle;

const
  NSByteCountFormatterCountStyleFile = 0;
  NSByteCountFormatterCountStyleMemory = 1;
  NSByteCountFormatterCountStyleDecimal = 2;
  NSByteCountFormatterCountStyleBinary = 3;
{$endif}

{$ifdef CLASSES}

type
  NSByteCountFormatter = objcclass external (NSFormatter)
  private
    _allowedUnits: cuint;
    _countStyle: char;
    _allowsNonnumericFormatting, _includesUnit, _includesCount, _includesActualByteCount, _adaptive, _zeroPadsFractionDigits: objcbool;
    _formattingContext: cint;
    _reserved:array[0..4] of cint;
  public
    class function stringFromByteCount_countStyle (byteCount: clonglong; countStyle: NSByteCountFormatterCountStyle): NSString; message 'stringFromByteCount:countStyle:';
    function stringFromByteCount (byteCount: clonglong): NSString; message 'stringFromByteCount:';
    class function stringFromMeasurement_countStyle (measurement: NSMeasurement; countStyle: NSByteCountFormatterCountStyle): NSString; message 'stringFromMeasurement:countStyle:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function stringFromMeasurement (measurement: NSMeasurement): NSString; message 'stringFromMeasurement:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function stringForObjectValue (obj: id): NSString; message 'stringForObjectValue:';
    procedure setAllowedUnits(newValue: NSByteCountFormatterUnits); message 'setAllowedUnits:';
    function allowedUnits: NSByteCountFormatterUnits; message 'allowedUnits';
    procedure setCountStyle(newValue: NSByteCountFormatterCountStyle); message 'setCountStyle:';
    function countStyle: NSByteCountFormatterCountStyle; message 'countStyle';
    procedure setAllowsNonnumericFormatting(newValue: objcbool); message 'setAllowsNonnumericFormatting:';
    function allowsNonnumericFormatting: objcbool; message 'allowsNonnumericFormatting';
    procedure setIncludesUnit(newValue: objcbool); message 'setIncludesUnit:';
    function includesUnit: objcbool; message 'includesUnit';
    procedure setIncludesCount(newValue: objcbool); message 'setIncludesCount:';
    function includesCount: objcbool; message 'includesCount';
    procedure setIncludesActualByteCount(newValue: objcbool); message 'setIncludesActualByteCount:';
    function includesActualByteCount: objcbool; message 'includesActualByteCount';
    procedure setAdaptive(newValue: objcbool); message 'setAdaptive:';
    function isAdaptive: objcbool; message 'isAdaptive';
    procedure setZeroPadsFractionDigits(newValue: objcbool); message 'setZeroPadsFractionDigits:';
    function zeroPadsFractionDigits: objcbool; message 'zeroPadsFractionDigits';
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function formattingContext: NSFormattingContext; message 'formattingContext'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

