{ Parsed from Foundation.framework NSDateFormatter.h }

{ Types from NSDateFormatter }
{$ifdef TYPES}

type
  NSDateFormatterStyle = NSUInteger;
type
  NSDateFormatterStylePtr = ^NSDateFormatterStyle;

const
  NSDateFormatterNoStyle = kCFDateFormatterNoStyle;
  NSDateFormatterShortStyle = kCFDateFormatterShortStyle;
  NSDateFormatterMediumStyle = kCFDateFormatterMediumStyle;
  NSDateFormatterLongStyle = kCFDateFormatterLongStyle;
  NSDateFormatterFullStyle = kCFDateFormatterFullStyle;

type
  NSDateFormatterBehavior = NSUInteger;
type
  NSDateFormatterBehaviorPtr = ^NSDateFormatterBehavior;

const
  NSDateFormatterBehaviorDefault = 0;
  {$if defined(TARGET_OS_OSX)}
  NSDateFormatterBehavior10_0 = 1000;
  {$endif}
  NSDateFormatterBehavior10_4 = 1040;
{$endif}


{$ifdef TYPES}
type
  NSDateFormatterPtr = ^NSDateFormatter;
{$endif}

{$ifdef CLASSES}

type
  NSDateFormatter = objcclass external (NSFormatter)
  private
    _attributes: NSMutableDictionary;
    _formatter: CFDateFormatterRef;
    _counter: NSUInteger;
  public
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function formattingContext: NSFormattingContext; message 'formattingContext'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function getObjectValue_forString_range_error (obj: idPtr; string_: NSString; rangep: NSRangePtr; error: NSErrorPtr): objcbool; message 'getObjectValue:forString:range:error:';
    function stringFromDate (date: NSDate): NSString; message 'stringFromDate:';
    function dateFromString (string_: NSString): NSDate; message 'dateFromString:';
    class function localizedStringFromDate_dateStyle_timeStyle (date: NSDate; dstyle: NSDateFormatterStyle; tstyle: NSDateFormatterStyle): NSString; message 'localizedStringFromDate:dateStyle:timeStyle:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class function dateFormatFromTemplate_options_locale (tmplate: NSString; opts: NSUInteger; locale: NSLocale): NSString; message 'dateFormatFromTemplate:options:locale:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class procedure setDefaultFormatterBehavior(newValue: NSDateFormatterBehavior); message 'setDefaultFormatterBehavior:';
    class function defaultFormatterBehavior: NSDateFormatterBehavior; message 'defaultFormatterBehavior';
    procedure setLocalizedDateFormatFromTemplate (dateFormatTemplate: NSString); message 'setLocalizedDateFormatFromTemplate:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure setDateFormat(newValue: NSString); message 'setDateFormat:';
    function dateFormat: NSString; message 'dateFormat';
    procedure setDateStyle(newValue: NSDateFormatterStyle); message 'setDateStyle:';
    function dateStyle: NSDateFormatterStyle; message 'dateStyle';
    procedure setTimeStyle(newValue: NSDateFormatterStyle); message 'setTimeStyle:';
    function timeStyle: NSDateFormatterStyle; message 'timeStyle';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setGeneratesCalendarDates(newValue: objcbool); message 'setGeneratesCalendarDates:';
    function generatesCalendarDates: objcbool; message 'generatesCalendarDates';
    procedure setFormatterBehavior(newValue: NSDateFormatterBehavior); message 'setFormatterBehavior:';
    function formatterBehavior: NSDateFormatterBehavior; message 'formatterBehavior';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:';
    function calendar: NSCalendar; message 'calendar';
    procedure setLenient(newValue: objcbool); message 'setLenient:';
    function isLenient: objcbool; message 'isLenient';
    procedure setTwoDigitStartDate(newValue: NSDate); message 'setTwoDigitStartDate:';
    function twoDigitStartDate: NSDate; message 'twoDigitStartDate';
    procedure setDefaultDate(newValue: NSDate); message 'setDefaultDate:';
    function defaultDate: NSDate; message 'defaultDate';
    procedure setEraSymbols(newValue: NSArray); message 'setEraSymbols:';
    function eraSymbols: NSArray; message 'eraSymbols';
    procedure setMonthSymbols(newValue: NSArray); message 'setMonthSymbols:';
    function monthSymbols: NSArray; message 'monthSymbols';
    procedure setShortMonthSymbols(newValue: NSArray); message 'setShortMonthSymbols:';
    function shortMonthSymbols: NSArray; message 'shortMonthSymbols';
    procedure setWeekdaySymbols(newValue: NSArray); message 'setWeekdaySymbols:';
    function weekdaySymbols: NSArray; message 'weekdaySymbols';
    procedure setShortWeekdaySymbols(newValue: NSArray); message 'setShortWeekdaySymbols:';
    function shortWeekdaySymbols: NSArray; message 'shortWeekdaySymbols';
    procedure setAMSymbol(newValue: NSString); message 'setAMSymbol:';
    function AMSymbol: NSString; message 'AMSymbol';
    procedure setPMSymbol(newValue: NSString); message 'setPMSymbol:';
    function PMSymbol: NSString; message 'PMSymbol';
    procedure setLongEraSymbols(newValue: NSArray); message 'setLongEraSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function longEraSymbols: NSArray; message 'longEraSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setVeryShortMonthSymbols(newValue: NSArray); message 'setVeryShortMonthSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function veryShortMonthSymbols: NSArray; message 'veryShortMonthSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setStandaloneMonthSymbols(newValue: NSArray); message 'setStandaloneMonthSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function standaloneMonthSymbols: NSArray; message 'standaloneMonthSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setShortStandaloneMonthSymbols(newValue: NSArray); message 'setShortStandaloneMonthSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function shortStandaloneMonthSymbols: NSArray; message 'shortStandaloneMonthSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setVeryShortStandaloneMonthSymbols(newValue: NSArray); message 'setVeryShortStandaloneMonthSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function veryShortStandaloneMonthSymbols: NSArray; message 'veryShortStandaloneMonthSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setVeryShortWeekdaySymbols(newValue: NSArray); message 'setVeryShortWeekdaySymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function veryShortWeekdaySymbols: NSArray; message 'veryShortWeekdaySymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setStandaloneWeekdaySymbols(newValue: NSArray); message 'setStandaloneWeekdaySymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function standaloneWeekdaySymbols: NSArray; message 'standaloneWeekdaySymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setShortStandaloneWeekdaySymbols(newValue: NSArray); message 'setShortStandaloneWeekdaySymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function shortStandaloneWeekdaySymbols: NSArray; message 'shortStandaloneWeekdaySymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setVeryShortStandaloneWeekdaySymbols(newValue: NSArray); message 'setVeryShortStandaloneWeekdaySymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function veryShortStandaloneWeekdaySymbols: NSArray; message 'veryShortStandaloneWeekdaySymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setQuarterSymbols(newValue: NSArray); message 'setQuarterSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function quarterSymbols: NSArray; message 'quarterSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setShortQuarterSymbols(newValue: NSArray); message 'setShortQuarterSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function shortQuarterSymbols: NSArray; message 'shortQuarterSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setStandaloneQuarterSymbols(newValue: NSArray); message 'setStandaloneQuarterSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function standaloneQuarterSymbols: NSArray; message 'standaloneQuarterSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setShortStandaloneQuarterSymbols(newValue: NSArray); message 'setShortStandaloneQuarterSymbols:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function shortStandaloneQuarterSymbols: NSArray; message 'shortStandaloneQuarterSymbols'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setGregorianStartDate(newValue: NSDate); message 'setGregorianStartDate:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function gregorianStartDate: NSDate; message 'gregorianStartDate'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setDoesRelativeDateFormatting(newValue: objcbool); message 'setDoesRelativeDateFormatting:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function doesRelativeDateFormatting: objcbool; message 'doesRelativeDateFormatting'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSDateFormatterCompatibility = objccategory external (NSDateFormatter)
    function initWithDateFormat_allowNaturalLanguage (format: NSString; flag: objcbool): id; message 'initWithDateFormat:allowNaturalLanguage:'; deprecated 'Create an NSDateFormatter with `init` and set the dateFormat property instead.';
    function allowsNaturalLanguage: objcbool; message 'allowsNaturalLanguage'; deprecated 'There is no replacement';
  end;
{$endif}

{$endif}
