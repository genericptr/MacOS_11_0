{ Parsed from Foundation.framework NSCalendar.h }

{$ifdef CALLBACKS}
type
  NSCalendarEnumerateDatesStartingAfterDateCallback = reference to procedure (date: NSDate; exactMatch: objcbool; stop: objcboolPtr); cblock; cdecl;
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
  NSCalendarIdentifierGregorian: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierBuddhist: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierChinese: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierCoptic: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierEthiopicAmeteMihret: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierEthiopicAmeteAlem: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierHebrew: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierISO8601: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierIndian: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierIslamic: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierIslamicCivil: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierJapanese: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierPersian: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierRepublicOfChina: NSCalendarIdentifier { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierIslamicTabular: NSCalendarIdentifier { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSCalendarIdentifierIslamicUmmAlQura: NSCalendarIdentifier { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
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
  NSCalendarUnitQuarter = kCFCalendarUnitQuarter { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 };
  NSCalendarUnitWeekOfMonth = kCFCalendarUnitWeekOfMonth { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 };
  NSCalendarUnitWeekOfYear = kCFCalendarUnitWeekOfYear { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 };
  NSCalendarUnitYearForWeekOfYear = kCFCalendarUnitYearForWeekOfYear { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 };
  NSCalendarUnitNanosecond = 1 shl 15 { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 };
  NSCalendarUnitCalendar = 1 shl 20 { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 };
  NSCalendarUnitTimeZone = 1 shl 21 { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 };
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
  NSCalendarMatchStrictly = 1 shl 1 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
  NSCalendarSearchBackwards = 1 shl 2 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
  NSCalendarMatchPreviousTimePreservingSmallerUnits = 1 shl 8 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
  NSCalendarMatchNextTimePreservingSmallerUnits = 1 shl 9 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
  NSCalendarMatchNextTime = 1 shl 10 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
  NSCalendarMatchFirst = 1 shl 12 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
  NSCalendarMatchLast = 1 shl 13 { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 };
const
  NSWrapCalendarComponents = NSCalendarWrapComponents deprecated 'replace with NSCalendarWrapComponents';
{$endif}

{$ifdef CLASSES}

type
  NSCalendar = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function currentCalendar: NSCalendar; message 'currentCalendar';
    class function autoupdatingCurrentCalendar: NSCalendar; message 'autoupdatingCurrentCalendar'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function calendarWithIdentifier (calendarIdentifierConstant: NSCalendarIdentifier): NSCalendar; message 'calendarWithIdentifier:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
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
    function eraSymbols: NSArray; message 'eraSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function longEraSymbols: NSArray; message 'longEraSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function monthSymbols: NSArray; message 'monthSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function shortMonthSymbols: NSArray; message 'shortMonthSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function veryShortMonthSymbols: NSArray; message 'veryShortMonthSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function standaloneMonthSymbols: NSArray; message 'standaloneMonthSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function shortStandaloneMonthSymbols: NSArray; message 'shortStandaloneMonthSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function veryShortStandaloneMonthSymbols: NSArray; message 'veryShortStandaloneMonthSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function weekdaySymbols: NSArray; message 'weekdaySymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function shortWeekdaySymbols: NSArray; message 'shortWeekdaySymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function veryShortWeekdaySymbols: NSArray; message 'veryShortWeekdaySymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function standaloneWeekdaySymbols: NSArray; message 'standaloneWeekdaySymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function shortStandaloneWeekdaySymbols: NSArray; message 'shortStandaloneWeekdaySymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function veryShortStandaloneWeekdaySymbols: NSArray; message 'veryShortStandaloneWeekdaySymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function quarterSymbols: NSArray; message 'quarterSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function shortQuarterSymbols: NSArray; message 'shortQuarterSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function standaloneQuarterSymbols: NSArray; message 'standaloneQuarterSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function shortStandaloneQuarterSymbols: NSArray; message 'shortStandaloneQuarterSymbols'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function AMSymbol: NSString; message 'AMSymbol'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function PMSymbol: NSString; message 'PMSymbol'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function minimumRangeOfUnit (unit_: NSCalendarUnit): NSRange; message 'minimumRangeOfUnit:';
    function maximumRangeOfUnit (unit_: NSCalendarUnit): NSRange; message 'maximumRangeOfUnit:';
    function rangeOfUnit_inUnit_forDate (smaller: NSCalendarUnit; larger: NSCalendarUnit; date: NSDate): NSRange; message 'rangeOfUnit:inUnit:forDate:';
    function ordinalityOfUnit_inUnit_forDate (smaller: NSCalendarUnit; larger: NSCalendarUnit; date: NSDate): NSUInteger; message 'ordinalityOfUnit:inUnit:forDate:';
    function rangeOfUnit_startDate_interval_forDate (unit_: NSCalendarUnit; datep: NSDatePtr; tip: NSTimeIntervalPtr; date: NSDate): objcbool; message 'rangeOfUnit:startDate:interval:forDate:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function dateFromComponents (comps: NSDateComponents): NSDate; message 'dateFromComponents:';
    function components_fromDate (unitFlags: NSCalendarUnit; date: NSDate): NSDateComponents; message 'components:fromDate:';
    function dateByAddingComponents_toDate_options (comps: NSDateComponents; date: NSDate; opts: NSCalendarOptions): NSDate; message 'dateByAddingComponents:toDate:options:';
    function components_fromDate_toDate_options (unitFlags: NSCalendarUnit; startingDate: NSDate; resultDate: NSDate; opts: NSCalendarOptions): NSDateComponents; message 'components:fromDate:toDate:options:';
    procedure getEra_year_month_day_fromDate (eraValuePointer: NSIntegerPtr; yearValuePointer: NSIntegerPtr; monthValuePointer: NSIntegerPtr; dayValuePointer: NSIntegerPtr; date: NSDate); message 'getEra:year:month:day:fromDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure getEra_yearForWeekOfYear_weekOfYear_weekday_fromDate (eraValuePointer: NSIntegerPtr; yearValuePointer: NSIntegerPtr; weekValuePointer: NSIntegerPtr; weekdayValuePointer: NSIntegerPtr; date: NSDate); message 'getEra:yearForWeekOfYear:weekOfYear:weekday:fromDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure getHour_minute_second_nanosecond_fromDate (hourValuePointer: NSIntegerPtr; minuteValuePointer: NSIntegerPtr; secondValuePointer: NSIntegerPtr; nanosecondValuePointer: NSIntegerPtr; date: NSDate); message 'getHour:minute:second:nanosecond:fromDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function component_fromDate (unit_: NSCalendarUnit; date: NSDate): NSInteger; message 'component:fromDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function dateWithEra_year_month_day_hour_minute_second_nanosecond (eraValue: NSInteger; yearValue: NSInteger; monthValue: NSInteger; dayValue: NSInteger; hourValue: NSInteger; minuteValue: NSInteger; secondValue: NSInteger; nanosecondValue: NSInteger): NSDate; message 'dateWithEra:year:month:day:hour:minute:second:nanosecond:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function dateWithEra_yearForWeekOfYear_weekOfYear_weekday_hour_minute_second_nanosecond (eraValue: NSInteger; yearValue: NSInteger; weekValue: NSInteger; weekdayValue: NSInteger; hourValue: NSInteger; minuteValue: NSInteger; secondValue: NSInteger; nanosecondValue: NSInteger): NSDate; message 'dateWithEra:yearForWeekOfYear:weekOfYear:weekday:hour:minute:second:nanosecond:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function startOfDayForDate (date: NSDate): NSDate; message 'startOfDayForDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function componentsInTimeZone_fromDate (timezone_: NSTimeZone; date: NSDate): NSDateComponents; message 'componentsInTimeZone:fromDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function compareDate_toDate_toUnitGranularity (date1: NSDate; date2: NSDate; unit_: NSCalendarUnit): NSComparisonResult; message 'compareDate:toDate:toUnitGranularity:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isDate_equalToDate_toUnitGranularity (date1: NSDate; date2: NSDate; unit_: NSCalendarUnit): objcbool; message 'isDate:equalToDate:toUnitGranularity:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isDate_inSameDayAsDate (date1: NSDate; date2: NSDate): objcbool; message 'isDate:inSameDayAsDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isDateInToday (date: NSDate): objcbool; message 'isDateInToday:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isDateInYesterday (date: NSDate): objcbool; message 'isDateInYesterday:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isDateInTomorrow (date: NSDate): objcbool; message 'isDateInTomorrow:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isDateInWeekend (date: NSDate): objcbool; message 'isDateInWeekend:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function rangeOfWeekendStartDate_interval_containingDate (datep: NSDatePtr; tip: NSTimeIntervalPtr; date: NSDate): objcbool; message 'rangeOfWeekendStartDate:interval:containingDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function nextWeekendStartDate_interval_options_afterDate (datep: NSDatePtr; tip: NSTimeIntervalPtr; options: NSCalendarOptions; date: NSDate): objcbool; message 'nextWeekendStartDate:interval:options:afterDate:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function components_fromDateComponents_toDateComponents_options (unitFlags: NSCalendarUnit; startingDateComp: NSDateComponents; resultDateComp: NSDateComponents; options: NSCalendarOptions): NSDateComponents; message 'components:fromDateComponents:toDateComponents:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function dateByAddingUnit_value_toDate_options (unit_: NSCalendarUnit; value: NSInteger; date: NSDate; options: NSCalendarOptions): NSDate; message 'dateByAddingUnit:value:toDate:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure enumerateDatesStartingAfterDate_matchingComponents_options_usingBlock (start: NSDate; comps: NSDateComponents; opts: NSCalendarOptions; block: NSCalendarEnumerateDatesStartingAfterDateCallback); message 'enumerateDatesStartingAfterDate:matchingComponents:options:usingBlock:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function nextDateAfterDate_matchingComponents_options (date: NSDate; comps: NSDateComponents; options: NSCalendarOptions): NSDate; message 'nextDateAfterDate:matchingComponents:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function nextDateAfterDate_matchingUnit_value_options (date: NSDate; unit_: NSCalendarUnit; value: NSInteger; options: NSCalendarOptions): NSDate; message 'nextDateAfterDate:matchingUnit:value:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function nextDateAfterDate_matchingHour_minute_second_options (date: NSDate; hourValue: NSInteger; minuteValue: NSInteger; secondValue: NSInteger; options: NSCalendarOptions): NSDate; message 'nextDateAfterDate:matchingHour:minute:second:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function dateBySettingUnit_value_ofDate_options (unit_: NSCalendarUnit; v: NSInteger; date: NSDate; opts: NSCalendarOptions): NSDate; message 'dateBySettingUnit:value:ofDate:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function dateBySettingHour_minute_second_ofDate_options (h: NSInteger; m: NSInteger; s: NSInteger; date: NSDate; opts: NSCalendarOptions): NSDate; message 'dateBySettingHour:minute:second:ofDate:options:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function date_matchesComponents (date: NSDate; components: NSDateComponents): objcbool; message 'date:matchesComponents:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCalendarDayChangedNotification: NSNotificationName { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDateComponents = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    function calendar: NSCalendar; message 'calendar'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    function timeZone: NSTimeZone; message 'timeZone'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
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
    procedure setNanosecond(newValue: NSInteger); message 'setNanosecond:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function nanosecond: NSInteger; message 'nanosecond'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure setWeekday(newValue: NSInteger); message 'setWeekday:';
    function weekday: NSInteger; message 'weekday';
    procedure setWeekdayOrdinal(newValue: NSInteger); message 'setWeekdayOrdinal:';
    function weekdayOrdinal: NSInteger; message 'weekdayOrdinal';
    procedure setQuarter(newValue: NSInteger); message 'setQuarter:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function quarter: NSInteger; message 'quarter'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setWeekOfMonth(newValue: NSInteger); message 'setWeekOfMonth:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function weekOfMonth: NSInteger; message 'weekOfMonth'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure setWeekOfYear(newValue: NSInteger); message 'setWeekOfYear:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function weekOfYear: NSInteger; message 'weekOfYear'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure setYearForWeekOfYear(newValue: NSInteger); message 'setYearForWeekOfYear:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function yearForWeekOfYear: NSInteger; message 'yearForWeekOfYear'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure setLeapMonth(newValue: objcbool); message 'setLeapMonth:'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    function isLeapMonth: objcbool; message 'isLeapMonth'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    function date: NSDate; message 'date'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    function week: NSInteger; message 'week'; deprecated 'Use -weekOfMonth or -weekOfYear, depending on which you mean';
    procedure setWeek (v: NSInteger); message 'setWeek:'; deprecated 'Use -setWeekOfMonth: or -setWeekOfYear:, depending on which you mean';
    procedure setValue_forComponent (value: NSInteger; unit_: NSCalendarUnit); message 'setValue:forComponent:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function valueForComponent (unit_: NSCalendarUnit): NSInteger; message 'valueForComponent:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isValidDate: objcbool; message 'isValidDate'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }
    function isValidDateInCalendar (calendar_: NSCalendar): objcbool; message 'isValidDateInCalendar:'; { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

