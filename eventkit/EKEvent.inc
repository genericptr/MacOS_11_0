{ Parsed from EventKit.framework EKEvent.h }

{$ifdef TYPES}
type
  EKEventPtr = ^EKEvent;
{$endif}

{$ifdef TYPES}
type
  EKEventAvailability = NSInteger;
  EKEventAvailabilityPtr = ^EKEventAvailability;

const
  EKEventAvailabilityNotSupported = -1;
  EKEventAvailabilityBusy = 0;
  EKEventAvailabilityFree = 1;
  EKEventAvailabilityTentative = 2;
  EKEventAvailabilityUnavailable = 3;

type
  EKEventStatus = NSInteger;
  EKEventStatusPtr = ^EKEventStatus;

const
  EKEventStatusNone = 0;
  EKEventStatusConfirmed = 1;
  EKEventStatusTentative = 2;
  EKEventStatusCanceled = 3;
{$endif}

{$ifdef CLASSES}

type
  EKEvent = objcclass external (EKCalendarItem)
  public
    class function eventWithEventStore (eventStore: EKEventStore): EKEvent; message 'eventWithEventStore:';
    function eventIdentifier: NSString; message 'eventIdentifier';
    procedure setAllDay(newValue: objcbool); message 'setAllDay:';
    function isAllDay: objcbool; message 'isAllDay';
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    procedure setStructuredLocation(newValue: EKStructuredLocation); message 'setStructuredLocation:'; { available in macos 10.11, ios 9.0 }
    function structuredLocation: EKStructuredLocation; message 'structuredLocation'; { available in macos 10.11, ios 9.0 }
    function compareStartDateWithEvent (other: EKEvent): NSComparisonResult; message 'compareStartDateWithEvent:';
    function organizer: EKParticipant; message 'organizer';
    procedure setAvailability(newValue: EKEventAvailability); message 'setAvailability:';
    function availability: EKEventAvailability; message 'availability';
    function status: EKEventStatus; message 'status';
    function isDetached: objcbool; message 'isDetached';
    function occurrenceDate: NSDate; message 'occurrenceDate'; { available in macos 10.8, ios 9.0 }
    function refresh: objcbool; message 'refresh';
    function birthdayContactIdentifier: NSString; message 'birthdayContactIdentifier'; { available in macos 10.11, ios 9.0 }
    function birthdayPersonID: NSInteger; message 'birthdayPersonID'; deprecated 'in 5_0, 9_0, "Use birthdayContactIdentifier instead"';
    function birthdayPersonUniqueID: NSString; message 'birthdayPersonUniqueID'; deprecated 'in 10_8, 10_11, "Use birthdayContactIdentifier instead"';
  end;
{$endif}

