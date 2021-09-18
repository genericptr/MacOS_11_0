{ Parsed from CalendarStore.framework CalEvent.h }

{$ifdef TYPES}
type
  CalEventPtr = ^CalEvent;
{$endif}

{$ifdef CLASSES}

type
  CalEvent = objcclass external (CalCalendarItem)
  private
    _isAllDay: objcbool;
    _location: NSString;
    _recurrenceRule: CalRecurrenceRule;
    _startDate: NSDate;
    _endDate: NSDate;
    _attendees: NSArray;
    _isDetached: objcbool;
    _occurrence: NSDate;
  public
    class function event: id; message 'event'; deprecated 'in 10_5, 10_8';
    procedure setIsAllDay(newValue: objcbool); message 'setIsAllDay:'; deprecated 'in 10_5, 10_8';
    function isAllDay: objcbool; message 'isAllDay'; deprecated 'in 10_5, 10_8';
    procedure setLocation(newValue: NSString); message 'setLocation:'; deprecated 'in 10_5, 10_8';
    function location: NSString; message 'location'; deprecated 'in 10_5, 10_8';
    procedure setRecurrenceRule(newValue: CalRecurrenceRule); message 'setRecurrenceRule:'; deprecated 'in 10_5, 10_8';
    function recurrenceRule: CalRecurrenceRule; message 'recurrenceRule'; deprecated 'in 10_5, 10_8';
    procedure setStartDate(newValue: NSDate); message 'setStartDate:'; deprecated 'in 10_5, 10_8';
    function startDate: NSDate; message 'startDate'; deprecated 'in 10_5, 10_8';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:'; deprecated 'in 10_5, 10_8';
    function endDate: NSDate; message 'endDate'; deprecated 'in 10_5, 10_8';
    function attendees: NSArray; message 'attendees'; deprecated 'in 10_5, 10_8';
    function isDetached: objcbool; message 'isDetached'; deprecated 'in 10_5, 10_8';
    function occurrence: NSDate; message 'occurrence'; deprecated 'in 10_5, 10_8';
  end;
{$endif}

