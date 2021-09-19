{ Parsed from Foundation.framework NSISO8601DateFormatter.h }

{$ifdef TYPES}
type
  NSISO8601DateFormatterPtr = ^NSISO8601DateFormatter;
{$endif}

{$ifdef TYPES}
type
  NSISO8601DateFormatOptions = NSUInteger;
  NSISO8601DateFormatOptionsPtr = ^NSISO8601DateFormatOptions;

//const
//  NSISO8601DateFormatWithYear = kCFISO8601DateFormatWithYear { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithMonth = kCFISO8601DateFormatWithMonth { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithWeekOfYear = kCFISO8601DateFormatWithWeekOfYear { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithDay = kCFISO8601DateFormatWithDay { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithTime = kCFISO8601DateFormatWithTime { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithTimeZone = kCFISO8601DateFormatWithTimeZone { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithSpaceBetweenDateAndTime = kCFISO8601DateFormatWithSpaceBetweenDateAndTime { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithDashSeparatorInDate = kCFISO8601DateFormatWithDashSeparatorInDate { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithColonSeparatorInTime = kCFISO8601DateFormatWithColonSeparatorInTime { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithColonSeparatorInTimeZone = kCFISO8601DateFormatWithColonSeparatorInTimeZone { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithFractionalSeconds = kCFISO8601DateFormatWithFractionalSeconds { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 };
//  NSISO8601DateFormatWithFullDate = kCFISO8601DateFormatWithFullDate { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithFullTime = kCFISO8601DateFormatWithFullTime { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
//  NSISO8601DateFormatWithInternetDateTime = kCFISO8601DateFormatWithInternetDateTime { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 };
{$endif}

{$ifdef CLASSES}

type
  NSISO8601DateFormatter = objcclass external (NSFormatter, NSSecureCodingProtocol)
  private
    _formatter: CFDateFormatterRef;
    _timeZone: NSTimeZone;
    _formatOptions: NSISO8601DateFormatOptions;
  public
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setFormatOptions(newValue: NSISO8601DateFormatOptions); message 'setFormatOptions:';
    function formatOptions: NSISO8601DateFormatOptions; message 'formatOptions';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function stringFromDate (date: NSDate): NSString; message 'stringFromDate:';
    function dateFromString (string_: NSString): NSDate; message 'dateFromString:';
    class function stringFromDate_timeZone_formatOptions (date: NSDate; timeZone_: NSTimeZone; formatOptions_: NSISO8601DateFormatOptions): NSString; message 'stringFromDate:timeZone:formatOptions:';

    { Adopted protocols }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

