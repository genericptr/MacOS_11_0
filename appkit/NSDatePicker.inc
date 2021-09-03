{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDatePicker.h }

{$ifdef TYPES}
type
  NSDatePickerPtr = ^NSDatePicker;
{$endif}

{$ifdef CLASSES}

type
  NSDatePicker = objcclass external (NSControl)
  private
  public
    procedure setDatePickerStyle(newValue: NSDatePickerStyle); message 'setDatePickerStyle:';
    function datePickerStyle: NSDatePickerStyle; message 'datePickerStyle';
    procedure setBezeled(newValue: objcbool); message 'setBezeled:';
    function isBezeled: objcbool; message 'isBezeled';
    procedure setBordered(newValue: objcbool); message 'setBordered:';
    function isBordered: objcbool; message 'isBordered';
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
    procedure setPresentsCalendarOverlay(newValue: objcbool); message 'setPresentsCalendarOverlay:'; { available in macos  }
    function presentsCalendarOverlay: objcbool; message 'presentsCalendarOverlay'; { available in macos  }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
  end;
{$endif}
