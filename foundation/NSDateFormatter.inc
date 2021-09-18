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
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:'; { available in macos , ios , watchos , tvos  }
    function formattingContext: NSFormattingContext; message 'formattingContext'; { available in macos , ios , watchos , tvos  }
    function getObjectValue_forString_range_error (obj: idPtr; string_: NSString; rangep: NSRangePtr; error: NSErrorPtr): objcbool; message 'getObjectValue:forString:range:error:';
    function stringFromDate (date: NSDate): NSString; message 'stringFromDate:';
    function dateFromString (string_: NSString): NSDate; message 'dateFromString:';
    class function localizedStringFromDate_dateStyle_timeStyle (date: NSDate; dstyle: NSDateFormatterStyle; tstyle: NSDateFormatterStyle): NSString; message 'localizedStringFromDate:dateStyle:timeStyle:'; { available in macos , ios , watchos , tvos  }
    class function dateFormatFromTemplate_options_locale (tmplate: NSString; opts: NSUInteger; locale: NSLocale): NSString; message 'dateFormatFromTemplate:options:locale:'; { available in macos , ios , watchos , tvos  }
    class procedure setDefaultFormatterBehavior(newValue: NSDateFormatterBehavior); message 'setDefaultFormatterBehavior:';
    class function defaultFormatterBehavior: NSDateFormatterBehavior; message 'defaultFormatterBehavior';
    procedure setLocalizedDateFormatFromTemplate (dateFormatTemplate: NSString); message 'setLocalizedDateFormatFromTemplate:'; { available in macos , ios , watchos , tvos  }
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
    procedure setLongEraSymbols(newValue: NSArray); message 'setLongEraSymbols:'; { available in macos , ios , watchos , tvos  }
    function longEraSymbols: NSArray; message 'longEraSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setVeryShortMonthSymbols(newValue: NSArray); message 'setVeryShortMonthSymbols:'; { available in macos , ios , watchos , tvos  }
    function veryShortMonthSymbols: NSArray; message 'veryShortMonthSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setStandaloneMonthSymbols(newValue: NSArray); message 'setStandaloneMonthSymbols:'; { available in macos , ios , watchos , tvos  }
    function standaloneMonthSymbols: NSArray; message 'standaloneMonthSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setShortStandaloneMonthSymbols(newValue: NSArray); message 'setShortStandaloneMonthSymbols:'; { available in macos , ios , watchos , tvos  }
    function shortStandaloneMonthSymbols: NSArray; message 'shortStandaloneMonthSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setVeryShortStandaloneMonthSymbols(newValue: NSArray); message 'setVeryShortStandaloneMonthSymbols:'; { available in macos , ios , watchos , tvos  }
    function veryShortStandaloneMonthSymbols: NSArray; message 'veryShortStandaloneMonthSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setVeryShortWeekdaySymbols(newValue: NSArray); message 'setVeryShortWeekdaySymbols:'; { available in macos , ios , watchos , tvos  }
    function veryShortWeekdaySymbols: NSArray; message 'veryShortWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    procedure setStandaloneWeekdaySymbols(newValue: NSArray); message 'setStandaloneWeekdaySymbols:'; { available in macos , ios , watchos , tvos  }
    function standaloneWeekdaySymbols: NSArray; message 'standaloneWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    procedure setShortStandaloneWeekdaySymbols(newValue: NSArray); message 'setShortStandaloneWeekdaySymbols:'; { available in macos , ios , watchos , tvos  }
    function shortStandaloneWeekdaySymbols: NSArray; message 'shortStandaloneWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    procedure setVeryShortStandaloneWeekdaySymbols(newValue: NSArray); message 'setVeryShortStandaloneWeekdaySymbols:'; { available in macos , ios , watchos , tvos  }
    function veryShortStandaloneWeekdaySymbols: NSArray; message 'veryShortStandaloneWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    procedure setQuarterSymbols(newValue: NSArray); message 'setQuarterSymbols:'; { available in macos , ios , watchos , tvos  }
    function quarterSymbols: NSArray; message 'quarterSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setShortQuarterSymbols(newValue: NSArray); message 'setShortQuarterSymbols:'; { available in macos , ios , watchos , tvos  }
    function shortQuarterSymbols: NSArray; message 'shortQuarterSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setStandaloneQuarterSymbols(newValue: NSArray); message 'setStandaloneQuarterSymbols:'; { available in macos , ios , watchos , tvos  }
    function standaloneQuarterSymbols: NSArray; message 'standaloneQuarterSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setShortStandaloneQuarterSymbols(newValue: NSArray); message 'setShortStandaloneQuarterSymbols:'; { available in macos , ios , watchos , tvos  }
    function shortStandaloneQuarterSymbols: NSArray; message 'shortStandaloneQuarterSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setGregorianStartDate(newValue: NSDate); message 'setGregorianStartDate:'; { available in macos , ios , watchos , tvos  }
    function gregorianStartDate: NSDate; message 'gregorianStartDate'; { available in macos , ios , watchos , tvos  }
    procedure setDoesRelativeDateFormatting(newValue: objcbool); message 'setDoesRelativeDateFormatting:'; { available in macos , ios , watchos , tvos  }
    function doesRelativeDateFormatting: objcbool; message 'doesRelativeDateFormatting'; { available in macos , ios , watchos , tvos  }
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
