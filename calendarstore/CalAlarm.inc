{ Parsed from CalendarStore.framework CalAlarm.h }

{$ifdef TYPES}
type
  CalAlarmPtr = ^CalAlarm;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CalAlarmActionDisplay: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalAlarmActionEmail: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalAlarmActionProcedure: NSString deprecated 'in 10_5, 10_8'; cvar; external;
  CalAlarmActionSound: NSString deprecated 'in 10_5, 10_8'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CalAlarm = objcclass external (NSObject, NSCopyingProtocol)
  private
    _objectID: id;
    _reserved: pointer;
    _action: NSString;
    _sound: NSString;
    _emailAddress: NSString;
    _url: NSURL;
    _relativeTrigger: NSTimeInterval;
    _absoluteTrigger: NSDate;
  public
    class function alarm: id; message 'alarm'; deprecated 'in 10_5, 10_8';
    procedure setAcknowledged (date: NSDate); message 'setAcknowledged:'; deprecated 'in 10_5, 10_8';
    function acknowledged: NSDate; message 'acknowledged'; deprecated 'in 10_5, 10_8';
    procedure setRelatedTo (relatedTo: NSString); message 'setRelatedTo:'; deprecated 'in 10_5, 10_8';
    function relatedTo: NSString; message 'relatedTo'; deprecated 'in 10_5, 10_8';
    procedure setAction(newValue: NSString); message 'setAction:'; deprecated 'in 10_5, 10_8';
    function action: NSString; message 'action'; deprecated 'in 10_5, 10_8';
    procedure setSound(newValue: NSString); message 'setSound:'; deprecated 'in 10_5, 10_8';
    function sound: NSString; message 'sound'; deprecated 'in 10_5, 10_8';
    procedure setEmailAddress(newValue: NSString); message 'setEmailAddress:'; deprecated 'in 10_5, 10_8';
    function emailAddress: NSString; message 'emailAddress'; deprecated 'in 10_5, 10_8';
    procedure setUrl(newValue: NSURL); message 'setUrl:'; deprecated 'in 10_5, 10_8';
    function url: NSURL; message 'url'; deprecated 'in 10_5, 10_8';
    procedure setRelativeTrigger(newValue: NSTimeInterval); message 'setRelativeTrigger:'; deprecated 'in 10_5, 10_8';
    function relativeTrigger: NSTimeInterval; message 'relativeTrigger'; deprecated 'in 10_5, 10_8';
    procedure setAbsoluteTrigger(newValue: NSDate); message 'setAbsoluteTrigger:'; deprecated 'in 10_5, 10_8';
    function absoluteTrigger: NSDate; message 'absoluteTrigger'; deprecated 'in 10_5, 10_8';
    function triggerDateRelativeTo (date: NSDate): NSDate; message 'triggerDateRelativeTo:'; deprecated 'in 10_5, 10_8';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

