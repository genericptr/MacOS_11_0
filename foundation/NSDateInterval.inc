{ Parsed from Foundation.framework NSDateInterval.h }

{$ifdef TYPES}
type
  NSDateIntervalPtr = ^NSDateInterval;
{$endif}

{$ifdef CLASSES}

type
  NSDateInterval = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function duration: NSTimeInterval; message 'duration';
    function init: id; message 'init';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithStartDate_duration (startDate_: NSDate; duration_: NSTimeInterval): id; message 'initWithStartDate:duration:'; { NS_DESIGNATED_INITIALIZER }
    function initWithStartDate_endDate (startDate_: NSDate; endDate_: NSDate): id; message 'initWithStartDate:endDate:';
    function compare (dateInterval: NSDateInterval): NSComparisonResult; message 'compare:';
    function isEqualToDateInterval (dateInterval: NSDateInterval): objcbool; message 'isEqualToDateInterval:';
    function intersectsDateInterval (dateInterval: NSDateInterval): objcbool; message 'intersectsDateInterval:';
    function intersectionWithDateInterval (dateInterval: NSDateInterval): NSDateInterval; message 'intersectionWithDateInterval:';
    function containsDate (date: NSDate): objcbool; message 'containsDate:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

