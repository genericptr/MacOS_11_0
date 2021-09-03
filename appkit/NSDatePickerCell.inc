{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDatePickerCell.h }

{$ifdef TYPES}
type
  NSDatePickerCellPtr = ^NSDatePickerCell;
  NSDatePickerCellDelegateProtocolPtr = ^NSDatePickerCellDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSDatePickerStyle = NSUInteger;
  NSDatePickerStylePtr = ^NSDatePickerStyle;

const
  NSDatePickerStyleTextFieldAndStepper = 0;
  NSDatePickerStyleClockAndCalendar = 1;
  NSDatePickerStyleTextField = 2;

type
  NSDatePickerMode = NSUInteger;
  NSDatePickerModePtr = ^NSDatePickerMode;

const
  NSDatePickerModeSingle = 0;
  NSDatePickerModeRange = 1;

type
  NSDatePickerElementFlags = NSUInteger;
  NSDatePickerElementFlagsPtr = ^NSDatePickerElementFlags;

const
  NSDatePickerElementFlagHourMinute = $000c;
  NSDatePickerElementFlagHourMinuteSecond = $000e;
  NSDatePickerElementFlagTimeZone = $0010;
  NSDatePickerElementFlagYearMonth = $00c0;
  NSDatePickerElementFlagYearMonthDay = $00e0;
  NSDatePickerElementFlagEra = $0100;
{$endif}

{$ifdef CLASSES}

type
  NSDatePickerCell = objcclass external (NSActionCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image_: NSImage): id; message 'initImageCell:';
    procedure setDatePickerStyle(newValue: NSDatePickerStyle); message 'setDatePickerStyle:';
    function datePickerStyle: NSDatePickerStyle; message 'datePickerStyle';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setTextColor(newValue: NSColor); message 'setTextColor:';
    function textColor: NSColor; message 'textColor';
    procedure setDatePickerMode(newValue: NSDatePickerMode); message 'setDatePickerMode:';
    function datePickerMode: NSDatePickerMode; message 'datePickerMode';
    procedure setDatePickerElements(newValue: NSDatePickerElementFlags); message 'setDatePickerElements:';
    function datePickerElements: NSDatePickerElementFlags; message 'datePickerElements';
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:';
    function calendar: NSCalendar; message 'calendar';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setDateValue(newValue: NSDate); message 'setDateValue:';
    function dateValue: NSDate; message 'dateValue';
    procedure setTimeInterval(newValue: NSTimeInterval); message 'setTimeInterval:';
    function timeInterval: NSTimeInterval; message 'timeInterval';
    procedure setMinDate(newValue: NSDate); message 'setMinDate:';
    function minDate: NSDate; message 'minDate';
    procedure setMaxDate(newValue: NSDate); message 'setMaxDate:';
    function maxDate: NSDate; message 'maxDate';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSDatePickerCellDelegateProtocol = objcprotocol external name 'NSDatePickerCellDelegate' (NSObjectProtocol)
  optional
    procedure datePickerCell_validateProposedDateValue_timeInterval (datePickerCell: NSDatePickerCell; proposedDateValue: NSDatePtr; proposedTimeInterval: NSTimeIntervalPtr); message 'datePickerCell:validateProposedDateValue:timeInterval:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSTextFieldAndStepperDatePickerStyle = NSDatePickerStyleTextFieldAndStepper deprecated 'replace with NSDatePickerStyleTextFieldAndStepper';
  NSClockAndCalendarDatePickerStyle = NSDatePickerStyleClockAndCalendar deprecated 'replace with NSDatePickerStyleClockAndCalendar';
  NSTextFieldDatePickerStyle = NSDatePickerStyleTextField deprecated 'replace with NSDatePickerStyleTextField';
  NSSingleDateMode = NSDatePickerModeSingle deprecated 'replace with NSDatePickerModeSingle';
  NSRangeDateMode = NSDatePickerModeRange deprecated 'replace with NSDatePickerModeRange';
  NSHourMinuteDatePickerElementFlag = NSDatePickerElementFlagHourMinute deprecated 'replace with NSDatePickerElementFlagHourMinute';
  NSHourMinuteSecondDatePickerElementFlag = NSDatePickerElementFlagHourMinuteSecond deprecated 'replace with NSDatePickerElementFlagHourMinuteSecond';
  NSTimeZoneDatePickerElementFlag = NSDatePickerElementFlagTimeZone deprecated 'replace with NSDatePickerElementFlagTimeZone';
  NSYearMonthDatePickerElementFlag = NSDatePickerElementFlagYearMonth deprecated 'replace with NSDatePickerElementFlagYearMonth';
  NSYearMonthDayDatePickerElementFlag = NSDatePickerElementFlagYearMonthDay deprecated 'replace with NSDatePickerElementFlagYearMonthDay';
  NSEraDatePickerElementFlag = NSDatePickerElementFlagEra deprecated 'replace with NSDatePickerElementFlagEra';
{$endif}

