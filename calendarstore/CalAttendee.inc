{ Parsed from CalendarStore.framework CalAttendee.h }

{$ifdef TYPES}
type
  CalAttendeePtr = ^CalAttendee;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CalAttendeeStatusNeedsAction: NSString; cvar; external;
  CalAttendeeStatusAccepted: NSString; cvar; external;
  CalAttendeeStatusDeclined: NSString; cvar; external;
  CalAttendeeStatusTentative: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CalAttendee = objcclass external (NSObject, NSCopyingProtocol)
  private
    _objectID: id;
    _reserved: pointer;
    _address: NSURL;
    _commonName: NSString;
    _status: NSString;
  public
    function address: NSURL; message 'address'; deprecated 'in 10_5, 10_8';
    function commonName: NSString; message 'commonName'; deprecated 'in 10_5, 10_8';
    function status: NSString; message 'status'; deprecated 'in 10_5, 10_8';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

