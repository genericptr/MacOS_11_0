{ Parsed from EventKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/EventKit.framework/Headers/EKAlarm.h }

{$ifdef TYPES}
type
  EKAlarmPtr = ^EKAlarm;
{$endif}

{$ifdef CLASSES}

type
  EKAlarm = objcclass external (EKObject, NSCopyingProtocol)
  private
  public
    class function alarmWithAbsoluteDate (date: NSDate): EKAlarm; message 'alarmWithAbsoluteDate:';
    class function alarmWithRelativeOffset (offset: NSTimeInterval): EKAlarm; message 'alarmWithRelativeOffset:';
    procedure setRelativeOffset(newValue: NSTimeInterval); message 'setRelativeOffset:';
    function relativeOffset: NSTimeInterval; message 'relativeOffset';
    procedure setAbsoluteDate(newValue: NSDate); message 'setAbsoluteDate:';
    function absoluteDate: NSDate; message 'absoluteDate';
    procedure setStructuredLocation(newValue: EKStructuredLocation); message 'setStructuredLocation:';
    function structuredLocation: EKStructuredLocation; message 'structuredLocation';
    procedure setProximity(newValue: EKAlarmProximity); message 'setProximity:';
    function proximity: EKAlarmProximity; message 'proximity';
    function type_: EKAlarmType; message 'type'; { available in 10_8, NA }
    procedure setEmailAddress(newValue: NSString); message 'setEmailAddress:'; { available in 10_8, NA }
    function emailAddress: NSString; message 'emailAddress'; { available in 10_8, NA }
    procedure setSoundName(newValue: NSString); message 'setSoundName:'; { available in 10_8, NA }
    function soundName: NSString; message 'soundName'; { available in 10_8, NA }
    procedure setUrl(newValue: NSURL); message 'setUrl:'; deprecated 'in 10_8, 10_9, NA, NA';
    function url: NSURL; message 'url'; deprecated 'in 10_8, 10_9, NA, NA';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

