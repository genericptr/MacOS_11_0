{ Parsed from Foundation.framework NSCalendarDate.h }

{$ifdef TYPES}
type
  NSCalendarDatePtr = ^NSCalendarDate;
{$endif}

{$ifdef CLASSES}

type
  NSCalendarDate = objcclass external (NSDate)
  private
    refCount: NSUInteger;
    _timeIntervalSinceReferenceDate: NSTimeInterval;
    _timeZone: NSTimeZone;
    _formatString: NSString;
    _reserved: pointer;
  public
    class function calendarDate: id; message 'calendarDate'; deprecated 'Use NSCalendar instead';
    class function dateWithString_calendarFormat_locale (description: NSString; format: NSString; locale: id): id; message 'dateWithString:calendarFormat:locale:'; deprecated 'Use NSDateFormatter instead';
    class function dateWithString_calendarFormat (description: NSString; format: NSString): id; message 'dateWithString:calendarFormat:'; deprecated 'Use NSDateFormatter instead';
    class function dateWithYear_month_day_hour_minute_second_timeZone (year: NSInteger; month: NSUInteger; day: NSUInteger; hour: NSUInteger; minute: NSUInteger; second: NSUInteger; aTimeZone: NSTimeZone): id; message 'dateWithYear:month:day:hour:minute:second:timeZone:'; deprecated 'Use NSCalendar and NSDateComponents instead';
    function dateByAddingYears_months_days_hours_minutes_seconds (year: NSInteger; month: NSInteger; day: NSInteger; hour: NSInteger; minute: NSInteger; second: NSInteger): NSCalendarDate; message 'dateByAddingYears:months:days:hours:minutes:seconds:'; deprecated 'Use NSCalendar instead';
    function dayOfCommonEra: NSInteger; message 'dayOfCommonEra'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function dayOfMonth: NSInteger; message 'dayOfMonth'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function dayOfWeek: NSInteger; message 'dayOfWeek'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function dayOfYear: NSInteger; message 'dayOfYear'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function hourOfDay: NSInteger; message 'hourOfDay'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function minuteOfHour: NSInteger; message 'minuteOfHour'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function monthOfYear: NSInteger; message 'monthOfYear'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function secondOfMinute: NSInteger; message 'secondOfMinute'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function yearOfCommonEra: NSInteger; message 'yearOfCommonEra'; deprecated 'replace with -[NSCalendar component:fromDate:]';
    function calendarFormat: NSString; message 'calendarFormat'; deprecated;
    function descriptionWithCalendarFormat_locale (format: NSString; locale: id): NSString; message 'descriptionWithCalendarFormat:locale:'; deprecated;
    function descriptionWithCalendarFormat (format: NSString): NSString; message 'descriptionWithCalendarFormat:'; deprecated;
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:'; deprecated;
    function timeZone: NSTimeZone; message 'timeZone'; deprecated;
    function initWithString_calendarFormat_locale (description: NSString; format: NSString; locale: id): id; message 'initWithString:calendarFormat:locale:'; deprecated 'Use NSDateFormatter instead';
    function initWithString_calendarFormat (description: NSString; format: NSString): id; message 'initWithString:calendarFormat:'; deprecated 'Use NSDateFormatter instead';
    function initWithString (description: NSString): id; message 'initWithString:'; deprecated 'Use NSDateFormatter instead';
    function initWithYear_month_day_hour_minute_second_timeZone (year: NSInteger; month: NSUInteger; day: NSUInteger; hour: NSUInteger; minute: NSUInteger; second: NSUInteger; aTimeZone: NSTimeZone): id; message 'initWithYear:month:day:hour:minute:second:timeZone:'; deprecated 'Use NSCalendar and NSDateComponents instead';
    procedure setCalendarFormat (format: NSString); message 'setCalendarFormat:'; deprecated;
    procedure setTimeZone (aTimeZone: NSTimeZone); message 'setTimeZone:'; deprecated;
    procedure years_months_days_hours_minutes_seconds_sinceDate (yp: NSIntegerPtr; mop: NSIntegerPtr; dp: NSIntegerPtr; hp: NSIntegerPtr; mip: NSIntegerPtr; sp: NSIntegerPtr; date: NSCalendarDate); message 'years:months:days:hours:minutes:seconds:sinceDate:'; deprecated 'replace with -[NSCalendar components:fromDate:]';
    class function distantFuture: id; message 'distantFuture'; deprecated;
    class function distantPast: id; message 'distantPast'; deprecated;
  end;


type
  NSCalendarDateExtras = objccategory external (NSDate)
    class function dateWithNaturalLanguageString_locale (string_: NSString; locale: id): id; message 'dateWithNaturalLanguageString:locale:'; deprecated 'Create an NSDateFormatter with `init` and set the dateFormat property instead.';
    class function dateWithNaturalLanguageString (string_: NSString): id; message 'dateWithNaturalLanguageString:'; deprecated 'Create an NSDateFormatter with `init` and set the dateFormat property instead.';
    class function dateWithString (aString: NSString): id; message 'dateWithString:'; deprecated 'Use NSDateFormatter instead';
    function dateWithCalendarFormat_timeZone (format: NSString; aTimeZone: NSTimeZone): NSCalendarDate; message 'dateWithCalendarFormat:timeZone:'; deprecated;
    function descriptionWithCalendarFormat_timeZone_locale (format: NSString; aTimeZone: NSTimeZone; locale: id): NSString; message 'descriptionWithCalendarFormat:timeZone:locale:'; deprecated;
    function initWithString (description: NSString): id; message 'initWithString:'; deprecated 'Use NSDateFormatter instead';
  end;
{$endif}

