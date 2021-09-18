{ Parsed from CalendarStore.framework CalCalendarItem.h }

{$ifdef TYPES}
type
  CalCalendarItemPtr = ^CalCalendarItem;
{$endif}

{$ifdef CLASSES}

type
  CalCalendarItem = objcclass external (NSObject, NSCopyingProtocol)
  private
    _objectID: id;
    _reserved: pointer;
    _calendar: CalCalendar;
    _notes: NSString;
    _url: NSURL;
    _title: NSString;
    _uid: NSString;
    _dateStamp: NSDate;
    _alarms: NSArray;
  public
    function hasAlarm: objcbool; message 'hasAlarm'; deprecated 'in 10_5, 10_8';
    function nextAlarmDate: NSDate; message 'nextAlarmDate'; deprecated 'in 10_5, 10_8';
    procedure setCalendar(newValue: CalCalendar); message 'setCalendar:'; deprecated 'in 10_5, 10_8';
    function calendar: CalCalendar; message 'calendar'; deprecated 'in 10_5, 10_8';
    procedure setNotes(newValue: NSString); message 'setNotes:'; deprecated 'in 10_5, 10_8';
    function notes: NSString; message 'notes'; deprecated 'in 10_5, 10_8';
    procedure setUrl(newValue: NSURL); message 'setUrl:'; deprecated 'in 10_5, 10_8';
    function url: NSURL; message 'url'; deprecated 'in 10_5, 10_8';
    procedure setTitle(newValue: NSString); message 'setTitle:'; deprecated 'in 10_5, 10_8';
    function title: NSString; message 'title'; deprecated 'in 10_5, 10_8';
    function uid: NSString; message 'uid'; deprecated 'in 10_5, 10_8';
    function dateStamp: NSDate; message 'dateStamp'; deprecated 'in 10_5, 10_8';
    procedure setAlarms(newValue: NSArray); message 'setAlarms:'; deprecated 'in 10_5, 10_8';
    function alarms: NSArray; message 'alarms'; deprecated 'in 10_5, 10_8';
    procedure addAlarm (alarm: CalAlarm); message 'addAlarm:'; deprecated 'in 10_5, 10_8';
    procedure addAlarms (alarms_: NSArray); message 'addAlarms:'; deprecated 'in 10_5, 10_8';
    procedure removeAlarm (alarm: CalAlarm); message 'removeAlarm:'; deprecated 'in 10_5, 10_8';
    procedure removeAlarms (alarms_: NSArray); message 'removeAlarms:'; deprecated 'in 10_5, 10_8';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

