{ Parsed from CalendarStore.framework CalCalendar.h }

{$ifdef TYPES}
type
  CalCalendarPtr = ^CalCalendar;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CalCalendarTypeBirthday: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalCalendarTypeCalDAV: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalCalendarTypeLocal: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalCalendarTypeSubscription: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalCalendarTypeIMAP: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalCalendarTypeExchange: NSString deprecated 'in 10_6, 10_8'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CalCalendar = objcclass external (NSObject, NSCopyingProtocol)
  private
    _objectID: id;
    _group: id;
    _reserved: pointer;
    _color: NSColorPtr;
    _notes: NSString;
    _title: NSString;
    _type: NSString;
    _uid: NSString;
    _isEditable: objcbool;
  public
    class function calendar: id; message 'calendar'; deprecated 'in 10_5, 10_8';
    procedure setColor(newValue: NSColorPtr); message 'setColor:'; deprecated 'in 10_5, 10_8';
    function color: NSColorPtr; message 'color'; deprecated 'in 10_5, 10_8';
    procedure setNotes(newValue: NSString); message 'setNotes:'; deprecated 'in 10_5, 10_8';
    function notes: NSString; message 'notes'; deprecated 'in 10_5, 10_8';
    procedure setTitle(newValue: NSString); message 'setTitle:'; deprecated 'in 10_5, 10_8';
    function title: NSString; message 'title'; deprecated 'in 10_5, 10_8';
    function type_: NSString; message 'type'; deprecated 'in 10_5, 10_8';
    function uid: NSString; message 'uid'; deprecated 'in 10_5, 10_8';
    function isEditable: objcbool; message 'isEditable'; deprecated 'in 10_5, 10_8';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

