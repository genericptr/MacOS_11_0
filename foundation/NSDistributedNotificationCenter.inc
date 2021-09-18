{ Parsed from Foundation.framework NSDistributedNotificationCenter.h }

{$ifdef TYPES}
type
  NSDistributedNotificationCenterPtr = ^NSDistributedNotificationCenter;
{$endif}

{$ifdef TYPES}
type
  NSDistributedNotificationCenterType = NSString;
  NSDistributedNotificationCenterTypePtr = ^NSDistributedNotificationCenterType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSLocalNotificationCenterType: NSDistributedNotificationCenterType; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSNotificationSuspensionBehavior = NSUInteger;
  NSNotificationSuspensionBehaviorPtr = ^NSNotificationSuspensionBehavior;

const
  NSNotificationSuspensionBehaviorDrop = 1;
  NSNotificationSuspensionBehaviorCoalesce = 2;
  NSNotificationSuspensionBehaviorHold = 3;
  NSNotificationSuspensionBehaviorDeliverImmediately = 4;

type
  NSDistributedNotificationOptions = NSUInteger;
  NSDistributedNotificationOptionsPtr = ^NSDistributedNotificationOptions;

const
  NSDistributedNotificationDeliverImmediately = 1 shl 0;
  NSDistributedNotificationPostToAllSessions = 1 shl 1;

const
  NSNotificationDeliverImmediately = NSDistributedNotificationDeliverImmediately;
  NSNotificationPostToAllSessions = NSDistributedNotificationPostToAllSessions;
{$endif}

{$ifdef CLASSES}

type
  NSDistributedNotificationCenter = objcclass external (NSNotificationCenter)
  public
    class function notificationCenterForType (notificationCenterType: NSDistributedNotificationCenterType): NSDistributedNotificationCenter; message 'notificationCenterForType:';
    class function defaultCenter_: NSDistributedNotificationCenter; message 'defaultCenter';
    procedure addObserver_selector_name_object_suspensionBehavior (observer: id; selector: SEL; name: NSNotificationName; object_: NSString; suspensionBehavior: NSNotificationSuspensionBehavior); message 'addObserver:selector:name:object:suspensionBehavior:';
    procedure postNotificationName_object_userInfo_deliverImmediately (name: NSNotificationName; object_: NSString; userInfo: NSDictionary; deliverImmediately: objcbool); message 'postNotificationName:object:userInfo:deliverImmediately:';
    procedure postNotificationName_object_userInfo_options (name: NSNotificationName; object_: NSString; userInfo: NSDictionary; options: NSDistributedNotificationOptions); message 'postNotificationName:object:userInfo:options:';
    procedure setSuspended(newValue: objcbool); message 'setSuspended:';
    function suspended: objcbool; message 'suspended';
    procedure addObserver_selector_name_object (observer: id; aSelector: SEL; aName: NSNotificationName; anObject: NSString); message 'addObserver:selector:name:object:';
    procedure postNotificationName_object (aName: NSNotificationName; anObject: NSString); message 'postNotificationName:object:';
    procedure postNotificationName_object_userInfo (aName: NSNotificationName; anObject: NSString; aUserInfo: NSDictionary); message 'postNotificationName:object:userInfo:';
    procedure removeObserver_name_object (observer: id; aName: NSNotificationName; anObject: NSString); message 'removeObserver:name:object:';
  end;
{$endif}

