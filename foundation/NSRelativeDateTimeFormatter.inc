{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSRelativeDateTimeFormatter.h }

{$ifdef TYPES}
type
  NSRelativeDateTimeFormatterPtr = ^NSRelativeDateTimeFormatter;
{$endif}

{$ifdef TYPES}
type
  NSRelativeDateTimeFormatterStyle = NSInteger;
  NSRelativeDateTimeFormatterStylePtr = ^NSRelativeDateTimeFormatterStyle;

const
  NSRelativeDateTimeFormatterStyleNumeric = 0;
  NSRelativeDateTimeFormatterStyleNamed = 1;

type
  NSRelativeDateTimeFormatterUnitsStyle = NSInteger;
  NSRelativeDateTimeFormatterUnitsStylePtr = ^NSRelativeDateTimeFormatterUnitsStyle;

const
  NSRelativeDateTimeFormatterUnitsStyleFull = 0;
  NSRelativeDateTimeFormatterUnitsStyleSpellOut = 1;
  NSRelativeDateTimeFormatterUnitsStyleShort = 2;
  NSRelativeDateTimeFormatterUnitsStyleAbbreviated = 3;
{$endif}

{$ifdef CLASSES}

type
  NSRelativeDateTimeFormatter = objcclass external (NSFormatter)
  private
    _formatter: pointer;
    _dateTimeStyle: NSRelativeDateTimeFormatterStyle;
    _unitsStyle: NSRelativeDateTimeFormatterUnitsStyle;
    _formattingContext: NSFormattingContext;
    _calendar: NSCalendar;
    _locale: NSLocale;
  public
    procedure setDateTimeStyle(newValue: NSRelativeDateTimeFormatterStyle); message 'setDateTimeStyle:';
    function dateTimeStyle: NSRelativeDateTimeFormatterStyle; message 'dateTimeStyle';
    procedure setUnitsStyle(newValue: NSRelativeDateTimeFormatterUnitsStyle); message 'setUnitsStyle:';
    function unitsStyle: NSRelativeDateTimeFormatterUnitsStyle; message 'unitsStyle';
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:';
    function formattingContext: NSFormattingContext; message 'formattingContext';
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:';
    function calendar: NSCalendar; message 'calendar';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    function localizedStringFromDateComponents (dateComponents: NSDateComponents): NSString; message 'localizedStringFromDateComponents:';
    function localizedStringFromTimeInterval (timeInterval: NSTimeInterval): NSString; message 'localizedStringFromTimeInterval:';
    function localizedStringForDate_relativeToDate (date: NSDate; referenceDate: NSDate): NSString; message 'localizedStringForDate:relativeToDate:';
    function stringForObjectValue (obj: id): NSString; message 'stringForObjectValue:';
  end;
{$endif}

