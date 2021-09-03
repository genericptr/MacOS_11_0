{ Parsed from EventKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/EventKit.framework/Headers/EKCalendarItem.h }

{$ifdef TYPES}
type
  EKCalendarItemPtr = ^EKCalendarItem;
{$endif}

{$ifdef CLASSES}

type
  EKCalendarItem = objcclass external (EKObject)
  public
    function UUID: NSString; message 'UUID'; deprecated 'in NA, NA, 5_0, 6_0';
    procedure setCalendar(newValue: EKCalendar); message 'setCalendar:';
    function calendar: EKCalendar; message 'calendar';
    function calendarItemIdentifier: NSString; message 'calendarItemIdentifier'; { available in 10_8, 6_0 }
    function calendarItemExternalIdentifier: NSString; message 'calendarItemExternalIdentifier'; { available in 10_8, 6_0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setLocation(newValue: NSString); message 'setLocation:';
    function location: NSString; message 'location';
    procedure setNotes(newValue: NSString); message 'setNotes:';
    function notes: NSString; message 'notes';
    procedure setURL(newValue: NSURL); message 'setURL:'; { available in 10_8, 5_0 }
    function URL: NSURL; message 'URL'; { available in 10_8, 5_0 }
    function lastModifiedDate: NSDate; message 'lastModifiedDate';
    function creationDate: NSDate; message 'creationDate'; { available in 10_8, 5_0 }
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:'; { available in 10_8, 5_0 }
    function timeZone: NSTimeZone; message 'timeZone'; { available in 10_8, 5_0 }
    function hasAlarms: objcbool; message 'hasAlarms'; { available in 10_8, 5_0 }
    function hasRecurrenceRules: objcbool; message 'hasRecurrenceRules'; { available in 10_8, 5_0 }
    function hasAttendees: objcbool; message 'hasAttendees'; { available in 10_8, 5_0 }
    function hasNotes: objcbool; message 'hasNotes'; { available in 10_8, 5_0 }
    function attendees: NSArray; message 'attendees';
    procedure setAlarms(newValue: NSArray); message 'setAlarms:';
    function alarms: NSArray; message 'alarms';
    procedure addAlarm (alarm: EKAlarm); message 'addAlarm:';
    procedure removeAlarm (alarm: EKAlarm); message 'removeAlarm:';
    procedure setRecurrenceRules(newValue: NSArray); message 'setRecurrenceRules:'; { available in 10_8, 5_0 }
    function recurrenceRules: NSArray; message 'recurrenceRules'; { available in 10_8, 5_0 }
    procedure addRecurrenceRule (rule: EKRecurrenceRule); message 'addRecurrenceRule:';
    procedure removeRecurrenceRule (rule: EKRecurrenceRule); message 'removeRecurrenceRule:';
  end;
{$endif}

