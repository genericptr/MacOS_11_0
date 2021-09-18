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
    class function calendarForEntityType_eventStore (entityType: EKEntityType; eventStore: EKEventStore): EKCalendar; message 'calendarForEntityType:eventStore:'; { available in 10_8, 6_0 }
    procedure setSource(newValue: EKSource); message 'setSource:';
    function source: EKSource; message 'source';
    function calendarIdentifier: NSString; message 'calendarIdentifier'; { available in 10_8, 5_0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    function type_: EKCalendarType; message 'type';
    function allowsContentModifications: objcbool; message 'allowsContentModifications';
    function isSubscribed: objcbool; message 'isSubscribed'; { available in 10_8, 5_0 }
    function isImmutable: objcbool; message 'isImmutable'; { available in 10_8, 5_0 }
    procedure setCGColor(newValue: CGColorRef); message 'setCGColor:'; { available in ios , macos , watchos  }
    function CGColor: CGColorRef; message 'CGColor'; { available in ios , macos , watchos  }
    {$if defined(TARGET_OS_OSX)}
    procedure setColor(newValue: NSColor); message 'setColor:'; { available in macos  }
    function color: NSColor; message 'color'; { available in macos  }
    {$endif}
    function supportedEventAvailabilities: EKCalendarEventAvailabilityMask; message 'supportedEventAvailabilities';
    function allowedEntityTypes: EKEntityMask; message 'allowedEntityTypes'; { available in 10_8, 6_0 }
  end;
{$endif}

