{ Parsed from EventKit.framework EKCalendar.h }

{ Types from EKCalendar }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKCalendarPtr = ^EKCalendar;
{$endif}

{$ifdef CLASSES}

type
  EKCalendar = objcclass external (EKObject)
  public
    class function calendarWithEventStore (eventStore: EKEventStore): EKCalendar; message 'calendarWithEventStore:'; deprecated 'in NA, NA, 4_0, 6_0';
    class function calendarForEntityType_eventStore (entityType: EKEntityType; eventStore: EKEventStore): EKCalendar; message 'calendarForEntityType:eventStore:'; { available in macos 10.8, ios 6.0 }
    procedure setSource(newValue: EKSource); message 'setSource:';
    function source: EKSource; message 'source';
    function calendarIdentifier: NSString; message 'calendarIdentifier'; { available in macos 10.8, ios 5.0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    function type_: EKCalendarType; message 'type';
    function allowsContentModifications: objcbool; message 'allowsContentModifications';
    function isSubscribed: objcbool; message 'isSubscribed'; { available in macos 10.8, ios 5.0 }
    function isImmutable: objcbool; message 'isImmutable'; { available in macos 10.8, ios 5.0 }
    procedure setCGColor(newValue: CGColorRef); message 'setCGColor:'; { available in ios 4.0, macos 10.15, watchos 2.0 }
    function CGColor: CGColorRef; message 'CGColor'; { available in ios 4.0, macos 10.15, watchos 2.0 }
    {$if defined(TARGET_OS_OSX)}
    procedure setColor(newValue: NSColor); message 'setColor:'; { available in macos 10.8 }
    function color: NSColor; message 'color'; { available in macos 10.8 }
    {$endif}
    function supportedEventAvailabilities: EKCalendarEventAvailabilityMask; message 'supportedEventAvailabilities';
    function allowedEntityTypes: EKEntityMask; message 'allowedEntityTypes'; { available in macos 10.8, ios 6.0 }
  end;
{$endif}

