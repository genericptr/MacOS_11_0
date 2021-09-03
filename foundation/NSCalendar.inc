{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSCalendar.h }

{$ifdef CALLBACKS}
type
  NSCalendarEnumerateDatesStartingAfterDateCallback = reference to function (date: NSDate; exactMatch: objcbool; stop: objcboolPtr): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSCalendarPtr = ^NSCalendar;
  NSDateComponentsPtr = ^NSDateComponents;
{$endif}

{$ifdef TYPES}
type
  NSCalendarIdentifier = NSString;
  NSCalendarIdentifierPtr = ^NSCalendarIdentifier;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCalendarIdentifierGregorian: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierBuddhist: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierChinese: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierCoptic: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierEthiopicAmeteMihret: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierEthiopicAmeteAlem: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierHebrew: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierISO8601: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierIndian: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierIslamic: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierIslamicCivil: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierJapanese: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierPersian: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierRepublicOfChina: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierIslamicTabular: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCalendarIdentifierIslamicUmmAlQura: NSCalendarIdentifier { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSCalendarUnit = NSUInteger;
  NSCalendarUnitPtr = ^NSCalendarUnit;

const
  NSCalendarUnitEra = kCFCalendarUnitEra;
  NSCalendarUnitYear = kCFCalendarUnitYear;
  NSCalendarUnitMonth = kCFCalendarUnitMonth;
  NSCalendarUnitDay = kCFCalendarUnitDay;
  NSCalendarUnitHour = kCFCalendarUnitHour;
  NSCalendarUnitMinute = kCFCalendarUnitMinute;
  NSCalendarUnitSecond = kCFCalendarUnitSecond;
  NSCalendarUnitWeekday = kCFCalendarUnitWeekday;
  NSCalendarUnitWeekdayOrdinal = kCFCalendarUnitWeekdayOrdinal;
  NSCalendarUnitQuarter = kCFCalendarUnitQuarter { available in macos , ios , watchos , tvos  };
  NSCalendarUnitWeekOfMonth = kCFCalendarUnitWeekOfMonth { available in macos , ios , watchos , tvos  };
  NSCalendarUnitWeekOfYear = kCFCalendarUnitWeekOfYear { available in macos , ios , watchos , tvos  };
  NSCalendarUnitYearForWeekOfYear = kCFCalendarUnitYearForWeekOfYear { available in macos , ios , watchos , tvos  };
  NSCalendarUnitNanosecond = 1 shl 15 { available in macos , ios , watchos , tvos  };
  NSCalendarUnitCalendar = 1 shl 20 { available in macos , ios , watchos , tvos  };
  NSCalendarUnitTimeZone = 1 shl 21 { available in macos , ios , watchos , tvos  };
  NSEraCalendarUnit = NSCalendarUnitEra deprecated 'replace with NSCalendarUnitEra';
  NSYearCalendarUnit = NSCalendarUnitYear deprecated 'replace with NSCalendarUnitYear';
  NSMonthCalendarUnit = NSCalendarUnitMonth deprecated 'replace with NSCalendarUnitMonth';
  NSDayCalendarUnit = NSCalendarUnitDay deprecated 'replace with NSCalendarUnitDay';
  NSHourCalendarUnit = NSCalendarUnitHour deprecated 'replace with NSCalendarUnitHour';
  NSMinuteCalendarUnit = NSCalendarUnitMinute deprecated 'replace with NSCalendarUnitMinute';
  NSSecondCalendarUnit = NSCalendarUnitSecond deprecated 'replace with NSCalendarUnitSecond';
  NSWeekCalendarUnit = kCFCalendarUnitWeek deprecated 'NSCalendarUnitWeekOfMonth or NSCalendarUnitWeekOfYear, depending on which you mean';
  NSWeekdayCalendarUnit = NSCalendarUnitWeekday deprecated 'replace with NSCalendarUnitWeekday';
  NSWeekdayOrdinalCalendarUnit = NSCalendarUnitWeekdayOrdinal deprecated 'replace with NSCalendarUnitWeekdayOrdinal';
  NSQuarterCalendarUnit = NSCalendarUnitQuarter deprecated 'replace with NSCalendarUnitQuarter';
  NSWeekOfMonthCalendarUnit = NSCalendarUnitWeekOfMonth deprecated 'replace with NSCalendarUnitWeekOfMonth';
  NSWeekOfYearCalendarUnit = NSCalendarUnitWeekOfYear deprecated 'replace with NSCalendarUnitWeekOfYear';
  NSYearForWeekOfYearCalendarUnit = NSCalendarUnitYearForWeekOfYear deprecated 'replace with NSCalendarUnitYearForWeekOfYear';
  NSCalendarCalendarUnit = NSCalendarUnitCalendar deprecated 'replace with NSCalendarUnitCalendar';
  NSTimeZoneCalendarUnit = NSCalendarUnitTimeZone deprecated 'replace with NSCalendarUnitTimeZone';

type
  NSCalendarOptions = NSUInteger;
  NSCalendarOptionsPtr = ^NSCalendarOptions;

const
  NSCalendarWrapComponents = 1 shl 0;
  NSCalendarMatchStrictly = 1 shl 1 { available in macos , ios , watchos , tvos  };
  NSCalendarSearchBackwards = 1 shl 2 { available in macos , ios , watchos , tvos  };
  NSCalendarMatchPreviousTimePreservingSmallerUnits = 1 shl 8 { available in macos , ios , watchos , tvos  };
  NSCalendarMatchNextTimePreservingSmallerUnits = 1 shl 9 { available in macos , ios , watchos , tvos  };
  NSCalendarMatchNextTime = 1 shl 10 { available in macos , ios , watchos , tvos  };
  NSCalendarMatchFirst = 1 shl 12 { available in macos , ios , watchos , tvos  };
  NSCalendarMatchLast = 1 shl 13 { available in macos , ios , watchos , tvos  };
const
  NSWrapCalendarComponents = NSCalendarWrapComponents deprecated 'replace with NSCalendarWrapComponents';
{$endif}

{$ifdef CLASSES}

type
  NSCalendar = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function currentCalendar: NSCalendar; message 'currentCalendar';
    class function autoupdatingCurrentCalendar: NSCalendar; message 'autoupdatingCurrentCalendar'; { available in macos , ios , watchos , tvos  }
    class function calendarWithIdentifier (calendarIdentifierConstant: NSCalendarIdentifier): NSCalendar; message 'calendarWithIdentifier:'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithCalendarIdentifier (ident: NSCalendarIdentifier): id; message 'initWithCalendarIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function calendarIdentifier: NSCalendarIdentifier; message 'calendarIdentifier';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setFirstWeekday(newValue: NSUInteger); message 'setFirstWeekday:';
    function firstWeekday: NSUInteger; message 'firstWeekday';
    procedure setMinimumDaysInFirstWeek(newValue: NSUInteger); message 'setMinimumDaysInFirstWeek:';
    function minimumDaysInFirstWeek: NSUInteger; message 'minimumDaysInFirstWeek';
    function eraSymbols: NSArray; message 'eraSymbols'; { available in macos , ios , watchos , tvos  }
    function longEraSymbols: NSArray; message 'longEraSymbols'; { available in macos , ios , watchos , tvos  }
    function monthSymbols: NSArray; message 'monthSymbols'; { available in macos , ios , watchos , tvos  }
    function shortMonthSymbols: NSArray; message 'shortMonthSymbols'; { available in macos , ios , watchos , tvos  }
    function veryShortMonthSymbols: NSArray; message 'veryShortMonthSymbols'; { available in macos , ios , watchos , tvos  }
    function standaloneMonthSymbols: NSArray; message 'standaloneMonthSymbols'; { available in macos , ios , watchos , tvos  }
    function shortStandaloneMonthSymbols: NSArray; message 'shortStandaloneMonthSymbols'; { available in macos , ios , watchos , tvos  }
    function veryShortStandaloneMonthSymbols: NSArray; message 'veryShortStandaloneMonthSymbols'; { available in macos , ios , watchos , tvos  }
    function weekdaySymbols: NSArray; message 'weekdaySymbols'; { available in macos , ios , watchos , tvos  }
    function shortWeekdaySymbols: NSArray; message 'shortWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    function veryShortWeekdaySymbols: NSArray; message 'veryShortWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    function standaloneWeekdaySymbols: NSArray; message 'standaloneWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    function shortStandaloneWeekdaySymbols: NSArray; message 'shortStandaloneWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    function veryShortStandaloneWeekdaySymbols: NSArray; message 'veryShortStandaloneWeekdaySymbols'; { available in macos , ios , watchos , tvos  }
    function quarterSymbols: NSArray; message 'quarterSymbols'; { available in macos , ios , watchos , tvos  }
    function shortQuarterSymbols: NSArray; message 'shortQuarterSymbols'; { available in macos , ios , watchos , tvos  }
    function standaloneQuarterSymbols: NSArray; message 'standaloneQuarterSymbols'; { available in macos , ios , watchos , tvos  }
    function shortStandaloneQuarterSymbols: NSArray; message 'shortStandaloneQuarterSymbols'; { available in macos , ios , watchos , tvos  }
    function AMSymbol: NSString; message 'AMSymbol'; { available in macos , ios , watchos , tvos  }
    function PMSymbol: NSString; message 'PMSymbol'; { available in macos , ios , watchos , tvos  }
    function minimumRangeOfUnit (unit_: NSCalendarUnit): NSRange; message 'minimumRangeOfUnit:';
    function maximumRangeOfUnit (unit_: NSCalendarUnit): NSRange; message 'maximumRangeOfUnit:';
    function rangeOfUnit_inUnit_forDate (smaller: NSCalendarUnit; larger: NSCalendarUnit; date: NSDate): NSRange; message 'rangeOfUnit:inUnit:forDate:';
    function ordinalityOfUnit_inUnit_forDate (smaller: NSCalendarUnit; larger: NSCalendarUnit; date: NSDate): NSUInteger; message 'ordinalityOfUnit:inUnit:forDate:';
    function rangeOfUnit_startDate_interval_forDate (unit_: NSCalendarUnit; datep: NSDatePtr; tip: NSTimeIntervalPtr; date: NSDate): objcbool; message 'rangeOfUnit:startDate:interval:forDate:'; { available in macos , ios , watchos , tvos  }
    function dateFromComponents (comps: NSDateComponents): NSDate; message 'dateFromComponents:';
    function components_fromDate (unitFlags: NSCalendarUnit; date: NSDate): NSDateComponents; message 'components:fromDate:';
    function dateByAddingComponents_toDate_options (comps: NSDateComponents; date: NSDate; opts: NSCalendarOptions): NSDate; message 'dateByAddingComponents:toDate:options:';
    function components_fromDate_toDate_options (unitFlags: NSCalendarUnit; startingDate: NSDate; resultDate: NSDate; opts: NSCalendarOptions): NSDateComponents; message 'components:fromDate:toDate:options:';
    procedure getEra_year_month_day_fromDate (eraValuePointer: NSIntegerPtr; yearValuePointer: NSIntegerPtr; monthValuePointer: NSIntegerPtr; dayValuePointer: NSIntegerPtr; date: NSDate); message 'getEra:year:month:day:fromDate:'; { available in macos , ios , watchos , tvos  }
    procedure getEra_yearForWeekOfYear_weekOfYear_weekday_fromDate (eraValuePointer: NSIntegerPtr; yearValuePointer: NSIntegerPtr; weekValuePointer: NSIntegerPtr; weekdayValuePointer: NSIntegerPtr; date: NSDate); message 'getEra:yearForWeekOfYear:weekOfYear:weekday:fromDate:'; { available in macos , ios , watchos , tvos  }
    procedure getHour_minute_second_nanosecond_fromDate (hourValuePointer: NSIntegerPtr; minuteValuePointer: NSIntegerPtr; secondValuePointer: NSIntegerPtr; nanosecondValuePointer: NSIntegerPtr; date: NSDate); message 'getHour:minute:second:nanosecond:fromDate:'; { available in macos , ios , watchos , tvos  }
    function component_fromDate (unit_: NSCalendarUnit; date: NSDate): NSInteger; message 'component:fromDate:'; { available in macos , ios , watchos , tvos  }
    function dateWithEra_year_month_day_hour_minute_second_nanosecond (eraValue: NSInteger; yearValue: NSInteger; monthValue: NSInteger; dayValue: NSInteger; hourValue: NSInteger; minuteValue: NSInteger; secondValue: NSInteger; nanosecondValue: NSInteger): NSDate; message 'dateWithEra:year:month:day:hour:minute:second:nanosecond:'; { available in macos , ios , watchos , tvos  }
    function dateWithEra_yearForWeekOfYear_weekOfYear_weekday_hour_minute_second_nanosecond (eraValue: NSInteger; yearValue: NSInteger; weekValue: NSInteger; weekdayValue: NSInteger; hourValue: NSInteger; minuteValue: NSInteger; secondValue: NSInteger; nanosecondValue: NSInteger): NSDate; message 'dateWithEra:yearForWeekOfYear:weekOfYear:weekday:hour:minute:second:nanosecond:'; { available in macos , ios , watchos , tvos  }
    function startOfDayForDate (date: NSDate): NSDate; message 'startOfDayForDate:'; { available in macos , ios , watchos , tvos  }
    function componentsInTimeZone_fromDate (timezone_: NSTimeZone; date: NSDate): NSDateComponents; message 'componentsInTimeZone:fromDate:'; { available in macos , ios , watchos , tvos  }
    function compareDate_toDate_toUnitGranularity (date1: NSDate; date2: NSDate; unit_: NSCalendarUnit): NSComparisonResult; message 'compareDate:toDate:toUnitGranularity:'; { available in macos , ios , watchos , tvos  }
    function isDate_equalToDate_toUnitGranularity (date1: NSDate; date2: NSDate; unit_: NSCalendarUnit): objcbool; message 'isDate:equalToDate:toUnitGranularity:'; { available in macos , ios , watchos , tvos  }
    function isDate_inSameDayAsDate (date1: NSDate; date2: NSDate): objcbool; message 'isDate:inSameDayAsDate:'; { available in macos , ios , watchos , tvos  }
    function isDateInToday (date: NSDate): objcbool; message 'isDateInToday:'; { available in macos , ios , watchos , tvos  }
    function isDateInYesterday (date: NSDate): objcbool; message 'isDateInYesterday:'; { available in macos , ios , watchos , tvos  }
    function isDateInTomorrow (date: NSDate): objcbool; message 'isDateInTomorrow:'; { available in macos , ios , watchos , tvos  }
    function isDateInWeekend (date: NSDate): objcbool; message 'isDateInWeekend:'; { available in macos , ios , watchos , tvos  }
    function rangeOfWeekendStartDate_interval_containingDate (datep: NSDatePtr; tip: NSTimeIntervalPtr; date: NSDate): objcbool; message 'rangeOfWeekendStartDate:interval:containingDate:'; { available in macos , ios , watchos , tvos  }
    function nextWeekendStartDate_interval_options_afterDate (datep: NSDatePtr; tip: NSTimeIntervalPtr; options: NSCalendarOptions; date: NSDate): objcbool; message 'nextWeekendStartDate:interval:options:afterDate:'; { available in macos , ios , watchos , tvos  }
    function components_fromDateComponents_toDateComponents_options (unitFlags: NSCalendarUnit; startingDateComp: NSDateComponents; resultDateComp: NSDateComponents; options: NSCalendarOptions): NSDateComponents; message 'components:fromDateComponents:toDateComponents:options:'; { available in macos , ios , watchos , tvos  }
    function dateByAddingUnit_value_toDate_options (unit_: NSCalendarUnit; value: NSInteger; date: NSDate; options: NSCalendarOptions): NSDate; message 'dateByAddingUnit:value:toDate:options:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateDatesStartingAfterDate_matchingComponents_options_usingBlock (start: NSDate; comps: NSDateComponents; opts: NSCalendarOptions; block: NSCalendarEnumerateDatesStartingAfterDateCallback); message 'enumerateDatesStartingAfterDate:matchingComponents:options:usingBlock:'; { available in macos , ios , watchos , tvos  }
    function nextDateAfterDate_matchingComponents_options (date: NSDate; comps: NSDateComponents; options: NSCalendarOptions): NSDate; message 'nextDateAfterDate:matchingComponents:options:'; { available in macos , ios , watchos , tvos  }
    function nextDateAfterDate_matchingUnit_value_options (date: NSDate; unit_: NSCalendarUnit; value: NSInteger; options: NSCalendarOptions): NSDate; message 'nextDateAfterDate:matchingUnit:value:options:'; { available in macos , ios , watchos , tvos  }
    function nextDateAfterDate_matchingHour_minute_second_options (date: NSDate; hourValue: NSInteger; minuteValue: NSInteger; secondValue: NSInteger; options: NSCalendarOptions): NSDate; message 'nextDateAfterDate:matchingHour:minute:second:options:'; { available in macos , ios , watchos , tvos  }
    function dateBySettingUnit_value_ofDate_options (unit_: NSCalendarUnit; v: NSInteger; date: NSDate; opts: NSCalendarOptions): NSDate; message 'dateBySettingUnit:value:ofDate:options:'; { available in macos , ios , watchos , tvos  }
    function dateBySettingHour_minute_second_ofDate_options (h: NSInteger; m: NSInteger; s: NSInteger; date: NSDate; opts: NSCalendarOptions): NSDate; message 'dateBySettingHour:minute:second:ofDate:options:'; { available in macos , ios , watchos , tvos  }
    function date_matchesComponents (date: NSDate; components: NSDateComponents): objcbool; message 'date:matchesComponents:'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCalendarDayChangedNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDateComponents = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:'; { available in macos , ios , watchos , tvos  }
    function calendar: NSCalendar; message 'calendar'; { available in macos , ios , watchos , tvos  }
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:'; { available in macos , ios , watchos , tvos  }
    function timeZone: NSTimeZone; message 'timeZone'; { available in macos , ios , watchos , tvos  }
    procedure setEra(newValue: NSInteger); message 'setEra:';
    function era: NSInteger; message 'era';
    procedure setYear(newValue: NSInteger); message 'setYear:';
    function year: NSInteger; message 'year';
    procedure setMonth(newValue: NSInteger); message 'setMonth:';
    function month: NSInteger; message 'month';
    procedure setDay(newValue: NSInteger); message 'setDay:';
    function day: NSInteger; message 'day';
    procedure setHour(newValue: NSInteger); message 'setHour:';
    function hour: NSInteger; message 'hour';
    procedure setMinute(newValue: NSInteger); message 'setMinute:';
    function minute: NSInteger; message 'minute';
    procedure setSecond(newValue: NSInteger); message 'setSecond:';
    function second: NSInteger; message 'second';
    procedure setNanosecond(newValue: NSInteger); message 'setNanosecond:'; { available in macos , ios , watchos , tvos  }
    function nanosecond: NSInteger; message 'nanosecond'; { available in macos , ios , watchos , tvos  }
    procedure setWeekday(newValue: NSInteger); message 'setWeekday:';
    function weekday: NSInteger; message 'weekday';
    procedure setWeekdayOrdinal(newValue: NSInteger); message 'setWeekdayOrdinal:';
    function weekdayOrdinal: NSInteger; message 'weekdayOrdinal';
    procedure setQuarter(newValue: NSInteger); message 'setQuarter:'; { available in macos , ios , watchos , tvos  }
    function quarter: NSInteger; message 'quarter'; { available in macos , ios , watchos , tvos  }
    procedure setWeekOfMonth(newValue: NSInteger); message 'setWeekOfMonth:'; { available in macos , ios , watchos , tvos  }
    function weekOfMonth: NSInteger; message 'weekOfMonth'; { available in macos , ios , watchos , tvos  }
    procedure setWeekOfYear(newValue: NSInteger); message 'setWeekOfYear:'; { available in macos , ios , watchos , tvos  }
    function weekOfYear: NSInteger; message 'weekOfYear'; { available in macos , ios , watchos , tvos  }
    procedure setYearForWeekOfYear(newValue: NSInteger); message 'setYearForWeekOfYear:'; { available in macos , ios , watchos , tvos  }
    function yearForWeekOfYear: NSInteger; message 'yearForWeekOfYear'; { available in macos , ios , watchos , tvos  }
    procedure setLeapMonth(newValue: objcbool); message 'setLeapMonth:'; { available in macos , ios , watchos , tvos  }
    function isLeapMonth: objcbool; message 'isLeapMonth'; { available in macos , ios , watchos , tvos  }
    function date: NSDate; message 'date'; { available in macos , ios , watchos , tvos  }
    function week: NSInteger; message 'week'; deprecated 'Use -weekOfMonth or -weekOfYear, depending on which you mean';
    procedure setWeek (v: NSInteger); message 'setWeek:'; deprecated 'Use -setWeekOfMonth: or -setWeekOfYear:, depending on which you mean';
    procedure setValue_forComponent (value: NSInteger; unit_: NSCalendarUnit); message 'setValue:forComponent:'; { available in macos , ios , watchos , tvos  }
    function valueForComponent (unit_: NSCalendarUnit): NSInteger; message 'valueForComponent:'; { available in macos , ios , watchos , tvos  }
    function isValidDate: objcbool; message 'isValidDate'; { available in macos , ios , watchos , tvos  }
    function isValidDateInCalendar (calendar_: NSCalendar): objcbool; message 'isValidDateInCalendar:'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

