{ Parsed from EventKit.framework EKRecurrenceDayOfWeek.h }

{$ifdef TYPES}
type
  EKRecurrenceDayOfWeekPtr = ^EKRecurrenceDayOfWeek;
{$endif}

{$ifdef CLASSES}

type
  EKRecurrenceDayOfWeek = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
  public
    class function dayOfWeek (dayOfTheWeek: EKWeekday): id; message 'dayOfWeek:';
    class function dayOfWeek_weekNumber (dayOfTheWeek: EKWeekday; weekNumber: NSInteger): id; message 'dayOfWeek:weekNumber:';
    function initWithDayOfTheWeek_weekNumber (dayOfTheWeek: EKWeekday; weekNumber: NSInteger): id; message 'initWithDayOfTheWeek:weekNumber:';
    function dayOfTheWeek: EKWeekday; message 'dayOfTheWeek';
    function weekNumber: NSInteger; message 'weekNumber';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

